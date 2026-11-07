// FUN_01735328 @ 01735328 size=1292 calls_out=5 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/ec/p256.c

void FUN_01735328(undefined4 param_1,uint *param_2,uint *param_3,uint *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint extraout_r1;
  uint uVar4;
  uint extraout_r1_00;
  uint *puVar5;
  uint local_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint local_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint auStack_14c [8];
  undefined1 auStack_12c [32];
  undefined1 auStack_10c [32];
  undefined1 auStack_ec [32];
  undefined1 auStack_cc [32];
  undefined1 auStack_ac [32];
  undefined1 auStack_8c [32];
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c [2];
  
  local_2c[0] = DAT_018ddaf8;
  iVar2 = FUN_017345b8();
  if (iVar2 == 0) {
    puVar5 = param_2 + 0x22;
    if ((puVar5 < auStack_14c && &local_16c < puVar5) ||
       ((puVar5 < &local_16c && (&local_16c < param_2 + 0x2a)))) goto LAB_017357e4;
    uStack_168 = param_2[0x23];
    uStack_164 = param_2[0x24];
    uStack_160 = param_2[0x25];
    iVar2 = 5;
    local_16c = param_2[0x22];
    local_15c = param_2[0x26];
    uStack_158 = param_2[0x27];
    uStack_154 = param_2[0x28];
    uStack_150 = param_2[0x29];
    FUN_016f3fb0(auStack_12c,&local_16c);
    FUN_016f2c68(auStack_12c,auStack_12c,&local_16c);
    FUN_016f3fb0(auStack_10c,auStack_12c);
    FUN_016f2c68(auStack_10c,auStack_10c,&local_16c);
    FUN_016f3fb0(auStack_ec,auStack_10c);
    FUN_016f3fb0(auStack_ec,auStack_ec);
    FUN_016f3fb0(auStack_ec,auStack_ec);
    FUN_016f2c68(auStack_ec,auStack_ec,auStack_10c);
    FUN_016f3fb0(auStack_cc,auStack_ec);
    do {
      FUN_016f3fb0(auStack_cc,auStack_cc);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 0xe;
    FUN_016f2c68(auStack_cc,auStack_cc,auStack_ec);
    FUN_016f3fb0(auStack_ac,auStack_cc);
    FUN_016f3fb0(auStack_ac,auStack_ac);
    FUN_016f3fb0(auStack_ac,auStack_ac);
    FUN_016f2c68(auStack_ac,auStack_ac,auStack_10c);
    FUN_016f3fb0(auStack_8c,auStack_ac);
    do {
      FUN_016f3fb0(auStack_8c,auStack_8c);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_016f2c68(auStack_8c,auStack_8c,auStack_ac);
    iVar2 = 0x1f;
    FUN_016f3fb0(&local_6c,auStack_8c);
    FUN_016f3fb0(&local_6c,&local_6c);
    FUN_016f2c68(&local_6c,&local_6c,auStack_12c);
    FUN_016f3fb0(&local_4c,&local_6c);
    do {
      FUN_016f3fb0(&local_4c,&local_4c);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 0x80;
    FUN_016f2c68(&local_4c,&local_4c,&local_16c);
    do {
      FUN_016f3fb0(&local_4c,&local_4c);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 0x20;
    FUN_016f2c68(&local_4c,&local_4c,&local_6c);
    do {
      FUN_016f3fb0(&local_4c,&local_4c);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 0x1e;
    FUN_016f2c68(&local_4c,&local_4c,&local_6c);
    do {
      FUN_016f3fb0(&local_4c,&local_4c);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_016f2c68(&local_4c,&local_4c,auStack_8c);
    FUN_016f3fb0(&local_4c,&local_4c);
    FUN_016f3fb0(auStack_14c,&local_4c);
    uVar4 = extraout_r1;
    if (param_3 != (uint *)0x0) {
      if ((&local_6c < param_2 && param_2 < &local_4c) ||
         ((param_2 < &local_6c && (&local_6c < param_2 + 8)))) goto LAB_017357e4;
      local_6c = *param_2;
      uStack_68 = param_2[1];
      uStack_64 = param_2[2];
      uStack_60 = param_2[3];
      local_5c = param_2[4];
      uStack_58 = param_2[5];
      uStack_54 = param_2[6];
      uStack_50 = param_2[7];
      FUN_016f2c68(&local_6c,&local_6c,auStack_14c);
      if (((param_3 < &local_6c) && (&local_6c < param_3 + 8)) ||
         (param_3 < &local_4c && &local_6c < param_3)) goto LAB_017357e4;
      *param_3 = local_6c;
      param_3[1] = uStack_68;
      param_3[2] = uStack_64;
      param_3[3] = uStack_60;
      param_3[4] = local_5c;
      param_3[5] = uStack_58;
      param_3[6] = uStack_54;
      param_3[7] = uStack_50;
      uVar4 = uStack_58;
    }
    if (param_4 != (uint *)0x0) {
      puVar5 = param_2 + 0x11;
      if ((&local_4c < puVar5 && puVar5 < local_2c) ||
         ((puVar5 < &local_4c && (&local_4c < param_2 + 0x19)))) {
LAB_017357e4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x17357e4);
        (*pcVar1)();
      }
      uStack_48 = param_2[0x12];
      uStack_44 = param_2[0x13];
      uStack_40 = param_2[0x14];
      local_4c = param_2[0x11];
      local_3c = param_2[0x15];
      uStack_38 = param_2[0x16];
      uStack_34 = param_2[0x17];
      uStack_30 = param_2[0x18];
      FUN_016f3fb0(auStack_14c,auStack_14c);
      FUN_016f2c68(&local_4c,&local_4c,&local_16c);
      FUN_016f2c68(&local_4c,&local_4c,auStack_14c);
      if (((param_4 < &local_4c) && (&local_4c < param_4 + 8)) ||
         (param_4 < local_2c && &local_4c < param_4)) goto LAB_017357e4;
      *param_4 = local_4c;
      param_4[1] = uStack_48;
      param_4[2] = uStack_44;
      param_4[3] = uStack_40;
      param_4[4] = local_3c;
      param_4[5] = uStack_38;
      param_4[6] = uStack_34;
      param_4[7] = uStack_30;
      uVar4 = uStack_38;
    }
    uVar3 = 1;
  }
  else {
    FUN_016e9cd0(0xf,0,0x77,"/aws-lc/crypto/fipsmodule/ec/p256.c",0xbe);
    uVar3 = 0;
    uVar4 = extraout_r1_00;
  }
  if ((local_2c[0] ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar3,uVar4,local_2c[0] ^ DAT_018ddaf8,0);
  }
  return;
}

