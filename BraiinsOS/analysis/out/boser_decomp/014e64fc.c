// FUN_014e64fc @ 014e64fc size=176 calls_out=3 calls_in=1
// strings: cannot parse integer from empty string

void FUN_014e64fc(uint param_1)

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
  local_1c = &DAT_01cfa1bc;
  iVar1 = FUN_012fb940(&local_20,(&PTR_s_cannot_parse_integer_from_empty_s_01d32804)[param_1 & 0xff]
                       ,*(undefined4 *)(&DAT_00537140 + (param_1 & 0xff) * 4));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_40,&DAT_01cfa1d4,&DAT_01d30334);
  }
  local_40 = local_30;
  uStack_3c = local_2c;
  uStack_38 = local_28;
  FUN_01966564();
  return;
}

