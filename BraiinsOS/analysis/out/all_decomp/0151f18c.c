// FUN_0151f18c @ 0151f18c size=536 calls_out=11 calls_in=0
// strings: digest update failed | EVP_DigestFinal failed

void FUN_0151f18c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  uint local_f0;
  undefined4 local_ec;
  uint *local_e8;
  uint local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint *local_78;
  uint uStack_74;
  undefined1 auStack_6c [4];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  
  puVar5 = (uint *)*param_2;
  uVar1 = FUN_00605900(puVar5 + 6);
  FUN_0172aab0(&local_68);
  iVar2 = FUN_0173e2d8(&local_68,uVar1,0);
  if (iVar2 != 1) {
    FUN_0172aae8(&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_68,&DAT_018577f0,&DAT_01857810);
  }
  local_108 = local_68;
  uStack_104 = uStack_64;
  uStack_100 = uStack_60;
  uStack_fc = uStack_5c;
  uStack_f8 = uStack_58;
  local_f4 = local_54;
  uVar4 = local_e4 >> 8;
  local_e4 = local_e4 & 0xffffff00;
  local_ec = 0;
  local_f0 = 0;
  uVar3 = puVar5[1];
  local_e8 = puVar5;
  if (uVar3 != 0 || uVar3 < (param_4 <= *puVar5)) {
    local_ec = 0;
    local_e4 = CONCAT31((int3)uVar4,*puVar5 == param_4 && uVar3 == 0);
    local_f0 = param_4;
    iVar2 = FUN_0172af78(&local_108,param_3,param_4);
    if (iVar2 == 1) {
      local_98 = local_108;
      uStack_94 = uStack_104;
      uStack_90 = uStack_100;
      uStack_8c = uStack_fc;
      uStack_88 = uStack_f8;
      local_84 = local_f4;
      uStack_80 = local_f0;
      uStack_7c = local_ec;
      local_78 = local_e8;
      uStack_74 = local_e4;
      FUN_016dd606(&local_68,0,0x40);
      iVar2 = FUN_0172b0dc(&local_98,&local_68,auStack_6c);
      if (iVar2 != 1) {
        thunk_FUN_0172aae8(&local_98);
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("EVP_DigestFinal failed",0x16,&local_68,&DAT_018a77c0,&DAT_018a7800);
      }
      local_e0 = local_68;
      uStack_dc = uStack_64;
      uStack_d8 = uStack_60;
      uStack_d4 = uStack_5c;
      uStack_d0 = uStack_58;
      local_cc = local_54;
      uStack_c8 = uStack_50;
      uStack_c4 = uStack_4c;
      uStack_c0 = uStack_48;
      uStack_bc = uStack_44;
      local_b8 = local_40;
      uStack_b4 = uStack_3c;
      uStack_b0 = uStack_38;
      uStack_ac = uStack_34;
      uStack_a8 = uStack_30;
      uStack_a4 = uStack_2c;
      uVar4 = local_78[3];
      FUN_0172aae8(&local_98);
      local_a0 = uVar4;
      if (0x40 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar4,0x40,&DAT_018a77d0);
      }
      FUN_016dd606(&local_68,0,0x40);
      local_28 = uVar4;
      FUN_016dd1aa(&local_68,&local_e0,uVar4);
      FUN_016dd1aa(param_1,&local_68,0x44);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8("digest update failed",0x14,&local_68,&DAT_018a77c0,&DAT_018a77f0);
}

