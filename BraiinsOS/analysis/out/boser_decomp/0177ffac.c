// FUN_0177ffac @ 0177ffac size=132 calls_out=2 calls_in=2
// strings: 

void FUN_0177ffac(undefined4 param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  param_5 = param_5 << 3;
  piVar1 = (int *)(param_4 + 4);
  do {
    piVar2 = piVar1;
    if (param_5 == 0) {
      iVar3 = 1;
      iVar4 = 0;
      goto LAB_0177ffec;
    }
    iVar4 = *piVar2;
    param_5 = param_5 + -8;
    piVar1 = piVar2 + 2;
  } while (iVar4 == 0);
  iVar3 = piVar2[-1];
LAB_0177ffec:
  if (*param_2 == 2) {
    FUN_019dfa94(param_1,param_2[3],param_2[4],param_3,iVar3,iVar4);
  }
  else {
    FUN_01780030(param_1,param_2,param_2 + 4,param_3,iVar3,iVar4);
  }
  return;
}

