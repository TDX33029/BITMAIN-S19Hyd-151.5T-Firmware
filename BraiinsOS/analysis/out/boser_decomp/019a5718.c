// FUN_019a5718 @ 019a5718 size=64 calls_out=2 calls_in=0
// strings: 

void FUN_019a5718(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_01bead0e(param_3,*(undefined4 *)*param_2);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar3 = *puVar2;
    *param_1 = 0;
    param_1[1] = uVar3;
    return;
  }
  *(undefined1 *)param_1 = 4;
  return;
}

