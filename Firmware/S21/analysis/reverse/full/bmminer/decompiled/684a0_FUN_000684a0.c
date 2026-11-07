// FUN_000684a0 @ 000684a0  size=124  callers=4
// program: bmminer


undefined4 FUN_000684a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00068cd4(*param_1,param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_00069eec(*(undefined4 *)(iVar1 + 0x14),param_3);
      uVar2 = 1;
    }
  }
  return uVar2;
}

