$!XXXXXXXXXXXXXXXXXXXXXXXXXXXXX FILE GNUC-MAKE.COM XXXXXXXXXXXXXXXXXXXXXXXXXXXXX
$	COMPILE :== "GCC"
$	COMPILE ARGS.C           
$	COMPILE BACKUP.C         
$	COMPILE GLOBS.C          
$	COMPILE INDENT.C         
$	COMPILE IO.C             
$	COMPILE LEXI.C           
$	COMPILE MEMCPY.C         
$	COMPILE PARSE.C          
$	COMPILE PR_COMMENT.C     
$	LINK INDENT,ARGS,BACKUP,GLOBS,IO, -
	     LEXI,MEMCPY,PARSE,PR_COMMENT, -
	     GNU_CC:[000000]OPTIONS_SHR.OPT/OPT
$!XXXXXXXXXXXXXXXXXXXXXXXXXXXXX END OF FILE GNUC-MAKE.COM XXXXXXXXXXXXXXXXXXXXXXXXX
