// FUN_00710a2c @ 00710a2c size=1276 calls_out=13 calls_in=18
// strings: ext/plain; charset=utf-8event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-extra-0.10.1/src/extract/form.rs:73 | pplication/octet-streamaamapplication/x-authorware-mapaasapplication/x-authorware-segaaxaudio/vnd.audible.aaxabwapplication/x-abiwordapplication/pkix-attr-certac3audio/ac3acaaccapplication/vnd.americandynamics.accaccdaapplication/msaccess.addinaccdbapplication/msaccessaccdcapplication/msaccess.cabaccdeaccdrapplication/msaccess.runtimeaccdtaccdwapplication/msaccess.webapplicationaccftapplication/msaccess.ftemplateaceapplication/x-ace-compressedacuapplication/vnd.acucobolacutcapplication/vnd.acucorpacxapplication/internet-property-streamaddinadeadobebridgeapplication/x-bridge-urladpadtaudio/vnd.dlna.adtsaepapplication/vnd.audiographafmafpapplication/vnd.ibm.modcapaheadapplication/vnd.ahead.spaceaiapplication/postscriptaifaudio/aiffairapplication/vnd.adobe.air-application-installer-package+zipaitapplication/vnd.dvb.aitamcamiapplication/vnd.amiga.amianxapplication/annodexapkapplication/vnd.android.package-archiveimage/apngtext/cache-manifest

