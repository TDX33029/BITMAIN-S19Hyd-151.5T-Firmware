// FUN_00055710 @ 00055710  size=124  callers=1
// program: bmminer


undefined1 * FUN_00055710(undefined1 *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined8 uVar3;
  undefined4 local_14;
  
  if (param_2 == 0) {
    return param_1;
  }
  uVar3 = FUN_000555bc(*param_1);
  uVar1 = (uint)uVar3;
  if (uVar1 == 0) {
    return (undefined1 *)0x0;
  }
  if (uVar1 == 1) {
    local_14 = extraout_r2;
  }
  else {
    if ((uint)((ulonglong)uVar3 >> 0x20) < uVar1) {
      return (undefined1 *)0x0;
    }
    iVar2 = FUN_00055628(param_1,uVar1,&local_14);
    if (iVar2 == 0) {
      return (undefined1 *)0x0;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_14;
  }
  return param_1 + uVar1;
}

