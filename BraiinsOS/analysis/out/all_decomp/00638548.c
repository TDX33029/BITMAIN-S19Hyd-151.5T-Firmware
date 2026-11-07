// FUN_00638548 @ 00638548 size=636 calls_out=7 calls_in=1
// strings: 

void FUN_00638548(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_3 < 0x401) {
    FUN_016dd606(&local_b8,0,0x40);
    local_78 = 0x6a09e667;
    uStack_74 = 0xbb67ae85;
    uStack_70 = 0x3c6ef372;
    uStack_6c = 0xa54ff53a;
    local_68 = 0x510e527f;
    uStack_64 = 0x9b05688c;
    uStack_60 = 0x1f83d9ab;
    uStack_5c = 0x5be0cd19;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_54 = 0;
    local_58 = 0;
    FUN_00637c3c(&local_b8,param_2,param_3);
    local_e8 = local_78;
    uStack_e4 = uStack_74;
    uStack_e0 = uStack_70;
    uStack_dc = uStack_6c;
    local_d8 = local_68;
    uStack_d4 = uStack_64;
    uStack_d0 = uStack_60;
    uStack_cc = uStack_5c;
  }
  else {
    FUN_016dd606(&local_b8,0,0x40);
    uVar1 = FUN_00637db8(param_2,param_3,0,0,&local_b8,0x40);
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    if (2 < uVar1) {
      uVar1 = uVar1 << 5;
      if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar1,0x40,&DAT_01857c18);
      }
      uVar1 = FUN_006382f8(&local_b8,uVar1,&local_48,0x20);
      if (uVar1 == 3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,0x60,0x40,&DAT_01857c08);
      }
      if (1 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar1 << 5,0x20,&DAT_01857bf8);
      }
      FUN_016dd1aa(&local_b8,&local_48);
    }
    local_e8 = 0x6a09e667;
    uStack_e4 = 0xbb67ae85;
    uStack_e0 = 0x3c6ef372;
    uStack_dc = 0xa54ff53a;
    local_d8 = 0x510e527f;
    uStack_d4 = 0x9b05688c;
    uStack_d0 = 0x1f83d9ab;
    uStack_cc = 0x5be0cd19;
  }
  local_b8 = local_e8;
  local_b4 = uStack_e4;
  local_b0 = uStack_e0;
  local_ac = uStack_dc;
  local_a8 = local_d8;
  local_a4 = uStack_d4;
  local_a0 = uStack_d0;
  local_9c = uStack_cc;
  FUN_006387d8();
  param_1[7] = local_9c;
  param_1[6] = local_a0;
  param_1[5] = local_a4;
  param_1[4] = local_a8;
  param_1[3] = local_ac;
  param_1[2] = local_b0;
  param_1[1] = local_b4;
  *param_1 = local_b8;
  return;
}