void FUN_00710a2c(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint extraout_r2;
  uint uVar2;
  undefined4 ***pppuVar3;
  bool bVar4;
  undefined ***local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined **local_1b8;
  char *pcStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined2 local_1a4;
  undefined ***local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined ***local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  uint uStack_184;
  undefined **ppuStack_180;
  char *pcStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 ***local_168;
  int local_164;
  undefined4 **local_160;
  uint local_15c;
  undefined **local_158;
  undefined1 *puStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 ***local_144;
  int local_140;
  int local_13c;
  uint local_138;
  undefined ****local_118;
  undefined8 local_114;
  undefined1 *local_10c;
  undefined1 local_108;
  undefined ***local_c8;
  undefined4 local_c4;
  int local_c0;
  uint uStack_bc;
  undefined **ppuStack_b8;
  undefined1 *puStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 ***local_78;
  int local_74;
  int local_70;
  uint uStack_6c;
  undefined **local_68;
  char *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined4 local_30;
  undefined *local_2c;
  
  if (param_3 == 0) {
    iVar1 = 0;
    do {
      if (((byte)(&DAT_00569e88)[iVar1] != 9) && (0x5e < (byte)(&DAT_00569e88)[iVar1] - 0x20)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0,0,&DAT_01d2e4bc);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x10);
    local_78 = (undefined4 ***)0x0;
    local_74 = 0x1d;
    local_70 = 0;
    uStack_6c = 0;
    uVar2 = param_2[3];
    local_140 = *param_2;
    local_13c = param_2[1];
    local_58 = (uint)local_58._1_3_ << 8;
    local_5c = 0;
    local_60 = 0x10;
    local_64 = &DAT_00569e88;
    local_68 = &PTR_FUN_01c07374;
    if ((uVar2 & 1) == 0) {
      local_10c = (undefined1 *)uVar2;
      local_144 = (undefined4 ***)&DAT_01d2e520;
    }
    else {
      local_c4 = local_140 - (uVar2 >> 5);
      local_c0 = local_13c + (uVar2 >> 5);
      local_c8 = (undefined ***)(param_2[2] + (uVar2 >> 5));
      FUN_01283524(&local_168,&local_c8);
      local_190 = (undefined ***)(uVar2 >> 5);
      if (local_160 < local_190) {
        local_114._4_4_ = &local_1c8;
        local_1c8 = (undefined ***)local_160;
        local_10c = &LAB_01a6a304;
        local_114._0_4_ = &LAB_01a6a304;
        local_118 = &local_190;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005ac267,&local_118,&DAT_01d2e534);
      }
      local_13c = (int)local_160 - (int)local_190;
      local_140 = (int)local_190 + local_164;
      local_10c = (undefined1 *)local_15c;
      local_144 = local_168;
    }
    local_114 = CONCAT44(local_13c,local_140);
    local_168 = local_78;
    local_164 = local_74;
    local_160 = (undefined4 **)local_70;
    local_15c = uStack_6c;
    local_158 = local_68;
    puStack_154 = local_64;
    uStack_150 = local_60;
    uStack_14c = local_5c;
    iStack_148 = local_58;
    local_c8 = (undefined ***)local_78;
    local_c4 = local_74;
    local_c0 = local_70;
    uStack_bc = uStack_6c;
    ppuStack_b8 = local_68;
    puStack_b4 = local_64;
    uStack_b0 = local_60;
    uStack_ac = local_5c;
    iStack_a8 = local_58;
    local_138 = (uint)local_10c;
    local_70 = local_13c;
    uStack_6c = (uint)local_10c;
    if (local_13c == 0) {
      pppuVar3 = (undefined4 ***)0x0;
      local_78 = local_144;
      local_74 = local_140;
      local_114 = (*(code *)local_144[4])(&uStack_6c,local_140,0);
      local_10c = (undefined1 *)extraout_r2;
    }
    else {
      pppuVar3 = local_144;
      local_78 = local_144;
      local_74 = local_140;
    }
    local_118 = (undefined ****)pppuVar3;
    local_30 = FUN_00715df0(&local_118);
    local_34 = 200;
    local_74 = 0;
    local_78 = (undefined4 ***)0x0;
    local_32 = CONCAT11(local_32._1_1_,2);
    local_60 = 2;
    local_38 = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = 4;
    local_4c = 0;
    local_50 = 0;
    local_54 = 4;
    local_58 = 0;
    local_5c = 0;
    local_2c = &DAT_01c0768c;
    local_190 = (undefined ***)0x0;
    uStack_18c = 0x1d;
    uStack_188 = 0;
    uStack_184 = 0;
    iVar1 = 0;
    do {
      if (((byte)"a"[-iVar1] != 9) && (0x5e < (byte)"a"[-iVar1] - 0x20)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0,0,&DAT_01d2e4bc);
      }
      bVar4 = iVar1 != -0x17;
      iVar1 = iVar1 + -1;
    } while (bVar4);
    local_108 = 0;
    local_10c = (undefined1 *)0x0;
    local_114._0_4_ = "a";
    local_114._4_4_ = (undefined4 ***)0x18;
    local_118 = (undefined ****)&PTR_FUN_01c076bc;
    FUN_00714c58(&local_1c8,&local_78,&local_190,&local_118);
    if ((char)local_1b8 != '\x02') {
      (*(code *)local_1c8[4])(&uStack_1bc,uStack_1c4,uStack_1c0);
    }
    FUN_01bed4e2(&local_118,&local_78,0x50);
    FUN_0070e75c(param_1,&local_168,&local_118);
  }
  else {
    iVar1 = 0;
    do {
      if (((byte)"t"[iVar1] != 9) && (0x5e < (byte)"t"[iVar1] - 0x20)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0,0,&DAT_01d2e4bc);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x19);
    local_78 = (undefined4 ***)0x0;
    local_74 = 0x1d;
    local_70 = 0;
    uStack_6c = 0;
    local_118 = (undefined ****)&local_168;
    local_64 = "t";
    local_164 = 1;
    local_58 = (uint)local_58._1_3_ << 8;
    local_5c = 0;
    local_60 = 0x19;
    local_68 = &PTR_FUN_01c07374;
    local_160 = (undefined4 **)0x0;
    local_168 = (undefined4 ***)0x0;
    local_10c = (undefined1 *)0x0;
    local_114._4_4_ = (undefined4 ***)0x60000020;
    local_114._0_4_ = &DAT_01c0733c;
    iVar1 = FUN_019674c4(param_3,&local_118);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_c8,&DAT_01c07354,&DAT_01d30334);
    }
    local_1a0 = (undefined ***)local_168;
    uStack_19c = local_164;
    uStack_198 = local_160;
    local_1a4 = 500;
    local_1c8 = (undefined ***)local_78;
    uStack_1c4 = local_74;
    uStack_1c0 = local_70;
    uStack_1bc = uStack_6c;
    local_1b8 = local_68;
    pcStack_1b4 = local_64;
    uStack_1b0 = local_60;
    uStack_1ac = local_5c;
    iStack_1a8 = local_58;
    local_190 = (undefined ***)local_78;
    uStack_18c = local_74;
    uStack_188 = local_70;
    uStack_184 = uStack_6c;
    ppuStack_180 = local_68;
    pcStack_17c = local_64;
    uStack_178 = local_60;
    uStack_174 = local_5c;
    iStack_170 = local_58;
    FUN_007167d4(&local_168);
    FUN_01bed4e2(&local_118,&local_168,0x50);
    FUN_0070e75c(&local_78,&local_1c8,&local_118);
    FUN_01bed4e2((int)&local_c4 + 2,&local_78,0x44);
    *(undefined2 *)(param_1 + 0x46) = local_32;
    FUN_01bed4e2(param_1,(int)&local_c4 + 2,0x44);
    *(undefined4 *)(param_1 + 0x48) = local_30;
    *(undefined **)(param_1 + 0x4c) = local_2c;
    *(undefined2 *)(param_1 + 0x44) = 500;
    FUN_00711058(param_3);
    FUN_012840cc(param_2);
  }
  return;
}

