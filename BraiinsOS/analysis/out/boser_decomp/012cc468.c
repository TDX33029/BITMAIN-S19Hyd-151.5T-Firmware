// FUN_012cc468 @ 012cc468 size=176 calls_out=3 calls_in=1
// strings: 

void FUN_012cc468(uint param_1)

{
  int iVar1;
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
  local_2c = 1;
  local_30 = 0;
  local_14 = 0;
  local_18 = 0x60000020;
  local_1c = &DAT_01ce2d8c;
  iVar1 = FUN_012fb940(&local_20,*(undefined4 *)(&DAT_01d31d10 + (param_1 & 0xff) * 4),
                       *(undefined4 *)(&DAT_0053653c + (param_1 & 0xff) * 4));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_40,&DAT_01ce2da4,&DAT_01d30334);
  }
  local_40 = local_30;
  uStack_3c = local_2c;
  uStack_38 = local_28;
  FUN_01966564();
  return;
}

