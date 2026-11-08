// FUN_01803758 @ 01803758 size=5424 calls_out=2 calls_in=1
// strings: 

void FUN_01803758(int *param_1,int *param_2,int *param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  uint *puVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  uint uVar28;
  uint *puVar29;
  uint *puVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  char *pcVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  uint *puVar41;
  char *pcVar42;
  char *pcVar43;
  uint uVar44;
  uint *puVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  int iVar52;
  int iVar53;
  uint uVar54;
  uint *puVar55;
  uint *puVar56;
  uint uVar57;
  uint *puVar58;
  uint uVar59;
  uint *puVar60;
  uint *puVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  int iVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint *puVar70;
  int iVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  bool bVar75;
  bool bVar76;
  undefined8 uVar77;
  char *local_118;
  uint local_114;
  uint *local_f4;
  uint *local_ec;
  uint *local_dc;
  uint local_d8;
  char *local_cc;
  uint *local_c0;
  uint *local_b8;
  uint *local_b4;
  int *local_b0;
  int *local_ac;
  int local_a8;
  int *local_a4;
  int *local_a0;
  uint *local_94;
  int *local_8c;
  uint *local_88;
  char *local_78;
  int *local_70;
  char *local_64;
  char *local_60;
  uint *local_5c;
  uint local_58;
  int *local_54;
  uint local_50;
  int *local_4c;
  int local_44 [4];
  int *local_34;
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  uVar28 = param_5 >> 0x14;
  if ((int *)(param_5 & 0xfffff) != (int *)0x0) {
    uVar28 = uVar28 + 1;
  }
  piVar20 = (int *)(param_5 & 0xfffff);
  if (uVar28 != 0) {
    puVar29 = (uint *)((int)param_4 + param_5);
    local_114 = 0x27d4eb4f;
    uVar1 = 1 << (param_3[5] & 0xffU);
    uVar57 = 0;
    local_118 = (char *)0x0;
    piVar20 = param_1;
    uVar62 = param_2[3];
    if ((uint)param_2[3] < (uint)param_2[4]) {
      do {
        pcVar43 = (char *)((int)puVar29 - (int)param_4);
        local_94 = puVar29;
        if ((char *)0xfffff < pcVar43) {
          pcVar43 = (char *)0x100000;
          local_94 = param_4 + 0x40000;
        }
        local_88 = (uint *)param_1[1];
        local_a0 = (int *)param_1[4];
        local_a4 = (int *)param_1[3];
        uVar44 = (int)local_94 - (int)local_88;
        if (0xa0000000 < uVar44) {
          iVar16 = (int)param_4 - (int)local_88;
          uVar15 = param_3[1];
          iVar52 = uVar1 + 2;
          uVar44 = iVar16 - iVar52;
          local_88 = (uint *)((int)local_88 + uVar44);
          param_1[1] = (int)local_88;
          param_1[2] = param_1[2] + uVar44;
          iVar40 = 1 << (uVar15 & 0xff);
          if (local_a0 < (int *)(uVar44 + 2)) {
            local_a0 = (int *)&SUB_00000002;
          }
          else {
            local_a0 = (int *)((int)local_a0 + (iVar52 - iVar16));
          }
          param_1[4] = (int)local_a0;
          if (local_a4 < (int *)(uVar44 + 2)) {
            local_a4 = (int *)&SUB_00000002;
          }
          else {
            local_a4 = (int *)((int)local_a4 + (iVar52 - iVar16));
          }
          param_1[3] = (int)local_a4;
          iVar21 = param_1[6];
          param_1[5] = param_1[5] + 1;
          iVar53 = 0;
          do {
            while (uVar15 = *(uint *)(iVar21 + iVar53 * 8), uVar44 <= uVar15) {
              *(uint *)(iVar21 + iVar53 * 8) = (iVar52 - iVar16) + uVar15;
              iVar53 = iVar53 + 1;
              if (iVar40 == iVar53) goto LAB_01804c24;
            }
            *(undefined4 *)(iVar21 + iVar53 * 8) = 0;
            iVar53 = iVar53 + 1;
          } while (iVar40 != iVar53);
LAB_01804c24:
          uVar44 = (int)local_94 - (int)local_88;
          param_1[7] = 0;
        }
        if (param_1 == (int *)0xffffffe4) {
          if (uVar44 <= uVar1) goto LAB_01804a58;
          local_8c = (int *)(uVar44 - uVar1);
          if (local_a0 < local_8c) goto LAB_01804b24;
          local_8c = local_a0;
          if (local_a4 < local_a0) goto LAB_018038b8;
LAB_01804a68:
          uVar44 = param_3[2];
          local_d8 = param_3[1] - uVar44;
          local_78 = (char *)param_3[3];
          if (local_a0 < local_a4) {
            local_ec = (uint *)param_1[2];
            local_b4 = (uint *)((int)local_ec + (int)local_8c);
            local_dc = (uint *)((int)local_ec + (int)local_a4);
          }
          else {
            local_dc = (uint *)0x0;
            local_ec = local_dc;
            local_b4 = local_dc;
          }
          piVar20 = local_a4;
          if (pcVar43 < local_78) goto LAB_01804ac4;
LAB_01803910:
          pcVar37 = local_78;
          if (&DAT_00000040 <= local_78) {
            pcVar37 = &DAT_00000040;
          }
          uVar19 = param_3[4];
          uVar15 = (int)pcVar37 - uVar19;
          iVar40 = 1 << (uVar19 & 0xff);
          local_44[3] = iVar40 - 1;
          local_34 = (int *)((1 << (uVar19 - 0x20 & 0xff) | 1U >> (0x20 - uVar19 & 0xff)) -
                            (uint)(iVar40 == 0));
          piVar20 = (int *)((int)local_34 << (uVar15 & 0xff) | local_44[3] << (uVar15 - 0x20 & 0xff)
                           | (uint)local_44[3] >> (0x20 - uVar15 & 0xff));
          if ((char *)(uVar19 - 1) < pcVar37) {
            local_44[3] = local_44[3] << (uVar15 & 0xff);
            local_34 = piVar20;
          }
          local_c0 = (uint *)((int)param_4 + (int)local_78);
          puVar45 = local_94 + -2;
          local_44[1] = 0xffffffff;
          local_44[2] = 0;
          if (puVar45 <= local_c0) goto LAB_01804ac4;
          local_cc = (char *)0x165667c5;
          uVar15 = (uint)local_78 & 0x1f;
          puVar30 = (uint *)((int)local_88 + (int)local_a4);
          local_f4 = param_4;
          do {
            local_44[0] = 0;
            uVar77 = FUN_018027a8(local_44 + 1,local_c0,(int)puVar45 - (int)local_c0,param_1 + 9,
                                  local_44);
            piVar20 = (int *)((ulonglong)uVar77 >> 0x20);
            iVar40 = (int)uVar77;
            if (local_44[0] == 0) {
              local_c0 = (uint *)((int)local_c0 + iVar40);
            }
            else {
              local_b8 = (uint *)0x9e3779f9;
              local_ac = param_1 + 8;
              local_a8 = 0;
              local_b0 = param_1;
              do {
                local_ac = local_ac + 1;
                puVar58 = (uint *)((int)local_c0 + (*local_ac - (int)local_78));
                if (puVar58 == (uint *)0x0) {
                  uVar19 = 0x27d4eb2f;
                  pcVar37 = local_cc;
                }
                else {
                  if (local_78 < &DAT_00000020) {
                    pcVar37 = local_78 + 0x165667c5;
                    uVar19 = ((char *)0xe9a9983a < local_78) + 0x27d4eb2f;
                    puVar60 = puVar58;
                    if (((uint)local_78 & 0x18) != 0) goto LAB_01803acc;
LAB_01804258:
                    uVar49 = uVar15;
                  }
                  else {
                    uVar49 = 0xc2b2ae3d;
                    iVar52 = 0x60ea27ee;
                    local_58 = 0x7a143579;
                    local_5c = (uint *)0x61c8864e;
                    uVar19 = 0xadc0b5d6;
                    local_50 = 0;
                    local_54 = (int *)0x0;
                    puVar60 = puVar58;
                    local_4c = (int *)local_114;
                    do {
                      puVar70 = puVar60 + 8;
                      lVar3 = (ulonglong)*puVar60 * 0x27d4eb4f;
                      uVar72 = (uint)lVar3;
                      uVar73 = uVar72 + uVar19;
                      uVar65 = puVar60[1] * 0x27d4eb4f + *puVar60 * -0x3d4d51c3 +
                               (int)((ulonglong)lVar3 >> 0x20) + iVar52 +
                               (uint)CARRY4(uVar72,uVar19);
                      lVar3 = (ulonglong)puVar60[2] * 0x27d4eb4f;
                      uVar19 = (uint)lVar3;
                      uVar72 = uVar19 + (int)local_4c;
                      uVar31 = puVar60[3] * 0x27d4eb4f + puVar60[2] * -0x3d4d51c3 +
                               (int)((ulonglong)lVar3 >> 0x20) + uVar49 +
                               (uint)CARRY4(uVar19,(uint)local_4c);
                      lVar3 = (ulonglong)puVar60[4] * 0x27d4eb4f;
                      uVar19 = (uint)lVar3;
                      uVar49 = uVar19 + local_50;
                      uVar48 = puVar60[5] * 0x27d4eb4f + puVar60[4] * -0x3d4d51c3 +
                               (int)((ulonglong)lVar3 >> 0x20) + (int)local_54 +
                               (uint)CARRY4(uVar19,local_50);
                      lVar3 = (ulonglong)puVar60[6] * 0x27d4eb4f;
                      uVar19 = (uint)lVar3;
                      uVar63 = uVar49 * -0x80000000 + (uVar48 >> 1);
                      uVar50 = uVar19 + local_58;
                      uVar19 = puVar60[7] * 0x27d4eb4f + puVar60[6] * -0x3d4d51c3 +
                               (int)((ulonglong)lVar3 >> 0x20) + (int)local_5c +
                               (uint)CARRY4(uVar19,local_58);
                      uVar59 = uVar73 * -0x80000000 + (uVar65 >> 1);
                      uVar46 = uVar72 * -0x80000000 + (uVar31 >> 1);
                      iVar16 = uVar31 * -0x80000000 + (uVar72 >> 1);
                      iVar66 = uVar65 * -0x80000000 + (uVar73 >> 1);
                      uVar72 = uVar50 * -0x80000000 + (uVar19 >> 1);
                      iVar53 = uVar19 * -0x80000000 + (uVar50 >> 1);
                      iVar21 = uVar48 * -0x80000000 + (uVar49 >> 1);
                      uVar19 = (uint)((ulonglong)uVar59 * 0x85ebca87);
                      iVar52 = iVar66 * -0x7a143579 + uVar59 * -0x61c8864f +
                               (int)((ulonglong)uVar59 * 0x85ebca87 >> 0x20);
                      local_4c = (int *)((ulonglong)uVar46 * 0x85ebca87);
                      uVar49 = iVar16 * -0x7a143579 + uVar46 * -0x61c8864f +
                               (int)((ulonglong)uVar46 * 0x85ebca87 >> 0x20);
                      local_50 = (uint)((ulonglong)uVar63 * 0x85ebca87);
                      local_54 = (int *)(iVar21 * -0x7a143579 + uVar63 * -0x61c8864f +
                                        (int)((ulonglong)uVar63 * 0x85ebca87 >> 0x20));
                      local_58 = (uint)((ulonglong)uVar72 * 0x85ebca87);
                      local_5c = (uint *)(iVar53 * -0x7a143579 + uVar72 * -0x61c8864f +
                                         (int)((ulonglong)uVar72 * 0x85ebca87 >> 0x20));
                      puVar60 = puVar70;
                    } while (puVar70 < (uint *)((int)puVar58 + (int)(local_78 + -0x1f)));
                    uVar65 = uVar19 * 2 - (iVar52 >> 0x1f);
                    uVar31 = (uint)((ulonglong)uVar59 * 0xf796ca9);
                    uVar59 = iVar66 * 0xf796ca9 + uVar59 * -0x210ca4ff +
                             (int)((ulonglong)uVar59 * 0xf796ca9 >> 0x20);
                    uVar48 = (int)local_4c * 0x80 + (uVar49 >> 0x19);
                    uVar50 = uVar31 * -0x80000000 + (uVar59 >> 1);
                    if ((uint *)((int)puVar58 + (int)(local_78 + -0x1f)) <
                        (uint *)((int)puVar58 + 1)) {
                      iVar66 = 0;
                    }
                    else {
                      iVar66 = ((uint)local_78 & 0xffffffe0) - 0x20;
                    }
                    uVar73 = uVar65 + uVar48;
                    puVar60 = (uint *)((int)puVar58 + iVar66 + 0x20);
                    uVar32 = local_50 * 0x1000 + ((uint)local_54 >> 0x14);
                    uVar22 = uVar73 + uVar32;
                    uVar54 = (uint)((ulonglong)uVar46 * 0xf796ca9);
                    uVar47 = iVar16 * 0xf796ca9 + uVar46 * -0x210ca4ff +
                             (int)((ulonglong)uVar46 * 0xf796ca9 >> 0x20);
                    uVar33 = local_58 * 0x40000 + ((uint)local_5c >> 0xe);
                    lVar3 = (ulonglong)uVar50 * 0x85ebca87;
                    uVar34 = uVar22 + uVar33 ^ (uint)lVar3;
                    uVar23 = uVar54 * -0x80000000 + (uVar47 >> 1);
                    uVar64 = (uint)((ulonglong)uVar63 * 0xf796ca9);
                    uVar51 = iVar21 * 0xf796ca9 + uVar63 * -0x210ca4ff +
                             (int)((ulonglong)uVar63 * 0xf796ca9 >> 0x20);
                    uVar46 = (uint)((ulonglong)uVar72 * 0xf796ca9);
                    lVar4 = (ulonglong)uVar34 * 0x85ebca87;
                    uVar67 = (uint)lVar4;
                    uVar74 = iVar53 * 0xf796ca9 + uVar72 * -0x210ca4ff +
                             (int)((ulonglong)uVar72 * 0xf796ca9 >> 0x20);
                    lVar5 = (ulonglong)uVar23 * 0x85ebca87;
                    uVar68 = uVar67 + 0xc2b2ae63 ^ (uint)lVar5;
                    uVar72 = uVar64 * -0x80000000 + (uVar51 >> 1);
                    lVar6 = (ulonglong)uVar68 * 0x85ebca87;
                    uVar35 = (uint)lVar6;
                    lVar7 = (ulonglong)uVar72 * 0x85ebca87;
                    uVar36 = uVar35 + 0xc2b2ae63 ^ (uint)lVar7;
                    uVar69 = uVar46 * -0x80000000 + (uVar74 >> 1);
                    lVar8 = (ulonglong)uVar36 * 0x85ebca87;
                    uVar63 = (uint)lVar8;
                    lVar9 = (ulonglong)uVar69 * 0x85ebca87;
                    uVar24 = uVar63 + 0xc2b2ae63 ^ (uint)lVar9;
                    lVar10 = (ulonglong)uVar24 * 0x85ebca87;
                    uVar25 = (uint)lVar10;
                    uVar26 = uVar25 + 0xc2b2ae63;
                    pcVar37 = local_78 + uVar26;
                    uVar19 = (((uVar51 * -0x80000000 + (uVar64 >> 1)) * -0x7a143579 +
                               uVar72 * -0x61c8864f + (int)((ulonglong)lVar7 >> 0x20) ^
                              (((uVar59 * -0x80000000 + (uVar31 >> 1)) * -0x7a143579 +
                                uVar50 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^
                               (iVar52 * 2 - ((int)uVar19 >> 0x1f)) +
                               uVar49 * 0x80 + ((uint)local_4c >> 0x19) +
                               (uint)CARRY4(uVar65,uVar48) +
                               (int)local_54 * 0x1000 + (local_50 >> 0x14) +
                               (uint)CARRY4(uVar73,uVar32) +
                               (int)local_5c * 0x40000 + (local_58 >> 0xe) +
                               (uint)CARRY4(uVar22,uVar33)) * -0x7a143579 + uVar34 * -0x61c8864f +
                               (int)((ulonglong)lVar4 >> 0x20) + -0x7a143589 +
                               (uint)(0x3d4d519c < uVar67) ^
                              (uVar47 * -0x80000000 + (uVar54 >> 1)) * -0x7a143579 +
                              uVar23 * -0x61c8864f + (int)((ulonglong)lVar5 >> 0x20)) * -0x7a143579
                              + uVar68 * -0x61c8864f + (int)((ulonglong)lVar6 >> 0x20) + -0x7a143589
                              + (uint)(0x3d4d519c < uVar35)) * -0x7a143579 + uVar36 * -0x61c8864f +
                              (int)((ulonglong)lVar8 >> 0x20) + -0x7a143589 +
                              (uint)(0x3d4d519c < uVar63) ^
                             (uVar74 * -0x80000000 + (uVar46 >> 1)) * -0x7a143579 +
                             uVar69 * -0x61c8864f + (int)((ulonglong)lVar9 >> 0x20)) * -0x7a143579 +
                             uVar24 * -0x61c8864f + (int)((ulonglong)lVar10 >> 0x20) + -0x7a143589 +
                             (uint)(0x3d4d519c < uVar25) + (uint)CARRY4(uVar26,(uint)local_78);
                    if (((uint)local_78 & 0x18) == 0) goto LAB_01804258;
LAB_01803acc:
                    lVar3 = (ulonglong)*puVar60 * 0x27d4eb4f;
                    uVar31 = (uint)lVar3;
                    uVar46 = puVar60[1] * 0x27d4eb4f + *puVar60 * -0x3d4d51c3 +
                             (int)((ulonglong)lVar3 >> 0x20);
                    uVar49 = uVar31 * -0x80000000 + (uVar46 >> 1);
                    lVar3 = (ulonglong)uVar49 * 0x85ebca87;
                    uVar72 = (uint)lVar3 ^ (uint)pcVar37;
                    uVar19 = (uVar46 * -0x80000000 + (uVar31 >> 1)) * -0x7a143579 +
                             uVar49 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar19;
                    uVar31 = uVar72 * 0x8000000 + (uVar19 >> 5);
                    lVar3 = (ulonglong)uVar31 * 0x85ebca87;
                    uVar49 = (uint)lVar3;
                    pcVar37 = (char *)(uVar49 + 0xc2b2ae63);
                    uVar19 = (uVar19 * 0x8000000 + (uVar72 >> 5)) * -0x7a143579 +
                             uVar31 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) + -0x7a143589 +
                             (uint)(0x3d4d519c < uVar49);
                    if (7 < uVar15 - 8) {
                      lVar3 = (ulonglong)puVar60[2] * 0x27d4eb4f;
                      uVar31 = (uint)lVar3;
                      uVar46 = puVar60[3] * 0x27d4eb4f + puVar60[2] * -0x3d4d51c3 +
                               (int)((ulonglong)lVar3 >> 0x20);
                      uVar49 = uVar31 * -0x80000000 + (uVar46 >> 1);
                      lVar3 = (ulonglong)uVar49 * 0x85ebca87;
                      uVar72 = (uint)lVar3 ^ (uint)pcVar37;
                      uVar19 = (uVar46 * -0x80000000 + (uVar31 >> 1)) * -0x7a143579 +
                               uVar49 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar19;
                      uVar31 = uVar72 * 0x8000000 + (uVar19 >> 5);
                      lVar3 = (ulonglong)uVar31 * 0x85ebca87;
                      uVar49 = (uint)lVar3;
                      pcVar37 = (char *)(uVar49 + 0xc2b2ae63);
                      uVar19 = (uVar19 * 0x8000000 + (uVar72 >> 5)) * -0x7a143579 +
                               uVar31 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) + -0x7a143589
                               + (uint)(0x3d4d519c < uVar49);
                      if (7 < uVar15 - 0x10) {
                        lVar3 = (ulonglong)puVar60[4] * 0x27d4eb4f;
                        uVar31 = (uint)lVar3;
                        uVar46 = puVar60[5] * 0x27d4eb4f + puVar60[4] * -0x3d4d51c3 +
                                 (int)((ulonglong)lVar3 >> 0x20);
                        uVar49 = uVar31 * -0x80000000 + (uVar46 >> 1);
                        lVar3 = (ulonglong)uVar49 * 0x85ebca87;
                        uVar72 = (uint)lVar3 ^ (uint)pcVar37;
                        uVar19 = (uVar46 * -0x80000000 + (uVar31 >> 1)) * -0x7a143579 +
                                 uVar49 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar19;
                        uVar31 = uVar72 * 0x8000000 + (uVar19 >> 5);
                        lVar3 = (ulonglong)uVar31 * 0x85ebca87;
                        uVar49 = (uint)lVar3;
                        pcVar37 = (char *)(uVar49 + 0xc2b2ae63);
                        uVar19 = (uVar19 * 0x8000000 + (uVar72 >> 5)) * -0x7a143579 +
                                 uVar31 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) +
                                 -0x7a143589 + (uint)(0x3d4d519c < uVar49);
                      }
                    }
                    puVar60 = (uint *)((int)puVar60 + (uVar15 - 8 & 0xfffffff8) + 8);
                    uVar49 = (uint)local_78 & 7;
                  }
                  puVar70 = puVar60;
                  if (3 < uVar49) {
                    puVar70 = puVar60 + 1;
                    uVar49 = uVar49 - 4;
                    lVar3 = (ulonglong)*puVar60 * 0x85ebca87;
                    uVar46 = (uint)lVar3 ^ (uint)pcVar37;
                    uVar19 = *puVar60 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20) ^ uVar19;
                    uVar31 = uVar46 * 0x800000 + (uVar19 >> 9);
                    lVar3 = (ulonglong)uVar31 * 0x27d4eb4f;
                    uVar72 = (uint)lVar3;
                    pcVar37 = (char *)(uVar72 + 0x9e3779f9);
                    uVar19 = (uVar19 * 0x800000 + (uVar46 >> 9)) * 0x27d4eb4f + uVar31 * -0x3d4d51c3
                             + (int)((ulonglong)lVar3 >> 0x20) + 0x165667b1 +
                             (uint)(0x61c88606 < uVar72);
                  }
                  if (uVar49 != 0) {
                    lVar3 = (ulonglong)(uint)(byte)*puVar70 * 0x165667c5;
                    uVar31 = (uint)lVar3 ^ (uint)pcVar37;
                    uVar19 = (uint)(byte)*puVar70 * 0x27d4eb2f + (int)((ulonglong)lVar3 >> 0x20) ^
                             uVar19;
                    uVar72 = uVar31 * 0x800 + (uVar19 >> 0x15);
                    lVar3 = (ulonglong)uVar72 * 0x85ebca87;
                    pcVar37 = (char *)lVar3;
                    uVar19 = (uVar19 * 0x800 + (uVar31 >> 0x15)) * -0x7a143579 +
                             uVar72 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20);
                    if (uVar49 != 1) {
                      lVar3 = (ulonglong)(uint)*(byte *)((int)puVar70 + 1) * 0x165667c5;
                      uVar72 = (uint)lVar3 ^ (uint)pcVar37;
                      uVar19 = (uint)*(byte *)((int)puVar70 + 1) * 0x27d4eb2f +
                               (int)((ulonglong)lVar3 >> 0x20) ^ uVar19;
                      uVar31 = uVar72 * 0x800 + (uVar19 >> 0x15);
                      lVar3 = (ulonglong)uVar31 * 0x85ebca87;
                      pcVar37 = (char *)lVar3;
                      uVar19 = (uVar19 * 0x800 + (uVar72 >> 0x15)) * -0x7a143579 +
                               uVar31 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20);
                      if (uVar49 != 2) {
                        lVar3 = (ulonglong)(uint)*(byte *)((int)puVar70 + 2) * 0x165667c5;
                        uVar49 = (uint)lVar3 ^ (uint)pcVar37;
                        uVar19 = (uint)*(byte *)((int)puVar70 + 2) * 0x27d4eb2f +
                                 (int)((ulonglong)lVar3 >> 0x20) ^ uVar19;
                        uVar72 = uVar49 * 0x800 + (uVar19 >> 0x15);
                        lVar3 = (ulonglong)uVar72 * 0x85ebca87;
                        uVar19 = (uVar19 * 0x800 + (uVar49 >> 0x15)) * -0x7a143579 +
                                 uVar72 * -0x61c8864f + (int)((ulonglong)lVar3 >> 0x20);
                        pcVar37 = (char *)lVar3;
                      }
                    }
                  }
                }
                uVar49 = (uint)pcVar37 ^ uVar19 >> 1;
                local_b0[0x49] = (int)puVar58;
                local_a8 = local_a8 + 1;
                lVar3 = (ulonglong)uVar49 * 0x27d4eb4f;
                uVar72 = (uint)lVar3;
                uVar19 = uVar19 * 0x27d4eb4f + uVar49 * -0x3d4d51c3 +
                         (int)((ulonglong)lVar3 >> 0x20);
                iVar52 = param_1[6];
                uVar72 = uVar72 ^ (uVar72 >> 0x1d | uVar19 * 8);
                lVar3 = (ulonglong)uVar72 * 0x9e3779f9;
                uVar19 = (uVar19 ^ uVar19 >> 0x1d) * -0x61c88607 + uVar72 * 0x165667b1 +
                         (int)((ulonglong)lVar3 >> 0x20);
                local_b0[0x4b] = uVar19;
                uVar19 = ((uint)lVar3 ^ uVar19) & ~(-1 << (local_d8 & 0xff));
                local_b0[0x4a] = uVar19;
                iVar52 = iVar52 + (uVar19 << (param_3[2] & 0xffU)) * 8;
                local_b0[0x4c] = iVar52;
                HintPreloadData(iVar52);
                local_b0 = local_b0 + 4;
              } while (local_a8 != local_44[0]);
              local_58 = 0;
              puVar58 = (uint *)((int)local_94 + -3);
              local_70 = param_1;
              do {
                puVar70 = (uint *)local_70[0x49];
                iVar16 = local_70[0x4b];
                puVar60 = (uint *)((int)puVar70 - (int)local_88);
                iVar52 = local_70[0x4a];
                if (puVar70 < local_f4) {
                  iVar66 = param_1[8];
                  iVar21 = param_1[6];
                  uVar19 = (uint)*(byte *)(iVar66 + iVar52);
                  cVar14 = (char)(1 << (param_3[2] & 0xffU));
                  iVar53 = uVar19 + (iVar52 << (param_3[2] & 0xffU));
LAB_018042ec:
                  *(uint **)(iVar21 + iVar53 * 8) = puVar60;
                  piVar20 = (int *)(uVar19 + 1);
                  *(int *)(iVar21 + iVar53 * 8 + 4) = iVar16;
                  *(byte *)(iVar66 + iVar52) = cVar14 - 1U & (byte)piVar20;
                }
                else {
                  local_4c = (int *)local_70[0x4c];
                  piVar20 = (int *)((int)local_4c + (8 << (uVar44 & 0xff)));
                  if (piVar20 <= local_4c) {
LAB_01804990:
                    iVar66 = param_1[8];
                    iVar21 = param_1[6];
                    uVar19 = (uint)*(byte *)(iVar66 + iVar52);
                    cVar14 = (char)(1 << (param_3[2] & 0xffU));
                    iVar53 = uVar19 + (iVar52 << (param_3[2] & 0xffU));
                    goto LAB_018042ec;
                  }
                  local_60 = (char *)0x0;
                  local_54 = (int *)0x0;
                  local_64 = (char *)0x0;
                  local_5c = (uint *)0x0;
                  do {
                    if (iVar16 == local_4c[1]) {
                      piVar17 = (int *)*local_4c;
                      if (local_8c < piVar17) {
                        if (local_a0 < local_a4) {
                          puVar55 = local_94;
                          puVar27 = puVar30;
                          puVar18 = local_88;
                          if (piVar17 < local_a4) {
                            puVar55 = local_dc;
                            puVar27 = local_b8;
                            puVar18 = local_ec;
                          }
                          puVar18 = (uint *)((int)puVar18 + (int)piVar17);
                          local_b8 = puVar27;
                          if (piVar17 < local_a4) {
                            local_b8 = local_b4;
                          }
                          puVar27 = (uint *)((int)puVar70 + ((int)puVar55 - (int)puVar18));
                          if (local_94 < puVar27) {
                            puVar27 = local_94;
                          }
                          puVar61 = (uint *)((int)puVar27 + -3);
                          if (puVar70 < puVar61) {
                            if (*puVar18 == *puVar70) {
                              puVar41 = puVar70 + 1;
                              puVar56 = puVar18 + 1;
                              if (puVar41 < puVar61) {
                                do {
                                  if (*puVar56 != *puVar41) {
                                    uVar19 = *puVar56 ^ *puVar41;
                                    bVar11 = (byte)uVar19;
                                    bVar12 = (byte)(uVar19 >> 8);
                                    bVar13 = (byte)(uVar19 >> 0x10);
                                    bVar2 = (byte)(uVar19 >> 0x18);
                                    pcVar42 = (char *)((int)puVar41 +
                                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar11 & 1
                                                                                         ) << 1 | 
                                                  bVar11 >> 1 & 1) << 1 | bVar11 >> 2 & 1) << 1 |
                                                  bVar11 >> 3 & 1) << 1 | bVar11 >> 4 & 1) << 1 |
                                                  bVar11 >> 5 & 1) << 1 | bVar11 >> 6 & 1) << 1 |
                                                  bVar11 >> 7) << 0x18 |
                                                  (uint)(byte)((((((((bVar12 & 1) << 1 |
                                                                    bVar12 >> 1 & 1) << 1 |
                                                                   bVar12 >> 2 & 1) << 1 |
                                                                  bVar12 >> 3 & 1) << 1 |
                                                                 bVar12 >> 4 & 1) << 1 |
                                                                bVar12 >> 5 & 1) << 1 |
                                                               bVar12 >> 6 & 1) << 1 | bVar12 >> 7)
                                                  << 0x10 | (uint)(byte)((((((((bVar13 & 1) << 1 |
                                                                              bVar13 >> 1 & 1) << 1
                                                                             | bVar13 >> 2 & 1) << 1
                                                                            | bVar13 >> 3 & 1) << 1
                                                                           | bVar13 >> 4 & 1) << 1 |
                                                                          bVar13 >> 5 & 1) << 1 |
                                                                         bVar13 >> 6 & 1) << 1 |
                                                                        bVar13 >> 7) << 8 |
                                                  (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                    bVar2 >> 1 & 1) << 1 |
                                                                   bVar2 >> 2 & 1) << 1 |
                                                                  bVar2 >> 3 & 1) << 1 |
                                                                 bVar2 >> 4 & 1) << 1 |
                                                                bVar2 >> 5 & 1) << 1 |
                                                               bVar2 >> 6 & 1) << 1 | bVar2 >> 7))
                                                  >> 3) - (int)puVar70));
                                    goto joined_r0x018047ac;
                                  }
                                  puVar41 = puVar41 + 1;
                                  puVar56 = puVar56 + 1;
                                } while (puVar41 < puVar61);
                              }
                              goto LAB_01804748;
                            }
                            uVar19 = *puVar18 ^ *puVar70;
                            bVar11 = (byte)uVar19;
                            bVar12 = (byte)(uVar19 >> 8);
                            bVar13 = (byte)(uVar19 >> 0x10);
                            bVar2 = (byte)(uVar19 >> 0x18);
                            pcVar42 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar11 & 1) << 1 |
                                                                               bVar11 >> 1 & 1) << 1
                                                                              | bVar11 >> 2 & 1) <<
                                                                              1 | bVar11 >> 3 & 1)
                                                                             << 1 | bVar11 >> 4 & 1)
                                                                            << 1 | bVar11 >> 5 & 1)
                                                                           << 1 | bVar11 >> 6 & 1)
                                                                          << 1 | bVar11 >> 7) <<
                                                             0x18 | (uint)(byte)((((((((bVar12 & 1)
                                                                                       << 1 | bVar12
                                                                                              >> 1 &
                                                                                              1) <<
                                                                                      1 | bVar12 >> 
                                                  2 & 1) << 1 | bVar12 >> 3 & 1) << 1 |
                                                  bVar12 >> 4 & 1) << 1 | bVar12 >> 5 & 1) << 1 |
                                                  bVar12 >> 6 & 1) << 1 | bVar12 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar13 & 1) << 1 |
                                                                    bVar13 >> 1 & 1) << 1 |
                                                                   bVar13 >> 2 & 1) << 1 |
                                                                  bVar13 >> 3 & 1) << 1 |
                                                                 bVar13 >> 4 & 1) << 1 |
                                                                bVar13 >> 5 & 1) << 1 |
                                                               bVar13 >> 6 & 1) << 1 | bVar13 >> 7)
                                                  << 8 | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                           bVar2 >> 1 & 1) << 1 |
                                                                          bVar2 >> 2 & 1) << 1 |
                                                                         bVar2 >> 3 & 1) << 1 |
                                                                        bVar2 >> 4 & 1) << 1 |
                                                                       bVar2 >> 5 & 1) << 1 |
                                                                      bVar2 >> 6 & 1) << 1 |
                                                                     bVar2 >> 7)) >> 3);
                          }
                          else {
                            puVar41 = puVar70;
                            puVar56 = puVar18;
LAB_01804748:
                            if (puVar41 < (uint *)((int)puVar27 + -1)) {
                              if ((short)*puVar56 == (short)*puVar41) {
                                puVar41 = (uint *)((int)puVar41 + 2);
                                puVar56 = (uint *)((int)puVar56 + 2);
                              }
                            }
                            if ((puVar41 < puVar27) && ((char)*puVar56 == (char)*puVar41)) {
                              puVar41 = (uint *)((int)puVar41 + 1);
                            }
                            pcVar42 = (char *)((int)puVar41 - (int)puVar70);
                          }
