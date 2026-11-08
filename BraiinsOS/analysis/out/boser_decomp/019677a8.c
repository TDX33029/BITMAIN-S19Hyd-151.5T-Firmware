// FUN_019677a8 @ 019677a8 size=172 calls_out=4 calls_in=5
// strings: 

undefined4 FUN_019677a8(undefined4 param_1)

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
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = &local_30;
  local_28 = 0;
  local_30 = 0;
  local_14 = 0;
  local_2c = 1;
  local_18 = 0x60000020;
  local_1c = &DAT_01d2726c;
  iVar1 = FUN_019674c4(param_1,&local_20);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_40,&DAT_01d272c4,&DAT_01d30334);
  }
  local_40 = local_30;
  uStack_3c = local_2c;
  uStack_38 = local_28;
  uVar2 = FUN_01966564();
  FUN_01967894(param_1);
  return uVar2;
}

