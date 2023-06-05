
MUXMul10 : MultiOutUGen {
	*ar { |which=0, mul=1, add=0|

		^this.multiNew('audio', which).madd(mul,add);
	}

	*kr { |which=0, mul=1, add=0|
		^this.multiNew('control', which).madd(mul,add);
	}

	init { | ... args |
		inputs = args;
		^this.initOutputs(10, rate)
	}

	checkInputs {
		^this.checkValidInputs;
	}
}

MUXMul100 : MultiOutUGen {
	*ar { |which=0, mul=1, add=0|

		^this.multiNew('audio', which).madd(mul,add);
	}

	*kr { |which=0, mul=1, add=0|
		^this.multiNew('control', which).madd(mul,add);
	}

	init { | ... args |
		inputs = args;
		^this.initOutputs(100, rate)
	}

	checkInputs {
		^this.checkValidInputs;
	}
}