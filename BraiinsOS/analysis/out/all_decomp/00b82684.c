// FUN_00b82684 @ 00b82684 size=3832 calls_out=8 calls_in=2
// strings: 

void FUN_00b82684(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 *puVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  uint *puVar31;
  bool bVar32;
  byte in_Q;
  undefined8 uVar33;
  int local_5c;
  uint local_58;
  undefined4 *local_54;
  int local_44;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_54 = param_1;
  if (0x20 < param_2) {
    local_5c = param_6;
    uVar24 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_00b8206c(local_54,uVar24,param_3,param_4,1);
          return;
        }
        puVar4 = local_54 + (uVar24 >> 3) * 0x10;
        puVar28 = local_54 + ((uVar24 >> 3) * 8 - (uVar24 >> 3)) * 4;
        if (uVar24 < 0x40) {
          uVar21 = puVar4[3] & 0x7fffffff;
          uVar19 = puVar28[3] & 0x7fffffff;
          uVar23 = local_54[3] & 0x7fffffff;
          bVar32 = uVar21 <= uVar23 &&
                   (uint)((uint)local_54[2] <= (uint)puVar4[2]) <= uVar21 - uVar23;
          if (bVar32 != (uVar19 <= uVar21 &&
                        (uint)((uint)puVar4[2] <= (uint)puVar28[2]) <= uVar19 - uVar21)) {
            puVar4 = puVar28;
          }
          if (bVar32 != (uVar19 <= uVar23 &&
                        (uint)((uint)local_54[2] <= (uint)puVar28[2]) <= uVar19 - uVar23)) {
            puVar4 = local_54;
          }
        }
        else {
          puVar4 = (undefined4 *)FUN_00b83bd4(local_54);
        }
        local_38 = *puVar4;
        uStack_34 = puVar4[1];
        uStack_30 = puVar4[2];
        uStack_2c = puVar4[3];
        param_5 = param_5 + -1;
        uVar21 = (uint)((int)puVar4 - (int)local_54) >> 4;
        if ((local_5c == 0) ||
           (uVar23 = *(uint *)(local_5c + 0xc) & 0x7fffffff,
           (puVar4[3] & 0x7fffffff) <= uVar23 &&
           (uint)(*(uint *)(local_5c + 8) <= (uint)puVar4[2]) <= (puVar4[3] & 0x7fffffff) - uVar23))
        break;
LAB_00b82b4c:
        if (param_4 < uVar24) goto LAB_00b83560;
        uVar23 = 0;
        puVar31 = local_54 + uVar21 * 4 + 2;
        puVar28 = param_3 + uVar24 * 4;
        puVar4 = local_54;
        uVar19 = uVar21;
        while( true ) {
          iVar18 = uVar19 - 3;
          if (uVar19 < 3) {
            iVar18 = 0;
          }
          if (puVar4 < local_54 + iVar18 * 4) {
            iVar16 = 0;
            local_40 = -0x30;
            iVar7 = -0x40;
            iVar10 = -0x10;
            local_44 = -0x20;
            do {
              puVar14 = (undefined4 *)((int)puVar4 + iVar16);
              iVar16 = iVar16 + 0x40;
              uVar15 = local_54[uVar21 * 4 + 3] & 0x7fffffff;
              uVar27 = puVar14[2];
              uVar11 = puVar14[3];
              uVar8 = uVar11 & 0x7fffffff;
              bVar32 = (uint)(*puVar31 <= uVar27) <= uVar8 - uVar15;
              uVar9 = puVar14[1];
              puVar12 = param_3;
              if (uVar8 <= uVar15 && bVar32) {
                puVar12 = (undefined4 *)((int)puVar28 + iVar10);
              }
              puVar12 = puVar12 + uVar23 * 4;
              *puVar12 = *puVar14;
              if (uVar8 > uVar15 || !bVar32) {
                uVar23 = uVar23 + 1;
              }
              uVar15 = puVar14[6];
              puVar12[1] = uVar9;
              puVar12[2] = uVar27;
              puVar12[3] = uVar11;
              uVar11 = local_54[uVar21 * 4 + 3] & 0x7fffffff;
              uVar8 = puVar14[7] & 0x7fffffff;
              bVar32 = (uint)(*puVar31 <= uVar15) <= uVar8 - uVar11;
              puVar12 = param_3;
              if (uVar8 <= uVar11 && bVar32) {
                puVar12 = (undefined4 *)((int)puVar28 + local_44);
              }
              local_44 = local_44 + -0x40;
              puVar12 = puVar12 + uVar23 * 4;
              *puVar12 = puVar14[4];
              if (uVar8 > uVar11 || !bVar32) {
                uVar23 = uVar23 + 1;
              }
              uVar9 = puVar14[5];
              uVar17 = puVar14[7];
              puVar12[2] = uVar15;
              puVar12[1] = uVar9;
              puVar12[3] = uVar17;
              uVar8 = puVar14[0xb] & 0x7fffffff;
              uVar11 = local_54[uVar21 * 4 + 3] & 0x7fffffff;
              bVar32 = (uint)(*puVar31 <= (uint)puVar14[10]) <= uVar8 - uVar11;
              uVar17 = puVar14[9];
              uVar9 = puVar14[10];
              puVar12 = param_3;
              if (uVar8 <= uVar11 && bVar32) {
                puVar12 = (undefined4 *)((int)puVar28 + local_40);
              }
              uVar30 = puVar14[0xb];
              local_40 = local_40 + -0x40;
              puVar12 = puVar12 + uVar23 * 4;
              *puVar12 = puVar14[8];
              if (uVar8 > uVar11 || !bVar32) {
                uVar23 = uVar23 + 1;
              }
              uVar27 = *puVar31;
              uVar11 = local_54[uVar21 * 4 + 3];
              puVar12[1] = uVar17;
              puVar12[2] = uVar9;
              puVar12[3] = uVar30;
              uVar11 = uVar11 & 0x7fffffff;
              uVar8 = puVar14[0xf] & 0x7fffffff;
              uVar9 = puVar14[0xe];
              uVar17 = puVar14[0xf];
              bVar32 = (uint)(uVar27 <= (uint)puVar14[0xe]) <= uVar8 - uVar11;
              puVar12 = param_3;
              if (uVar8 <= uVar11 && bVar32) {
                puVar12 = (undefined4 *)((int)puVar28 + iVar7);
              }
              uVar30 = puVar14[0xd];
              iVar7 = iVar7 + -0x40;
              puVar12 = puVar12 + uVar23 * 4;
              *puVar12 = puVar14[0xc];
              if (uVar8 > uVar11 || !bVar32) {
                uVar23 = uVar23 + 1;
              }
              puVar12[1] = uVar30;
              puVar12[2] = uVar9;
              puVar12[3] = uVar17;
              iVar10 = iVar10 + -0x40;
            } while ((undefined4 *)((int)puVar4 + iVar16) < local_54 + iVar18 * 4);
            puVar28 = (undefined4 *)((int)puVar28 - iVar16);
            puVar4 = (undefined4 *)((int)puVar4 + iVar16);
          }
          while (puVar4 < local_54 + uVar19 * 4) {
            puVar28 = puVar28 + -4;
            uVar27 = local_54[uVar21 * 4 + 3] & 0x7fffffff;
            uVar15 = puVar4[2];
            uVar11 = puVar4[3];
            uVar9 = *puVar4;
            uVar17 = puVar4[1];
            uVar8 = uVar11 & 0x7fffffff;
            bVar32 = uVar8 - uVar27 < (uint)(*puVar31 <= uVar15);
            puVar4 = puVar4 + 4;
            puVar12 = puVar28;
            if (uVar27 < uVar8 || bVar32) {
              puVar12 = param_3;
            }
            puVar12 = puVar12 + uVar23 * 4;
            *puVar12 = uVar9;
            if (uVar27 < uVar8 || bVar32) {
              uVar23 = uVar23 + 1;
            }
            puVar12[1] = uVar17;
            puVar12[2] = uVar15;
            puVar12[3] = uVar11;
          }
          if (uVar19 == uVar24) break;
          puVar28 = puVar28 + -4;
          uVar9 = puVar4[1];
          uVar17 = puVar4[2];
          uVar30 = puVar4[3];
          puVar12 = param_3 + uVar23 * 4;
          *puVar12 = *puVar4;
          uVar23 = uVar23 + 1;
          puVar12[1] = uVar9;
          puVar12[2] = uVar17;
          puVar12[3] = uVar30;
          puVar4 = puVar4 + 4;
          uVar19 = uVar24;
        }
        FUN_016dd1aa(local_54,param_3,uVar23 << 4);
        param_2 = uVar24 - uVar23;
        if (param_2 == 0) {
          return;
        }
        puVar28 = param_3 + uVar24 * 4 + -4;
        local_54 = local_54 + uVar23 * 4;
        uVar21 = param_2;
        puVar4 = local_54;
        do {
          uVar9 = *puVar28;
          uVar20 = puVar28[1];
          uVar21 = uVar21 - 1;
          uVar30 = puVar28[2];
          uVar17 = puVar28[3];
          puVar28 = puVar28 + -4;
          *puVar4 = uVar9;
          puVar4[1] = uVar20;
          puVar4[2] = uVar30;
          puVar4[3] = uVar17;
          puVar4 = puVar4 + 4;
        } while (uVar21 != 0);
        if (uVar24 < uVar23) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar23,uVar24,uVar24,&DAT_018af348);
        }
        local_5c = 0;
        uVar24 = param_2;
        if (param_2 < 0x21) goto LAB_00b826a8;
      }
      if (param_4 < uVar24) goto LAB_00b83560;
      param_2 = 0;
      puVar28 = param_3 + uVar24 * 4;
      puVar31 = local_54 + uVar21 * 4 + 2;
      uVar23 = uVar21;
      puVar4 = local_54;
      while( true ) {
        iVar18 = uVar23 - 3;
        if (uVar23 < 3) {
          iVar18 = 0;
        }
        if (puVar4 < local_54 + iVar18 * 4) {
          iVar25 = 0;
          iVar16 = -0x40;
          iVar7 = -0x30;
          iVar10 = -0x20;
          iVar22 = -0x10;
          do {
            puVar14 = (undefined4 *)((int)puVar4 + iVar25);
            uVar8 = local_54[uVar21 * 4 + 3] & 0x7fffffff;
            uVar11 = puVar14[2];
            uVar27 = puVar14[3];
            iVar25 = iVar25 + 0x40;
            uVar19 = uVar27 & 0x7fffffff;
            bVar32 = uVar8 - uVar19 < (uint)(uVar11 <= *puVar31);
            uVar9 = puVar14[1];
            puVar12 = param_3;
            if (uVar19 < uVar8 || bVar32) {
              puVar12 = (undefined4 *)((int)puVar28 + iVar22);
            }
            puVar12 = puVar12 + param_2 * 4;
            *puVar12 = *puVar14;
            if (uVar19 >= uVar8 && !bVar32) {
              param_2 = param_2 + 1;
            }
            uVar8 = local_54[uVar21 * 4 + 3];
            puVar12[1] = uVar9;
            puVar12[2] = uVar11;
            uVar8 = uVar8 & 0x7fffffff;
            puVar12[3] = uVar27;
            uVar11 = puVar14[6];
            uVar19 = puVar14[7] & 0x7fffffff;
            bVar32 = uVar8 - uVar19 < (uint)(uVar11 <= *puVar31);
            puVar12 = param_3;
            if (uVar19 < uVar8 || bVar32) {
              puVar12 = (undefined4 *)((int)puVar28 + iVar10);
            }
            iVar10 = iVar10 + -0x40;
            puVar12 = puVar12 + param_2 * 4;
            *puVar12 = puVar14[4];
            if (uVar19 >= uVar8 && !bVar32) {
              param_2 = param_2 + 1;
            }
            uVar9 = puVar14[5];
            puVar12[2] = uVar11;
            uVar17 = puVar14[7];
            puVar12[1] = uVar9;
            puVar12[3] = uVar17;
            uVar19 = puVar14[0xb] & 0x7fffffff;
            uVar8 = local_54[uVar21 * 4 + 3] & 0x7fffffff;
            uVar17 = puVar14[9];
            bVar32 = uVar8 - uVar19 < (uint)((uint)puVar14[10] <= *puVar31);
            uVar9 = puVar14[10];
            puVar12 = param_3;
            if (uVar19 < uVar8 || bVar32) {
              puVar12 = (undefined4 *)((int)puVar28 + iVar7);
            }
            uVar30 = puVar14[0xb];
            iVar7 = iVar7 + -0x40;
            puVar12 = puVar12 + param_2 * 4;
            *puVar12 = puVar14[8];
            if (uVar19 >= uVar8 && !bVar32) {
              param_2 = param_2 + 1;
            }
            puVar12[2] = uVar9;
            uVar19 = puVar14[0xf];
            puVar12[3] = uVar30;
            uVar8 = *puVar31;
            uVar19 = uVar19 & 0x7fffffff;
            uVar11 = local_54[uVar21 * 4 + 3] & 0x7fffffff;
            puVar12[1] = uVar17;
            uVar9 = puVar14[0xd];
            bVar32 = uVar11 - uVar19 < (uint)((uint)puVar14[0xe] <= uVar8);
            uVar17 = puVar14[0xe];
            puVar12 = param_3;
            if (uVar19 < uVar11 || bVar32) {
              puVar12 = (undefined4 *)((int)puVar28 + iVar16);
            }
            uVar30 = puVar14[0xf];
            iVar16 = iVar16 + -0x40;
            puVar12 = puVar12 + param_2 * 4;
            *puVar12 = puVar14[0xc];
            if (uVar19 >= uVar11 && !bVar32) {
              param_2 = param_2 + 1;
            }
            puVar12[3] = uVar30;
            iVar22 = iVar22 + -0x40;
            puVar12[1] = uVar9;
            puVar12[2] = uVar17;
          } while ((undefined4 *)((int)puVar4 + iVar25) < local_54 + iVar18 * 4);
          puVar28 = (undefined4 *)((int)puVar28 - iVar25);
          puVar4 = (undefined4 *)((int)puVar4 + iVar25);
        }
        while (puVar4 < local_54 + uVar23 * 4) {
          puVar28 = puVar28 + -4;
          uVar27 = puVar4[2];
          uVar8 = local_54[uVar21 * 4 + 3] & 0x7fffffff;
          uVar11 = puVar4[3];
          uVar17 = *puVar4;
          uVar19 = uVar11 & 0x7fffffff;
          uVar9 = puVar4[1];
          bVar32 = (uint)(uVar27 <= *puVar31) <= uVar8 - uVar19;
          puVar4 = puVar4 + 4;
          puVar12 = puVar28;
          if (uVar8 <= uVar19 && bVar32) {
            puVar12 = param_3;
          }
          puVar12 = puVar12 + param_2 * 4;
          *puVar12 = uVar17;
          if (uVar8 <= uVar19 && bVar32) {
            param_2 = param_2 + 1;
          }
          puVar12[1] = uVar9;
          puVar12[2] = uVar27;
          puVar12[3] = uVar11;
        }
        if (uVar23 == uVar24) break;
        puVar28 = puVar28 + -4;
        uVar9 = puVar4[1];
        uVar17 = puVar4[2];
        uVar30 = puVar4[3];
        puVar12 = puVar28 + param_2 * 4;
        *puVar12 = *puVar4;
        puVar12[1] = uVar9;
        puVar12[2] = uVar17;
        puVar12[3] = uVar30;
        puVar4 = puVar4 + 4;
        uVar23 = uVar24;
      }
      FUN_016dd1aa(local_54,param_3,param_2 << 4);
      iVar18 = uVar24 - param_2;
      if (iVar18 != 0) {
        puVar4 = param_3 + uVar24 * 4 + -4;
        puVar28 = local_54 + param_2 * 4;
        iVar10 = iVar18;
        do {
          uVar20 = *puVar4;
          iVar10 = iVar10 + -1;
          uVar30 = puVar4[1];
          uVar17 = puVar4[2];
          uVar9 = puVar4[3];
          puVar4 = puVar4 + -4;
          *puVar28 = uVar20;
          puVar28[1] = uVar30;
          puVar28[2] = uVar17;
          puVar28[3] = uVar9;
          puVar28 = puVar28 + 4;
        } while (iVar10 != 0);
      }
      if (param_2 == 0) goto LAB_00b82b4c;
      if (uVar24 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
      }
      FUN_00b82684(local_54 + param_2 * 4,iVar18,param_3,param_4,param_5,&local_38);
      uVar24 = param_2;
    } while (0x20 < param_2);
  }
