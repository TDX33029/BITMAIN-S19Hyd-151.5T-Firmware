// FUN_01abf660 @ 01abf660 size=2084 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01abf660(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  int *piVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  bool bVar22;
  undefined8 uVar23;
  uint local_5f8;
  uint local_5f4;
  uint local_5c8;
  uint *local_5b0;
  uint local_5ac;
  int local_5a8;
  int local_5a4;
  uint local_5a0;
  uint uStack_59c;
  uint local_598;
  uint local_594;
  uint local_590;
  uint uStack_58c;
  uint uStack_588;
  uint local_580;
  uint uStack_57c;
  uint uStack_578;
  uint local_574;
  uint *puStack_570;
  uint uStack_56c;
  uint uStack_568;
  undefined2 local_560;
  undefined1 local_55e;
  undefined1 auStack_554 [256];
  uint local_454;
  uint local_448;
  uint uStack_444;
  uint uStack_440;
  uint local_43c;
  uint *puStack_438;
  uint local_434;
  uint local_430;
  uint uStack_42c;
  uint uStack_428;
  uint uStack_424;
  uint local_420;
  uint uStack_41c;
  uint uStack_418;
  uint uStack_414;
  uint uStack_410;
  uint uStack_40c;
  uint local_408;
  uint *local_404;
  uint local_400;
  uint local_3fc;
  uint local_3f8;
  uint uStack_3f4;
  uint local_2d8;
  uint uStack_2d4;
  uint uStack_2d0;
  uint local_2c8;
  uint uStack_2c4;
  uint uStack_2c0;
  uint local_2bc;
  uint *puStack_2b8;
  uint uStack_2b4;
  uint uStack_2b0;
  uint local_2a8;
  uint local_2a4;
  uint local_2a0;
  uint local_29c;
  uint local_298;
  uint local_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint *local_180;
  uint local_17c;
  uint uStack_178;
  uint uStack_174;
  uint local_170;
  uint uStack_16c;
  uint local_168;
  uint uStack_164;
  uint local_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  undefined1 local_138 [12];
  undefined1 auStack_12c [256];
  uint local_2c;
  undefined1 local_28;
  
  puVar19 = (uint *)*param_2;
  iVar4 = param_2[3];
  puVar21 = puVar19 + 1;
  uVar5 = *puVar19;
  uVar23 = thunk_FUN_01bee35a(uVar5,0x2c0);
  puVar17 = (uint *)((int)uVar23 + (int)((ulonglong)uVar23 >> 0x20));
  if ((char)puVar17[4] == '\0') {
    FUN_019ae6ac(&local_150);
    *puVar17 = local_150;
    puVar17[1] = local_14c;
    puVar17[2] = local_148;
    puVar17[3] = local_144;
    *(undefined1 *)(puVar17 + 4) = 1;
  }
  local_5a0 = *puVar17;
  uStack_59c = puVar17[1];
  puVar20 = (uint *)(uStack_59c + (0xfffffffe < local_5a0));
  *puVar17 = local_5a0 + 1;
  puVar17[1] = (uint)puVar20;
  local_5b0 = &DAT_0056d238;
  local_5ac = 0;
  local_5a8 = 0;
  local_5a4 = 0;
  local_598 = puVar17[2];
  local_594 = puVar17[3];
  if (iVar4 != 0) {
    FUN_01aae784(&local_5b0,iVar4,&local_5a0);
  }
  uVar5 = ~uVar5 & 0x80808080;
