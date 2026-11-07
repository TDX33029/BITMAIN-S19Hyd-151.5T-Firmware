// FUN_0178f8e0 @ 0178f8e0 size=100 calls_out=1 calls_in=1
// strings: 

void FUN_0178f8e0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  param_5 = param_5 << 3;
  piVar1 = (int *)(param_4 + 4);
  do {
    piVar4 = piVar1;
    if (param_5 == 0) {
      iVar3 = 1;
      iVar2 = 0;
      goto LAB_0178f924;
    }
    iVar2 = *piVar4;
    param_5 = param_5 + -8;
    piVar1 = piVar4 + 2;
  } while (iVar2 == 0);
  iVar3 = piVar4[-1];
LAB_0178f924:
  FUN_01780b2c(param_1,param_2 + 0x118,param_2,param_3,iVar3,iVar2);
  return;
}

