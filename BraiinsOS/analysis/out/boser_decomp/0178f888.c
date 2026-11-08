// FUN_0178f888 @ 0178f888 size=88 calls_out=1 calls_in=1
// strings: 

void FUN_0178f888(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5)

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
      goto LAB_0178f8c8;
    }
    iVar4 = *piVar2;
    param_5 = param_5 + -8;
    piVar1 = piVar2 + 2;
  } while (iVar4 == 0);
  iVar3 = piVar2[-1];
LAB_0178f8c8:
  FUN_01780030(param_1,param_2,param_2 + 0x10,param_3,iVar3,iVar4);
  return;
}