joined_r0x018047ac:
                          if (puVar55 == (uint *)((int)puVar18 + (int)pcVar42)) {
                            puVar61 = (uint *)((int)puVar70 + (int)pcVar42);
                            puVar55 = puVar61;
                            puVar27 = puVar30;
                            if (puVar61 < puVar58) {
                              if (*puVar30 == *(uint *)((int)puVar70 + (int)pcVar42)) {
                                do {
                                  puVar55 = puVar55 + 1;
                                  puVar27 = puVar27 + 1;
                                  if (puVar58 <= puVar55) goto LAB_018048d0;
                                } while (*puVar27 == *puVar55);
                                uVar19 = *puVar27 ^ *puVar55;
                                bVar11 = (byte)uVar19;
                                bVar12 = (byte)(uVar19 >> 8);
                                bVar13 = (byte)(uVar19 >> 0x10);
                                bVar2 = (byte)(uVar19 >> 0x18);
                                pcVar37 = (char *)((int)puVar55 +
                                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar11 & 1) <<
                                                                                     1 | bVar11 >> 1
                                                                                         & 1) << 1 |
                                                                                   bVar11 >> 2 & 1)
                                                                                   << 1 | bVar11 >> 
                                                  3 & 1) << 1 | bVar11 >> 4 & 1) << 1 |
                                                  bVar11 >> 5 & 1) << 1 | bVar11 >> 6 & 1) << 1 |
                                                  bVar11 >> 7) << 0x18 |
                                                  (uint)(byte)((((((((bVar12 & 1) << 1 |
                                                                    bVar12 >> 1 & 1) << 1 |
                                                                   bVar12 >> 2 & 1) << 1 |
                                                                  bVar12 >> 3 & 1) << 1 |
                                                                 bVar12 >> 4 & 1) << 1 |
                                                                bVar12 >> 5 & 1) << 1 |
                                                               bVar12 >> 6 & 1) << 1 | bVar12 >> 7)
                                                  << 0x10 | (uint)(byte)((((((((bVar13 & 1) << 1 |
                                                                              bVar13 >> 1 & 1) << 1
                                                                             | bVar13 >> 2 & 1) << 1
                                                                            | bVar13 >> 3 & 1) << 1
                                                                           | bVar13 >> 4 & 1) << 1 |
                                                                          bVar13 >> 5 & 1) << 1 |
                                                                         bVar13 >> 6 & 1) << 1 |
                                                                        bVar13 >> 7) << 8 |
                                                  (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                    bVar2 >> 1 & 1) << 1 |
                                                                   bVar2 >> 2 & 1) << 1 |
                                                                  bVar2 >> 3 & 1) << 1 |
                                                                 bVar2 >> 4 & 1) << 1 |
                                                                bVar2 >> 5 & 1) << 1 |
                                                               bVar2 >> 6 & 1) << 1 | bVar2 >> 7))
                                                  >> 3) - (int)puVar61));
                              }
                              else {
                                uVar19 = *puVar30 ^ *(uint *)((int)puVar70 + (int)pcVar42);
                                bVar11 = (byte)uVar19;
                                bVar12 = (byte)(uVar19 >> 8);
                                bVar13 = (byte)(uVar19 >> 0x10);
                                bVar2 = (byte)(uVar19 >> 0x18);
                                pcVar37 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar11 & 1) <<
                                                                                    1 | bVar11 >> 1
                                                                                        & 1) << 1 |
                                                                                  bVar11 >> 2 & 1)
                                                                                  << 1 | bVar11 >> 3
                                                                                         & 1) << 1 |
                                                                                bVar11 >> 4 & 1) <<
                                                                                1 | bVar11 >> 5 & 1)
                                                                               << 1 | bVar11 >> 6 &
                                                                                      1) << 1 |
                                                                             bVar11 >> 7) << 0x18 |
                                                                 (uint)(byte)((((((((bVar12 & 1) <<
                                                                                    1 | bVar12 >> 1
                                                                                        & 1) << 1 |
                                                                                  bVar12 >> 2 & 1)
                                                                                  << 1 | bVar12 >> 3
                                                                                         & 1) << 1 |
                                                                                bVar12 >> 4 & 1) <<
                                                                                1 | bVar12 >> 5 & 1)
                                                                               << 1 | bVar12 >> 6 &
                                                                                      1) << 1 |
                                                                             bVar12 >> 7) << 0x10 |
                                                                 (uint)(byte)((((((((bVar13 & 1) <<
                                                                                    1 | bVar13 >> 1
                                                                                        & 1) << 1 |
                                                                                  bVar13 >> 2 & 1)
                                                                                  << 1 | bVar13 >> 3
                                                                                         & 1) << 1 |
                                                                                bVar13 >> 4 & 1) <<
                                                                                1 | bVar13 >> 5 & 1)
                                                                               << 1 | bVar13 >> 6 &
                                                                                      1) << 1 |
                                                                             bVar13 >> 7) << 8 |
                                                                 (uint)(byte)((((((((bVar2 & 1) << 1
                                                                                   | bVar2 >> 1 & 1)
                                                                                   << 1 | bVar2 >> 2
                                                                                          & 1) << 1
                                                                                 | bVar2 >> 3 & 1)
                                                                                 << 1 | bVar2 >> 4 &
                                                                                        1) << 1 |
                                                                               bVar2 >> 5 & 1) << 1
                                                                              | bVar2 >> 6 & 1) << 1
                                                                             | bVar2 >> 7)) >> 3);
                              }
                            }
                            else {
LAB_018048d0:
                              if (puVar55 < (uint *)((int)local_94 + -1)) {
                                if ((short)*puVar27 == (short)*puVar55) {
                                  puVar55 = (uint *)((int)puVar55 + 2);
                                  puVar27 = (uint *)((int)puVar27 + 2);
                                }
                              }
                              if ((puVar55 < local_94) && ((char)*puVar27 == (char)*puVar55)) {
                                puVar55 = (uint *)((int)puVar55 + 1);
                              }
                              pcVar37 = (char *)((int)puVar55 - (int)puVar61);
                            }
                            pcVar42 = pcVar42 + (int)pcVar37;
                          }
                          if (pcVar42 < local_78) goto LAB_018044e0;
                          bVar76 = local_b8 <= puVar18;
                          bVar75 = puVar18 == local_b8;
                          if (bVar76 && !bVar75) {
                            bVar76 = local_f4 <= puVar70;
                            bVar75 = puVar70 == local_f4;
                          }
                          if (!bVar76 || bVar75) {
                            puVar55 = (uint *)0x0;
                            puVar27 = puVar55;
                          }
                          else {
                            puVar55 = (uint *)0x0;
                            puVar27 = puVar18;
                            puVar61 = puVar70;
                            while( true ) {
                              puVar61 = (uint *)((int)puVar61 + -1);
                              puVar27 = (uint *)((int)puVar27 + -1);
                              if (*(char *)puVar61 != *(char *)puVar27) break;
                              if (puVar61 <= local_f4 || puVar27 <= local_b8) {
                                puVar27 = (uint *)~(uint)puVar55;
                                puVar55 = (uint *)((int)puVar55 + 1);
                                puVar18 = (uint *)((int)puVar18 + (int)puVar27);
                                goto LAB_01804484;
                              }
                              puVar55 = (uint *)((int)puVar55 + 1);
                            }
                            puVar18 = (uint *)((int)puVar18 - (int)puVar55);
                            puVar27 = (uint *)-(int)puVar55;
                          }
