AsmVar
==========

AsmVar is a software for discovery, genotyping and characterization of structural variants and novel sequence at single nucleotide resolution from de novo assemblies on a population scale

__Contributors:__ Shujia Huang, Siyang Liu, Junhua Rao & Weijian Ye (Contribute equally)  <br/>
__Contact              :__ liusiyang@genomics.cn & huangshujia@genomics.cn                <br/>
__Institute            :__ BGI & KU in GenomeDK consortium                 <br/>
__Last Version         :__ 2014-10-30                                      <br/>

Usage
-----
1. Overview
2. How to use AsmVar
3. Speed and Memory required
4. Install the software
5. Run the software
6. Software output 
7. Please cite the paper: AsmVar: Discovery, genotyping and characterization of structural variants and novel sequence at single nucleotide resolution from de novo assemblies on a population scale (manuscript in preparation)
8. Acknowledgement : Bioinformatics teams in GenomeDK consortium

Dependency
---------------------------------------
last http://last.cbrc.jp/
scipy (http://www.scipy.org/)
numpy (http://www.numpy.org/)
scikit-learn (http://scikit-learn.org/stable/)
matplotlib (http://matplotlib.org/)
tabix (http://sourceforge.net/projects/samtools/files/tabix/)

Installation
---------------------------------------
$ cd src/AsmvarDetect
$ make

One short shell ~/demo/AsmVarDetector/Test.sh can be run to check the correct installation of AsmVar, you can use it to verify that your installation is working correctly. This shell will run automatically and the output files are t.age,t4.1025.vcf,t4.1025.svd,t4.1025.summary,t4.1025.gap.bed.

Running AsmVar workflow
---------------------------------------
Please see the demo shell for analyzing the 37 human de novo assemblies in the manuscript in ~/demo/Cookbook/scripts/DemoPipelineGuideline.sh, it brings you what we actually apply the whole Asmvar pipeline to make the variants calling, genotyping, altalignment, recalibration and vqsr.
!!!Please note that it can not be run directly. We are trying to be as detailed as possible to provide some key steps of the whole Asmvar workflow, you should change some configration based on your computer environment on your data set in practice. We are very sorry and hopefully you can understand that we could not open all our date result at present. The output NA12878 files located in ~/demo/Cookbook are all generated by the whole Asmvar workflow, you can take it as reference when you run Asmvar.

There are 5 main steps about Asmvar workflow,
Step1: AsmVar Detection
Step2: AsmVar Altalignment
Step3: AsmVar Genotyping
Step4: AsmVar RecalibrationVQ
Step5: AsmVar VQSR
If you run it with the whole human genome data, please make sure that you run each steps based on each chromosomes. It will take you such long time to run it directly with whole genome dataset. Besides that, sometimes you have to merge all the output results into one file as the next step input. The separate steps may make you confused and we will improve and integrate all steps as soon as possible.


Instant plans for further developments    
---------------------------------------  
1. Streamline evaluations of de novo assemblies with regards to continuity, completeness and accuracy.  
2. Assign quality scores to de novo assemblies  
3. Improve genotyping module and develop new approaches for greatest accuracy and flexibility.  
4. Streamline the characterization of structural variants modules in AsmVar  
5. Improvement of de novo assemblies   

Contribution
------------
The AsmVar is initially developed for the DanishPanGenome project in the GenomeDK platform. The AsmVar framework construction, applications, statistical methods and the evaluation protocols are established by [Siyang Liu](https://github.com/SiyangLiu) and [Shujia Huang](https://github.com/ShujiaHuang), Junhua Rao and [Weijian Ye](https://github.com/WeijianYe) led by [Siyang Liu](https://github.com/SiyangLiu) and [Shujia Huang](https://github.com/ShujiaHuang).  The coding contributions for different modules are written in the source code title. Most of the initial codes are written in C++, python and perl by [Shujia Huang](https://github.com/ShujiaHuang) and perl, python and R by [Siyang Liu](https://github.com/SiyangLiu)(All modules especially SV discovery and genotyping), Junhua Rao (especially SV mechanism), [Weijian Ye](https://github.com/WeijianYe) (especially Ancestral state and Novel sequence) . [Shujia Huang](https://github.com/ShujiaHuang) and [Siyang Liu](https://github.com/SiyangLiu) take charge of the software architecture and the efficiency of the algorithms. The work is supervised by [Anders Krogh](http://www.binf.ku.dk/staff/?pure=en/persons/8330), Jun Wang and Xun Xu.

## LICENSE 
Released under the [MIT License](http://opensource.org/licenses/MIT)
Copyright &copy; 2014-2015











