// FUN_00b690d4 @ 00b690d4 size=3772 calls_out=8 calls_in=2
// strings: 

void FUN_00b690d4(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  undefined4 *puVar26;
  undefined4 uVar27;
  uint uVar28;
  uint *puVar29;
  int iVar30;
  undefined4 uVar31;
  bool bVar32;
  byte in_Q;
  undefined8 uVar33;
  int local_70;
  int local_5c;
  undefined4 *local_54;
  int local_44;
  int local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  
  local_54 = param_1;
  if (0x20 < param_2) {
    local_5c = param_6;
    local_70 = param_5;
    do {
      uVar28 = param_2;
      while( true ) {
        if (local_70 == 0) {
          FUN_00b68ae8(local_54,uVar28,param_3,param_4,1);
          return;
        }
        puVar5 = local_54 + (uVar28 >> 3) * 0x10;
        puVar26 = local_54 + ((uVar28 >> 3) * 8 - (uVar28 >> 3)) * 4;
        if (uVar28 < 0x40) {
          uVar4 = puVar5[3] & 0x7fffffff;
          uVar15 = puVar26[3] & 0x7fffffff;
          uVar23 = local_54[3] & 0x7fffffff;
          bVar32 = uVar4 <= uVar23 && (uint)((uint)local_54[2] <= (uint)puVar5[2]) <= uVar4 - uVar23
          ;
          if (bVar32 != (uVar15 <= uVar4 &&
                        (uint)((uint)puVar5[2] <= (uint)puVar26[2]) <= uVar15 - uVar4)) {
            puVar5 = puVar26;
          }
          if (bVar32 != (uVar15 <= uVar23 &&
                        (uint)((uint)local_54[2] <= (uint)puVar26[2]) <= uVar15 - uVar23)) {
            puVar5 = local_54;
          }
        }
        else {
          puVar5 = (undefined4 *)FUN_00b6a5e8(local_54);
        }
        local_38[0] = *puVar5;
        local_70 = local_70 + -1;
        local_30 = *(undefined8 *)(puVar5 + 2);
        uVar4 = (uint)((int)puVar5 - (int)local_54) >> 4;
        if ((local_5c != 0) &&
           (uVar15 = *(uint *)(local_5c + 0xc) & 0x7fffffff,
           uVar23 = (uint)((ulonglong)local_30 >> 0x20) & 0x7fffffff,
           uVar15 < uVar23 || uVar23 - uVar15 < (uint)(*(uint *)(local_5c + 8) <= (uint)local_30)))
        break;
        if (param_4 < uVar28) goto LAB_00b69f74;
        param_2 = 0;
        puVar26 = param_3 + uVar28 * 4;
        puVar29 = local_54 + uVar4 * 4 + 2;
        puVar5 = local_54;
        uVar23 = uVar4;
        while( true ) {
          iVar30 = uVar23 - 3;
          if (uVar23 < 3) {
            iVar30 = 0;
          }
          if (puVar5 < local_54 + iVar30 * 4) {
            iVar24 = 0;
            iVar18 = -0x40;
            iVar8 = -0x30;
            iVar21 = -0x20;
            iVar22 = -0x10;
            do {
              puVar13 = (undefined4 *)((int)puVar5 + iVar24);
              uVar9 = local_54[uVar4 * 4 + 3] & 0x7fffffff;
              uVar10 = puVar13[2];
              uVar25 = puVar13[3];
              iVar24 = iVar24 + 0x40;
              uVar15 = uVar25 & 0x7fffffff;
              bVar32 = uVar9 - uVar15 < (uint)(uVar10 <= *puVar29);
              uVar14 = puVar13[1];
              puVar11 = param_3;
              if (uVar15 < uVar9 || bVar32) {
                puVar11 = (undefined4 *)((int)puVar26 + iVar22);
              }
              puVar11 = puVar11 + param_2 * 4;
              *puVar11 = *puVar13;
              if (uVar15 >= uVar9 && !bVar32) {
                param_2 = param_2 + 1;
              }
              uVar9 = local_54[uVar4 * 4 + 3];
              puVar11[1] = uVar14;
              puVar11[2] = uVar10;
              uVar9 = uVar9 & 0x7fffffff;
              puVar11[3] = uVar25;
              uVar10 = puVar13[6];
              uVar15 = puVar13[7] & 0x7fffffff;
              bVar32 = uVar9 - uVar15 < (uint)(uVar10 <= *puVar29);
              puVar11 = param_3;
              if (uVar15 < uVar9 || bVar32) {
                puVar11 = (undefined4 *)((int)puVar26 + iVar21);
              }
              iVar21 = iVar21 + -0x40;
              puVar11 = puVar11 + param_2 * 4;
              *puVar11 = puVar13[4];
              if (uVar15 >= uVar9 && !bVar32) {
                param_2 = param_2 + 1;
              }
              uVar14 = puVar13[5];
              puVar11[2] = uVar10;
              uVar17 = puVar13[7];
              puVar11[1] = uVar14;
              puVar11[3] = uVar17;
              uVar15 = puVar13[0xb] & 0x7fffffff;
              uVar9 = local_54[uVar4 * 4 + 3] & 0x7fffffff;
              uVar17 = puVar13[9];
              bVar32 = uVar9 - uVar15 < (uint)((uint)puVar13[10] <= *puVar29);
              uVar14 = puVar13[10];
              puVar11 = param_3;
              if (uVar15 < uVar9 || bVar32) {
                puVar11 = (undefined4 *)((int)puVar26 + iVar8);
              }
              uVar20 = puVar13[0xb];
              iVar8 = iVar8 + -0x40;
              puVar11 = puVar11 + param_2 * 4;
              *puVar11 = puVar13[8];
              if (uVar15 >= uVar9 && !bVar32) {
                param_2 = param_2 + 1;
              }
              puVar11[2] = uVar14;
              uVar15 = puVar13[0xf];
              puVar11[3] = uVar20;
              uVar9 = *puVar29;
              uVar15 = uVar15 & 0x7fffffff;
              uVar10 = local_54[uVar4 * 4 + 3] & 0x7fffffff;
              puVar11[1] = uVar17;
              uVar14 = puVar13[0xd];
              bVar32 = uVar10 - uVar15 < (uint)((uint)puVar13[0xe] <= uVar9);
              uVar17 = puVar13[0xe];
              puVar11 = param_3;
              if (uVar15 < uVar10 || bVar32) {
                puVar11 = (undefined4 *)((int)puVar26 + iVar18);
              }
              uVar20 = puVar13[0xf];
              iVar18 = iVar18 + -0x40;
              puVar11 = puVar11 + param_2 * 4;
              *puVar11 = puVar13[0xc];
              if (uVar15 >= uVar10 && !bVar32) {
                param_2 = param_2 + 1;
              }
              puVar11[3] = uVar20;
              iVar22 = iVar22 + -0x40;
              puVar11[1] = uVar14;
              puVar11[2] = uVar17;
            } while ((undefined4 *)((int)puVar5 + iVar24) < local_54 + iVar30 * 4);
            puVar26 = (undefined4 *)((int)puVar26 - iVar24);
            puVar5 = (undefined4 *)((int)puVar5 + iVar24);
          }
          while (puVar5 < local_54 + uVar23 * 4) {
            puVar26 = puVar26 + -4;
            uVar25 = puVar5[2];
            uVar9 = local_54[uVar4 * 4 + 3] & 0x7fffffff;
            uVar10 = puVar5[3];
            uVar17 = *puVar5;
            uVar15 = uVar10 & 0x7fffffff;
            uVar14 = puVar5[1];
            bVar32 = (uint)(uVar25 <= *puVar29) <= uVar9 - uVar15;
            puVar5 = puVar5 + 4;
            puVar11 = puVar26;
            if (uVar9 <= uVar15 && bVar32) {
              puVar11 = param_3;
            }
            puVar11 = puVar11 + param_2 * 4;
            *puVar11 = uVar17;
            if (uVar9 <= uVar15 && bVar32) {
              param_2 = param_2 + 1;
            }
            puVar11[1] = uVar14;
            puVar11[2] = uVar25;
            puVar11[3] = uVar10;
          }
          if (uVar23 == uVar28) break;
          puVar26 = puVar26 + -4;
          uVar14 = puVar5[1];
          uVar17 = puVar5[2];
          uVar20 = puVar5[3];
          puVar11 = puVar26 + param_2 * 4;
          *puVar11 = *puVar5;
          puVar11[1] = uVar14;
          puVar11[2] = uVar17;
          puVar11[3] = uVar20;
          puVar5 = puVar5 + 4;
          uVar23 = uVar28;
        }
        FUN_016dd1aa(local_54,param_3,param_2 << 4);
        iVar30 = uVar28 - param_2;
        if (iVar30 != 0) {
          puVar5 = param_3 + uVar28 * 4 + -4;
          puVar26 = local_54 + param_2 * 4;
          iVar21 = iVar30;
          do {
            uVar31 = *puVar5;
            iVar21 = iVar21 + -1;
            uVar20 = puVar5[1];
            uVar17 = puVar5[2];
            uVar14 = puVar5[3];
            puVar5 = puVar5 + -4;
            *puVar26 = uVar31;
            puVar26[1] = uVar20;
            puVar26[2] = uVar17;
            puVar26[3] = uVar14;
            puVar26 = puVar26 + 4;
          } while (iVar21 != 0);
        }
        if (param_2 == 0) break;
        if (uVar28 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_00b690d4(local_54 + param_2 * 4,iVar30,param_3,param_4,local_70,local_38);
        uVar28 = param_2;
        if (param_2 < 0x21) goto LAB_00b690f8;
      }
      if (param_4 < uVar28) goto LAB_00b69f74;
      uVar23 = 0;
      puVar29 = local_54 + uVar4 * 4 + 2;
      puVar26 = param_3 + uVar28 * 4;
      puVar5 = local_54;
      uVar15 = uVar4;
      while( true ) {
        iVar30 = uVar15 - 3;
        if (uVar15 < 3) {
          iVar30 = 0;
        }
        if (puVar5 < local_54 + iVar30 * 4) {
          iVar18 = 0;
          local_40 = -0x30;
          iVar8 = -0x40;
          iVar21 = -0x10;
          local_44 = -0x20;
          do {
            puVar13 = (undefined4 *)((int)puVar5 + iVar18);
            iVar18 = iVar18 + 0x40;
            uVar16 = local_54[uVar4 * 4 + 3] & 0x7fffffff;
            uVar25 = puVar13[2];
            uVar10 = puVar13[3];
            uVar9 = uVar10 & 0x7fffffff;
            bVar32 = (uint)(*puVar29 <= uVar25) <= uVar9 - uVar16;
            uVar14 = puVar13[1];
            puVar11 = param_3;
            if (uVar9 <= uVar16 && bVar32) {
              puVar11 = (undefined4 *)((int)puVar26 + iVar21);
            }
            puVar11 = puVar11 + uVar23 * 4;
            *puVar11 = *puVar13;
            if (uVar9 > uVar16 || !bVar32) {
              uVar23 = uVar23 + 1;
            }
            uVar16 = puVar13[6];
            puVar11[1] = uVar14;
            puVar11[2] = uVar25;
            puVar11[3] = uVar10;
            uVar10 = local_54[uVar4 * 4 + 3] & 0x7fffffff;
            uVar9 = puVar13[7] & 0x7fffffff;
            bVar32 = (uint)(*puVar29 <= uVar16) <= uVar9 - uVar10;
            puVar11 = param_3;
            if (uVar9 <= uVar10 && bVar32) {
              puVar11 = (undefined4 *)((int)puVar26 + local_44);
            }
            local_44 = local_44 + -0x40;
            puVar11 = puVar11 + uVar23 * 4;
            *puVar11 = puVar13[4];
            if (uVar9 > uVar10 || !bVar32) {
              uVar23 = uVar23 + 1;
            }
            uVar14 = puVar13[5];
            uVar17 = puVar13[7];
            puVar11[2] = uVar16;
            puVar11[1] = uVar14;
            puVar11[3] = uVar17;
            uVar9 = puVar13[0xb] & 0x7fffffff;
            uVar10 = local_54[uVar4 * 4 + 3] & 0x7fffffff;
            bVar32 = (uint)(*puVar29 <= (uint)puVar13[10]) <= uVar9 - uVar10;
            uVar17 = puVar13[9];
            uVar14 = puVar13[10];
            puVar11 = param_3;
            if (uVar9 <= uVar10 && bVar32) {
              puVar11 = (undefined4 *)((int)puVar26 + local_40);
            }
            uVar20 = puVar13[0xb];
            local_40 = local_40 + -0x40;
            puVar11 = puVar11 + uVar23 * 4;
            *puVar11 = puVar13[8];
            if (uVar9 > uVar10 || !bVar32) {
              uVar23 = uVar23 + 1;
            }
            uVar25 = *puVar29;
            uVar10 = local_54[uVar4 * 4 + 3];
            puVar11[1] = uVar17;
            puVar11[2] = uVar14;
            puVar11[3] = uVar20;
            uVar10 = uVar10 & 0x7fffffff;
            uVar9 = puVar13[0xf] & 0x7fffffff;
            uVar14 = puVar13[0xe];
            uVar17 = puVar13[0xf];
            bVar32 = (uint)(uVar25 <= (uint)puVar13[0xe]) <= uVar9 - uVar10;
            puVar11 = param_3;
            if (uVar9 <= uVar10 && bVar32) {
              puVar11 = (undefined4 *)((int)puVar26 + iVar8);
            }
            uVar20 = puVar13[0xd];
            iVar8 = iVar8 + -0x40;
            puVar11 = puVar11 + uVar23 * 4;
            *puVar11 = puVar13[0xc];
            if (uVar9 > uVar10 || !bVar32) {
              uVar23 = uVar23 + 1;
            }
            puVar11[1] = uVar20;
            puVar11[2] = uVar14;
            puVar11[3] = uVar17;
            iVar21 = iVar21 + -0x40;
          } while ((undefined4 *)((int)puVar5 + iVar18) < local_54 + iVar30 * 4);
          puVar26 = (undefined4 *)((int)puVar26 - iVar18);
          puVar5 = (undefined4 *)((int)puVar5 + iVar18);
        }
        while (puVar5 < local_54 + uVar15 * 4) {
          puVar26 = puVar26 + -4;
          uVar25 = local_54[uVar4 * 4 + 3] & 0x7fffffff;
          uVar16 = puVar5[2];
          uVar10 = puVar5[3];
          uVar14 = *puVar5;
          uVar17 = puVar5[1];
          uVar9 = uVar10 & 0x7fffffff;
          bVar32 = uVar9 - uVar25 < (uint)(*puVar29 <= uVar16);
          puVar5 = puVar5 + 4;
          puVar11 = puVar26;
          if (uVar25 < uVar9 || bVar32) {
            puVar11 = param_3;
          }
          puVar11 = puVar11 + uVar23 * 4;
          *puVar11 = uVar14;
          if (uVar25 < uVar9 || bVar32) {
            uVar23 = uVar23 + 1;
          }
          puVar11[1] = uVar17;
          puVar11[2] = uVar16;
          puVar11[3] = uVar10;
        }
        if (uVar15 == uVar28) break;
        puVar26 = puVar26 + -4;
        uVar14 = puVar5[1];
        uVar17 = puVar5[2];
        uVar20 = puVar5[3];
        puVar11 = param_3 + uVar23 * 4;
        *puVar11 = *puVar5;
        uVar23 = uVar23 + 1;
        puVar11[1] = uVar14;
        puVar11[2] = uVar17;
        puVar11[3] = uVar20;
        puVar5 = puVar5 + 4;
        uVar15 = uVar28;
      }
      FUN_016dd1aa(local_54,param_3,uVar23 << 4);
      param_2 = uVar28 - uVar23;
      if (param_2 == 0) {
        return;
      }
      puVar26 = param_3 + uVar28 * 4 + -4;
      local_54 = local_54 + uVar23 * 4;
      uVar4 = param_2;
      puVar5 = local_54;
      do {
        uVar14 = *puVar26;
        uVar31 = puVar26[1];
        uVar4 = uVar4 - 1;
        uVar20 = puVar26[2];
        uVar17 = puVar26[3];
        puVar26 = puVar26 + -4;
        *puVar5 = uVar14;
        puVar5[1] = uVar31;
        puVar5[2] = uVar20;
        puVar5[3] = uVar17;
        puVar5 = puVar5 + 4;
      } while (uVar4 != 0);
      if (uVar28 < uVar23) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar23,uVar28,uVar28,&DAT_018af348);
      }
      local_5c = 0;
    } while (0x20 < param_2);
  }