LAB_01abf754:
  puVar17 = &local_408;
  if (uVar5 == 0) {
    puVar16 = puVar21;
    if (iVar4 == 0) {
      *param_1 = local_5b0;
      param_1[1] = local_5ac;
      param_1[2] = local_5a8;
      param_1[3] = local_5a4;
      param_1[4] = local_5a0;
      param_1[5] = uStack_59c;
      param_1[6] = local_598;
      param_1[7] = local_594;
      *(undefined1 *)(param_1 + 9) = 0;
      param_1[8] = param_2[8];
      return;
    }
    do {
      puVar21 = puVar16 + 1;
      uVar5 = *puVar16;
      puVar19 = puVar19 + -0x28;
      puVar16 = puVar21;
    } while ((uVar5 & 0x80808080) == 0x80808080);
    uVar5 = uVar5 & 0x80808080 ^ 0x80808080;
  }
  uVar11 = (uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                         uVar5 >> 0x18) >> 3;
  uVar6 = puVar19[uVar11 * -10 + -10];
  local_5c8 = puVar19[uVar11 * -10 + -9];
  uVar7 = puVar19[uVar11 * -10 + -8];
  uVar8 = puVar19[uVar11 * -10 + -7];
  uVar9 = puVar19[uVar11 * -10 + -6];
  bVar3 = (byte)puVar19[uVar11 * -10 + -4];
  uVar14 = (uint)bVar3;
  uVar10 = uVar5 - 1;
  uVar5 = uVar10 & uVar5;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar3) {
  default:
    puVar20 = (uint *)puVar19[uVar11 * -10 + -3];
    uVar10 = puVar19[uVar11 * -10 + -2];
    uVar14 = puVar19[uVar11 * -10 + -1];
    local_55e = *(undefined1 *)((int)puVar19 + uVar11 * -0x28 + -0xd);
    local_560 = *(undefined2 *)((int)puVar19 + uVar11 * -0x28 + -0xf);
    break;
  case 4:
    break;
  case 5:
    puVar20 = (uint *)puVar19[uVar11 * -10 + -3];
    do {
      uVar10 = *puVar20;
      uVar14 = uVar10 + 1;
      bVar22 = (bool)hasExclusiveAccess(puVar20);
    } while (!bVar22);
    *puVar20 = uVar14;
    if ((int)uVar10 < 0) goto LAB_01abfe9c;
    uVar10 = puVar19[uVar11 * -10 + -2];
    break;
  case 6:
    puVar20 = (uint *)FUN_01ab9fac();
    puVar16 = (uint *)puVar19[uVar11 * -10 + -3];
    FUN_01299464(&local_560,puVar16[0x19],puVar16[0x1a]);
    FUN_01bed4e2(auStack_554,puVar16 + 0x1b,0x100);
    local_454 = puVar16[0x5b];
    FUN_01299464(local_138,puVar16[0x6d],puVar16[0x6e]);
    uVar11 = puVar16[0xb0];
    FUN_01bed4e2(auStack_12c,puVar16 + 0x6f,0x100);
    local_13c = puVar16[0x6b];
    local_2c = puVar16[0xaf];
    local_150 = puVar16[0x66];
    local_14c = puVar16[0x67];
    local_148 = puVar16[0x68];
    local_144 = puVar16[0x69];
    local_140 = puVar16[0x6a];
    local_28 = (char)uVar11;
    FUN_01299464(&local_2c8,puVar16[0x5d],puVar16[0x5e]);
    FUN_01299464(puVar17,puVar16[0x60],puVar16[0x61]);
    local_430 = puVar16[0x62];
    local_448 = local_2c8;
    uStack_444 = uStack_2c4;
    uStack_440 = uStack_2c0;
    local_43c = local_408;
    puStack_438 = local_404;
    local_434 = local_400;
    FUN_01299464(&local_580,puVar16[100],puVar16[0x65]);
    uVar11 = puVar16[0x17];
    if ((char)uVar11 != '\x02') {
      puVar17 = (uint *)puVar16[0x14];
      do {
        uVar10 = *puVar17;
        bVar22 = (bool)hasExclusiveAccess(puVar17);
      } while (!bVar22);
      *puVar17 = uVar10 + 1;
      if ((int)uVar10 < 0) {
LAB_01abfe9c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1abfe9c);
        (*pcVar1)();
      }
      local_5f8 = puVar16[0x15];
      local_5f4 = puVar16[0x16];
    }
    local_170 = puVar16[0xc];
    uStack_16c = puVar16[0xd];
    local_168 = puVar16[0xe];
    uStack_164 = puVar16[0xf];
    local_160 = puVar16[0x10];
    uStack_15c = puVar16[0x11];
    uStack_158 = puVar16[0x12];
    uStack_154 = puVar16[0x13];
    uVar2 = puVar16[0xb1];
    FUN_01bed4e2((uint)&local_2a8 | 3,&local_560,0x110);
    FUN_01bed4e2(&local_408,&local_150,300);
    local_2c8 = local_448;
    uStack_2c4 = uStack_444;
    uStack_2c0 = uStack_440;
    local_2bc = local_43c;
    puStack_2b8 = puStack_438;
    uStack_2b4 = local_434;
    uStack_2b0 = local_430;
    local_190 = puVar16[4];
    uStack_18c = puVar16[5];
    uStack_188 = puVar16[6];
    uStack_184 = puVar16[7];
    local_180 = (uint *)puVar16[8];
    local_17c = puVar16[9];
    uStack_178 = puVar16[10];
    uStack_174 = puVar16[0xb];
    local_2d8 = local_580;
    uStack_2d4 = uStack_57c;
    uStack_2d0 = uStack_578;
    uVar10 = puVar16[3];
    piVar18 = (int *)*puVar16;
    uVar15 = puVar16[2];
    uVar14 = (uint)(uint3)uVar2;
    do {
      iVar12 = *piVar18;
      bVar22 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar22);
    *piVar18 = iVar12 + 1;
    if (iVar12 < 0) goto LAB_01abfe9c;
    uVar13 = puVar16[1];
    uStack_428 = local_170;
    uStack_424 = uStack_16c;
    local_420 = local_168;
    uStack_41c = uStack_164;
    uStack_418 = local_160;
    uStack_414 = uStack_15c;
    uStack_410 = uStack_158;
    uStack_40c = uStack_154;
    local_448 = local_190;
    uStack_444 = uStack_18c;
    uStack_440 = uStack_188;
    local_43c = uStack_184;
    puStack_438 = local_180;
    local_434 = local_17c;
    local_430 = uStack_178;
    uStack_42c = uStack_174;
    FUN_01bed4e2(&local_560,&local_2a8,0x113);
    local_580 = local_2c8;
    uStack_57c = uStack_2c4;
    uStack_578 = uStack_2c0;
    local_574 = local_2bc;
    puStack_570 = puStack_2b8;
    uStack_56c = uStack_2b4;
    uStack_568 = uStack_2b0;
    local_590 = local_2d8;
    uStack_58c = uStack_2d4;
    uStack_588 = uStack_2d0;
    FUN_01bed4e2(&local_150,&local_408,300);
    puVar20[1] = uVar13;
    puVar20[2] = uVar15;
    puVar20[3] = uVar10;
    *puVar20 = (uint)piVar18;
    puVar20[4] = local_448;
    puVar20[5] = uStack_444;
    puVar20[6] = uStack_440;
    puVar20[7] = local_43c;
    puVar20[8] = (uint)puStack_438;
    puVar20[9] = local_434;
    puVar20[10] = local_430;
    puVar20[0xb] = uStack_42c;
    puVar20[0xc] = uStack_428;
    puVar20[0xd] = uStack_424;
    puVar20[0xe] = local_420;
    puVar20[0xf] = uStack_41c;
    puVar20[0x10] = uStack_418;
    puVar20[0x11] = uStack_414;
    puVar20[0x12] = uStack_410;
    puVar20[0x13] = uStack_40c;
    *(char *)(puVar20 + 0x17) = (char)uVar11;
    puVar20[0x15] = local_5f8;
    puVar20[0x16] = local_5f4;
    puVar20[0x14] = (uint)puVar17;
    FUN_01bed4e2((int)puVar20 + 0x5d,&local_560,0x113);
    puVar20[0x5c] = local_580;
    puVar20[0x5d] = uStack_57c;
    puVar20[0x5e] = uStack_578;
    puVar20[0x5f] = local_574;
    puVar20[0x60] = (uint)puStack_570;
    puVar20[0x61] = uStack_56c;
    puVar20[0x62] = uStack_568;
    puVar20[99] = local_590;
    puVar20[100] = uStack_58c;
    puVar20[0x65] = uStack_588;
    FUN_01bed4e2(puVar20 + 0x66,&local_150,300);
    *(short *)(puVar20 + 0xb1) = (short)uVar2;
    uVar10 = (uint)(uint3)((uint3)uVar2 >> 0x10);
    *(char *)((int)puVar20 + 0x2c6) = (char)(uVar2 >> 0x10);
  }
  local_400 = uVar10;
  local_298 = uVar9;
  local_29c = uVar8;
  local_2a0 = uVar7;
  local_2a4 = local_5c8;
  local_2a8 = uVar6;
  *(undefined1 *)((undefined2 *)((uint)&local_408 | 1) + 1) = local_55e;
  local_408 = CONCAT31(local_408._1_3_,bVar3);
  *(undefined2 *)((uint)&local_408 | 1) = local_560;
  local_3f8 = local_3f8 & 0xffffff00;
  local_3fc = uVar14;
  local_404 = puVar20;
  uVar11 = FUN_01ab2e08(local_5a0,uStack_59c,local_598,local_594,&local_2a8);
  if (local_5a8 == 0) {
    FUN_01aae784(&local_5b0,1,&local_5a0);
  }
  puVar20 = (uint *)((uVar11 >> 0x19) * 0x1010101);
  bVar22 = false;
  iVar12 = 0;
  uVar10 = uVar11;
  do {
    uVar10 = local_5ac & uVar10;
    uVar8 = *(uint *)((int)local_5b0 + uVar10);
    uVar6 = ~(uVar8 ^ (uint)puVar20) & 0x80808080 & (uVar8 ^ (uint)puVar20) + 0xfefefeff;
    while (uVar6 != 0) {
      uVar14 = uVar6 >> 8;
      uVar2 = uVar6 >> 0x10;
      uVar15 = uVar6 >> 0x18;
      uVar13 = uVar6 << 0x18;
      uVar6 = uVar6 - 1 & uVar6;
      uVar14 = uVar10 + ((uint)LZCOUNT(uVar13 | (uVar14 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 |
                                       uVar15) >> 3) & local_5ac;
      if ((uVar7 == local_5b0[uVar14 * -0xc + -10]) && (uVar9 == local_5b0[uVar14 * -0xc + -8])) {
        local_150 = local_5b0[uVar14 * -0xc + -6];
        uVar11 = local_150;
        local_14c = local_5b0[uVar14 * -0xc + -5];
        local_148 = local_5b0[uVar14 * -0xc + -4];
        local_144 = local_5b0[uVar14 * -0xc + -3];
        local_140 = local_5b0[uVar14 * -0xc + -2];
        local_13c = local_5b0[uVar14 * -0xc + -1];
        local_5b0[uVar14 * -0xc + -6] = local_408;
        local_5b0[uVar14 * -0xc + -5] = (uint)local_404;
        local_5b0[uVar14 * -0xc + -4] = local_400;
        local_5b0[uVar14 * -0xc + -3] = local_3fc;
        local_5b0[uVar14 * -0xc + -2] = local_3f8;
        local_5b0[uVar14 * -0xc + -1] = uStack_3f4;
        bVar22 = (char)local_150 != '\a';
        local_150 = uVar11;
        if (bVar22) {
          FUN_01aae3dc(&local_150);
        }
        goto LAB_01abf9f4;
      }
    }
    uVar6 = uVar8 & 0x80808080;
    if (bVar22) {
LAB_01abf970:
      if ((uVar6 & uVar8 << 1) != 0) break;
      bVar22 = true;
    }
    else {
      if (uVar6 != 0) {
        local_5c8 = uVar10 + ((uint)LZCOUNT((uVar8 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                            (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                    local_5ac;
        goto LAB_01abf970;
      }
      bVar22 = false;
    }
    iVar12 = iVar12 + 4;
    uVar10 = iVar12 + uVar10;
  } while( true );
  uVar10 = (uint)*(char *)((int)local_5b0 + local_5c8);
  if (-1 < (int)uVar10) {
    uVar10 = *local_5b0 & 0x80808080;
    local_5c8 = LZCOUNT((*local_5b0 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                        (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
    uVar10 = (uint)*(byte *)((int)local_5b0 + (local_5c8 >> 3));
    local_5c8 = local_5c8 >> 3;
  }
  puVar20 = &local_150;
  local_150 = local_2a8;
  local_14c = local_2a4;
  local_148 = local_2a0;
  local_144 = local_29c;
  local_140 = local_298;
  bVar3 = (byte)(uVar11 >> 0x19);
  *(byte *)((int)local_5b0 + local_5c8) = bVar3;
  *(byte *)((int)local_5b0 + (local_5ac & local_5c8 - 4) + 4) = bVar3;
  local_5a8 = local_5a8 - (uVar10 & 1);
  local_5a4 = local_5a4 + 1;
  local_5b0[local_5c8 * -0xc + -0xc] = local_2a8;
  local_5b0[local_5c8 * -0xc + -0xb] = local_2a4;
  local_5b0[local_5c8 * -0xc + -10] = local_2a0;
  local_5b0[local_5c8 * -0xc + -9] = local_29c;
  local_5b0[local_5c8 * -0xc + -8] = local_298;
  local_5b0[local_5c8 * -0xc + -7] = local_13c;
  local_5b0[local_5c8 * -0xc + -6] = local_408;
  local_5b0[local_5c8 * -0xc + -5] = (uint)local_404;
  local_5b0[local_5c8 * -0xc + -4] = local_400;
  local_5b0[local_5c8 * -0xc + -3] = local_3fc;
  local_5b0[local_5c8 * -0xc + -2] = local_3f8;
  local_5b0[local_5c8 * -0xc + -1] = uStack_3f4;
LAB_01abf9f4:
  iVar4 = iVar4 + -1;
  goto LAB_01abf754;
}

