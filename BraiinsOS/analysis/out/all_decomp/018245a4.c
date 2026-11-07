// FUN_018245a4 @ 018245a4 size=2416 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_018245a4(uint *param_1,uint *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0 [4];
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  undefined4 local_74;
  undefined1 auStack_70 [32];
  uint local_50 [4];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  FUN_016dd606(&local_98,0,0x24,0);
  FUN_016dd606(auStack_70,0,0x20);
  local_74 = 1;
  local_d0 = 9;
  local_e8 = 8;
  local_50[0] = *param_2;
  local_50[1] = param_2[1];
  local_50[2] = param_2[2];
  local_50[3] = param_2[3];
  local_40 = param_2[4];
  local_3c = param_2[5];
  local_38 = param_2[6];
  local_34 = param_2[7];
  local_30 = param_2[8];
  local_c0[0] = *param_1;
  local_c0[1] = param_1[1];
  local_c0[2] = param_1[2];
  local_c0[3] = param_1[3];
  local_b0 = param_1[4];
  local_ac = param_1[5];
  local_a8 = param_1[6];
  local_a4 = param_1[7];
  local_e4 = -1;
  local_a0 = param_1[8];
  uVar8 = local_c0[0];
  do {
    bVar6 = (byte)(uVar8 >> 0x18);
    bVar1 = (byte)uVar8;
    bVar4 = (byte)(uVar8 >> 8);
    bVar5 = (byte)(uVar8 >> 0x10);
    lVar2 = (longlong)(int)uVar8;
    iVar11 = LZCOUNT((uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) <<
                                      1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                   bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7) << 0x18
                     | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                        << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                     bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                       0x10 | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                               bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                             bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                     (uint)(byte)((((((((bVar6 & 1) << 1 | (bVar6 & 2) >> 1) << 1 | (bVar6 & 4) >> 2
                                      ) << 1 | (bVar6 & 8) >> 3) << 1 | (bVar6 & 0x10) >> 4) << 1 |
                                   (bVar6 & 0x20) >> 5) << 1 | (bVar6 | 0xc0) >> 6 & 1) << 1 | 1));
    if (iVar11 == 0x1e) {
      lVar3 = 0;
      uVar14 = 0x40000000;
      local_dc = 0;
      local_c8 = 1;
      local_cc = 0;
      local_d8 = 0;
      local_c4 = 0;
      local_d4 = 0;
      local_e4 = local_e4 - iVar11;
    }
    else {
      local_cc = 0;
      uVar12 = uVar8 >> iVar11;
      uVar14 = 1 << iVar11;
      local_c8 = 1;
      uVar7 = 0x1e - iVar11;
      local_c4 = 0;
      uVar10 = local_50[0];
      iVar15 = local_e4 - iVar11;
      do {
        if (iVar15 < 0) {
          uVar9 = -uVar10;
          uVar13 = -local_c4;
          iVar15 = iVar11 - local_e4;
          uVar16 = -uVar14;
          local_c4 = local_c8;
          uVar14 = local_cc;
          uVar10 = uVar12;
        }
        else {
          uVar9 = uVar12;
          uVar16 = local_cc;
          uVar13 = local_c8;
        }
        uVar12 = iVar15 + 1U;
        if ((int)uVar7 <= (int)(iVar15 + 1U)) {
          uVar12 = uVar7;
        }
        uVar12 = 0xffffffffU >> (0x20 - uVar12 & 0xff) & 0xff &
                 (int)(short)(ushort)(byte)(&DAT_00563c2c)[(uVar10 & 0xff) >> 1] * (int)(short)uVar9
        ;
        uVar9 = uVar10 * uVar12 + uVar9;
        local_cc = uVar14 * uVar12 + uVar16;
        local_c8 = local_c4 * uVar12 + uVar13;
        uVar12 = uVar9 | -1 << (uVar7 & 0xff);
        bVar4 = (byte)uVar12;
        bVar5 = (byte)(uVar12 >> 8);
        bVar6 = (byte)(uVar12 >> 0x10);
        bVar1 = (byte)(uVar12 >> 0x18);
        iVar11 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
                                          ) << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                 bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                             bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 | bVar6 >> 2 & 1
                                          ) << 1 | bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) << 1 |
                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                         8 | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                              bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                            bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
        uVar7 = uVar7 - iVar11;
        iVar17 = iVar15 - iVar11;
        uVar12 = uVar9 >> iVar11;
        uVar14 = uVar14 << iVar11;
        local_c4 = local_c4 << iVar11;
        local_e4 = iVar15;
        iVar15 = iVar17;
      } while (uVar7 != 0);
      local_d4 = (int)local_c4 >> 0x1f;
      local_d8 = (int)local_cc >> 0x1f;
      local_dc = (int)local_c8 >> 0x1f;
      lVar3 = (longlong)(int)local_c4 * (longlong)(int)uVar8;
      lVar2 = (longlong)(int)local_50[0] * (longlong)(int)local_cc +
              (longlong)(int)local_c8 * (longlong)(int)uVar8;
      local_e4 = iVar17;
    }
    local_e0 = (int)((ulonglong)lVar2 >> 0x20);
    lVar3 = (longlong)(int)local_50[0] * (longlong)(int)uVar14 + lVar3;
    iVar11 = (int)((ulonglong)lVar3 >> 0x20);
    FUN_01824094(&local_98,&local_74,uVar14,local_c4,local_cc,local_c8,param_2);
    uVar12 = (uint)lVar2 >> 0x1e | local_e0 << 2;
    uVar10 = (uint)lVar3 >> 0x1e | iVar11 << 2;
    if (local_d0 < 2) {
      local_c0[local_e8] = uVar12;
      local_50[local_e8] = uVar10;
      uVar8 = local_c0[0];
      if (local_c0[0] == 0) goto LAB_01824e64;
    }
    else {
      uVar16 = (uint)((ulonglong)local_c8 * (ulonglong)local_c0[1]);
      lVar2 = (longlong)(int)uVar14 * (longlong)(int)local_50[1] +
              CONCAT44(local_c4 * ((int)local_c0[1] >> 0x1f) + local_c0[1] * local_d4 +
                       (int)((ulonglong)local_c4 * (ulonglong)local_c0[1] >> 0x20),
                       (int)((ulonglong)local_c4 * (ulonglong)local_c0[1]));
      uVar8 = (uint)lVar2;
      uVar7 = uVar8 + uVar10;
      uVar9 = (uint)((ulonglong)local_cc * (ulonglong)local_50[1]);
      iVar15 = (int)((ulonglong)lVar2 >> 0x20) + (iVar11 >> 0x1e) + (uint)CARRY4(uVar8,uVar10);
      uVar8 = uVar9 + uVar12;
      uVar13 = uVar16 + uVar8;
      iVar11 = local_c8 * ((int)local_c0[1] >> 0x1f) + local_c0[1] * local_dc +
               (int)((ulonglong)local_c8 * (ulonglong)local_c0[1] >> 0x20) +
               local_cc * ((int)local_50[1] >> 0x1f) + local_50[1] * local_d8 +
               (int)((ulonglong)local_cc * (ulonglong)local_50[1] >> 0x20) + (local_e0 >> 0x1e) +
               (uint)CARRY4(uVar9,uVar12) + (uint)CARRY4(uVar16,uVar8);
      local_c0[0] = uVar13 & 0x3fffffff;
      uVar10 = uVar7 >> 0x1e | iVar15 * 4;
      uVar12 = uVar13 >> 0x1e | iVar11 * 4;
      local_50[0] = uVar7 & 0x3fffffff;
      if (local_d0 == 2) {
        local_50[1] = uVar10;
        local_c0[1] = uVar12;
        uVar8 = local_c0[0];
        if (local_c0[0] == 0) {
          uVar7 = uVar12;
          goto LAB_01824e20;
        }
      }
      else {
        lVar2 = (longlong)(int)local_50[2] * (longlong)(int)uVar14 +
                ((ulonglong)
                 (local_c4 * ((int)local_c0[2] >> 0x1f) + local_c0[2] * local_d4 +
                 (int)((ulonglong)local_c4 * (ulonglong)local_c0[2] >> 0x20)) << 0x20 |
                (ulonglong)local_c4 * (ulonglong)local_c0[2] & 0xffffffff);
        uVar8 = (uint)lVar2;
        uVar9 = uVar8 + uVar10;
        uVar7 = (uint)((ulonglong)local_cc * (ulonglong)local_50[2]);
        iVar15 = (int)((ulonglong)lVar2 >> 0x20) + (iVar15 >> 0x1e) + (uint)CARRY4(uVar8,uVar10);
        uVar13 = (uint)((ulonglong)local_c8 * (ulonglong)local_c0[2]);
        uVar10 = uVar7 + uVar13;
        uVar8 = uVar10 + uVar12;
        iVar11 = local_cc * ((int)local_50[2] >> 0x1f) + local_50[2] * local_d8 +
                 (int)((ulonglong)local_cc * (ulonglong)local_50[2] >> 0x20) +
                 local_c8 * ((int)local_c0[2] >> 0x1f) + local_c0[2] * local_dc +
                 (int)((ulonglong)local_c8 * (ulonglong)local_c0[2] >> 0x20) +
                 (uint)CARRY4(uVar7,uVar13) + (iVar11 >> 0x1e) + (uint)CARRY4(uVar10,uVar12);
        uVar10 = uVar9 >> 0x1e | iVar15 * 4;
        uVar7 = uVar8 >> 0x1e | iVar11 * 4;
        local_50[1] = uVar9 & 0x3fffffff;
        local_c0[1] = uVar8 & 0x3fffffff;
        if (local_d0 != 3) {
          lVar2 = (longlong)(int)local_50[3] * (longlong)(int)uVar14 +
                  ((ulonglong)
                   (local_c4 * ((int)local_c0[3] >> 0x1f) + local_c0[3] * local_d4 +
                   (int)((ulonglong)local_c4 * (ulonglong)local_c0[3] >> 0x20)) << 0x20 |
                  (ulonglong)local_c4 * (ulonglong)local_c0[3] & 0xffffffff);
          uVar12 = (uint)lVar2;
          uVar9 = uVar12 + uVar10;
          uVar8 = (uint)((ulonglong)local_cc * (ulonglong)local_50[3]);
          iVar15 = (int)((ulonglong)lVar2 >> 0x20) + (iVar15 >> 0x1e) + (uint)CARRY4(uVar12,uVar10);
          uVar10 = (uint)((ulonglong)local_c8 * (ulonglong)local_c0[3]);
          uVar12 = uVar8 + uVar10;
          uVar13 = uVar12 + uVar7;
          iVar11 = local_cc * ((int)local_50[3] >> 0x1f) + local_50[3] * local_d8 +
                   (int)((ulonglong)local_cc * (ulonglong)local_50[3] >> 0x20) +
                   local_c8 * ((int)local_c0[3] >> 0x1f) + local_c0[3] * local_dc +
                   (int)((ulonglong)local_c8 * (ulonglong)local_c0[3] >> 0x20) +
                   (uint)CARRY4(uVar8,uVar10) + (iVar11 >> 0x1e) + (uint)CARRY4(uVar12,uVar7);
          uVar10 = uVar9 >> 0x1e | iVar15 * 4;
          uVar7 = uVar13 >> 0x1e | iVar11 * 4;
          local_50[2] = uVar9 & 0x3fffffff;
          local_c0[2] = uVar13 & 0x3fffffff;
          if (local_d0 != 4) {
            uVar8 = (uint)((ulonglong)local_c8 * (ulonglong)local_b0);
            lVar2 = (longlong)(int)uVar14 * (longlong)(int)local_40 +
                    CONCAT44(local_c4 * ((int)local_b0 >> 0x1f) + local_b0 * local_d4 +
                             (int)((ulonglong)local_c4 * (ulonglong)local_b0 >> 0x20),
                             (int)((ulonglong)local_c4 * (ulonglong)local_b0));
            uVar12 = (uint)lVar2;
            uVar13 = uVar12 + uVar10;
            iVar15 = (int)((ulonglong)lVar2 >> 0x20) + (iVar15 >> 0x1e) +
                     (uint)CARRY4(uVar12,uVar10);
            uVar10 = (uint)((ulonglong)local_cc * (ulonglong)local_40);
            uVar12 = uVar8 + uVar10;
            uVar9 = uVar12 + uVar7;
            iVar11 = local_c8 * ((int)local_b0 >> 0x1f) + local_b0 * local_dc +
                     (int)((ulonglong)local_c8 * (ulonglong)local_b0 >> 0x20) +
                     local_cc * ((int)local_40 >> 0x1f) + local_40 * local_d8 +
                     (int)((ulonglong)local_cc * (ulonglong)local_40 >> 0x20) +
                     (uint)CARRY4(uVar8,uVar10) + (iVar11 >> 0x1e) + (uint)CARRY4(uVar12,uVar7);
            uVar10 = uVar13 >> 0x1e | iVar15 * 4;
            uVar7 = uVar9 >> 0x1e | iVar11 * 4;
            local_50[3] = uVar13 & 0x3fffffff;
            local_c0[3] = uVar9 & 0x3fffffff;
            if (local_d0 != 5) {
              uVar9 = (uint)((ulonglong)local_c8 * (ulonglong)local_ac);
              lVar2 = (longlong)(int)uVar14 * (longlong)(int)local_3c +
                      CONCAT44(local_c4 * ((int)local_ac >> 0x1f) + local_ac * local_d4 +
                               (int)((ulonglong)local_c4 * (ulonglong)local_ac >> 0x20),
                               (int)((ulonglong)local_c4 * (ulonglong)local_ac));
              uVar8 = (uint)lVar2;
              uVar12 = uVar8 + uVar10;
              iVar15 = (int)((ulonglong)lVar2 >> 0x20) + (iVar15 >> 0x1e) +
                       (uint)CARRY4(uVar8,uVar10);
              uVar10 = (uint)((ulonglong)local_cc * (ulonglong)local_3c);
              uVar8 = uVar9 + uVar10;
              uVar13 = uVar8 + uVar7;
              iVar11 = local_c8 * ((int)local_ac >> 0x1f) + local_ac * local_dc +
                       (int)((ulonglong)local_c8 * (ulonglong)local_ac >> 0x20) +
                       local_cc * ((int)local_3c >> 0x1f) + local_3c * local_d8 +
                       (int)((ulonglong)local_cc * (ulonglong)local_3c >> 0x20) +
                       (uint)CARRY4(uVar9,uVar10) + (iVar11 >> 0x1e) + (uint)CARRY4(uVar8,uVar7);
              uVar10 = uVar12 >> 0x1e | iVar15 * 4;
              uVar7 = uVar13 >> 0x1e | iVar11 * 4;
              local_40 = uVar12 & 0x3fffffff;
              local_b0 = uVar13 & 0x3fffffff;
              if (local_d0 != 6) {
                uVar9 = (uint)((ulonglong)local_c8 * (ulonglong)local_a8);
                lVar2 = (longlong)(int)uVar14 * (longlong)(int)local_38 +
                        CONCAT44(local_c4 * ((int)local_a8 >> 0x1f) + local_a8 * local_d4 +
                                 (int)((ulonglong)local_c4 * (ulonglong)local_a8 >> 0x20),
                                 (int)((ulonglong)local_c4 * (ulonglong)local_a8));
                uVar8 = (uint)lVar2;
                uVar12 = uVar8 + uVar10;
                uVar16 = (uint)((ulonglong)local_cc * (ulonglong)local_38);
                iVar15 = (int)((ulonglong)lVar2 >> 0x20) + (iVar15 >> 0x1e) +
                         (uint)CARRY4(uVar8,uVar10);
                uVar8 = uVar9 + uVar16;
                uVar13 = uVar8 + uVar7;
                iVar11 = local_c8 * ((int)local_a8 >> 0x1f) + local_a8 * local_dc +
                         (int)((ulonglong)local_c8 * (ulonglong)local_a8 >> 0x20) +
                         local_cc * ((int)local_38 >> 0x1f) + local_38 * local_d8 +
                         (int)((ulonglong)local_cc * (ulonglong)local_38 >> 0x20) +
                         (uint)CARRY4(uVar9,uVar16) + (iVar11 >> 0x1e) + (uint)CARRY4(uVar8,uVar7);
                uVar10 = uVar12 >> 0x1e | iVar15 * 4;
                uVar7 = uVar13 >> 0x1e | iVar11 * 4;
                local_3c = uVar12 & 0x3fffffff;
                local_ac = uVar13 & 0x3fffffff;
                if (local_d0 != 7) {
                  uVar9 = (uint)((ulonglong)local_c8 * (ulonglong)local_a4);
                  lVar2 = (longlong)(int)uVar14 * (longlong)(int)local_34 +
                          CONCAT44(local_c4 * ((int)local_a4 >> 0x1f) + local_a4 * local_d4 +
                                   (int)((ulonglong)local_c4 * (ulonglong)local_a4 >> 0x20),
                                   (int)((ulonglong)local_c4 * (ulonglong)local_a4));
                  uVar8 = (uint)lVar2;
                  uVar12 = uVar8 + uVar10;
                  iVar15 = (int)((ulonglong)lVar2 >> 0x20) + (iVar15 >> 0x1e) +
                           (uint)CARRY4(uVar8,uVar10);
                  uVar10 = (uint)((ulonglong)local_cc * (ulonglong)local_34);
                  uVar8 = uVar9 + uVar10;
                  uVar13 = uVar8 + uVar7;
                  iVar11 = local_c8 * ((int)local_a4 >> 0x1f) + local_a4 * local_dc +
                           (int)((ulonglong)local_c8 * (ulonglong)local_a4 >> 0x20) +
                           local_cc * ((int)local_34 >> 0x1f) + local_34 * local_d8 +
                           (int)((ulonglong)local_cc * (ulonglong)local_34 >> 0x20) +
                           (uint)CARRY4(uVar9,uVar10) + (iVar11 >> 0x1e) + (uint)CARRY4(uVar8,uVar7)
                  ;
                  uVar10 = uVar12 >> 0x1e | iVar15 * 4;
                  uVar7 = uVar13 >> 0x1e | iVar11 * 4;
                  local_38 = uVar12 & 0x3fffffff;
                  local_a8 = uVar13 & 0x3fffffff;
                  if (local_d0 != 8) {
                    lVar2 = (longlong)(int)local_30 * (longlong)(int)uVar14 +
                            ((ulonglong)
                             (local_c4 * ((int)local_a0 >> 0x1f) + local_a0 * local_d4 +
                             (int)((ulonglong)local_c4 * (ulonglong)local_a0 >> 0x20)) << 0x20 |
                            (ulonglong)local_c4 * (ulonglong)local_a0 & 0xffffffff);
                    uVar14 = (uint)lVar2;
                    uVar12 = uVar14 + uVar10;
                    uVar8 = (uint)((ulonglong)local_c8 * (ulonglong)local_a0);
                    uVar9 = (uint)((ulonglong)local_cc * (ulonglong)local_30);
                    uVar13 = uVar9 + uVar8;
                    uVar16 = uVar13 + uVar7;
                    uVar10 = uVar12 >> 0x1e |
                             ((int)((ulonglong)lVar2 >> 0x20) + (iVar15 >> 0x1e) +
                             (uint)CARRY4(uVar14,uVar10)) * 4;
                    uVar7 = uVar16 >> 0x1e |
                            (local_cc * ((int)local_30 >> 0x1f) + local_30 * local_d8 +
                             (int)((ulonglong)local_cc * (ulonglong)local_30 >> 0x20) +
                             local_c8 * ((int)local_a0 >> 0x1f) + local_a0 * local_dc +
                             (int)((ulonglong)local_c8 * (ulonglong)local_a0 >> 0x20) +
                             (uint)CARRY4(uVar9,uVar8) + (iVar11 >> 0x1e) +
                            (uint)CARRY4(uVar13,uVar7)) * 4;
                    local_34 = uVar12 & 0x3fffffff;
                    local_a4 = uVar16 & 0x3fffffff;
                  }
                }
              }
            }
          }
        }
        local_c0[local_e8] = uVar7;
        local_50[local_e8] = uVar10;
        uVar12 = uVar7;
        uVar8 = local_c0[0];
        if (local_c0[0] == 0) {
          uVar12 = local_c0[2] | local_c0[1];
          if ((((local_d0 != 3) && (uVar12 = uVar12 | local_c0[3], local_d0 != 4)) &&
              (uVar12 = uVar12 | local_b0, local_d0 != 5)) &&
             (((uVar12 = uVar12 | local_ac, local_d0 != 6 &&
               (uVar12 = uVar12 | local_a8, local_d0 != 7)) &&
              (uVar12 = uVar12 | local_a4, local_d0 != 8)))) {
            uVar12 = uVar12 | local_a0;
          }
LAB_01824e20:
          if (uVar12 == 0) {
LAB_01824e64:
            FUN_0181e4fc(&local_98,uVar10,param_2);
            *param_1 = local_98;
            param_1[1] = uStack_94;
            param_1[2] = uStack_90;
            param_1[3] = uStack_8c;
            param_1[4] = local_88;
            param_1[5] = uStack_84;
            param_1[6] = uStack_80;
            param_1[7] = uStack_7c;
            param_1[8] = local_78;
            if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
              FUN_016d2b78();
            }
            return 0;
          }
          uVar12 = uVar7;
          uVar8 = 0;
        }
      }
    }
    iVar11 = local_d0 + -2;
    if ((uVar10 == (int)uVar10 >> 0x1f && uVar12 == (int)uVar12 >> 0x1f) && -1 < iVar11) {
      local_d0 = local_e8;
      local_e8 = local_e8 + -1;
      local_c0[iVar11] = local_c0[iVar11] | uVar12 << 0x1e;
      local_50[iVar11] = local_50[iVar11] | uVar10 << 0x1e;
      uVar8 = local_c0[0];
    }
  } while( true );
}

