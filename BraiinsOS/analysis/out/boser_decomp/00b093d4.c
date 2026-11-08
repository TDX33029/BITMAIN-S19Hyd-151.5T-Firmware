// FUN_00b093d4 @ 00b093d4 size=1480 calls_out=16 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b093d4(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  undefined8 uVar22;
  int local_2c0;
  int local_298;
  int local_294;
  undefined1 auStack_288 [48];
  undefined4 *local_258;
  uint local_254;
  int local_250;
  int local_24c;
  uint local_248;
  uint uStack_244;
  uint local_240;
  uint uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined1 auStack_228 [4];
  int local_224;
  int local_21c;
  undefined4 *local_218;
  uint uStack_214;
  int iStack_210;
  int iStack_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  undefined4 local_1e4;
  char local_148 [24];
  char local_130 [28];
  int local_114;
  undefined4 local_110;
  int local_10c;
  undefined4 local_108 [6];
  uint local_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  char local_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [40];
  int local_80;
  undefined4 local_7c;
  int local_74;
  undefined4 local_70;
  int local_68;
  undefined4 local_64;
  int local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 auStack_38 [13];
  char local_2b;
  
  uVar6 = FUN_00b09be0(auStack_288);
  uVar22 = thunk_FUN_01bee35a(uVar6,0x2c0);
  puVar15 = (uint *)((int)uVar22 + (int)((ulonglong)uVar22 >> 0x20));
  if ((char)puVar15[4] == '\0') {
    FUN_019ae6ac(&local_f0);
    *puVar15 = local_f0;
    puVar15[1] = uStack_ec;
    puVar15[2] = uStack_e8;
    puVar15[3] = uStack_e4;
    *(undefined1 *)(puVar15 + 4) = 1;
  }
  local_208 = *puVar15;
  local_200 = puVar15[2];
  local_204 = puVar15[1];
  local_1fc = puVar15[3];
  *puVar15 = local_208 + 1;
  puVar15[1] = local_204 + (0xfffffffe < local_208);
  local_218 = &DAT_0056d238;
  uStack_214 = 0;
  iStack_210 = 0;
  iStack_20c = 0;
  if (param_3 != 0) {
    puVar17 = param_2 + param_3 * 2;
    do {
      (**(code **)(param_2[1] + 0x10))(&local_f0,*param_2);
      FUN_01ae0840(&local_218,&local_f0);
      param_2 = param_2 + 2;
    } while (param_2 != puVar17);
  }
  local_258 = local_218;
  local_254 = uStack_214;
  local_250 = iStack_210;
  local_24c = iStack_20c;
  local_248 = local_208;
  uStack_244 = local_204;
  local_240 = local_200;
  uStack_23c = local_1fc;
  local_230 = 0;
  local_238 = 0;
  FUN_00aeecac(auStack_228,auStack_288);
  local_294 = local_250;
  local_298 = local_24c;
  while( true ) {
    iVar14 = local_224;
    if (local_224 == local_21c) break;
    iVar18 = *(int *)(local_224 + 0xcc);
    iVar14 = local_224 + 0xd8;
    if (iVar18 == -0x80000000) break;
    uVar6 = *(undefined4 *)(local_224 + 0xd0);
    iVar19 = *(int *)(local_224 + 0xd4);
    FUN_01bed4e2((uint)&local_f0 | 4,local_224,200);
    FUN_01bed4e2(&local_218,&local_f0,0xcc);
    FUN_01bed4e2(&local_f0,(uint)&local_218 | 4,200);
    if (local_2b == '\x03') {
      FUN_00b03818(&local_f0);
LAB_00b09928:
      FUN_019bb7e0(iVar18,uVar6);
    }
    else {
      uVar7 = FUN_01adafd4(local_248,uStack_244,local_240,uStack_23c,uVar6,iVar19);
      uVar13 = local_254;
      puVar17 = local_258;
      uVar12 = uVar7 >> 0x19;
      local_2c0 = 0;
      while( true ) {
        uVar7 = uVar13 & uVar7;
        uVar8 = *(uint *)((int)puVar17 + uVar7);
        uVar9 = uVar8 ^ uVar12 * 0x1010101;
        uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff;
        while (uVar9 != 0) {
          uVar20 = uVar9 >> 8;
          uVar2 = uVar9 >> 0x10;
          uVar3 = uVar9 >> 0x18;
          uVar4 = uVar9 << 0x18;
          uVar9 = uVar9 - 1 & uVar9;
          uVar20 = uVar7 + ((uint)LZCOUNT(uVar4 | (uVar20 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 |
                                          uVar3) >> 3) & uVar13;
          if ((iVar19 == puVar17[uVar20 * -10 + -8]) &&
             (iVar10 = thunk_FUN_01bed842(uVar6,puVar17[uVar20 * -10 + -9],iVar19), iVar10 == 0)) {
            iVar10 = ((int)(uVar20 * 0x28) >> 3) * -0x33333333;
            puVar15 = (uint *)((int)puVar17 + (iVar10 - 4U & uVar13));
            uVar12 = *puVar15;
            uVar13 = *(uint *)((int)puVar17 + iVar10) & 0x80808080 &
                     *(uint *)((int)puVar17 + iVar10) << 1;
            bVar21 = ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                    (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) +
                     ((uint)LZCOUNT(uVar12 & 0x80808080 & uVar12 << 1) >> 3) < 4;
            uVar11 = 0x80;
            if (bVar21) {
              uVar11 = 0xff;
            }
            *(undefined1 *)((int)puVar17 + iVar10) = uVar11;
            local_298 = local_298 + -1;
            *(undefined1 *)(puVar15 + 1) = uVar11;
            iVar10 = puVar17[uVar20 * -10 + -10];
            if (bVar21) {
              local_294 = local_294 + 1;
            }
            if (iVar10 == -0x80000000) goto LAB_00b097a0;
            cVar1 = *(char *)(puVar17 + uVar20 * -10 + -6);
            uVar16 = puVar17[uVar20 * -10 + -9];
            FUN_01bed4e2(local_130,(int)puVar17 + uVar20 * -0x28 + -0x17,0x17);
            FUN_019bb7e0(iVar10,uVar16);
            if (cVar1 == '\x06') goto LAB_00b097a0;
            local_148[0] = cVar1;
            FUN_01bed4e2((uint)local_148 | 1,local_130,0x17);
            local_114 = iVar18;
            local_110 = uVar6;
            local_10c = iVar19;
            FUN_0196b484(local_108,&local_238,&local_114,local_148);
            if ((char)local_108[0] != '\x06') {
              FUN_00e0febc(local_108);
            }
            bVar21 = true;
            bVar5 = false;
            goto LAB_00b09874;
          }
        }
        if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
        local_2c0 = local_2c0 + 4;
        uVar7 = uVar7 + local_2c0;
      }
LAB_00b097a0:
      bVar5 = true;
      if (param_4 == 0) {
        bVar21 = true;
      }
      else {
        local_108[0] = local_1e4;
        local_114 = iVar18;
        local_110 = uVar6;
        local_10c = iVar19;
        FUN_0196b484(local_130,&local_238,&local_114);
        if (local_130[0] != '\x06') {
          FUN_00e0febc(local_130);
        }
        bVar5 = false;
        bVar21 = false;
      }
LAB_00b09874:
      FUN_019bb7e0(local_50,local_4c);
      FUN_019bb7e0(local_44,local_40);
      if (bVar21) {
        FUN_00e0febc(auStack_c0);
      }
      if ((char)local_f0 != '\x06') {
        FUN_00e0febc(&local_f0);
      }
      if (local_d8[0] != '\x06') {
        FUN_00e0febc(local_d8);
      }
      FUN_006a41c0(auStack_38);
      if (local_80 != -0x80000000) {
        FUN_019bb7e0(local_80,local_7c);
      }
      if (local_74 != -0x80000000) {
        FUN_019bb7e0(local_74,local_70);
      }
      if (local_68 != -0x80000000) {
        FUN_019bb7e0(local_68,local_64);
      }
      if (local_5c != -0x80000000) {
        FUN_019bb7e0(local_5c,local_58);
      }
      FUN_012733a4(auStack_a8);
      if (bVar5) goto LAB_00b09928;
    }
    local_224 = iVar14;
  }
  local_24c = local_298;
  local_250 = local_294;
  local_224 = iVar14;
  FUN_009635e4(auStack_228);
  *param_1 = local_238;
  param_1[1] = uStack_234;
  param_1[2] = local_230;
  FUN_01ada488(&local_258);
  return;
}

