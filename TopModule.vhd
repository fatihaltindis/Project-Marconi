----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:42:06 10/02/2014 
-- Design Name: 
-- Module Name:    TopModule - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity TopModule is

	port( top_clock: in STD_LOGIC;
	      tx_switch: in STD_LOGIC;
			rx_switch: in STD_LOGIC;
			top_txd: out STD_LOGIC;
			top_rxd: in STD_LOGIC);

end TopModule;

architecture Behavioral of TopModule is

component rs232

	port(clk					:	in 	std_logic;	-- 50 Mhz clock
		  tx_start			:	in		std_logic;  -- transmit (tx) enable pin
		  test_mode			:	in 	std_logic;  -- test mode switch
		  DATAIN				:	in		std_logic_vector (7 downto 0); -- to be transmitted data vector
		  clk8Khz			:	out	std_logic;	-- 8KHz clk_out
		  txd					:	out	std_logic);


end component;

component rs232_rx

	port(rx: in STD_LOGIC;
	      clock: in STD_LOGIC;
			result: out STD_LOGIC_VECTOR(7 downto 0);
			outhex: out STD_LOGIC_VECTOR(31 downto 0));


end component;

signal top_result: STD_LOGIC_VECTOR(7 downto 0);
signal zero : STD_LOGIC:= '0';
signal data: std_logic_vector (7 downto 0):= "00000000";
signal clk8k: STD_LOGIC;
signal resultsignal: STD_LOGIC_VECTOR(7 downto 0);
signal final: STD_LOGIC_VECTOR(31 downto 0);
signal en_tx: STD_LOGIC;
signal en_rx: STD_LOGIC;

begin

	tx: rs232
	port map(clk => en_tx,
	         tx_start => tx_switch,
				test_mode => zero,
				DATAIN => data,
				clk8Khz => clk8k,
				txd => top_txd);
	
	rx: rs232_rx
	port map(rx => en_rx,
				clock => top_clock,
				result => resultsignal,
				outhex => final);
				
	process(top_clock)

	begin
		
		if(rx_switch = '1') then
			
			en_rx <= top_clock;
		
		end if;
		
		if(tx_switch = '1') then
		
			en_tx <= top_clock;
		
		end if;
	
	
	end process;
	
end Behavioral;