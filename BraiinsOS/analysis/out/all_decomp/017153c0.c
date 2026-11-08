// FUN_017153c0 @ 017153c0 size=384 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_017153c0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  uVar1 = FUN_01714f1c(param_1 + 0x118,&PTR_018bc3f4,0);
  local_8c = param_4[1];
  local_88 = param_4[2];
  local_84 = param_4[3];
  local_80 = param_4[4];
  local_7c = param_4[5];
  local_78 = param_4[6];
  local_74 = param_4[7];
  local_70 = param_4[8];
  local_6c = param_4[9];
  local_68 = param_4[10];
  local_64 = param_4[0xb];
  local_90 = *param_4;
  FUN_016fca9c(&local_90);
  local_5c = local_8c;
  local_58 = local_88;
  local_54 = local_84;
  local_50 = local_80;
  local_4c = local_7c;
  local_48 = local_78;
  local_44 = local_74;
  local_40 = local_70;
  local_3c = local_6c;
  local_38 = local_68;
  local_60 = local_90;
  local_34 = local_64;
  FUN_0171524c(param_2,uVar1,&local_60,*(undefined4 *)(param_1 + 0xec));
  *param_3 = uVar1;
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

