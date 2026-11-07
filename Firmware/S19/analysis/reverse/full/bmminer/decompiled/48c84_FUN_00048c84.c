// FUN_00048c84 @ 00048c84  size=68  callers=4
// program: bmminer


undefined4 FUN_00048c84(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = FUN_000490b8(*param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_000498b4(*(undefined4 *)(iVar1 + 0x14),param_3);
  return 1;
}