LAB_00b826a8:
  uVar24 = param_2 >> 1;
  if (uVar24 == 0) {
    return;
  }
  puVar4 = param_3 + param_2 * 4;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      uVar21 = 1;
      uVar9 = local_54[1];
      uVar17 = local_54[3];
      uVar26 = *local_54;
      param_3[2] = local_54[2];
      puVar28 = local_54 + uVar24 * 4;
      uVar30 = *puVar28;
      param_3[3] = uVar17;
      param_3[1] = uVar9;
      uVar17 = puVar28[1];
      uVar20 = puVar28[2];
      *param_3 = uVar26;
      uVar9 = puVar28[3];
      puVar28 = param_3 + uVar24 * 4;
      *puVar28 = uVar30;
      puVar28[1] = uVar17;
      puVar28[2] = uVar20;
      puVar28[3] = uVar9;
      local_58 = param_2 - uVar24;
      if (uVar24 < 2) goto LAB_00b832c4;
    }
    else {
      uVar21 = local_54[3] & 0x7fffffff;
      uVar19 = local_54[7] & 0x7fffffff;
      bVar32 = uVar21 - uVar19 < (uint)((uint)local_54[6] <= (uint)local_54[2]);
      uVar23 = local_54[0xb] & 0x7fffffff;
      puVar28 = local_54 + (uint)(uVar19 < uVar21 || bVar32) * 4;
      puVar12 = local_54 + (uint)(uVar19 >= uVar21 && !bVar32) * 4;
      uVar21 = local_54[0xf] & 0x7fffffff;
      bVar32 = (uint)((uint)local_54[0xe] <= (uint)local_54[10]) <= uVar23 - uVar21;
      iVar18 = 0x20;
      if (uVar23 <= uVar21 && bVar32) {
        iVar18 = 0x30;
      }
      iVar10 = 0x30;
      puVar14 = (undefined4 *)((int)local_54 + iVar18);
      if (uVar23 <= uVar21 && bVar32) {
        iVar10 = 0x20;
      }
      puVar6 = (undefined4 *)((int)local_54 + iVar10);
      uVar23 = puVar12[3] & 0x7fffffff;
      uVar21 = puVar14[3] & 0x7fffffff;
      bVar32 = uVar23 - uVar21 < (uint)((uint)puVar14[2] <= (uint)puVar12[2]);
      puVar5 = puVar14;
      if (uVar21 >= uVar23 && !bVar32) {
        puVar5 = puVar28;
      }
      puVar13 = puVar28;
      puVar3 = puVar6;
      if ((puVar28[3] & 0x7fffffff) <= (puVar6[3] & 0x7fffffff) &&
          (uint)((uint)puVar6[2] <= (uint)puVar28[2]) <=
          (puVar28[3] & 0x7fffffff) - (puVar6[3] & 0x7fffffff)) {
        puVar13 = puVar14;
        puVar3 = puVar28;
        puVar5 = puVar6;
      }
      if ((((byte)((uVar21 < uVar23 || bVar32) << 2 | in_Q) & 0x1f) >> 2 & 1) == 0) {
        puVar13 = puVar12;
      }
      else {
        puVar14 = puVar12;
      }
      uVar17 = puVar14[1];
      *param_3 = *puVar14;
      uVar9 = puVar14[2];
      uVar23 = puVar5[2];
      uVar19 = puVar5[3];
      uVar8 = puVar13[2];
      uVar21 = puVar13[3];
      param_3[3] = puVar14[3];
      param_3[2] = uVar9;
      param_3[1] = uVar17;
      if ((uVar19 & 0x7fffffff) < (uVar21 & 0x7fffffff) ||
          (uVar21 & 0x7fffffff) - (uVar19 & 0x7fffffff) < (uint)(uVar23 <= uVar8)) {
        puVar28 = puVar5;
      }
      else {
        puVar28 = puVar13;
        puVar13 = puVar5;
      }
      param_3[4] = *puVar13;
      uVar30 = puVar13[2];
      param_3[5] = puVar13[1];
      uVar9 = *puVar28;
      param_3[7] = puVar13[3];
      uVar17 = puVar28[1];
      param_3[8] = uVar9;
      param_3[6] = uVar30;
      uVar9 = puVar28[2];
      param_3[9] = uVar17;
      uVar17 = puVar28[3];
      param_3[10] = uVar9;
      param_3[0xb] = uVar17;
      uVar9 = puVar3[1];
      uVar17 = puVar3[2];
      uVar30 = puVar3[3];
      param_3[0xc] = *puVar3;
      param_3[0xe] = uVar17;
      param_3[0xf] = uVar30;
      param_3[0xd] = uVar9;
      uVar19 = local_54[uVar24 * 4 + 3] & 0x7fffffff;
      uVar8 = local_54[uVar24 * 4 + 7] & 0x7fffffff;
      bVar32 = uVar19 - uVar8 <
               (uint)((uint)local_54[uVar24 * 4 + 6] <= (uint)local_54[uVar24 * 4 + 2]);
      puVar28 = local_54 + uVar24 * 4 + (uint)(uVar8 < uVar19 || bVar32) * 4;
      uVar21 = local_54[uVar24 * 4 + 0xf] & 0x7fffffff;
      uVar23 = local_54[uVar24 * 4 + 0xb] & 0x7fffffff;
      bVar2 = (uint)((uint)local_54[uVar24 * 4 + 0xe] <= (uint)local_54[uVar24 * 4 + 10]) <=
              uVar23 - uVar21;
      iVar18 = 0x20;
      if (uVar23 <= uVar21 && bVar2) {
        iVar18 = 0x30;
      }
      puVar14 = local_54 + uVar24 * 4 + (uint)(uVar8 >= uVar19 && !bVar32) * 4;
      iVar10 = 0x30;
      puVar12 = (undefined4 *)((int)local_54 + iVar18 + uVar24 * 0x10);
      if (uVar23 <= uVar21 && bVar2) {
        iVar10 = 0x20;
      }
      puVar6 = (undefined4 *)((int)local_54 + iVar10 + uVar24 * 0x10);
      uVar23 = puVar14[3] & 0x7fffffff;
      uVar21 = puVar12[3] & 0x7fffffff;
      bVar32 = (uint)((uint)puVar12[2] <= (uint)puVar14[2]) <= uVar23 - uVar21;
      puVar5 = puVar12;
      if (uVar23 <= uVar21 && bVar32) {
        puVar5 = puVar28;
      }
      puVar13 = puVar28;
      puVar3 = puVar6;
      if ((puVar28[3] & 0x7fffffff) <= (puVar6[3] & 0x7fffffff) &&
          (uint)((uint)puVar6[2] <= (uint)puVar28[2]) <=
          (puVar28[3] & 0x7fffffff) - (puVar6[3] & 0x7fffffff)) {
        puVar13 = puVar12;
        puVar3 = puVar28;
        puVar5 = puVar6;
      }
      puVar28 = puVar14;
      if (uVar23 <= uVar21 && bVar32) {
        puVar28 = puVar12;
        puVar13 = puVar14;
      }
      uVar21 = puVar5[2];
      uVar23 = puVar5[3];
      uVar9 = puVar28[1];
      uVar17 = puVar28[2];
      uVar30 = puVar28[3];
      uVar19 = puVar13[2];
      uVar8 = puVar13[3];
      puVar12 = param_3 + uVar24 * 4;
      *puVar12 = *puVar28;
      puVar12[2] = uVar17;
      puVar12[1] = uVar9;
      if ((uVar23 & 0x7fffffff) < (uVar8 & 0x7fffffff) ||
          (uVar8 & 0x7fffffff) - (uVar23 & 0x7fffffff) < (uint)(uVar21 <= uVar19)) {
        puVar28 = puVar13;
        puVar13 = puVar5;
      }
      else {
        puVar28 = puVar5;
      }
      puVar12[3] = uVar30;
      uVar21 = 4;
      uVar29 = puVar28[2];
      uVar30 = puVar28[1];
      uVar9 = puVar28[3];
      puVar12[4] = *puVar28;
      puVar12[7] = uVar9;
      uVar9 = *puVar13;
      uVar17 = puVar13[1];
      uVar20 = puVar13[2];
      puVar12[0xb] = puVar13[3];
      puVar12[9] = uVar17;
      puVar12[8] = uVar9;
      uVar9 = *puVar3;
      uVar17 = puVar3[1];
      uVar26 = puVar3[2];
      puVar12[0xf] = puVar3[3];
      puVar12[5] = uVar30;
      puVar12[6] = uVar29;
      puVar12[10] = uVar20;
      puVar12[0xc] = uVar9;
      puVar12[0xd] = uVar17;
      puVar12[0xe] = uVar26;
      local_58 = param_2 - uVar24;
      if (uVar24 < 5) goto LAB_00b832c4;
    }
  }
  else {
    FUN_00b835a4(local_54,param_3,puVar4);
    FUN_00b835a4(local_54 + uVar24 * 4,param_3 + uVar24 * 4,puVar4 + 0x20);
    uVar21 = 8;
    local_58 = param_2 - uVar24;
    if (uVar24 < 9) goto LAB_00b832c4;
  }
  iVar18 = uVar21 << 4;
  uVar23 = uVar21;
  do {
    puVar28 = local_54 + uVar23 * 4;
    uVar30 = puVar28[1];
    uVar9 = puVar28[2];
    uVar17 = puVar28[3];
    puVar12 = param_3 + uVar23 * 4;
    *puVar12 = *puVar28;
    puVar12[3] = uVar17;
    puVar12[2] = uVar9;
    uVar33 = *(undefined8 *)(puVar12 + 2);
    puVar12[1] = uVar30;
    uVar19 = (uint)((ulonglong)uVar33 >> 0x20) & 0x7fffffff;
    if ((puVar12[-1] & 0x7fffffff) <= uVar19 &&
        (uint)((uint)uVar33 <= (uint)puVar12[-2]) <= (puVar12[-1] & 0x7fffffff) - uVar19) {
      uVar9 = *puVar12;
      uVar17 = puVar12[1];
      iVar10 = iVar18;
      do {
        iVar7 = iVar10;
        *(undefined4 *)((int)param_3 + iVar7) = *(undefined4 *)((int)param_3 + iVar7 + -0x10);
        *(undefined4 *)((int)param_3 + iVar7 + 4) = *(undefined4 *)((int)param_3 + iVar7 + -0xc);
        *(undefined4 *)((int)param_3 + iVar7 + 8) = *(undefined4 *)((int)param_3 + iVar7 + -8);
        *(undefined4 *)((int)param_3 + iVar7 + 0xc) = *(undefined4 *)((int)param_3 + iVar7 + -4);
        if (iVar7 == 0x10) {
          puVar28 = param_3;
          goto LAB_00b83208;
        }
        uVar8 = *(uint *)((int)param_3 + iVar7 + -0x14) & 0x7fffffff;
        iVar10 = iVar7 + -0x10;
      } while (uVar8 <= uVar19 &&
               (uint)((uint)uVar33 <= *(uint *)((int)param_3 + iVar7 + -0x18)) <= uVar8 - uVar19);
      puVar28 = (undefined4 *)((int)param_3 + iVar7 + -0x10);
LAB_00b83208:
      *puVar28 = uVar9;
      puVar28[1] = uVar17;
      *(undefined8 *)((int)param_3 + iVar7 + -8) = uVar33;
    }
    uVar23 = uVar23 + 1;
    iVar18 = iVar18 + 0x10;
  } while (uVar23 != uVar24);