LAB_00b690f8:
  uVar28 = param_2 >> 1;
  if (uVar28 != 0) {
    puVar5 = param_3 + param_2 * 4;
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        uVar14 = local_54[1];
        uVar17 = local_54[3];
        uVar31 = *local_54;
        param_3[2] = local_54[2];
        puVar26 = local_54 + uVar28 * 4;
        uVar20 = *puVar26;
        *param_3 = uVar31;
        param_3[3] = uVar17;
        param_3[1] = uVar14;
        uVar17 = puVar26[1];
        uVar31 = puVar26[2];
        uVar14 = puVar26[3];
        puVar26 = param_3 + uVar28 * 4;
        *puVar26 = uVar20;
        puVar26[1] = uVar17;
        puVar26[2] = uVar31;
        puVar26[3] = uVar14;
        uVar4 = 1;
      }
      else {
        uVar4 = local_54[3] & 0x7fffffff;
        uVar15 = local_54[7] & 0x7fffffff;
        bVar32 = uVar4 - uVar15 < (uint)((uint)local_54[6] <= (uint)local_54[2]);
        uVar23 = local_54[0xb] & 0x7fffffff;
        puVar26 = local_54 + (uint)(uVar15 < uVar4 || bVar32) * 4;
        puVar11 = local_54 + (uint)(uVar15 >= uVar4 && !bVar32) * 4;
        uVar4 = local_54[0xf] & 0x7fffffff;
        bVar32 = (uint)((uint)local_54[0xe] <= (uint)local_54[10]) <= uVar23 - uVar4;
        iVar30 = 0x20;
        if (uVar23 <= uVar4 && bVar32) {
          iVar30 = 0x30;
        }
        iVar21 = 0x30;
        puVar13 = (undefined4 *)((int)local_54 + iVar30);
        if (uVar23 <= uVar4 && bVar32) {
          iVar21 = 0x20;
        }
        puVar7 = (undefined4 *)((int)local_54 + iVar21);
        uVar23 = puVar11[3] & 0x7fffffff;
        uVar4 = puVar13[3] & 0x7fffffff;
        bVar32 = uVar23 - uVar4 < (uint)((uint)puVar13[2] <= (uint)puVar11[2]);
        puVar6 = puVar13;
        if (uVar4 >= uVar23 && !bVar32) {
          puVar6 = puVar26;
        }
        puVar12 = puVar26;
        puVar3 = puVar7;
        if ((puVar26[3] & 0x7fffffff) <= (puVar7[3] & 0x7fffffff) &&
            (uint)((uint)puVar7[2] <= (uint)puVar26[2]) <=
            (puVar26[3] & 0x7fffffff) - (puVar7[3] & 0x7fffffff)) {
          puVar12 = puVar13;
          puVar3 = puVar26;
          puVar6 = puVar7;
        }
        if ((((byte)((uVar4 < uVar23 || bVar32) << 2 | in_Q) & 0x1f) >> 2 & 1) == 0) {
          puVar12 = puVar11;
        }
        else {
          puVar13 = puVar11;
        }
        uVar17 = puVar13[1];
        *param_3 = *puVar13;
        uVar14 = puVar13[2];
        uVar23 = puVar6[2];
        uVar15 = puVar6[3];
        uVar9 = puVar12[2];
        uVar4 = puVar12[3];
        param_3[3] = puVar13[3];
        param_3[2] = uVar14;
        param_3[1] = uVar17;
        if ((uVar15 & 0x7fffffff) < (uVar4 & 0x7fffffff) ||
            (uVar4 & 0x7fffffff) - (uVar15 & 0x7fffffff) < (uint)(uVar23 <= uVar9)) {
          puVar26 = puVar6;
        }
        else {
          puVar26 = puVar12;
          puVar12 = puVar6;
        }
        param_3[4] = *puVar12;
        uVar20 = puVar12[2];
        param_3[5] = puVar12[1];
        uVar14 = *puVar26;
        param_3[7] = puVar12[3];
        uVar17 = puVar26[1];
        param_3[8] = uVar14;
        param_3[6] = uVar20;
        uVar14 = puVar26[2];
        param_3[9] = uVar17;
        uVar17 = puVar26[3];
        param_3[10] = uVar14;
        param_3[0xb] = uVar17;
        uVar14 = puVar3[1];
        uVar17 = puVar3[2];
        uVar20 = puVar3[3];
        param_3[0xc] = *puVar3;
        param_3[0xe] = uVar17;
        param_3[0xf] = uVar20;
        param_3[0xd] = uVar14;
        uVar15 = local_54[uVar28 * 4 + 3] & 0x7fffffff;
        uVar9 = local_54[uVar28 * 4 + 7] & 0x7fffffff;
        bVar32 = uVar15 - uVar9 <
                 (uint)((uint)local_54[uVar28 * 4 + 6] <= (uint)local_54[uVar28 * 4 + 2]);
        puVar26 = local_54 + uVar28 * 4 + (uint)(uVar9 < uVar15 || bVar32) * 4;
        uVar4 = local_54[uVar28 * 4 + 0xf] & 0x7fffffff;
        uVar23 = local_54[uVar28 * 4 + 0xb] & 0x7fffffff;
        bVar2 = (uint)((uint)local_54[uVar28 * 4 + 0xe] <= (uint)local_54[uVar28 * 4 + 10]) <=
                uVar23 - uVar4;
        iVar30 = 0x20;
        if (uVar23 <= uVar4 && bVar2) {
          iVar30 = 0x30;
        }
        puVar13 = local_54 + uVar28 * 4 + (uint)(uVar9 >= uVar15 && !bVar32) * 4;
        iVar21 = 0x30;
        puVar11 = (undefined4 *)((int)local_54 + iVar30 + uVar28 * 0x10);
        if (uVar23 <= uVar4 && bVar2) {
          iVar21 = 0x20;
        }
        puVar7 = (undefined4 *)((int)local_54 + iVar21 + uVar28 * 0x10);
        uVar23 = puVar13[3] & 0x7fffffff;
        uVar4 = puVar11[3] & 0x7fffffff;
        bVar32 = (uint)((uint)puVar11[2] <= (uint)puVar13[2]) <= uVar23 - uVar4;
        puVar6 = puVar11;
        if (uVar23 <= uVar4 && bVar32) {
          puVar6 = puVar26;
        }
        puVar12 = puVar26;
        puVar3 = puVar7;
        if ((puVar26[3] & 0x7fffffff) <= (puVar7[3] & 0x7fffffff) &&
            (uint)((uint)puVar7[2] <= (uint)puVar26[2]) <=
            (puVar26[3] & 0x7fffffff) - (puVar7[3] & 0x7fffffff)) {
          puVar12 = puVar11;
          puVar3 = puVar26;
          puVar6 = puVar7;
        }
        puVar26 = puVar13;
        if (uVar23 <= uVar4 && bVar32) {
          puVar26 = puVar11;
          puVar12 = puVar13;
        }
        uVar4 = puVar6[2];
        uVar23 = puVar6[3];
        uVar14 = puVar26[1];
        uVar17 = puVar26[2];
        uVar20 = puVar26[3];
        uVar15 = puVar12[2];
        uVar9 = puVar12[3];
        puVar11 = param_3 + uVar28 * 4;
        *puVar11 = *puVar26;
        puVar11[2] = uVar17;
        puVar11[3] = uVar20;
        if ((uVar23 & 0x7fffffff) < (uVar9 & 0x7fffffff) ||
            (uVar9 & 0x7fffffff) - (uVar23 & 0x7fffffff) < (uint)(uVar4 <= uVar15)) {
          puVar26 = puVar12;
          puVar12 = puVar6;
        }
        else {
          puVar26 = puVar6;
        }
        puVar11[1] = uVar14;
        uVar27 = puVar26[2];
        uVar20 = puVar26[1];
        uVar14 = puVar26[3];
        puVar11[4] = *puVar26;
        puVar11[7] = uVar14;
        uVar14 = *puVar12;
        uVar17 = puVar12[1];
        uVar31 = puVar12[2];
        puVar11[0xb] = puVar12[3];
        puVar11[9] = uVar17;
        puVar11[8] = uVar14;
        uVar14 = *puVar3;
        uVar17 = puVar3[1];
        uVar19 = puVar3[2];
        puVar11[0xf] = puVar3[3];
        puVar11[0xc] = uVar14;
        puVar11[0xd] = uVar17;
        puVar11[0xe] = uVar19;
        uVar4 = 4;
        puVar11[5] = uVar20;
        puVar11[6] = uVar27;
        puVar11[10] = uVar31;
      }
    }
    else {
      FUN_00b69fb8(local_54,param_3,puVar5);
      FUN_00b69fb8(local_54 + uVar28 * 4,param_3 + uVar28 * 4,puVar5 + 0x20);
      uVar4 = 8;
    }
    if (uVar4 < uVar28) {
      iVar30 = uVar4 << 4;
      uVar23 = uVar4;
      do {
        puVar26 = local_54 + uVar23 * 4;
        uVar17 = puVar26[1];
        uVar20 = puVar26[2];
        uVar14 = puVar26[3];
        puVar11 = param_3 + uVar23 * 4;
        *puVar11 = *puVar26;
        puVar11[3] = uVar14;
        puVar11[2] = uVar20;
        uVar33 = *(undefined8 *)(puVar11 + 2);
        puVar11[1] = uVar17;
        uVar15 = (uint)((ulonglong)uVar33 >> 0x20) & 0x7fffffff;
        if ((puVar11[-1] & 0x7fffffff) <= uVar15 &&
            (uint)((uint)uVar33 <= (uint)puVar11[-2]) <= (puVar11[-1] & 0x7fffffff) - uVar15) {
          uVar14 = *puVar11;
          iVar21 = iVar30;
          do {
            iVar8 = iVar21;
            *(undefined4 *)((int)param_3 + iVar8) = *(undefined4 *)((int)param_3 + iVar8 + -0x10);
            *(undefined4 *)((int)param_3 + iVar8 + 4) = *(undefined4 *)((int)param_3 + iVar8 + -0xc)
            ;
            *(undefined4 *)((int)param_3 + iVar8 + 8) = *(undefined4 *)((int)param_3 + iVar8 + -8);
            *(undefined4 *)((int)param_3 + iVar8 + 0xc) = *(undefined4 *)((int)param_3 + iVar8 + -4)
            ;
            if (iVar8 == 0x10) {
              puVar26 = param_3;
              goto LAB_00b69c2c;
            }
            uVar9 = *(uint *)((int)param_3 + iVar8 + -0x14) & 0x7fffffff;
            iVar21 = iVar8 + -0x10;
          } while (uVar9 <= uVar15 &&
                   (uint)((uint)uVar33 <= *(uint *)((int)param_3 + iVar8 + -0x18)) <= uVar9 - uVar15
                  );
          puVar26 = (undefined4 *)((int)param_3 + iVar8 + -0x10);
LAB_00b69c2c:
          *puVar26 = uVar14;
          *(undefined8 *)((int)param_3 + iVar8 + -8) = uVar33;
        }
        uVar23 = uVar23 + 1;
        iVar30 = iVar30 + 0x10;
      } while (uVar23 != uVar28);
    }
    puVar26 = param_3 + uVar28 * 4;
    if (uVar4 < param_2 - uVar28) {
      iVar30 = 0x10;
      uVar23 = uVar4;
      puVar11 = puVar26;
      do {
        puVar13 = local_54 + uVar28 * 4 + uVar23 * 4;
        uVar17 = puVar13[1];
        uVar20 = puVar13[2];
        uVar14 = puVar13[3];
        puVar6 = puVar26 + uVar23 * 4;
        *puVar6 = *puVar13;
        puVar6[2] = uVar20;
        puVar6[3] = uVar14;
        uVar33 = *(undefined8 *)(puVar6 + 2);
        puVar6[1] = uVar17;
        uVar15 = (uint)((ulonglong)uVar33 >> 0x20) & 0x7fffffff;
        if ((puVar6[-1] & 0x7fffffff) <= uVar15 &&
            (uint)((uint)uVar33 <= (uint)puVar6[-2]) <= (puVar6[-1] & 0x7fffffff) - uVar15) {
          uVar14 = *puVar6;
          puVar13 = puVar11;
          iVar21 = iVar30;
          do {
            puVar6 = puVar13;
            uVar31 = puVar6[uVar4 * 4 + -1];
            uVar20 = puVar6[uVar4 * 4 + -2];
            uVar17 = puVar6[uVar4 * 4 + -3];
            puVar6[uVar4 * 4] = puVar6[uVar4 * 4 + -4];
            puVar6[uVar4 * 4 + 1] = uVar17;
            puVar6[uVar4 * 4 + 2] = uVar20;
            puVar6[uVar4 * 4 + 3] = uVar31;
            if (uVar4 * 0x10 == iVar21) {
              puVar13 = puVar26;
              goto LAB_00b69d24;
            }
            iVar21 = iVar21 + 0x10;
            puVar13 = puVar6 + -4;
          } while ((puVar6[uVar4 * 4 + -5] & 0x7fffffff) <= uVar15 &&
                   (uint)((uint)uVar33 <= (uint)puVar6[uVar4 * 4 + -6]) <=
                   (puVar6[uVar4 * 4 + -5] & 0x7fffffff) - uVar15);
          puVar13 = puVar6 + -4 + uVar4 * 4;
LAB_00b69d24:
          *puVar13 = uVar14;
          *(undefined8 *)(puVar6 + uVar4 * 4 + -2) = uVar33;
        }
        uVar23 = uVar23 + 1;
        iVar30 = iVar30 + -0x10;
        puVar11 = puVar11 + 4;
      } while (uVar23 != param_2 - uVar28);
    }
    puVar11 = puVar26 + -4;
    iVar30 = 0;
    puVar5 = puVar5 + -4;
    do {
      uVar23 = puVar26[3] & 0x7fffffff;
      uVar4 = param_3[3] & 0x7fffffff;
      bVar32 = (uint)((uint)puVar26[2] <= (uint)param_3[2]) <= uVar4 - uVar23;
      uVar15 = (uint)(uVar4 <= uVar23 && bVar32);
      puVar13 = (undefined4 *)(uint)(uVar4 > uVar23 || !bVar32);
      puVar6 = param_3;
      if (uVar15 != 0) {
        puVar6 = puVar26;
      }
      uVar14 = puVar6[1];
      uVar17 = puVar6[2];
      uVar20 = puVar6[3];
      puVar7 = (undefined4 *)((int)local_54 + iVar30);
      *puVar7 = *puVar6;
      puVar7[1] = uVar14;
      puVar7[2] = uVar17;
      puVar7[3] = uVar20;
      uVar4 = puVar5[3] & 0x7fffffff;
      uVar23 = puVar11[3] & 0x7fffffff;
      bVar32 = (uint)((uint)puVar5[2] <= (uint)puVar11[2]) <= uVar23 - uVar4;
      iVar21 = 0;
      puVar6 = puVar5;
      if (uVar23 <= uVar4 && bVar32) {
        iVar21 = -1;
        puVar6 = puVar11;
      }
      uVar14 = puVar6[1];
      uVar17 = puVar6[2];
      iVar8 = 0;
      if (uVar23 > uVar4 || !bVar32) {
        iVar8 = -1;
      }
      uVar20 = puVar6[3];
      puVar11 = puVar11 + iVar21 * 4;
      puVar7 = (undefined4 *)((int)local_54 + ((param_2 * 0x10 + -0x10) - iVar30));
      *puVar7 = *puVar6;
      iVar30 = iVar30 + 0x10;
      puVar7[1] = uVar14;
      puVar7[2] = uVar17;
      puVar5 = puVar5 + iVar8 * 4;
      puVar26 = puVar26 + uVar15 * 4;
      uVar28 = uVar28 - 1;
      puVar7[3] = uVar20;
      param_3 = param_3 + (int)puVar13 * 4;
    } while (uVar28 != 0);
    puVar11 = puVar11 + 4;
    if ((param_2 & 1) != 0) {
      bVar32 = puVar11 <= param_3;
      puVar13 = puVar26;
      if (!bVar32) {
        puVar13 = param_3;
      }
      local_54 = (undefined4 *)((int)local_54 + iVar30);
      uVar14 = *puVar13;
      uVar17 = puVar13[1];
      uVar20 = puVar13[2];
      local_54[3] = puVar13[3];
      *local_54 = uVar14;
      local_54[1] = uVar17;
      local_54[2] = uVar20;
      puVar13 = (undefined4 *)(uint)!bVar32;
      puVar26 = puVar26 + (uint)bVar32 * 4;
      param_3 = param_3 + (int)puVar13 * 4;
    }
    if (param_3 == puVar11) {
      puVar13 = puVar5 + 4;
    }
    if (param_3 != puVar11 || puVar26 != puVar13) {
      FUN_00fb7254();
LAB_00b69f74:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xb69f74);
      (*pcVar1)();
    }
  }
  return;
}

