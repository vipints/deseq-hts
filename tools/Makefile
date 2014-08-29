
SAMDIR=${SAMTOOLS_DIR}

all:	get_reads.mex get_bam_properties.mex interval_overlap.mex 

get_reads.mex:	get_reads.cpp get_reads_direct.cpp mex_input.cpp read.cpp
	rm -f *.o
	g++ -c -fPIC get_reads.cpp get_reads_direct.cpp mex_input.cpp read.cpp -I${SAMDIR} -L${SAMDIR} -lbam -lz -lcurses
	g++ -shared -Wl,-soname

get_bam_properties.mex:	get_bam_properties.cpp
	rm -f *.o
	g++ -c -fPIC get_bam_properties.cpp
	g++ -shared -Wl,-soname

interval_overlap.mex: interval_overlap.cpp
	rm -f *.o
	g++ -c -fPIC interval_overlap.cpp
	g++ -shared -Wl,-soname

clean:	
	rm -f *.o *.so