LAB_00b832c4:
  puVar28 = param_3 + uVar24 * 4;
  if (uVar21 < local_58) {
    local_40 = 0x10;
    puVar12 = puVar28;
    uVar23 = uVar21;
    do {
      puVar14 = local_54 + uVar24 * 4 + uVar23 * 4;
      uVar30 = puVar14[1];
      uVar9 = puVar14[2];
      uVar17 = puVar14[3];
      puVar5 = puVar28 + uVar23 * 4;
      *puVar5 = *puVar14;
      puVar5[3] = uVar17;
      puVar5[2] = uVar9;
      uVar33 = *(undefined8 *)(puVar5 + 2);
      puVar5[1] = uVar30;
      uVar19 = (uint)((ulonglong)uVar33 >> 0x20) & 0x7fffffff;
      if ((puVar5[-1] & 0x7fffffff) <= uVar19 &&
          (uint)((uint)uVar33 <= (uint)puVar5[-2]) <= (puVar5[-1] & 0x7fffffff) - uVar19) {
        uVar9 = *puVar5;
        uVar17 = puVar5[1];
        puVar14 = puVar12;
        iVar18 = local_40;
        do {
          puVar5 = puVar14;
          uVar30 = puVar5[uVar21 * 4 + -3];
          uVar20 = puVar5[uVar21 * 4 + -1];
          uVar26 = puVar5[uVar21 * 4 + -2];
          puVar5[uVar21 * 4] = puVar5[uVar21 * 4 + -4];
          puVar5[uVar21 * 4 + 1] = uVar30;
          puVar5[uVar21 * 4 + 2] = uVar26;
          puVar5[uVar21 * 4 + 3] = uVar20;
          if (uVar21 * 0x10 == iVar18) {
            puVar14 = puVar28;
            goto LAB_00b83300;
          }
          iVar18 = iVar18 + 0x10;
          puVar14 = puVar5 + -4;
        } while ((puVar5[uVar21 * 4 + -5] & 0x7fffffff) <= uVar19 &&
                 (uint)((uint)uVar33 <= (uint)puVar5[uVar21 * 4 + -6]) <=
                 (puVar5[uVar21 * 4 + -5] & 0x7fffffff) - uVar19);
        puVar14 = puVar5 + -4 + uVar21 * 4;
LAB_00b83300:
        *puVar14 = uVar9;
        puVar14[1] = uVar17;
        *(undefined8 *)(puVar5 + uVar21 * 4 + -2) = uVar33;
      }
      uVar23 = uVar23 + 1;
      puVar12 = puVar12 + 4;
      local_40 = local_40 + -0x10;
    } while (uVar23 != local_58);
  }
  puVar12 = puVar28 + -4;
  iVar18 = 0;
  puVar4 = puVar4 + -4;
  do {
    uVar23 = puVar28[3] & 0x7fffffff;
    uVar21 = param_3[3] & 0x7fffffff;
    bVar32 = (uint)((uint)puVar28[2] <= (uint)param_3[2]) <= uVar21 - uVar23;
    uVar19 = (uint)(uVar21 <= uVar23 && bVar32);
    puVar14 = (undefined4 *)(uint)(uVar21 > uVar23 || !bVar32);
    puVar5 = param_3;
    if (uVar19 != 0) {
      puVar5 = puVar28;
    }
    uVar9 = puVar5[1];
    uVar17 = puVar5[2];
    uVar30 = puVar5[3];
    puVar6 = (undefined4 *)((int)local_54 + iVar18);
    *puVar6 = *puVar5;
    puVar6[1] = uVar9;
    puVar6[2] = uVar17;
    puVar6[3] = uVar30;
    uVar21 = puVar4[3] & 0x7fffffff;
    uVar23 = puVar12[3] & 0x7fffffff;
    bVar32 = (uint)((uint)puVar4[2] <= (uint)puVar12[2]) <= uVar23 - uVar21;
    iVar10 = 0;
    puVar5 = puVar4;
    if (uVar23 <= uVar21 && bVar32) {
      iVar10 = -1;
      puVar5 = puVar12;
    }
    uVar9 = puVar5[1];
    iVar7 = 0;
    if (uVar23 > uVar21 || !bVar32) {
      iVar7 = -1;
    }
    uVar30 = puVar5[2];
    puVar4 = puVar4 + iVar7 * 4;
    uVar17 = puVar5[3];
    puVar12 = puVar12 + iVar10 * 4;
    puVar6 = (undefined4 *)((int)local_54 + ((param_2 * 0x10 + -0x10) - iVar18));
    *puVar6 = *puVar5;
    iVar18 = iVar18 + 0x10;
    uVar24 = uVar24 - 1;
    puVar6[1] = uVar9;
    puVar6[2] = uVar30;
    puVar28 = puVar28 + uVar19 * 4;
    param_3 = param_3 + (int)puVar14 * 4;
    puVar6[3] = uVar17;
  } while (uVar24 != 0);
  puVar12 = puVar12 + 4;
  if ((param_2 & 1) != 0) {
    bVar32 = puVar12 <= param_3;
    puVar14 = puVar28;
    if (!bVar32) {
      puVar14 = param_3;
    }
    local_54 = (undefined4 *)((int)local_54 + iVar18);
    uVar9 = *puVar14;
    uVar17 = puVar14[1];
    uVar30 = puVar14[2];
    local_54[3] = puVar14[3];
    *local_54 = uVar9;
    local_54[1] = uVar17;
    local_54[2] = uVar30;
    puVar14 = (undefined4 *)(uint)!bVar32;
    puVar28 = puVar28 + (uint)bVar32 * 4;
    param_3 = param_3 + (int)puVar14 * 4;
  }
  if (param_3 == puVar12) {
    puVar14 = puVar4 + 4;
  }
  if (param_3 == puVar12 && puVar28 == puVar14) {
    return;
  }
  FUN_00fb7254();
LAB_00b83560:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xb83560);
  (*pcVar1)();
}

