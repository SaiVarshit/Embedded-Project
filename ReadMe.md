# EMBEDDED PROJECT

The project mainly deals with design and performance analysis of a simple 4x4 multiplier circuit. The circuit is simulated in ngspice and power and time-delay analysis is done for pre-layout netlist as well as post-layout netlist. 
		
Layout is done in magic and the verification of the logic of the code is done in verilog. The pre-layout and post-layout results are compared and conclusions are drawn about the ideal and real life circuits found ICs present today.
## NgSpice Netlist

For writing the netlist, extensive use of subckt is done to abstract individual building blocks of the circuit for the readability and robustness of the final multiplier. Firstly, subcircuits for basic gates like NAND, NOT, AND, OR are made and their functionality is verified. 

Next, using these basic gates, the building blocks of the 4x4 multiplier such as half-adder, full-adder, 4-bit adder are made and the final multiplier is just a simple combination of these blocks. The gate level circuit used for 4x4 multipllier is as shown in the figure :-
