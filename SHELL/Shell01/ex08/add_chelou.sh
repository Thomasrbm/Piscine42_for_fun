#!/bin/bash

# export FT_NBR1="\\'?\"\\\"'\\"  
# export FT_NBR2=rcrdmddd        

# export FT_NBR1='\"\"!\"\"!\"\"!\"\"!\"\"!\"\"'
# export FT_NBR2="dcrcmcmooododmrrrmorcmcrmomo"

echo -n $FT_NBR1 | tr \''\\"?!' '01234' > first && echo -n $FT_NBR2 | tr 'mrdoc' '01234' > second
echo "obase=13; ibase=5; $(cat first) + $(cat second)" | bc | tr '0123456789ABC' 'gtaio luSnemf' > result 
cat result
rm first second result

# tr fait la coresspondance n importe ou dans le fichier
# peut pas mettre  '     entre deux ''    le reste oui donc tr prend entre ''  les autres args



# bc   = Basic Calculator   convertit base a la vole.   bc inputebase outputbase