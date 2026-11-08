// FUN_00b7c430 @ 00b7c430 size=188 calls_out=1 calls_in=2
// strings: 

double * FUN_00b7c430(double *param_1,double *param_2,double *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  if (7 < param_4) {
    uVar1 = param_4 >> 3;
    iVar2 = uVar1 * 8 - (param_4 >> 3);
    param_1 = (double *)FUN_00b7c430(param_1,param_1 + uVar1 * 4,param_1 + iVar2,uVar1);
    param_2 = (double *)FUN_00b7c430(param_2,param_2 + uVar1 * 4,param_2 + iVar2,uVar1);
    param_3 = (double *)FUN_00b7c430(param_3,param_3 + uVar1 * 4,param_3 + iVar2,uVar1);
  }
  dVar4 = *param_2;
  dVar3 = *param_1;
  if (dVar3 < dVar4 != dVar4 < *param_3) {
    param_2 = param_3;
  }
  if (dVar3 < dVar4 != dVar3 < *param_3) {
    param_2 = param_1;
  }
  return param_2;
}