LAB_01804484:
                          if ((local_b8 == puVar18 && local_b4 != local_b8) &&
                             (puVar27 = (uint *)((int)puVar70 + (int)puVar27),
                             local_f4 < puVar27 && local_b4 < local_dc)) {
                            iVar21 = 0;
                            puVar18 = local_dc;
                            do {
                              puVar27 = (uint *)((int)puVar27 + -1);
                              puVar18 = (uint *)((int)puVar18 + -1);
                              if (*(char *)puVar27 != *(char *)puVar18) break;
                              iVar21 = iVar21 + 1;
                            } while (local_f4 < puVar27 && local_b4 < puVar18);
                            puVar55 = (uint *)((int)puVar55 + iVar21);
                          }
LAB_018044a4:
                          pcVar37 = pcVar42 + (int)puVar55;
                        }
                        else {
                          local_b8 = (uint *)((int)local_88 + (int)piVar17);
                          puVar27 = local_b8;
                          puVar55 = puVar70;
                          if (puVar70 < puVar58) {
                            if (*(uint *)((int)local_88 + (int)piVar17) == *puVar70) {
                              do {
                                puVar55 = puVar55 + 1;
                                puVar27 = puVar27 + 1;
                                if (puVar58 <= puVar55) goto LAB_018047f0;
                              } while (*puVar27 == *puVar55);
                              uVar19 = *puVar27 ^ *puVar55;
                              bVar11 = (byte)uVar19;
                              bVar12 = (byte)(uVar19 >> 8);
                              bVar13 = (byte)(uVar19 >> 0x10);
                              bVar2 = (byte)(uVar19 >> 0x18);
                              pcVar37 = (char *)((int)puVar55 +
                                                (((uint)LZCOUNT((uint)(byte)((((((((bVar11 & 1) << 1
                                                                                  | bVar11 >> 1 & 1)
                                                                                  << 1 | bVar11 >> 2
                                                                                         & 1) << 1 |
                                                                                bVar11 >> 3 & 1) <<
                                                                                1 | bVar11 >> 4 & 1)
                                                                               << 1 | bVar11 >> 5 &
                                                                                      1) << 1 |
                                                                             bVar11 >> 6 & 1) << 1 |
                                                                            bVar11 >> 7) << 0x18 |
                                                                (uint)(byte)((((((((bVar12 & 1) << 1
                                                                                  | bVar12 >> 1 & 1)
                                                                                  << 1 | bVar12 >> 2
                                                                                         & 1) << 1 |
                                                                                bVar12 >> 3 & 1) <<
                                                                                1 | bVar12 >> 4 & 1)
                                                                               << 1 | bVar12 >> 5 &
                                                                                      1) << 1 |
                                                                             bVar12 >> 6 & 1) << 1 |
                                                                            bVar12 >> 7) << 0x10 |
                                                                (uint)(byte)((((((((bVar13 & 1) << 1
                                                                                  | bVar13 >> 1 & 1)
                                                                                  << 1 | bVar13 >> 2
                                                                                         & 1) << 1 |
                                                                                bVar13 >> 3 & 1) <<
                                                                                1 | bVar13 >> 4 & 1)
                                                                               << 1 | bVar13 >> 5 &
                                                                                      1) << 1 |
                                                                             bVar13 >> 6 & 1) << 1 |
                                                                            bVar13 >> 7) << 8 |
                                                                (uint)(byte)((((((((bVar2 & 1) << 1
                                                                                  | bVar2 >> 1 & 1)
                                                                                  << 1 | bVar2 >> 2
                                                                                         & 1) << 1 |
                                                                                bVar2 >> 3 & 1) << 1
                                                                               | bVar2 >> 4 & 1) <<
                                                                               1 | bVar2 >> 5 & 1)
                                                                              << 1 | bVar2 >> 6 & 1)
                                                                             << 1 | bVar2 >> 7)) >>
                                                 3) - (int)puVar70));
                            }
                            else {
                              uVar19 = *(uint *)((int)local_88 + (int)piVar17) ^ *puVar70;
                              bVar11 = (byte)uVar19;
                              bVar12 = (byte)(uVar19 >> 8);
                              bVar13 = (byte)(uVar19 >> 0x10);
                              bVar2 = (byte)(uVar19 >> 0x18);
                              pcVar37 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar11 & 1) << 1
                                                                                 | bVar11 >> 1 & 1)
                                                                                 << 1 | bVar11 >> 2
                                                                                        & 1) << 1 |
                                                                               bVar11 >> 3 & 1) << 1
                                                                              | bVar11 >> 4 & 1) <<
                                                                              1 | bVar11 >> 5 & 1)
                                                                             << 1 | bVar11 >> 6 & 1)
                                                                            << 1 | bVar11 >> 7) <<
                                                               0x18 | (uint)(byte)((((((((bVar12 & 1
                                                                                         ) << 1 | 
                                                  bVar12 >> 1 & 1) << 1 | bVar12 >> 2 & 1) << 1 |
                                                  bVar12 >> 3 & 1) << 1 | bVar12 >> 4 & 1) << 1 |
                                                  bVar12 >> 5 & 1) << 1 | bVar12 >> 6 & 1) << 1 |
                                                  bVar12 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar13 & 1) << 1 |
                                                                    bVar13 >> 1 & 1) << 1 |
                                                                   bVar13 >> 2 & 1) << 1 |
                                                                  bVar13 >> 3 & 1) << 1 |
                                                                 bVar13 >> 4 & 1) << 1 |
                                                                bVar13 >> 5 & 1) << 1 |
                                                               bVar13 >> 6 & 1) << 1 | bVar13 >> 7)
                                                  << 8 | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                           bVar2 >> 1 & 1) << 1 |
                                                                          bVar2 >> 2 & 1) << 1 |
                                                                         bVar2 >> 3 & 1) << 1 |
                                                                        bVar2 >> 4 & 1) << 1 |
                                                                       bVar2 >> 5 & 1) << 1 |
                                                                      bVar2 >> 6 & 1) << 1 |
                                                                     bVar2 >> 7)) >> 3);
                            }
                          }
                          else {
LAB_018047f0:
                            if (puVar55 < (uint *)((int)local_94 + -1)) {
                              if ((short)*puVar27 == (short)*puVar55) {
                                puVar27 = (uint *)((int)puVar27 + 2);
                                puVar55 = (uint *)((int)puVar55 + 2);
                              }
                            }
                            if ((puVar55 < local_94) && ((char)*puVar27 == (char)*puVar55)) {
                              puVar55 = (uint *)((int)puVar55 + 1);
                            }
                            pcVar37 = (char *)((int)puVar55 - (int)puVar70);
                          }
                          if (pcVar37 < local_78) goto LAB_018044e0;
                          pcVar42 = pcVar37;
                          if (puVar30 < local_b8 && local_f4 < puVar70) {
                            puVar55 = (uint *)0x0;
                            puVar27 = puVar70;
                            do {
                              puVar27 = (uint *)((int)puVar27 + -1);
                              local_b8 = (uint *)((int)local_b8 + -1);
                              if (*(char *)puVar27 != *(char *)local_b8) break;
                              puVar55 = (uint *)((int)puVar55 + 1);
                            } while (local_f4 < puVar27 && puVar30 < local_b8);
                            goto LAB_018044a4;
                          }
                          puVar55 = (uint *)0x0;
                        }
                        local_b8 = local_5c;
                        if (local_64 < pcVar37) {
                          local_54 = local_4c;
                          local_64 = pcVar37;
                          local_60 = pcVar42;
                          local_b8 = puVar55;
                        }
                        local_5c = local_b8;
                      }
                    }
