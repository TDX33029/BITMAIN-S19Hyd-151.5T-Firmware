// FUN_019a283c @ 019a283c size=76 calls_out=2 calls_in=0
// strings: 

void FUN_019a283c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  
  if (0x3ff < param_4) {
    param_4 = 0x400;
  }
  iVar1 = FUN_01bf0560(2,param_3,param_4);
  if (iVar1 == -1) {
    piVar2 = (int *)FUN_01be3244();
    iVar1 = *piVar2;
    uVar3 = 0;
  }
  else {
    uVar3 = 4;
  }
  *(int *)(param_1 + 4) = iVar1;
  *param_1 = uVar3;
  return;
}

