// FUN_00f33664 @ 00f33664 size=176 calls_out=4 calls_in=1
// strings: a Display implementation returned an error unexpectedly

undefined4 FUN_00f33664(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_20;
  undefined *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_1c = &DAT_0187e8a0;
  local_20 = &local_30;
  local_28 = 0;
  local_30 = 0;
  local_14 = 0;
  local_2c = 1;
  local_18 = &DAT_60000020;
  iVar1 = FUN_00f3375c(param_1,&local_20);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_40,
                 &DAT_0187e8b8,&DAT_018af130);
  }
  local_40 = local_30;
  uStack_3c = local_2c;
  uStack_38 = local_28;
  uVar2 = FUN_00f2c804(&local_40);
  FUN_00f3394c(param_1);
  return uVar2;
}

