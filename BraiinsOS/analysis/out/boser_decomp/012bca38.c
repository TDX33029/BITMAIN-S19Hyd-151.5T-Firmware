// FUN_012bca38 @ 012bca38 size=72 calls_out=3 calls_in=3
// strings: 

void FUN_012bca38(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_012bc650();
  if (*piVar1 != 2) {
    FUN_0134bd64(piVar1[1],piVar1[2]);
  }
  *piVar1 = 1;
  iVar2 = param_3[1];
  iVar3 = param_3[2];
  piVar1[1] = *param_3;
  piVar1[2] = iVar2;
  piVar1[3] = iVar3;
  FUN_012bc780(piVar1,param_2);
  return;
}

