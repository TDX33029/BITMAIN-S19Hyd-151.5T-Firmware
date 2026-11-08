// FUN_01832150 @ 01832150 size=1424 calls_out=12 calls_in=2
// strings: 

undefined8 FUN_01832150(int param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  undefined1 auStack_14c [32];
  undefined1 auStack_12c [32];
  uint local_10c;
  undefined1 auStack_108 [124];
  undefined1 auStack_8c [32];
  uint local_6c;
  uint uStack_68;
  uint local_64;
  uint uStack_60;
  uint local_5c;
  uint uStack_58;
  uint local_54;
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
  if (param_2 == (uint *)0x0) {
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0x2f81798;
    *(undefined4 *)(param_1 + 0x28) = 0xa056c5;
    *(undefined4 *)(param_1 + 0x2c) = 0x28d959f;
    *(undefined4 *)(param_1 + 0x30) = 0x36cb738;
    *(undefined4 *)(param_1 + 0x34) = 0x3029bfc;
    *(undefined4 *)(param_1 + 0x38) = 0x3a1c2c1;
    *(undefined4 *)(param_1 + 0x3c) = 0x206295c;
    *(undefined4 *)(param_1 + 0x40) = 0x2eeb156;
    *(undefined4 *)(param_1 + 0x44) = 0x27ef9dc;
    *(undefined4 *)(param_1 + 0x48) = 0x1e6f99;
    *(undefined4 *)(param_1 + 0x4c) = 0x310d4b8;
    *(undefined4 *)(param_1 + 0x50) = 0x1f423fe;
    *(undefined **)(param_1 + 0x54) = &DAT_014199c4;
    *(undefined **)(param_1 + 0x58) = &DAT_01229a15;
    *(undefined4 *)(param_1 + 0x5c) = 0xfd17b4;
    *(undefined4 *)(param_1 + 0x60) = 0x384422a;
    *(undefined4 *)(param_1 + 100) = 0x24fbfc0;
    *(undefined4 *)(param_1 + 0x68) = 0x3119576;
    *(undefined4 *)(param_1 + 0x6c) = 0x27726a3;
    *(undefined4 *)(param_1 + 0x70) = 0x120eb6;
    *(undefined4 *)(param_1 + 0x74) = 1;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_0181e958(param_1 + 0x4c);
    *(int *)(param_1 + 0x4c) = 0xffff0bc - *(int *)(param_1 + 0x4c);
    *(int *)(param_1 + 0x50) = 0xffffefc - *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x58) = 0xffffffc - *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x60) = 0xffffffc - *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = 0xffffffc - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 100) = 0xffffffc - *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x68) = 0xffffffc - *(int *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(int *)(param_1 + 0x54) = 0xffffffc - *(int *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 0x6c) = 0xffffffc - *(int *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(int *)(param_1 + 0x70) = 0xfffffc - *(int *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
LAB_0183256c:
    if (local_2c[0] != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
    return 0;
  }
  uVar5 = *(uint *)(param_1 + 0x14);
  uVar2 = *(uint *)(param_1 + 0x1c);
  uVar4 = *(uint *)(param_1 + 0x18);
  uStack_60 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
              uVar5 >> 0x18;
  uVar5 = *(uint *)(param_1 + 0x20);
  uStack_68 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
              uVar2 >> 0x18;
  local_64 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
             uVar4 >> 0x18;
  local_6c = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
             uVar5 >> 0x18;
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar5 = *(uint *)(param_1 + 0x10);
  uStack_58 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
              uVar2 >> 0x18;
  local_5c = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
             uVar5 >> 0x18;
  uVar5 = *(uint *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 4);
  local_54 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
             uVar5 >> 0x18;
  uStack_50 = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
              uVar2 >> 0x18;
  if (local_2c <= param_2 || param_2 <= &local_4c) {
    uVar5 = (uint)(&local_6c < param_2);
    if (&local_4c <= param_2) {
      uVar5 = 0;
    }
    if (uVar5 == 0) {
      local_4c = *param_2;
      uStack_48 = param_2[1];
      uStack_44 = param_2[2];
      uStack_40 = param_2[3];
      uStack_30 = param_2[7];
      local_3c = param_2[4];
      uStack_38 = param_2[5];
      uStack_34 = param_2[6];
      FUN_01825a98(auStack_14c,&local_6c,0x40);
      FUN_016dd606(&local_6c,0,0x40);
      FUN_018279c4(auStack_14c,auStack_8c);
      FUN_0181edb4(&local_178,auStack_8c);
      uVar15 = (local_154 >> 0x16) * 0x3d1 + local_178;
      uVar6 = local_174 + (local_154 >> 0x16) * 0x40 + (uVar15 >> 0x1a);
      uVar2 = local_170 + (uVar6 >> 0x1a);
      uVar7 = local_16c + (uVar2 >> 0x1a);
      uVar8 = local_168 + (uVar7 >> 0x1a);
      uVar9 = local_164 + (uVar8 >> 0x1a);
      uVar10 = local_160 + (uVar9 >> 0x1a);
      uVar11 = local_15c + (uVar10 >> 0x1a);
      uVar12 = local_158 + (uVar11 >> 0x1a);
      uVar13 = (local_154 & 0x3fffff) + (uVar12 >> 0x1a);
      uVar4 = (uint)(((uVar6 & 0x3ffffff ^ 0x40) & uVar2 & (uVar15 & 0x3ffffff ^ 0x3d0) & uVar7 &
                      uVar8 & uVar9 & uVar10 & uVar11 & uVar12 & (uVar13 ^ 0x3c00000)) == 0x3ffffff)
      ;
      if (uVar13 == 0 &&
          ((uVar15 | uVar6 | uVar2 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12) & 0x3ffffff)
          == 0) {
        uVar4 = 1;
      }
      uVar2 = uVar4 - 1;
      local_158 = local_158 & uVar2;
      local_178 = local_178 & uVar2 | uVar4;
      local_174 = uVar2 & local_174;
      local_170 = uVar2 & local_170;
      local_16c = uVar2 & local_16c;
      local_168 = uVar2 & local_168;
      local_164 = uVar2 & local_164;
      local_160 = uVar2 & local_160;
      local_15c = uVar2 & local_15c;
      local_154 = uVar2 & local_154;
      iVar14 = param_1 + 0x24;
      FUN_0181f914(auStack_108,&local_178);
      FUN_0181f130(iVar14,iVar14,auStack_108);
      iVar3 = param_1 + 0x4c;
      FUN_0181f130(iVar3,iVar3,auStack_108);
      FUN_0181f130(iVar3,iVar3,&local_178);
      FUN_0181f130(param_1 + 0x74,param_1 + 0x74,&local_178);
      FUN_016dd606(&local_178,0,0x28);
      FUN_018279c4(auStack_14c,auStack_8c);
      FUN_0182582c(&local_198,auStack_8c,0);
      uVar2 = (uint)(((((((local_198 == 0 && local_194 == 0) && local_190 == 0) && local_18c == 0)
                       && local_188 == 0) && local_184 == 0) && local_180 == 0) && local_17c == 0);
      uVar4 = uVar2 - 1;
      local_194 = local_194 & uVar4;
      local_198 = local_198 & uVar4 | uVar2;
      local_190 = local_190 & uVar4;
      local_18c = local_18c & uVar4;
      local_188 = local_188 & uVar4;
      local_184 = local_184 & uVar4;
      local_180 = local_180 & uVar4;
      local_17c = uVar4 & local_17c;
      FUN_016dd606(auStack_12c,0,0x20);
      FUN_016dd606(auStack_14c,0,0x20);
      local_10c = uVar5;
      FUN_0182b61c(param_1,auStack_108,&local_198);
      FUN_01820018(&local_198,&local_198);
      *(uint *)(param_1 + 4) = local_198;
      *(uint *)(param_1 + 8) = local_194;
      *(uint *)(param_1 + 0xc) = local_190;
      *(uint *)(param_1 + 0x10) = local_18c;
      *(uint *)(param_1 + 0x14) = local_188;
      *(uint *)(param_1 + 0x18) = local_184;
      *(uint *)(param_1 + 0x1c) = local_180;
      *(uint *)(param_1 + 0x20) = local_17c;
      FUN_016dd1aa(iVar14,auStack_108,0x7c);
      goto LAB_0183256c;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x18326dc);
  (*pcVar1)();
}