LAB_018044e0:
                    local_4c = local_4c + 2;
                  } while (local_4c < piVar20);
                  if (local_54 == (int *)0x0) goto LAB_01804990;
                  iVar21 = param_2[3];
                  if (iVar21 == param_2[4]) {
                    pcVar37 = &DAT_ffffffba;
                    piVar20 = param_2;
                    goto LAB_01804668;
                  }
                  iVar38 = *local_54;
                  iVar39 = *param_2;
                  iVar53 = -(int)local_f4;
                  iVar66 = param_1[8];
                  local_f4 = (uint *)((int)puVar70 + (int)local_60);
                  iVar71 = iVar39 + iVar21 * 0xc;
                  *(char **)(iVar71 + 4) = (char *)((int)puVar70 + (iVar53 - (int)local_5c));
                  *(char **)(iVar71 + 8) = local_60 + (int)local_5c;
                  *(int *)(iVar39 + iVar21 * 0xc) = (int)puVar60 - iVar38;
                  param_2[3] = iVar21 + 1;
                  uVar19 = (uint)*(byte *)(iVar66 + iVar52);
                  iVar53 = param_1[6];
                  uVar49 = param_3[2];
                  iVar21 = uVar19 + (iVar52 << (uVar49 & 0xff));
                  piVar20 = (int *)(uVar19 + 1);
                  *(uint **)(iVar53 + iVar21 * 8) = puVar60;
                  *(int *)(iVar53 + iVar21 * 8 + 4) = iVar16;
                  *(byte *)(iVar66 + iVar52) = (char)(1 << (uVar49 & 0xff)) - 1U & (byte)piVar20;
                  if ((uint *)((int)local_c0 + iVar40) < local_f4) {
                    local_c0 = local_f4;
                    goto LAB_018045d8;
                  }
                }
                local_58 = local_58 + 1;
                local_70 = local_70 + 4;
                local_b8 = puVar60;
              } while (local_58 != local_44[0]);
              local_c0 = (uint *)((int)local_c0 + iVar40);
            }
