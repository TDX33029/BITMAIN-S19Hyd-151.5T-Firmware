// FUN_01826550 @ 01826550 size=2632 calls_out=3 calls_in=2
// strings: 

void FUN_01826550(uint *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined8 uVar23;
  int local_d4;
  int local_d0;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0 [4];
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
  uint local_54 [4];
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_2c;
  undefined1 auStack_28 [4];
  
  local_6c = param_1[4];
  local_2c = DAT_018ddaf8;
  local_78 = param_1[1];
  local_68 = param_1[5];
  local_64 = param_1[6];
  local_60 = param_1[7];
  local_74 = param_1[2];
  local_70 = param_1[3];
  local_5c = param_1[8];
  local_58 = param_1[9];
  local_7c = *param_1;
  FUN_0181ea1c();
  if (((((((((local_78 != 0 || local_7c != 0) || local_74 != 0) || local_70 != 0) || local_6c != 0)
         || local_68 != 0) || local_64 != 0) || local_60 != 0) || local_5c != 0) || local_58 != 0) {
    local_54[0] = (local_7c | local_78 << 0x1a) & 0x3fffffff;
    local_40 = (local_64 & 0xffffff) << 6 | local_68 >> 0x14;
    local_38 = (local_58 & 0x3f) << 0x18 | local_5c >> 2;
    local_54[1] = (local_74 & 0xff) << 0x16 | local_78 >> 4;
    local_54[3] = (local_6c & 0xffff) << 0xe | local_70 >> 0xc;
    local_44 = (local_68 & 0xfffff) << 10 | local_6c >> 0x10;
    local_54[2] = (local_70 & 0xfff) << 0x12 | local_74 >> 8;
    local_d4 = 0x32;
    local_c0 = 0;
    local_ac = 9;
    local_3c = (local_5c << 0x1c | local_60 << 2) & 0x3fffffff | local_64 >> 0x18;
    local_a0[0] = 0xfffffc2f;
    local_a0[1] = 0xfffffffc;
    local_a0[2] = 0;
    local_a0[3] = 0;
    local_34 = local_58 >> 6;
    uVar19 = 0xfffffc2f;
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    local_84 = 0;
    local_d0 = -1;
    local_80 = 0x10000;
    do {
      uVar22 = uVar19 | local_a0[1] << 0x1e;
      bVar6 = (byte)(local_54[0] >> 0x18);
      bVar1 = (byte)local_54[0];
      bVar4 = (byte)(local_54[0] >> 8);
      bVar5 = (byte)(local_54[0] >> 0x10);
      uVar15 = uVar22 >> 1;
      local_a4 = uVar22 >> 2;
      uVar13 = LZCOUNT((uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1)
                                        << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                     bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7) <<
                       0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                               bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                             bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                       (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1)
                                        << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                     bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8
                       | (uint)(byte)((((((((bVar6 & 1) << 1 | (bVar6 & 2) >> 1) << 1 |
                                          (bVar6 & 4) >> 2) << 1 | (bVar6 & 8) >> 3) << 1 |
                                        (bVar6 & 0x10) >> 4) << 1 | (bVar6 & 0x20) >> 5) << 1 |
                                      (bVar6 | 0xc0) >> 6 & 1) << 1 | 1));
      local_c0 = local_c0 ^ (uVar15 ^ local_a4) & uVar13;
      iVar9 = local_d0 - uVar13;
      lVar2 = (longlong)(int)local_54[0];
      if (uVar13 == 0x1e) {
        uVar16 = 0;
        local_a8 = 1;
        lVar3 = 0;
        uVar21 = 0x40000000;
        local_bc = 0;
        local_b8 = 0;
        local_a4 = 0;
        local_b4 = 0;
        local_d0 = iVar9;
      }
      else {
        uVar16 = 0;
        uVar14 = (local_54[0] | local_54[1] << 0x1e) >> uVar13;
        uVar21 = 1 << uVar13;
        local_a8 = 1;
        uVar10 = 0x1e - uVar13;
        uVar7 = 0;
        do {
          if (iVar9 < 0) {
            local_d0 = uVar13 - local_d0;
            local_c0 = local_c0 ^ (uVar22 & uVar14) >> 1;
            uVar15 = uVar14 >> 1;
            local_a4 = uVar14 >> 2;
            uVar8 = local_a8;
            uVar12 = uVar22;
            uVar13 = uVar21;
            uVar21 = uVar16;
            uVar22 = uVar14;
          }
          else {
            uVar8 = uVar7;
            uVar12 = uVar14;
            uVar13 = uVar16;
            uVar7 = local_a8;
            local_d0 = iVar9;
          }
          uVar16 = local_d0 + 1U;
          if ((int)uVar10 <= (int)(local_d0 + 1U)) {
            uVar16 = uVar10;
          }
          uVar14 = 0xffffffffU >> (0x20 - uVar16 & 0xff) & 0xff &
                   (int)(short)(ushort)(byte)(&DAT_00563c2c)[uVar15 & 0x7f] * (int)(short)uVar12;
          uVar12 = uVar22 * uVar14 + uVar12;
          uVar16 = uVar21 * uVar14 + uVar13;
          local_a8 = uVar8 * uVar14 + uVar7;
          uVar13 = uVar12 | -1 << (uVar10 & 0xff);
          bVar4 = (byte)uVar13;
          bVar5 = (byte)(uVar13 >> 8);
          bVar6 = (byte)(uVar13 >> 0x10);
          bVar1 = (byte)(uVar13 >> 0x18);
          uVar13 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                            bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                          bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                        bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                            bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                          bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                        bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                            bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                          bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                        bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                            bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                          bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                        bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
          uVar10 = uVar10 - uVar13;
          local_c0 = (local_a4 ^ uVar15) & uVar13 ^ local_c0;
          uVar14 = uVar12 >> uVar13;
          uVar21 = uVar21 << uVar13;
          iVar9 = local_d0 - uVar13;
          uVar7 = uVar8 << uVar13;
        } while (uVar10 != 0);
        local_bc = (int)local_a8 >> 0x1f;
        local_b4 = (int)uVar7 >> 0x1f;
        local_b8 = (int)uVar16 >> 0x1f;
        lVar3 = (longlong)(int)uVar7 * (longlong)(int)local_54[0];
        lVar2 = (longlong)(int)uVar19 * (longlong)(int)uVar16 +
                (longlong)(int)local_a8 * (longlong)(int)local_54[0];
        local_d0 = iVar9;
        local_a4 = uVar7;
      }
      iVar17 = (int)((ulonglong)lVar2 >> 0x20);
      lVar3 = (longlong)(int)uVar19 * (longlong)(int)uVar21 + lVar3;
      iVar20 = (int)((ulonglong)lVar3 >> 0x20);
      iVar9 = local_ac + -1;
      uVar22 = (uint)lVar2 >> 0x1e | iVar17 << 2;
      uVar15 = (uint)lVar3 >> 0x1e | iVar20 << 2;
      if (local_ac < 2) {
        puVar11 = auStack_28 + iVar9 * 4 + 0x24;
        local_a0[iVar9] = uVar15;
        local_54[iVar9] = uVar22;
        uVar19 = local_a0[0];
        if (local_a0[0] != 1) goto LAB_01826e50;
LAB_01826f70:
        uVar23 = CONCAT44(puVar11,(uint)((local_c0 & 1) == 0));
        goto LAB_01826630;
      }
      lVar2 = (longlong)(int)local_a0[1] * (longlong)(int)uVar21 +
              ((ulonglong)
               (local_a4 * ((int)local_54[1] >> 0x1f) + local_54[1] * local_b4 +
               (int)((ulonglong)local_a4 * (ulonglong)local_54[1] >> 0x20)) << 0x20 |
              (ulonglong)local_a4 * (ulonglong)local_54[1] & 0xffffffff);
      uVar19 = (uint)lVar2;
      uVar14 = uVar19 + uVar15;
      uVar7 = (uint)((ulonglong)uVar16 * (ulonglong)local_a0[1]);
      iVar20 = (int)((ulonglong)lVar2 >> 0x20) + (iVar20 >> 0x1e) + (uint)CARRY4(uVar19,uVar15);
      uVar15 = uVar7 + uVar22;
      uVar19 = (uint)((ulonglong)local_a8 * (ulonglong)local_54[1]);
      local_a0[0] = uVar14 & 0x3fffffff;
      uVar13 = uVar19 + uVar15;
      iVar17 = local_a8 * ((int)local_54[1] >> 0x1f) + local_54[1] * local_bc +
               (int)((ulonglong)local_a8 * (ulonglong)local_54[1] >> 0x20) +
               uVar16 * ((int)local_a0[1] >> 0x1f) + local_a0[1] * local_b8 +
               (int)((ulonglong)uVar16 * (ulonglong)local_a0[1] >> 0x20) + (iVar17 >> 0x1e) +
               (uint)CARRY4(uVar7,uVar22) + (uint)CARRY4(uVar19,uVar15);
      local_54[0] = uVar13 & 0x3fffffff;
      uVar15 = uVar14 >> 0x1e | iVar20 * 4;
      uVar22 = uVar13 >> 0x1e | iVar17 * 4;
      if (local_ac == 2) {
        uVar19 = local_a0[0];
        local_a0[1] = uVar15;
        local_54[1] = uVar22;
        if (local_a0[0] == 1) {
          uVar13 = uVar15;
          goto LAB_01826efc;
        }
      }
      else {
        lVar2 = (longlong)(int)local_a0[2] * (longlong)(int)uVar21 +
                ((ulonglong)
                 (local_a4 * ((int)local_54[2] >> 0x1f) + local_54[2] * local_b4 +
                 (int)((ulonglong)local_a4 * (ulonglong)local_54[2] >> 0x20)) << 0x20 |
                (ulonglong)local_a4 * (ulonglong)local_54[2] & 0xffffffff);
        uVar19 = (uint)lVar2;
        local_a0[1] = uVar19 + uVar15;
        uVar13 = (uint)((ulonglong)uVar16 * (ulonglong)local_a0[2]);
        iVar20 = (int)((ulonglong)lVar2 >> 0x20) + (iVar20 >> 0x1e) + (uint)CARRY4(uVar19,uVar15);
        uVar7 = (uint)((ulonglong)local_a8 * (ulonglong)local_54[2]);
        uVar19 = uVar13 + uVar7;
        uVar15 = uVar19 + uVar22;
        iVar17 = uVar16 * ((int)local_a0[2] >> 0x1f) + local_a0[2] * local_b8 +
                 (int)((ulonglong)uVar16 * (ulonglong)local_a0[2] >> 0x20) +
                 local_a8 * ((int)local_54[2] >> 0x1f) + local_54[2] * local_bc +
                 (int)((ulonglong)local_a8 * (ulonglong)local_54[2] >> 0x20) +
                 (uint)CARRY4(uVar13,uVar7) + (iVar17 >> 0x1e) + (uint)CARRY4(uVar19,uVar22);
        local_54[1] = uVar15 & 0x3fffffff;
        uVar13 = local_a0[1] >> 0x1e | iVar20 * 4;
        local_a0[1] = local_a0[1] & 0x3fffffff;
        uVar22 = uVar15 >> 0x1e | iVar17 * 4;
        if (local_ac != 3) {
          lVar2 = (longlong)(int)local_a0[3] * (longlong)(int)uVar21 +
                  ((ulonglong)
                   (local_a4 * ((int)local_54[3] >> 0x1f) + local_54[3] * local_b4 +
                   (int)((ulonglong)local_a4 * (ulonglong)local_54[3] >> 0x20)) << 0x20 |
                  (ulonglong)local_a4 * (ulonglong)local_54[3] & 0xffffffff);
          uVar19 = (uint)lVar2;
          local_a0[2] = uVar19 + uVar13;
          uVar15 = (uint)((ulonglong)uVar16 * (ulonglong)local_a0[3]);
          iVar18 = (int)((ulonglong)lVar2 >> 0x20) + (iVar20 >> 0x1e) + (uint)CARRY4(uVar19,uVar13);
          uVar7 = (uint)((ulonglong)local_a8 * (ulonglong)local_54[3]);
          uVar13 = uVar15 + uVar7;
          uVar19 = uVar13 + uVar22;
          iVar20 = uVar16 * ((int)local_a0[3] >> 0x1f) + local_a0[3] * local_b8 +
                   (int)((ulonglong)uVar16 * (ulonglong)local_a0[3] >> 0x20) +
                   local_a8 * ((int)local_54[3] >> 0x1f) + local_54[3] * local_bc +
                   (int)((ulonglong)local_a8 * (ulonglong)local_54[3] >> 0x20) +
                   (uint)CARRY4(uVar15,uVar7) + (iVar17 >> 0x1e) + (uint)CARRY4(uVar13,uVar22);
          local_54[2] = uVar19 & 0x3fffffff;
          uVar13 = local_a0[2] >> 0x1e | iVar18 * 4;
          local_a0[2] = local_a0[2] & 0x3fffffff;
          uVar22 = uVar19 >> 0x1e | iVar20 * 4;
          if (local_ac != 4) {
            lVar2 = (longlong)(int)local_90 * (longlong)(int)uVar21 +
                    ((ulonglong)
                     (local_a4 * ((int)local_44 >> 0x1f) + local_44 * local_b4 +
                     (int)((ulonglong)local_a4 * (ulonglong)local_44 >> 0x20)) << 0x20 |
                    (ulonglong)local_a4 * (ulonglong)local_44 & 0xffffffff);
            uVar19 = (uint)lVar2;
            uVar15 = uVar19 + uVar13;
            uVar7 = (uint)((ulonglong)local_a8 * (ulonglong)local_44);
            iVar17 = (int)((ulonglong)lVar2 >> 0x20) + (iVar18 >> 0x1e) +
                     (uint)CARRY4(uVar19,uVar13);
            uVar14 = (uint)((ulonglong)uVar16 * (ulonglong)local_90);
            uVar13 = uVar7 + uVar14;
            uVar19 = uVar13 + uVar22;
            iVar20 = local_a8 * ((int)local_44 >> 0x1f) + local_44 * local_bc +
                     (int)((ulonglong)local_a8 * (ulonglong)local_44 >> 0x20) +
                     uVar16 * ((int)local_90 >> 0x1f) + local_90 * local_b8 +
                     (int)((ulonglong)uVar16 * (ulonglong)local_90 >> 0x20) +
                     (uint)CARRY4(uVar7,uVar14) + (iVar20 >> 0x1e) + (uint)CARRY4(uVar13,uVar22);
            local_54[3] = uVar19 & 0x3fffffff;
            local_a0[3] = uVar15 & 0x3fffffff;
            uVar13 = uVar15 >> 0x1e | iVar17 * 4;
            uVar22 = uVar19 >> 0x1e | iVar20 * 4;
            if (local_ac != 5) {
              uVar7 = (uint)((ulonglong)local_a8 * (ulonglong)local_40);
              lVar2 = (longlong)(int)uVar21 * (longlong)(int)local_8c +
                      CONCAT44(local_a4 * ((int)local_40 >> 0x1f) + local_40 * local_b4 +
                               (int)((ulonglong)local_a4 * (ulonglong)local_40 >> 0x20),
                               (int)((ulonglong)local_a4 * (ulonglong)local_40));
              uVar19 = (uint)lVar2;
              uVar15 = uVar19 + uVar13;
              uVar10 = (uint)((ulonglong)uVar16 * (ulonglong)local_8c);
              iVar17 = (int)((ulonglong)lVar2 >> 0x20) + (iVar17 >> 0x1e) +
                       (uint)CARRY4(uVar19,uVar13);
              uVar19 = uVar7 + uVar10;
              uVar14 = uVar19 + uVar22;
              iVar20 = local_a8 * ((int)local_40 >> 0x1f) + local_40 * local_bc +
                       (int)((ulonglong)local_a8 * (ulonglong)local_40 >> 0x20) +
                       uVar16 * ((int)local_8c >> 0x1f) + local_8c * local_b8 +
                       (int)((ulonglong)uVar16 * (ulonglong)local_8c >> 0x20) +
                       (uint)CARRY4(uVar7,uVar10) + (iVar20 >> 0x1e) + (uint)CARRY4(uVar19,uVar22);
              local_44 = uVar14 & 0x3fffffff;
              local_90 = uVar15 & 0x3fffffff;
              uVar13 = uVar15 >> 0x1e | iVar17 * 4;
              uVar22 = uVar14 >> 0x1e | iVar20 * 4;
              if (local_ac != 6) {
                uVar7 = (uint)((ulonglong)local_a8 * (ulonglong)local_3c);
                lVar2 = (longlong)(int)uVar21 * (longlong)(int)local_88 +
                        CONCAT44(local_a4 * ((int)local_3c >> 0x1f) + local_3c * local_b4 +
                                 (int)((ulonglong)local_a4 * (ulonglong)local_3c >> 0x20),
                                 (int)((ulonglong)local_a4 * (ulonglong)local_3c));
                uVar19 = (uint)lVar2;
                uVar15 = uVar19 + uVar13;
                uVar10 = (uint)((ulonglong)uVar16 * (ulonglong)local_88);
                iVar17 = (int)((ulonglong)lVar2 >> 0x20) + (iVar17 >> 0x1e) +
                         (uint)CARRY4(uVar19,uVar13);
                uVar19 = uVar7 + uVar10;
                uVar14 = uVar19 + uVar22;
                iVar20 = local_a8 * ((int)local_3c >> 0x1f) + local_3c * local_bc +
                         (int)((ulonglong)local_a8 * (ulonglong)local_3c >> 0x20) +
                         uVar16 * ((int)local_88 >> 0x1f) + local_88 * local_b8 +
                         (int)((ulonglong)uVar16 * (ulonglong)local_88 >> 0x20) +
                         (uint)CARRY4(uVar7,uVar10) + (iVar20 >> 0x1e) + (uint)CARRY4(uVar19,uVar22)
                ;
                local_40 = uVar14 & 0x3fffffff;
                local_8c = uVar15 & 0x3fffffff;
                uVar13 = uVar15 >> 0x1e | iVar17 * 4;
                uVar22 = uVar14 >> 0x1e | iVar20 * 4;
                if (local_ac != 7) {
                  uVar7 = (uint)((ulonglong)local_a8 * (ulonglong)local_38);
                  lVar2 = (longlong)(int)uVar21 * (longlong)(int)local_84 +
                          CONCAT44(local_a4 * ((int)local_38 >> 0x1f) + local_38 * local_b4 +
                                   (int)((ulonglong)local_a4 * (ulonglong)local_38 >> 0x20),
                                   (int)((ulonglong)local_a4 * (ulonglong)local_38));
                  uVar19 = (uint)lVar2;
                  uVar15 = uVar19 + uVar13;
                  uVar10 = (uint)((ulonglong)uVar16 * (ulonglong)local_84);
                  iVar17 = (int)((ulonglong)lVar2 >> 0x20) + (iVar17 >> 0x1e) +
                           (uint)CARRY4(uVar19,uVar13);
                  uVar19 = uVar7 + uVar10;
                  uVar14 = uVar19 + uVar22;
                  iVar20 = local_a8 * ((int)local_38 >> 0x1f) + local_38 * local_bc +
                           (int)((ulonglong)local_a8 * (ulonglong)local_38 >> 0x20) +
                           uVar16 * ((int)local_84 >> 0x1f) + local_84 * local_b8 +
                           (int)((ulonglong)uVar16 * (ulonglong)local_84 >> 0x20) +
                           (uint)CARRY4(uVar7,uVar10) + (iVar20 >> 0x1e) +
                           (uint)CARRY4(uVar19,uVar22);
                  local_3c = uVar14 & 0x3fffffff;
                  local_88 = uVar15 & 0x3fffffff;
                  uVar13 = uVar15 >> 0x1e | iVar17 * 4;
                  uVar22 = uVar14 >> 0x1e | iVar20 * 4;
                  if (local_ac != 8) {
                    lVar2 = (longlong)(int)local_80 * (longlong)(int)uVar21 +
                            ((ulonglong)
                             (local_a4 * ((int)local_34 >> 0x1f) + local_34 * local_b4 +
                             (int)((ulonglong)local_a4 * (ulonglong)local_34 >> 0x20)) << 0x20 |
                            (ulonglong)local_a4 * (ulonglong)local_34 & 0xffffffff);
                    uVar19 = (uint)lVar2;
                    local_84 = uVar19 + uVar13;
                    uVar15 = (uint)((ulonglong)local_a8 * (ulonglong)local_34);
                    uVar21 = (uint)((ulonglong)uVar16 * (ulonglong)local_80);
                    uVar7 = uVar21 + uVar15;
                    local_38 = uVar7 + uVar22;
                    uVar13 = local_84 >> 0x1e |
                             ((int)((ulonglong)lVar2 >> 0x20) + (iVar17 >> 0x1e) +
                             (uint)CARRY4(uVar19,uVar13)) * 4;
                    uVar22 = local_38 >> 0x1e |
                             (uVar16 * ((int)local_80 >> 0x1f) + local_80 * local_b8 +
                              (int)((ulonglong)uVar16 * (ulonglong)local_80 >> 0x20) +
                              local_a8 * ((int)local_34 >> 0x1f) + local_34 * local_bc +
                              (int)((ulonglong)local_a8 * (ulonglong)local_34 >> 0x20) +
                              (uint)CARRY4(uVar21,uVar15) + (iVar20 >> 0x1e) +
                             (uint)CARRY4(uVar7,uVar22)) * 4;
                    local_84 = local_84 & 0x3fffffff;
                    local_38 = local_38 & 0x3fffffff;
                  }
                }
              }
            }
          }
        }
        local_a0[iVar9] = uVar13;
        local_54[iVar9] = uVar22;
        uVar15 = uVar13;
        uVar19 = local_a0[0];
        if (local_a0[0] == 1) {
          uVar15 = local_a0[1] | local_a0[2];
          if ((((local_ac != 3) && (uVar15 = uVar15 | local_a0[3], local_ac != 4)) &&
              (uVar15 = uVar15 | local_90, local_ac != 5)) &&
             (((uVar15 = uVar15 | local_8c, local_ac != 6 &&
               (uVar15 = uVar15 | local_88, local_ac != 7)) &&
              (uVar15 = uVar15 | local_84, local_ac != 8)))) {
            uVar15 = uVar15 | local_80;
          }
LAB_01826efc:
          puVar11 = (undefined1 *)0x0;
          if (uVar15 == 0) goto LAB_01826f70;
          uVar15 = uVar13;
          uVar19 = 1;
        }
      }
LAB_01826e50:
      if ((uVar15 != 0 || uVar22 != 0) || local_ac + -2 < 0) {
        iVar9 = local_ac;
      }
      local_d4 = local_d4 + -1;
      if (local_d4 == 0) goto LAB_01826f84;
      local_ac = iVar9;
    } while( true );
  }
  uVar23 = CONCAT44(local_6c,1);
LAB_01826630:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),local_2c ^ DAT_018ddaf8,0);
  }
  return;
LAB_01826f84:
  uVar23 = FUN_01825fac(local_54,&local_7c);
  goto LAB_01826630;
}

