// FUN_007b47c4 @ 007b47c4 size=1092 calls_out=16 calls_in=1
// strings: 

undefined4 FUN_007b47c4(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint unaff_r11;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint local_19c;
  uint local_190;
  undefined4 local_18c;
  uint local_188;
  int local_184;
  uint local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  uint local_168;
  undefined4 local_164;
  undefined1 auStack_160 [64];
  undefined1 local_120;
  uint *local_118;
  uint *puStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint *local_f8 [8];
  uint local_d8;
  uint uStack_d4;
  undefined1 auStack_d0 [56];
  uint local_98;
  uint local_94;
  byte local_90;
  uint *local_88 [8];
  uint **local_68;
  code *local_64;
  undefined4 local_60;
  uint local_30;
  uint local_2c;
  
  local_190 = param_2;
  local_18c = param_3;
  FUN_019a5900(local_f8);
  puVar3 = local_f8[1];
  puVar9 = local_f8[0];
  if (local_f8[0] == (uint *)0x80000000) {
    local_f8[0] = local_f8[1];
    local_f8[1] = local_f8[2];
    uVar10 = FUN_007afd78(local_f8);
  }
  else {
    lVar13 = FUN_006685f8(local_f8[1]);
    uVar11 = (uint)((ulonglong)lVar13 >> 0x20);
    if (lVar13 < 0) {
      uVar10 = 0;
      uVar11 = unaff_r11;
LAB_007b4818:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar10,uVar11);
    }
    if (uVar11 == 0) {
      iVar5 = 1;
      local_19c = 0;
    }
    else {
      uVar10 = 1;
      iVar5 = FUN_01298504(uVar11,1);
      if (iVar5 == 0) goto LAB_007b4818;
      local_19c = uVar11;
    }
    FUN_01bed4e2(iVar5,(int)lVar13,uVar11);
    FUN_019bb7e0(puVar9,puVar3);
    if (param_4 == 0) {
      uVar6 = local_19c;
      iVar7 = iVar5;
    }
    else {
      FUN_01bed93e(auStack_160,0,0x41);
      local_188 = 0x6a09e667;
      local_184 = -0x4498517b;
      local_180 = 0x3c6ef372;
      uStack_17c = 0xa54ff53a;
      local_178 = 0x510e527f;
      uStack_174 = 0x9b05688c;
      uStack_170 = 0x1f83d9ab;
      uStack_16c = 0x5be0cd19;
      uVar6 = uVar11 >> 6;
      local_164 = 0;
      local_168 = 0;
      if (uVar6 == 0) {
        FUN_01bed4e2(auStack_160,iVar5,uVar11);
      }
      else {
        local_164 = 0;
        local_168 = uVar6;
        FUN_0196e0f8(&local_188,iVar5,uVar6);
        uVar6 = uVar11 & 0x7fffffc0;
        uVar11 = uVar11 & 0x3f;
        FUN_01bed4e2(auStack_160,iVar5 + uVar6,uVar11);
      }
      local_120 = (undefined1)uVar11;
      FUN_01bed4e2(local_f8,&local_188,0x70);
      FUN_01bed93e(&local_118,0,0x20);
      FUN_01bed93e(local_88,0,0x20);
      uVar12 = (uint)local_90;
      auStack_d0[uVar12] = 0x80;
      uVar11 = uVar12 << 0x1b | ((local_d8 << 9 | uVar12 << 3) >> 8 & 0xff) << 0x10 |
               ((local_d8 & 0x7fffff) >> 7 & 0xff) << 8 | (local_d8 & 0x7fffff) >> 0xf;
      uVar6 = (local_d8 >> 0x17) << 0x18 | ((uStack_d4 << 9 | local_d8 >> 0x17) >> 8 & 0xff) << 0x10
              | ((uStack_d4 & 0x7fffff) >> 7 & 0xff) << 8 | (uStack_d4 & 0x7fffff) >> 0xf;
      if ((uVar12 == 0x3f) || (FUN_01bed93e(auStack_d0 + uVar12 + 1,0), (~uVar12 & 0x38) == 0)) {
        FUN_0196e0f8(local_f8,auStack_d0,1);
        FUN_01bed93e(&local_68,0,0x38);
        local_30 = uVar6;
        local_2c = uVar11;
        FUN_0196e0f8(local_f8,&local_68,1);
      }
      else {
        local_98 = uVar6;
        local_94 = uVar11;
        FUN_0196e0f8(local_f8,auStack_d0,1);
      }
      iVar7 = 0;
      do {
        puVar9 = local_f8[iVar7];
        local_88[iVar7] =
             (uint *)((int)puVar9 << 0x18 | ((uint)puVar9 >> 8 & 0xff) << 0x10 |
                      ((uint)puVar9 >> 0x10 & 0xff) << 8 | (uint)puVar9 >> 0x18);
        iVar7 = iVar7 + 1;
      } while (iVar7 != 8);
      local_118 = local_88[0];
      puStack_114 = local_88[1];
      uStack_110 = local_88[2];
      uStack_10c = local_88[3];
      local_108 = local_88[4];
      uStack_104 = local_88[5];
      uStack_100 = local_88[6];
      uStack_fc = local_88[7];
      local_f8[0] = local_88[0];
      local_f8[1] = local_88[1];
      local_f8[2] = local_88[2];
      local_f8[3] = local_88[3];
      local_f8[4] = local_88[4];
      local_f8[5] = local_88[5];
      local_f8[6] = local_88[6];
      local_f8[7] = local_88[7];
      local_64 = FUN_007b4d88;
      local_68 = local_f8;
      FUN_00664898(&local_188,&DAT_00590e5f,&local_68);
      uVar6 = local_188;
      iVar7 = local_184;
      uVar11 = local_180;
    }
    uVar14 = FUN_019b00d0(param_2,param_3);
    if ((int)uVar14 == 0) {
      local_f8[0] = &local_190;
      local_f8[1] = (uint *)&DAT_0132b6a0;
      uVar10 = FUN_007b4d38(local_f8);
    }
    else {
      FUN_019a66e4(&local_68,&DAT_00570b88,8,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
      pcVar4 = local_64;
      local_180 = 0;
      local_188 = 0;
      local_f8[3] = (uint *)0x0;
      local_184 = 1;
      local_f8[2] = (uint *)0x60000020;
      local_f8[1] = (uint *)&DAT_01c0a248;
      local_f8[0] = &local_188;
      iVar8 = FUN_019a24f8(local_64,local_60,local_f8);
      uVar2 = local_180;
      iVar1 = local_184;
      uVar12 = local_188;
      if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,local_88,&DAT_01c0a260,&DAT_01d30334);
      }
      FUN_019bb7e0(local_68,pcVar4);
      uVar10 = FUN_007acc94(param_1,iVar1,uVar2,iVar7,uVar11);
      FUN_019bb7e0(uVar12,iVar1);
    }
    FUN_019bb7e0(uVar6,iVar7);
    if (param_4 != 0) {
      FUN_019bb7e0(local_19c,iVar5);
    }
  }
  return uVar10;
}