LAB_018045d8:
          } while (local_c0 < puVar45);
          pcVar37 = (char *)((int)local_94 - (int)local_f4);
        }
        else {
          if (uVar44 <= uVar1 + param_1[7]) {
LAB_01804a58:
            local_8c = local_a0;
            if (local_a4 <= local_a0) {
              local_8c = local_a4;
            }
            goto LAB_01804a68;
          }
          local_8c = (int *)(uVar44 - uVar1);
          if (local_a0 < local_8c) {
LAB_01804b24:
            param_1[4] = (int)local_8c;
            if (local_8c <= local_a4) {
              local_a0 = local_8c;
              if (param_1 == (int *)0xffffffe4) goto LAB_01804a68;
              goto LAB_01804b48;
            }
          }
          else {
            if (local_a0 <= local_a4) {
LAB_01804b48:
              param_1[7] = 0;
              local_8c = local_a0;
              goto LAB_01804a68;
            }
            local_8c = local_a0;
          }
LAB_018038b8:
          param_1[3] = (int)local_8c;
          if (param_1 == (int *)0xffffffe4) {
            uVar44 = param_3[2];
            local_d8 = param_3[1] - uVar44;
            local_78 = (char *)param_3[3];
            local_a0 = local_8c;
            piVar20 = param_1;
          }
          else {
            param_1[7] = 0;
            uVar44 = param_3[2];
            local_d8 = param_3[1] - uVar44;
            local_78 = (char *)param_3[3];
            piVar20 = param_3;
            local_a0 = local_8c;
          }
          local_b4 = (uint *)0x0;
          local_ec = local_b4;
          local_dc = local_b4;
          local_a4 = local_a0;
          if (local_78 <= pcVar43) goto LAB_01803910;
LAB_01804ac4:
          pcVar37 = pcVar43;
        }
        if ((char *)0xffffff88 < pcVar37) goto LAB_01804668;
        uVar44 = param_2[3];
        if (uVar62 < uVar44) {
          iVar40 = uVar62 * 0xc + *param_2;
          piVar20 = (int *)(local_118 + *(int *)(iVar40 + 4));
          *(int **)(iVar40 + 4) = piVar20;
          local_118 = pcVar37;
        }
        else {
          local_118 = local_118 + (int)pcVar43;
        }
        uVar57 = uVar57 + 1;
        param_4 = param_4 + 0x40000;
      } while ((uVar28 != uVar57) && (uVar62 = uVar44, uVar44 < (uint)param_2[4]));
    }
  }
  pcVar37 = (char *)0x0;
LAB_01804668:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(pcVar37,piVar20,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

