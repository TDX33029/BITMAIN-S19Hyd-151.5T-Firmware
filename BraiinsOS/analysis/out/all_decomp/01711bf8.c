// FUN_01711bf8 @ 01711bf8 size=9112 calls_out=1 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01711bf8(uint *param_1,uint param_2,uint *param_3)

{
  code *pcVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint *puVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint local_100;
  uint local_f0;
  uint local_ec;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  byte *local_a8;
  uint *local_a4;
  byte *local_a0;
  uint *local_9c;
  uint *local_98;
  uint *local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint local_34;
  uint local_30;
  uint local_2c [2];
  
  uVar4 = DAT_018ddaf8;
  local_2c[0] = DAT_018ddaf8;
  if (param_2 == 0xc0) {
    param_3[0x3c] = 0xc;
    if ((param_1 < &local_70 && &local_80 < param_1) ||
       ((param_1 < &local_80 && (&local_80 < param_1 + 4)))) {
LAB_01713f08:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x1713f08);
      (*pcVar1)();
    }
    uVar5 = *param_1;
    uVar7 = param_1[1];
    uVar8 = param_1[2];
    uVar25 = param_1[3];
    uVar11 = (uVar5 ^ uVar5 >> 6) & 0xcc00cc;
    uVar11 = uVar5 ^ uVar11 ^ uVar11 << 6;
    uVar5 = (uVar7 ^ uVar7 >> 6) & 0xcc00cc;
    uVar7 = uVar7 ^ uVar5 ^ uVar5 << 6;
    uVar5 = (uVar25 ^ uVar25 >> 6) & 0xcc00cc;
    uVar25 = uVar25 ^ uVar5 ^ uVar5 << 6;
    uVar5 = (uVar8 ^ uVar8 >> 6) & 0xcc00cc;
    uVar18 = (uVar7 ^ uVar7 >> 0xc) & 0xf0f0;
    uVar10 = uVar8 ^ uVar5 ^ uVar5 << 6;
    uVar5 = (uVar25 ^ uVar25 >> 0xc) & 0xf0f0;
    uVar25 = uVar25 ^ uVar5;
    uVar7 = uVar7 ^ uVar18 ^ uVar18 << 0xc;
    uVar8 = uVar25 ^ uVar5 << 0xc;
    uVar18 = (uVar11 ^ uVar11 >> 0xc) & 0xf0f0;
    uVar5 = (uVar10 ^ uVar10 >> 0xc) & 0xf0f0;
    uVar11 = uVar11 ^ uVar18;
    uVar10 = uVar10 ^ uVar5;
    uVar18 = uVar11 ^ uVar18 << 0xc;
    uVar5 = uVar10 ^ uVar5 << 0xc;
    local_f0 = uVar11 & 0xff | uVar25 << 0x18 | (uVar7 & 0xff) << 8 | (uVar10 & 0xff) << 0x10;
    local_80 = local_f0;
    local_7c = (uVar11 & 0xffff) >> 8 | (uVar8 >> 8) << 0x18 | uVar7 & 0xff00 |
               (uVar5 & 0xff00) << 8;
    local_78 = (uVar18 & 0xffffff) >> 0x10 | (uVar8 >> 0x10) << 0x18 | uVar5 & 0xff0000 |
               uVar7 >> 8 & 0xff00;
    local_74 = uVar8 & 0xff000000 | uVar18 >> 0x18 | (uVar7 >> 0x18) << 8 | (uVar5 >> 0x18) << 0x10;
    if ((param_3 < &local_80) && (&local_80 < param_3 + 4)) goto LAB_01713f08;
    uVar5 = (uint)(&local_80 < param_3);
    if (&local_70 <= param_3) {
      uVar5 = 0;
    }
    if (uVar5 != 0) goto LAB_01713f08;
    puVar17 = param_1 + 4;
    local_34 = uVar5;
    local_30 = uVar5;
    *param_3 = local_f0;
    param_3[1] = local_7c;
    param_3[2] = local_78;
    param_3[3] = local_74;
    if ((puVar17 < &local_34 && &local_3c < puVar17) ||
       ((puVar17 < &local_3c && (&local_3c < param_1 + 6)))) goto LAB_01713f08;
    local_3c = param_1[4];
    uStack_38 = param_1[5];
    if ((&local_70 < &local_3c && &local_3c < &local_60) ||
       (&local_70 < local_2c && &local_3c < &local_70)) goto LAB_01713f08;
    local_98 = param_3 + 8;
    local_a0 = &DAT_0044cc14;
    uVar5 = (uStack_38 ^ uStack_38 >> 6) & 0xcc00cc;
    uVar8 = uStack_38 ^ uVar5 ^ uVar5 << 6;
    uVar5 = (local_3c ^ local_3c >> 6) & 0xcc00cc;
    uVar5 = local_3c ^ uVar5 ^ uVar5 << 6;
    uVar7 = (uVar8 ^ uVar8 >> 0xc) & 0xf0f0;
    uVar11 = uVar8 ^ uVar7 ^ uVar7 << 0xc;
    uVar7 = (uVar5 ^ uVar5 >> 0xc) & 0xf0f0;
    uVar5 = uVar5 ^ uVar7;
    uVar7 = uVar5 ^ uVar7 << 0xc;
    local_94 = (uint *)((uVar11 & 0xff) << 8 | uVar5 & 0xff);
    local_70 = (uint)local_94;
    uVar8 = (uVar5 & 0xffff) >> 8 | uVar11 & 0xff00;
    uVar5 = uVar11 >> 8 & 0xff00 | (uVar7 & 0xffffff) >> 0x10;
    uVar7 = uVar7 >> 0x18 | (uVar11 >> 0x18) << 8;
    local_6c = uVar8;
    local_68 = uVar5;
    local_64 = uVar7;
    puVar17 = &local_80;
    puVar30 = &local_70;
    while( true ) {
      puVar21 = puVar17;
      uVar11 = uVar7 >> 1;
      uVar29 = (uVar8 ^ uVar5) & 0x55555555;
      uVar15 = ((uint)local_94 ^ uVar7) >> 1;
      uVar18 = uVar8 ^ uVar5 ^ uVar15;
      uVar26 = uVar18 ^ uVar8 >> 1;
      uVar18 = uVar18 & 0x55555555;
      uVar14 = uVar7 ^ uVar5 >> 1;
      uVar33 = uVar14 ^ (uint)local_94;
      uVar7 = uVar26 ^ uVar7;
      uVar26 = uVar26 ^ uVar8;
      uVar8 = uVar8 ^ uVar11;
      uVar19 = (uVar5 ^ uVar33) & 0x55555555;
      uVar20 = uVar7 ^ uVar11 ^ uVar5;
      uVar32 = (uVar11 ^ uVar5) & 0x55555555;
      uVar28 = (uint)local_94 >> 1 ^ uVar33;
      uVar34 = uVar26 ^ uVar14;
      uVar14 = uVar14 ^ uVar20;
      uVar27 = (uVar26 ^ (uint)local_94) & 0x55555555;
      uVar5 = (uVar11 ^ uVar33) & 0x55555555;
      uVar25 = (uVar8 ^ uVar28) & 0x55555555;
      uVar28 = uVar28 & 0x55555555;
      uVar10 = (uVar34 ^ uVar20) & 0x55555555;
      uVar16 = uVar15 & 0x55555555 & uVar14 & 0x55555555;
      uVar24 = uVar18 & uVar26 & 0x55555555;
      uVar12 = uVar32 & uVar20 & 0x55555555;
      uVar23 = uVar29 & uVar10 ^ uVar12;
      uVar22 = (uVar20 ^ (uint)local_94) & 0x55555555;
      uVar9 = uVar7 & 0x55555555 ^ uVar24 ^ uVar25 & uVar27 ^ uVar23;
      uVar23 = (uVar15 ^ uVar14) & 0x55555555 ^ uVar16 ^ uVar33 & 0x55555555 & uVar28 ^ uVar23;
      uVar12 = uVar8 & 0x55555555 & uVar34 & 0x55555555 ^ uVar12;
      uVar13 = uVar9 & uVar23;
      uVar7 = (uVar14 ^ uVar11) & 0x55555555 ^ uVar16 ^ uVar5 & uVar22 ^ uVar12;
      uVar12 = uVar19 & (uint)local_94 & 0x55555555 ^ uVar24 ^ (uVar8 ^ uVar34) & 0x55555555 ^
               uVar12;
      uVar31 = (uVar23 ^ uVar7) & (uVar12 ^ uVar13);
      uVar9 = uVar9 ^ uVar12;
      uVar24 = (uVar13 ^ uVar31) & uVar7;
      uVar31 = uVar7 ^ uVar31;
      uVar12 = (uVar7 ^ uVar13) & uVar9 ^ uVar12;
      uVar9 = (uVar7 ^ uVar13 ^ uVar24) & uVar12 ^ uVar9;
      uVar33 = uVar33 & 0x55555555 & uVar9;
      uVar22 = uVar22 & uVar12;
      uVar16 = uVar28 & uVar9 ^ uVar22;
      uVar24 = uVar23 ^ uVar31 ^ uVar24;
      uVar7 = (uint)local_94 & 0x55555555 & uVar31;
      uVar25 = uVar25 & uVar24;
      uVar23 = uVar24 ^ uVar9;
      uVar13 = uVar12 ^ uVar31;
      uVar28 = uVar14 & 0x55555555 & (uVar9 ^ uVar12);
      uVar15 = (uVar9 ^ uVar12) & uVar15 & 0x55555555;
      uVar26 = uVar26 & 0x55555555 & (uVar24 ^ uVar31) ^ uVar28;
      uVar11 = uVar7 ^ uVar15 ^ uVar26;
      uVar29 = uVar29 & (uVar13 ^ uVar23);
      uVar10 = (uVar13 ^ uVar23) & uVar10;
      uVar9 = uVar32 & uVar13 ^ uVar29;
      uVar14 = uVar9 ^ uVar33;
      uVar32 = uVar34 & 0x55555555 & uVar23 ^ uVar10 ^ uVar14;
      uVar10 = uVar10 ^ uVar20 & 0x55555555 & uVar13 ^ uVar28;
      uVar14 = uVar14 ^ (uVar24 ^ uVar31) & uVar18 ^ uVar25;
      uVar18 = ~(uVar11 ^ uVar9 ^ uVar16);
      uVar11 = uVar32 ^ uVar5 & uVar12 ^ uVar11;
      uVar5 = uVar27 & uVar24 ^ uVar14;
      uVar26 = uVar5 ^ uVar26;
      uVar25 = (uVar7 ^ uVar22 ^ uVar5) << 1 ^ uVar19 & uVar31 ^ uVar25 ^ uVar11;
      uVar18 = (~(uVar15 ^ uVar16 ^ uVar32 ^ uVar18 >> 1) & 0x55555555) << 1 ^ uVar18;
      uVar33 = uVar33 ^ uVar10;
      uVar5 = ~(uVar33 ^ uVar26);
      uVar5 = ((uVar14 ^ uVar10 ^ uVar5 >> 1) & 0x55555555) << 1 ^ uVar5;
      uVar26 = (~(uVar23 & uVar8 & 0x55555555 ^ uVar29 ^ uVar33 ^ uVar11) & 0x55555555) << 1 ^
               uVar26;
      bVar2 = *local_a0;
      uVar8 = (uint)bVar2;
      uVar7 = ((uint)local_94 | (uVar8 & 3 ^ local_f0) << 0x10) ^
              ((uVar18 >> 2 & 0x3f3f3f3f | (uVar18 & 0x3030303) << 6) & 0xff00) << 8;
      *puVar30 = (uVar7 & 0xff0000) << 8 ^ uVar7;
      *puVar21 = (uint)*(ushort *)((int)puVar21 + 2);
      uVar7 = (uint)*(ushort *)((int)puVar21 + 2) | *puVar30 << 0x10;
      *puVar21 = uVar7;
      uVar7 = *(byte *)((int)puVar30 + 3) ^ uVar7;
      puVar17 = local_98 + -4;
      *puVar21 = uVar7 << 0x10 ^ uVar7 << 8 ^ uVar7 ^ uVar7 << 0x18;
      uVar7 = (puVar30[1] | ((uVar8 & 0xf) >> 2 ^ puVar21[1]) << 0x10) ^
              ((uVar25 >> 2 & 0x3f3f3f3f | (uVar25 & 0x3030303) << 6) & 0xff00) << 8;
      puVar30[1] = (uVar7 & 0xff0000) << 8 ^ uVar7;
      puVar21[1] = (uint)*(ushort *)((int)puVar21 + 6);
      uVar7 = (uint)*(ushort *)((int)puVar21 + 6) | puVar30[1] << 0x10;
      puVar21[1] = uVar7;
      uVar7 = *(byte *)((int)puVar30 + 7) ^ uVar7;
      puVar21[1] = uVar7 << 0x10 ^ uVar7 << 8 ^ uVar7 ^ uVar7 << 0x18;
      uVar7 = (puVar30[2] | (puVar21[2] ^ (uVar8 & 0x3f) >> 4) << 0x10) ^
              ((uVar26 >> 2 & 0x3f3f3f3f | (uVar26 & 0x3030303) << 6) & 0xff00) << 8;
      puVar30[2] = uVar7 ^ (uVar7 & 0xff0000) << 8;
      puVar21[2] = (uint)*(ushort *)((int)puVar21 + 10);
      uVar7 = (uint)*(ushort *)((int)puVar21 + 10) | puVar30[2] << 0x10;
      puVar21[2] = uVar7;
      uVar7 = *(byte *)((int)puVar30 + 0xb) ^ uVar7;
      puVar21[2] = uVar7 << 0x10 ^ uVar7 << 8 ^ uVar7 ^ uVar7 << 0x18;
      uVar5 = (puVar30[3] | (puVar21[3] ^ (uint)(bVar2 >> 6)) << 0x10) ^
              ((uVar5 >> 2 & 0x3f3f3f3f | (uVar5 & 0x3030303) << 6) & 0xff00) << 8;
      puVar30[3] = (uVar5 & 0xff0000) << 8 ^ uVar5;
      puVar21[3] = (uint)*(ushort *)((int)puVar21 + 0xe);
      uVar5 = (uint)*(ushort *)((int)puVar21 + 0xe) | puVar30[3] << 0x10;
      puVar21[3] = uVar5;
      uVar5 = *(byte *)((int)puVar30 + 0xf) ^ uVar5;
      uVar5 = uVar5 << 0x10 ^ uVar5 << 8 ^ uVar5 ^ uVar5 << 0x18;
      puVar21[3] = uVar5;
      if (puVar17 < puVar30) {
        if (puVar30 < local_98) goto LAB_01713f08;
      }
      else if ((puVar17 != puVar30) && (puVar17 < puVar30 + 4)) goto LAB_01713f08;
      uVar7 = puVar30[1];
      uVar8 = puVar30[2];
      uVar11 = puVar30[3];
      *puVar17 = *puVar30;
      local_98[-3] = uVar7;
      local_98[-2] = uVar8;
      local_98[-1] = uVar11;
      if (local_98 < puVar21) {
        if (puVar21 < local_98 + 4) goto LAB_01713f08;
      }
      else if ((local_98 != puVar21) && (local_98 < puVar21 + 4)) goto LAB_01713f08;
      local_94 = local_98 + 4;
      uVar12 = *puVar21;
      uVar7 = uVar5 >> 1;
      uVar33 = puVar21[1];
      uVar11 = puVar21[2];
      uVar15 = (uVar12 ^ uVar5) >> 1;
      uVar10 = uVar5 ^ uVar11 >> 1;
      uVar27 = uVar33 ^ uVar11 ^ uVar15;
      uVar29 = (uVar33 ^ uVar11) & 0x55555555;
      uVar34 = uVar27 ^ uVar33 >> 1;
      uVar27 = uVar27 & 0x55555555;
      uVar23 = uVar12 ^ uVar10;
      uVar5 = uVar5 ^ uVar34;
      uVar34 = uVar34 ^ uVar33;
      uVar33 = uVar33 ^ uVar7;
      uVar9 = (uVar11 ^ uVar23) & 0x55555555;
      uVar8 = uVar12 >> 1 ^ uVar23;
      uVar24 = uVar5 ^ uVar11 ^ uVar7;
      uVar31 = uVar34 ^ uVar10;
      uVar10 = uVar10 ^ uVar24;
      uVar16 = (uVar11 ^ uVar7) & 0x55555555;
      uVar35 = (uVar34 ^ uVar12) & 0x55555555;
      uVar11 = uVar8 & 0x55555555;
      uVar20 = (uVar7 ^ uVar23) & 0x55555555;
      uVar8 = (uVar33 ^ uVar8) & 0x55555555;
      uVar18 = uVar27 & uVar34 & 0x55555555;
      uVar13 = (uVar31 ^ uVar24) & 0x55555555;
      uVar26 = uVar15 & 0x55555555 & uVar10 & 0x55555555;
      uVar22 = (uVar12 ^ uVar24) & 0x55555555;
      uVar25 = uVar16 & uVar24 & 0x55555555;
      uVar28 = uVar29 & uVar13 ^ uVar25;
      uVar19 = uVar5 & 0x55555555 ^ uVar18 ^ uVar8 & uVar35 ^ uVar28;
      uVar28 = (uVar15 ^ uVar10) & 0x55555555 ^ uVar26 ^ uVar23 & 0x55555555 & uVar11 ^ uVar28;
      uVar32 = uVar19 & uVar28;
      uVar25 = uVar33 & 0x55555555 & uVar31 & 0x55555555 ^ uVar25;
      uVar14 = uVar18 ^ uVar9 & uVar12 & 0x55555555 ^ (uVar33 ^ uVar31) & 0x55555555 ^ uVar25;
      uVar19 = uVar19 ^ uVar14;
      uVar25 = uVar26 ^ (uVar10 ^ uVar7) & 0x55555555 ^ uVar20 & uVar22 ^ uVar25;
      uVar5 = (uVar28 ^ uVar25) & (uVar14 ^ uVar32);
      uVar18 = uVar5 ^ uVar25;
      uVar5 = (uVar32 ^ uVar5) & uVar25;
      uVar14 = (uVar25 ^ uVar32) & uVar19 ^ uVar14;
      uVar36 = uVar28 ^ uVar18 ^ uVar5;
      uVar19 = (uVar25 ^ uVar32 ^ uVar5) & uVar14 ^ uVar19;
      uVar22 = uVar22 & uVar14;
      uVar25 = uVar23 & 0x55555555 & uVar19;
      uVar26 = uVar11 & uVar19 ^ uVar22;
      uVar32 = uVar18 & uVar12 & 0x55555555;
      uVar8 = uVar8 & uVar36;
      uVar23 = uVar36 ^ uVar19;
      uVar12 = uVar14 ^ uVar18;
      uVar28 = uVar10 & 0x55555555 & (uVar19 ^ uVar14);
      uVar15 = (uVar19 ^ uVar14) & uVar15 & 0x55555555;
      uVar10 = uVar34 & 0x55555555 & (uVar18 ^ uVar36) ^ uVar28;
      uVar5 = uVar32 ^ uVar15 ^ uVar10;
      uVar29 = uVar29 & (uVar12 ^ uVar23);
      uVar13 = (uVar12 ^ uVar23) & uVar13;
      uVar11 = uVar16 & uVar12 ^ uVar29;
      uVar7 = ~(uVar5 ^ uVar11 ^ uVar26);
      uVar11 = uVar11 ^ uVar25;
      uVar19 = uVar31 & 0x55555555 & uVar23 ^ uVar13 ^ uVar11;
      uVar13 = uVar13 ^ uVar24 & 0x55555555 & uVar12 ^ uVar28;
      uVar14 = uVar19 ^ uVar20 & uVar14 ^ uVar5;
      uVar11 = uVar11 ^ (uVar18 ^ uVar36) & uVar27 ^ uVar8;
      uVar16 = uVar35 & uVar36 ^ uVar11;
      uVar10 = uVar16 ^ uVar10;
      uVar7 = (~(uVar15 ^ uVar26 ^ uVar19 ^ uVar7 >> 1) & 0x55555555) << 1 ^ uVar7;
      uVar25 = uVar25 ^ uVar13;
      uVar5 = ~(uVar25 ^ uVar10);
      uVar9 = (uVar32 ^ uVar22 ^ uVar16) << 1 ^ uVar9 & uVar18 ^ uVar8 ^ uVar14;
      uVar5 = ((uVar11 ^ uVar13 ^ uVar5 >> 1) & 0x55555555) << 1 ^ uVar5;
      uVar10 = (~(uVar23 & uVar33 & 0x55555555 ^ uVar29 ^ uVar25 ^ uVar14) & 0x55555555) << 1 ^
               uVar10;
      uVar3 = *(ushort *)((int)puVar30 + 2);
      uVar8 = *puVar21;
      uVar11 = puVar21[1];
      uVar25 = puVar21[2];
      uVar18 = puVar21[3];
      *puVar30 = (uint)uVar3;
      local_98[3] = uVar18;
      *local_98 = uVar8;
      local_98[1] = uVar11;
      local_98[2] = uVar25;
      bVar2 = local_a0[1];
      uVar8 = (uint)bVar2;
      uVar7 = ((uint)uVar3 | *puVar21 << 0x10) ^ uVar8 & 3 ^
              (uVar7 >> 2 & 0x3f3f3f3f | (uVar7 & 0x3030303) << 6) >> 0x18;
      *puVar30 = uVar7 << 0x10 ^ uVar7 << 8 ^ uVar7 ^ uVar7 << 0x18;
      *puVar21 = (uint)*(ushort *)((int)puVar21 + 2);
      uVar7 = (uint)*(byte *)((int)puVar30 + 3) ^ (uint)*(ushort *)((int)puVar21 + 2);
      *puVar21 = (uVar7 ^ uVar7 << 8) & 0xffff;
      puVar30[1] = (uint)*(ushort *)((int)puVar30 + 6);
      uVar7 = ((uint)*(ushort *)((int)puVar30 + 6) | puVar21[1] << 0x10) ^ (uVar8 & 0xf) >> 2 ^
              (uVar9 >> 2 & 0x3f3f3f3f | (uVar9 & 0x3030303) << 6) >> 0x18;
      puVar30[1] = uVar7 << 0x10 ^ uVar7 << 8 ^ uVar7 ^ uVar7 << 0x18;
      puVar21[1] = (uint)*(ushort *)((int)puVar21 + 6);
      uVar7 = (uint)*(byte *)((int)puVar30 + 7) ^ (uint)*(ushort *)((int)puVar21 + 6);
      puVar21[1] = (uVar7 ^ uVar7 << 8) & 0xffff;
      puVar30[2] = (uint)*(ushort *)((int)puVar30 + 10);
      uVar7 = ((uint)*(ushort *)((int)puVar30 + 10) | puVar21[2] << 0x10) ^ (uVar8 & 0x3f) >> 4 ^
              (uVar10 >> 2 & 0x3f3f3f3f | (uVar10 & 0x3030303) << 6) >> 0x18;
      puVar30[2] = uVar7 << 0x10 ^ uVar7 << 8 ^ uVar7 ^ uVar7 << 0x18;
      puVar21[2] = (uint)*(ushort *)((int)puVar21 + 10);
      uVar7 = (uint)*(byte *)((int)puVar30 + 0xb) ^ (uint)*(ushort *)((int)puVar21 + 10);
      puVar21[2] = (uVar7 ^ uVar7 << 8) & 0xffff;
      puVar30[3] = (uint)*(ushort *)((int)puVar30 + 0xe);
      uVar5 = ((uint)*(ushort *)((int)puVar30 + 0xe) | puVar21[3] << 0x10) ^ (uint)(bVar2 >> 6) ^
              (uVar5 >> 2 & 0x3f3f3f3f | (uVar5 & 0x3030303) << 6) >> 0x18;
      puVar30[3] = uVar5 << 0x10 ^ uVar5 << 8 ^ uVar5 ^ uVar5 << 0x18;
      puVar21[3] = (uint)*(ushort *)((int)puVar21 + 0xe);
      uVar5 = (uint)*(byte *)((int)puVar30 + 0xf) ^ (uint)*(ushort *)((int)puVar21 + 0xe);
      uVar7 = (uVar5 ^ uVar5 << 8) & 0xffff;
      puVar21[3] = uVar7;
      if (local_94 < puVar30) {
        if (puVar30 < local_98 + 8) goto LAB_01713f08;
      }
      else if ((local_94 != puVar30) && (local_94 < puVar30 + 4)) goto LAB_01713f08;
      local_a0 = local_a0 + 2;
      local_f0 = *puVar30;
      param_2 = puVar30[1];
      uVar5 = puVar30[2];
      uVar8 = puVar30[3];
      *local_94 = local_f0;
      local_98[5] = param_2;
      local_98[6] = uVar5;
      local_98[7] = uVar8;
      if (local_a0 == &DAT_0044cc1c) break;
      local_94 = (uint *)*puVar21;
      local_98 = local_98 + 0xc;
      uVar8 = puVar21[1];
      uVar5 = puVar21[2];
      puVar17 = puVar30;
      puVar30 = puVar21;
    }
  }
  else {
    if (param_2 == 0x100) {
      param_3[0x3c] = 0xe;
      if ((param_1 <= &local_60 || &local_50 <= param_1) &&
         ((&local_60 <= param_1 || (param_1 + 4 <= &local_60)))) {
        uVar5 = *param_1;
        uVar7 = param_1[1];
        uVar8 = param_1[2];
        uVar25 = param_1[3];
        uVar11 = (uVar5 ^ uVar5 >> 6) & 0xcc00cc;
        uVar11 = uVar5 ^ uVar11 ^ uVar11 << 6;
        uVar5 = (uVar7 ^ uVar7 >> 6) & 0xcc00cc;
        uVar7 = uVar7 ^ uVar5 ^ uVar5 << 6;
        uVar5 = (uVar25 ^ uVar25 >> 6) & 0xcc00cc;
        uVar25 = uVar25 ^ uVar5 ^ uVar5 << 6;
        uVar5 = (uVar8 ^ uVar8 >> 6) & 0xcc00cc;
        uVar18 = (uVar7 ^ uVar7 >> 0xc) & 0xf0f0;
        uVar5 = uVar8 ^ uVar5 ^ uVar5 << 6;
        uVar10 = (uVar25 ^ uVar25 >> 0xc) & 0xf0f0;
        uVar25 = uVar25 ^ uVar10;
        uVar8 = uVar7 ^ uVar18 ^ uVar18 << 0xc;
        uVar10 = uVar25 ^ uVar10 << 0xc;
        uVar18 = (uVar11 ^ uVar11 >> 0xc) & 0xf0f0;
        uVar7 = (uVar5 ^ uVar5 >> 0xc) & 0xf0f0;
        uVar11 = uVar11 ^ uVar18;
        uVar5 = uVar5 ^ uVar7;
        uVar7 = uVar5 ^ uVar7 << 0xc;
        uVar18 = uVar11 ^ uVar18 << 0xc;
        local_dc = uVar11 & 0xff | uVar25 << 0x18 | (uVar8 & 0xff) << 8 | (uVar5 & 0xff) << 0x10;
        local_e0 = (uVar11 & 0xffff) >> 8 | (uVar10 >> 8) << 0x18 | uVar8 & 0xff00 |
                   (uVar7 & 0xff00) << 8;
        local_98 = (uint *)((uVar18 & 0xffffff) >> 0x10 | (uVar10 >> 0x10) << 0x18 |
                            uVar7 & 0xff0000 | uVar8 >> 8 & 0xff00);
        local_e4 = uVar10 & 0xff000000 | uVar18 >> 0x18 | (uVar8 >> 0x18) << 8 |
                   (uVar7 >> 0x18) << 0x10;
        local_60 = local_dc;
        local_5c = local_e0;
        local_58 = (uint)local_98;
        local_54 = local_e4;
        if (((&local_60 <= param_3) || (param_3 + 4 <= &local_60)) &&
           (param_3 <= &local_60 || &local_50 <= param_3)) {
          puVar17 = param_1 + 4;
          *param_3 = local_dc;
          param_3[1] = local_e0;
          param_3[2] = (uint)local_98;
          param_3[3] = local_e4;
          if ((&uStack_40 <= puVar17 || puVar17 <= &local_50) &&
             ((&local_50 <= puVar17 || (param_1 + 8 <= &local_50)))) {
            puVar17 = param_3 + 4;
            uVar5 = param_1[4];
            uVar7 = param_1[5];
            uVar8 = param_1[6];
            uVar25 = param_1[7];
            uVar11 = (uVar7 ^ uVar7 >> 6) & 0xcc00cc;
            uVar11 = uVar7 ^ uVar11 ^ uVar11 << 6;
            uVar7 = (uVar25 ^ uVar25 >> 6) & 0xcc00cc;
            uVar25 = uVar25 ^ uVar7 ^ uVar7 << 6;
            uVar7 = (uVar5 ^ uVar5 >> 6) & 0xcc00cc;
            uVar5 = uVar5 ^ uVar7 ^ uVar7 << 6;
            uVar7 = (uVar8 ^ uVar8 >> 6) & 0xcc00cc;
            uVar10 = (uVar11 ^ uVar11 >> 0xc) & 0xf0f0;
            uVar7 = uVar8 ^ uVar7 ^ uVar7 << 6;
            uVar11 = uVar11 ^ uVar10 ^ uVar10 << 0xc;
            uVar10 = (uVar25 ^ uVar25 >> 0xc) & 0xf0f0;
            uVar25 = uVar25 ^ uVar10;
            uVar8 = (uVar7 ^ uVar7 >> 0xc) & 0xf0f0;
            uVar10 = uVar25 ^ uVar10 << 0xc;
            uVar18 = (uVar5 ^ uVar5 >> 0xc) & 0xf0f0;
            uVar5 = uVar5 ^ uVar18;
            uVar7 = uVar7 ^ uVar8;
            uVar18 = uVar5 ^ uVar18 << 0xc;
            uVar8 = uVar7 ^ uVar8 << 0xc;
            local_50 = uVar5 & 0xff | uVar25 << 0x18 | (uVar11 & 0xff) << 8 | (uVar7 & 0xff) << 0x10
            ;
            local_4c = (uVar5 & 0xffff) >> 8 | (uVar10 >> 8) << 0x18 | uVar11 & 0xff00 |
                       (uVar8 & 0xff00) << 8;
            local_48 = (uVar18 & 0xffffff) >> 0x10 | (uVar10 >> 0x10) << 0x18 | uVar8 & 0xff0000 |
                       uVar11 >> 8 & 0xff00;
            local_44 = uVar10 & 0xff000000 | uVar18 >> 0x18 | (uVar11 >> 0x18) << 8 |
                       (uVar8 >> 0x18) << 0x10;
            if (((&local_50 <= puVar17) || (param_3 + 8 <= &local_50)) &&
               (puVar17 <= &local_50 || &uStack_40 <= puVar17)) {
              local_100 = 1;
              local_ec = 2;
              param_3[4] = local_50;
              param_3[5] = local_4c;
              param_3[6] = local_48;
              param_3[7] = local_44;
              local_9c = param_3 + 0xc;
              while( true ) {
                uVar5 = local_44 >> 1;
                uVar13 = (local_50 ^ local_44) >> 1;
                uVar14 = local_4c ^ local_48 ^ uVar13;
                uVar33 = (local_4c ^ local_48) & 0x55555555;
                uVar24 = uVar14 ^ local_4c >> 1;
                uVar14 = uVar14 & 0x55555555;
                uVar12 = local_44 ^ local_48 >> 1;
                uVar11 = uVar24 ^ local_44;
                uVar34 = uVar12 ^ local_50;
                uVar19 = uVar11 ^ uVar5 ^ local_48;
                uVar24 = uVar24 ^ local_4c;
                uVar31 = (uVar5 ^ local_48) & 0x55555555;
                uVar8 = local_50 >> 1 ^ uVar34;
                uVar9 = uVar5 ^ local_4c;
                uVar7 = uVar24 ^ uVar12;
                uVar12 = uVar12 ^ uVar19;
                uVar27 = (uVar24 ^ local_50) & 0x55555555;
                uVar20 = (uVar5 ^ uVar34) & 0x55555555;
                uVar22 = (uVar34 ^ local_48) & 0x55555555;
                uVar29 = uVar8 & 0x55555555;
                uVar25 = (uVar19 ^ uVar7) & 0x55555555;
                uVar23 = (uVar9 ^ uVar8) & 0x55555555;
                uVar15 = uVar14 & uVar24 & 0x55555555;
                uVar16 = uVar13 & 0x55555555 & uVar12 & 0x55555555;
                uVar18 = uVar31 & uVar19 & 0x55555555;
                uVar26 = (uVar19 ^ local_50) & 0x55555555;
                uVar8 = uVar25 & uVar33 ^ uVar18;
                uVar10 = uVar11 & 0x55555555 ^ uVar15 ^ uVar23 & uVar27 ^ uVar8;
                uVar8 = (uVar13 ^ uVar12) & 0x55555555 ^ uVar16 ^ uVar29 & uVar34 & 0x55555555 ^
                        uVar8;
                uVar18 = uVar9 & 0x55555555 & uVar7 & 0x55555555 ^ uVar18;
                uVar28 = uVar10 & uVar8;
                uVar11 = uVar22 & local_50 & 0x55555555 ^ uVar15 ^ (uVar9 ^ uVar7) & 0x55555555 ^
                         uVar18;
                uVar18 = (uVar12 ^ uVar5) & 0x55555555 ^ uVar16 ^ uVar20 & uVar26 ^ uVar18;
                uVar10 = uVar10 ^ uVar11;
                uVar5 = (uVar8 ^ uVar18) & (uVar11 ^ uVar28);
                uVar16 = uVar5 ^ uVar18;
                uVar5 = (uVar28 ^ uVar5) & uVar18;
                uVar11 = (uVar18 ^ uVar28) & uVar10 ^ uVar11;
                uVar15 = uVar8 ^ uVar16 ^ uVar5;
                uVar10 = (uVar18 ^ uVar28 ^ uVar5) & uVar11 ^ uVar10;
                uVar23 = uVar23 & uVar15;
                uVar32 = local_50 & 0x55555555 & uVar16;
                uVar8 = uVar34 & 0x55555555 & uVar10;
                uVar26 = uVar26 & uVar11;
                uVar28 = uVar29 & uVar10 ^ uVar26;
                uVar18 = uVar15 ^ uVar10;
                uVar5 = uVar11 ^ uVar16;
                uVar29 = uVar12 & 0x55555555 & (uVar10 ^ uVar11);
                uVar12 = (uVar10 ^ uVar11) & uVar13 & 0x55555555;
                uVar10 = uVar24 & 0x55555555 & (uVar16 ^ uVar15) ^ uVar29;
                uVar33 = uVar33 & (uVar5 ^ uVar18);
                uVar25 = (uVar5 ^ uVar18) & uVar25;
                uVar24 = uVar19 & 0x55555555 & uVar5 ^ uVar29 ^ uVar25;
                uVar13 = uVar31 & uVar5 ^ uVar33;
                uVar29 = uVar32 ^ uVar12 ^ uVar10;
                uVar19 = uVar13 ^ uVar8;
                uVar14 = (uVar16 ^ uVar15) & uVar14 ^ uVar23 ^ uVar19;
                uVar19 = uVar19 ^ uVar7 & 0x55555555 & uVar18 ^ uVar25;
                uVar25 = uVar27 & uVar15 ^ uVar14;
                uVar10 = uVar10 ^ uVar25;
                uVar8 = uVar8 ^ uVar24;
                uVar5 = uVar20 & uVar11 ^ uVar29 ^ uVar19;
                uVar11 = ~(uVar29 ^ uVar13 ^ uVar28);
                uVar7 = ~(uVar8 ^ uVar10);
                uVar11 = (~(uVar12 ^ uVar28 ^ uVar19 ^ uVar11 >> 1) & 0x55555555) << 1 ^ uVar11;
                uVar7 = ((uVar14 ^ uVar24 ^ uVar7 >> 1) & 0x55555555) << 1 ^ uVar7;
                uVar25 = (uVar25 ^ uVar32 ^ uVar26) << 1 ^ uVar22 & uVar16 ^ uVar23 ^ uVar5;
                uVar10 = (~(uVar18 & uVar9 & 0x55555555 ^ uVar33 ^ uVar8 ^ uVar5) & 0x55555555) << 1
                         ^ uVar10;
                local_dc = local_100 & 3 ^
                           (uVar11 >> 2 & 0x3f3f3f3f | (uVar11 & 0x3030303) << 6) >> 0x18 ^ local_dc
                ;
                local_e0 = (local_100 & 0xf) >> 2 ^
                           (uVar25 >> 2 & 0x3f3f3f3f | (uVar25 & 0x3030303) << 6) >> 0x18 ^ local_e0
                ;
                uVar5 = (local_100 & 0x3f) >> 4 ^
                        (uVar10 >> 2 & 0x3f3f3f3f | (uVar10 & 0x3030303) << 6) >> 0x18 ^
                        (uint)local_98;
                local_e4 = (int)local_100 >> 6 ^
                           (uVar7 >> 2 & 0x3f3f3f3f | (uVar7 & 0x3030303) << 6) >> 0x18 ^ local_e4;
                local_dc = local_dc << 0x10 ^ local_dc << 8 ^ local_dc ^ local_dc << 0x18;
                param_2 = local_e0 << 0x10 ^ local_e0 << 8 ^ local_e0 ^ local_e0 << 0x18;
                local_98 = (uint *)(uVar5 << 0x10 ^ uVar5 << 8 ^ uVar5 ^ uVar5 << 0x18);
                local_e4 = local_e4 << 0x10 ^ local_e4 << 8 ^ local_e4 ^ local_e4 << 0x18;
                puVar17 = local_9c + -4;
                local_60 = local_dc;
                local_5c = param_2;
                local_58 = (uint)local_98;
                local_54 = local_e4;
                if (((puVar17 < &local_60) && (&local_60 < local_9c)) ||
                   (&local_60 < puVar17 && puVar17 < &local_50)) break;
                *puVar17 = local_dc;
                local_9c[-3] = param_2;
                local_9c[-2] = (uint)local_98;
                local_9c[-1] = local_e4;
                if (local_ec == 0xe) goto LAB_01712328;
                uVar5 = local_e4 >> 1;
                uVar15 = (local_dc ^ local_e4) >> 1;
                uVar9 = param_2 ^ (uint)local_98 ^ uVar15;
                uVar10 = (param_2 ^ (uint)local_98) & 0x55555555;
                uVar27 = uVar9 ^ param_2 >> 1;
                uVar9 = uVar9 & 0x55555555;
                uVar11 = uVar27 ^ local_e4;
                uVar13 = local_e4 ^ (uint)local_98 >> 1;
                uVar27 = uVar27 ^ param_2;
                uVar24 = uVar11 ^ uVar5 ^ (uint)local_98;
                uVar34 = local_dc ^ uVar13;
                uVar31 = (uVar5 ^ (uint)local_98) & 0x55555555;
                uVar16 = uVar5 ^ param_2;
                uVar7 = uVar27 ^ uVar13;
                uVar13 = uVar13 ^ uVar24;
                uVar28 = (uVar27 ^ local_dc) & 0x55555555;
                uVar20 = (uVar5 ^ uVar34) & 0x55555555;
                uVar8 = local_dc >> 1 ^ uVar34;
                uVar18 = uVar9 & uVar27 & 0x55555555;
                uVar22 = ((uint)local_98 ^ uVar34) & 0x55555555;
                uVar29 = uVar8 & 0x55555555;
                uVar25 = (uVar24 ^ uVar7) & 0x55555555;
                uVar23 = (uVar16 ^ uVar8) & 0x55555555;
                uVar12 = uVar15 & 0x55555555 & uVar13 & 0x55555555;
                uVar14 = uVar31 & uVar24 & 0x55555555;
                uVar26 = (uVar24 ^ local_dc) & 0x55555555;
                uVar8 = uVar25 & uVar10 ^ uVar14;
                uVar33 = uVar11 & 0x55555555 ^ uVar18 ^ uVar23 & uVar28 ^ uVar8;
                uVar8 = (uVar15 ^ uVar13) & 0x55555555 ^ uVar12 ^ uVar29 & uVar34 & 0x55555555 ^
                        uVar8;
                uVar14 = uVar16 & 0x55555555 & uVar7 & 0x55555555 ^ uVar14;
                uVar11 = uVar22 & local_dc & 0x55555555 ^ uVar18 ^ (uVar16 ^ uVar7) & 0x55555555 ^
                         uVar14;
                uVar14 = (uVar13 ^ uVar5) & 0x55555555 ^ uVar12 ^ uVar20 & uVar26 ^ uVar14;
                uVar5 = uVar33 & uVar8;
                uVar12 = (uVar8 ^ uVar14) & (uVar11 ^ uVar5);
                uVar33 = uVar33 ^ uVar11;
                uVar18 = (uVar5 ^ uVar12) & uVar14;
                uVar12 = uVar12 ^ uVar14;
                uVar11 = (uVar14 ^ uVar5) & uVar33 ^ uVar11;
                uVar19 = uVar8 ^ uVar12 ^ uVar18;
                uVar33 = (uVar14 ^ uVar5 ^ uVar18) & uVar11 ^ uVar33;
                uVar32 = local_dc & 0x55555555 & uVar12;
                uVar8 = uVar34 & 0x55555555 & uVar33;
                uVar26 = uVar26 & uVar11;
                uVar23 = uVar23 & uVar19;
                uVar29 = uVar29 & uVar33 ^ uVar26;
                uVar18 = uVar19 ^ uVar33;
                uVar13 = uVar13 & 0x55555555 & (uVar33 ^ uVar11);
                uVar5 = uVar11 ^ uVar12;
                uVar14 = (uVar33 ^ uVar11) & uVar15 & 0x55555555;
                uVar27 = uVar27 & 0x55555555 & (uVar12 ^ uVar19) ^ uVar13;
                uVar10 = uVar10 & (uVar5 ^ uVar18);
                uVar25 = (uVar5 ^ uVar18) & uVar25;
                uVar15 = uVar24 & 0x55555555 & uVar5 ^ uVar13 ^ uVar25;
                uVar5 = uVar31 & uVar5 ^ uVar10;
                uVar24 = uVar32 ^ uVar14 ^ uVar27;
                uVar13 = uVar5 ^ uVar8;
                uVar33 = (uVar12 ^ uVar19) & uVar9 ^ uVar23 ^ uVar13;
                uVar13 = uVar13 ^ uVar7 & 0x55555555 & uVar18 ^ uVar25;
                uVar7 = uVar28 & uVar19 ^ uVar33;
                uVar8 = uVar8 ^ uVar15;
                uVar27 = uVar27 ^ uVar7;
                uVar25 = ~(uVar24 ^ uVar5 ^ uVar29);
                uVar5 = uVar20 & uVar11 ^ uVar24 ^ uVar13;
                uVar11 = ~(uVar8 ^ uVar27);
                local_50 = local_50 ^
                           ((~(uVar14 ^ uVar29 ^ uVar13 ^ uVar25 >> 1) & 0x55555555) << 1 ^ uVar25)
                           >> 0x18;
                local_4c = local_4c ^
                           ((uVar7 ^ uVar32 ^ uVar26) << 1 ^ uVar22 & uVar12 ^ uVar23 ^ uVar5) >>
                           0x18;
                local_48 = local_48 ^
                           ((~(uVar18 & uVar16 & 0x55555555 ^ uVar10 ^ uVar8 ^ uVar5) & 0x55555555)
                            << 1 ^ uVar27) >> 0x18;
                local_44 = local_44 ^
                           (((uVar33 ^ uVar15 ^ uVar11 >> 1) & 0x55555555) << 1 ^ uVar11) >> 0x18;
                local_50 = local_50 << 0x10 ^ local_50 << 8 ^ local_50 ^ local_50 << 0x18;
                local_4c = local_4c << 0x10 ^ local_4c << 8 ^ local_4c ^ local_4c << 0x18;
                local_48 = local_48 << 0x10 ^ local_48 << 8 ^ local_48 ^ local_48 << 0x18;
                local_44 = local_44 << 0x10 ^ local_44 << 8 ^ local_44 ^ local_44 << 0x18;
                if (((local_9c < &local_50) && (&local_50 < local_9c + 4)) ||
                   (&local_50 < local_9c && local_9c < &uStack_40)) break;
                local_100 = (uint)(byte)(&DAT_0044cc14)[local_ec >> 1];
                local_ec = local_ec + 2;
                *local_9c = local_50;
                local_9c[1] = local_4c;
                local_9c[2] = local_48;
                local_9c[3] = local_44;
                local_e0 = param_2;
                local_9c = local_9c + 8;
              }
            }
          }
        }
      }
      goto LAB_01713f08;
    }
    if (param_2 != 0x80) {
      uVar6 = 1;
      goto LAB_0171232c;
    }
    param_3[0x3c] = 10;
    if ((param_1 < &local_80 && &local_90 < param_1) ||
       ((param_1 < &local_90 && (&local_90 < param_1 + 4)))) goto LAB_01713f08;
    uVar5 = *param_1;
    uVar7 = param_1[1];
    uVar8 = param_1[2];
    uVar10 = param_1[3];
    uVar11 = (uVar5 ^ uVar5 >> 6) & 0xcc00cc;
    uVar11 = uVar5 ^ uVar11 ^ uVar11 << 6;
    uVar5 = (uVar11 ^ uVar11 >> 0xc) & 0xf0f0;
    uVar11 = uVar11 ^ uVar5;
    uVar33 = uVar11 ^ uVar5 << 0xc;
    uVar25 = (uVar7 ^ uVar7 >> 6) & 0xcc00cc;
    uVar5 = (uVar10 ^ uVar10 >> 6) & 0xcc00cc;
    uVar25 = uVar7 ^ uVar25 ^ uVar25 << 6;
    uVar10 = uVar10 ^ uVar5 ^ uVar5 << 6;
    uVar5 = (uVar8 ^ uVar8 >> 6) & 0xcc00cc;
    uVar7 = uVar8 ^ uVar5 ^ uVar5 << 6;
    uVar5 = (uVar25 ^ uVar25 >> 0xc) & 0xf0f0;
    uVar5 = uVar25 ^ uVar5 ^ uVar5 << 0xc;
    uVar8 = (uVar10 ^ uVar10 >> 0xc) & 0xf0f0;
    uVar18 = (uVar7 ^ uVar7 >> 0xc) & 0xf0f0;
    uVar10 = uVar10 ^ uVar8;
    uVar7 = uVar7 ^ uVar18;
    uVar25 = uVar10 ^ uVar8 << 0xc;
    uVar8 = uVar7 ^ uVar18 << 0xc;
    local_90 = uVar11 & 0xff | uVar10 << 0x18 | (uVar5 & 0xff) << 8 | (uVar7 & 0xff) << 0x10;
    local_8c = (uVar11 & 0xffff) >> 8 | (uVar25 >> 8) << 0x18 | uVar5 & 0xff00 |
               (uVar8 & 0xff00) << 8;
    local_88 = (uVar33 & 0xffffff) >> 0x10 | (uVar25 >> 0x10) << 0x18 | uVar8 & 0xff0000 |
               uVar5 >> 8 & 0xff00;
    local_84 = uVar25 & 0xff000000 | uVar33 >> 0x18 | (uVar5 >> 0x18) << 8 | (uVar8 >> 0x18) << 0x10
    ;
    if (((param_3 < &local_90) && (&local_90 < param_3 + 4)) ||
       (param_3 < &local_80 && &local_90 < param_3)) goto LAB_01713f08;
    local_a8 = &DAT_0044cc13;
    *param_3 = local_90;
    param_3[1] = local_8c;
    param_3[2] = local_88;
    param_3[3] = local_84;
    do {
      local_a4 = param_3 + 4;
      uVar5 = local_84 >> 1;
      uVar19 = (local_90 ^ local_84) >> 1;
      uVar33 = local_8c ^ local_88 ^ uVar19;
      uVar22 = uVar33 ^ local_8c >> 1;
      uVar10 = (local_8c ^ local_88) & 0x55555555;
      uVar33 = uVar33 & 0x55555555;
      uVar11 = uVar22 ^ local_84;
      uVar12 = local_84 ^ local_88 >> 1;
      uVar22 = uVar22 ^ local_8c;
      uVar26 = uVar11 ^ uVar5 ^ local_88;
      uVar29 = (uVar5 ^ local_88) & 0x55555555;
      uVar9 = uVar5 ^ local_8c;
      uVar13 = uVar12 ^ local_90;
      uVar7 = uVar22 ^ uVar12;
      uVar12 = uVar12 ^ uVar26;
      uVar28 = (uVar13 ^ local_88) & 0x55555555;
      uVar8 = local_90 >> 1 ^ uVar13;
      uVar23 = (uVar22 ^ local_90) & 0x55555555;
      uVar31 = (uVar5 ^ uVar13) & 0x55555555;
      uVar25 = (uVar7 ^ uVar26) & 0x55555555;
      uVar27 = (uVar26 ^ local_90) & 0x55555555;
      uVar14 = uVar33 & uVar22 & 0x55555555;
      uVar34 = uVar8 & 0x55555555;
      uVar15 = uVar19 & 0x55555555 & uVar12 & 0x55555555;
      uVar16 = uVar29 & uVar26 & 0x55555555;
      uVar24 = (uVar9 ^ uVar8) & 0x55555555;
      uVar8 = uVar10 & uVar25 ^ uVar16;
      uVar18 = uVar11 & 0x55555555 ^ uVar14 ^ uVar24 & uVar23 ^ uVar8;
      uVar8 = (uVar19 ^ uVar12) & 0x55555555 ^ uVar15 ^ uVar13 & 0x55555555 & uVar34 ^ uVar8;
      uVar16 = uVar9 & 0x55555555 & uVar7 & 0x55555555 ^ uVar16;
      uVar11 = uVar28 & local_90 & 0x55555555 ^ uVar14 ^ (uVar9 ^ uVar7) & 0x55555555 ^ uVar16;
      uVar16 = (uVar12 ^ uVar5) & 0x55555555 ^ uVar15 ^ uVar31 & uVar27 ^ uVar16;
      uVar5 = uVar18 & uVar8;
      uVar14 = (uVar8 ^ uVar16) & (uVar11 ^ uVar5);
      uVar18 = uVar18 ^ uVar11;
      uVar15 = (uVar5 ^ uVar14) & uVar16;
      uVar14 = uVar14 ^ uVar16;
      uVar11 = (uVar16 ^ uVar5) & uVar18 ^ uVar11;
      uVar20 = uVar8 ^ uVar14 ^ uVar15;
      uVar18 = (uVar16 ^ uVar5 ^ uVar15) & uVar11 ^ uVar18;
      uVar24 = uVar24 & uVar20;
      uVar32 = local_90 & 0x55555555 & uVar14;
      uVar13 = uVar13 & 0x55555555 & uVar18;
      uVar27 = uVar27 & uVar11;
      uVar34 = uVar34 & uVar18 ^ uVar27;
      uVar8 = uVar20 ^ uVar18;
      uVar5 = uVar11 ^ uVar14;
      uVar12 = uVar12 & 0x55555555 & (uVar18 ^ uVar11);
      uVar16 = (uVar18 ^ uVar11) & uVar19 & 0x55555555;
      uVar18 = uVar22 & 0x55555555 & (uVar14 ^ uVar20) ^ uVar12;
      uVar22 = uVar32 ^ uVar16 ^ uVar18;
      uVar10 = uVar10 & (uVar5 ^ uVar8);
      uVar25 = (uVar5 ^ uVar8) & uVar25;
      uVar19 = uVar26 & 0x55555555 & uVar5 ^ uVar12 ^ uVar25;
      uVar12 = uVar29 & uVar5 ^ uVar10;
      uVar15 = uVar12 ^ uVar13;
      uVar33 = (uVar14 ^ uVar20) & uVar33 ^ uVar24 ^ uVar15;
      uVar15 = uVar15 ^ uVar7 & 0x55555555 & uVar8 ^ uVar25;
      uVar13 = uVar13 ^ uVar19;
      uVar5 = uVar31 & uVar11 ^ uVar22 ^ uVar15;
      uVar7 = uVar23 & uVar20 ^ uVar33;
      uVar18 = uVar18 ^ uVar7;
      uVar25 = ~(uVar22 ^ uVar12 ^ uVar34);
      uVar11 = ~(uVar13 ^ uVar18);
      uVar14 = (uVar7 ^ uVar32 ^ uVar27) << 1 ^ uVar28 & uVar14 ^ uVar24 ^ uVar5;
      local_a8 = local_a8 + 1;
      uVar7 = (uint)*local_a8;
      uVar25 = (~(uVar16 ^ uVar34 ^ uVar15 ^ uVar25 >> 1) & 0x55555555) << 1 ^ uVar25;
      uVar18 = (~(uVar8 & uVar9 & 0x55555555 ^ uVar10 ^ uVar13 ^ uVar5) & 0x55555555) << 1 ^ uVar18;
      uVar11 = ((uVar33 ^ uVar19 ^ uVar11 >> 1) & 0x55555555) << 1 ^ uVar11;
      uVar8 = local_84 ^ *local_a8 >> 6 ^
              (uVar11 >> 2 & 0x3f3f3f3f | (uVar11 & 0x3030303) << 6) >> 0x18;
      uVar11 = uVar7 & 3 ^ local_90 ^ ((uVar25 & 0x3030303) << 6 | uVar25 >> 2 & 0x3f3f3f3f) >> 0x18
      ;
      uVar25 = (uVar7 & 0xf) >> 2 ^ local_8c ^
               (uVar14 >> 2 & 0x3f3f3f3f | (uVar14 & 0x3030303) << 6) >> 0x18;
      uVar5 = (uVar7 & 0x3f) >> 4 ^ local_88 ^
              (uVar18 >> 2 & 0x3f3f3f3f | (uVar18 & 0x3030303) << 6) >> 0x18;
      local_90 = uVar11 << 8 ^ uVar11 << 0x10 ^ uVar11 ^ uVar11 << 0x18;
      param_2 = uVar25 << 0x10 ^ uVar25 << 8 ^ uVar25 ^ uVar25 << 0x18;
      local_88 = uVar5 << 0x10 ^ uVar5 << 8 ^ uVar5 ^ uVar5 << 0x18;
      local_84 = uVar8 << 0x10 ^ uVar8 << 8 ^ uVar8 ^ uVar8 << 0x18;
      local_8c = param_2;
      if (((local_a4 < &local_90) && (&local_90 < param_3 + 8)) ||
         (local_a4 < &local_80 && &local_90 < local_a4)) goto LAB_01713f08;
      *local_a4 = local_90;
      param_3[5] = param_2;
      param_3[6] = local_88;
      param_3[7] = local_84;
      param_3 = local_a4;
    } while (local_a8 != &DAT_0044cc1d);
  }
LAB_01712328:
  uVar6 = 0;
LAB_0171232c:
  if ((uVar4 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar6,param_2,uVar4 ^ DAT_018ddaf8,0);
  }
  return;
}

