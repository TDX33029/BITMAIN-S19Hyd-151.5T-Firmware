// FUN_019a27f8 @ 019a27f8 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_019a27f8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  
  iVar1 = FUN_01bf053e(2,param_3,param_4);
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

