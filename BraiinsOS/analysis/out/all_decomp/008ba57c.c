// FUN_008ba57c @ 008ba57c size=3060 calls_out=8 calls_in=2
// strings: 

void FUN_008ba57c(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int iVar26;
  bool bVar27;
  int local_70;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (0x20 < param_2) {
    local_70 = param_6;
    do {
      uVar21 = param_2;
LAB_008ba614:
      if (param_5 == 0) {
        FUN_008d4f44(param_1,uVar21,param_3,param_4,1);
        return;
      }
      if (uVar21 < 0x40) {
        uVar2 = (param_1 + ((uVar21 >> 3) * 8 - (uVar21 >> 3)) * 4)[3];
        uVar20 = (param_1 + (uVar21 >> 3) * 0x10)[3];
        uVar17 = param_1[3];
        puVar3 = param_1 + (uVar21 >> 3) * 0x10;
        if (uVar17 < uVar20 != uVar20 < uVar2) {
          puVar3 = param_1 + ((uVar21 >> 3) * 8 - (uVar21 >> 3)) * 4;
        }
        if (uVar17 < uVar20 != uVar17 < uVar2) {
          puVar3 = param_1;
        }
      }
      else {
        puVar3 = (undefined4 *)FUN_008bb198(param_1);
      }
      local_38 = *puVar3;
      uStack_34 = puVar3[1];
      uStack_30 = puVar3[2];
      uStack_2c = puVar3[3];
      param_5 = param_5 + -1;
      uVar2 = (uint)((int)puVar3 - (int)param_1) >> 4;
      if ((local_70 == 0) || (*(uint *)(local_70 + 0xc) < (uint)puVar3[3])) {
        if (uVar21 <= param_4) {
          puVar3 = param_3 + uVar21 * 4;
          puVar22 = param_1 + uVar2 * 4 + 3;
          param_2 = 0;
          uVar20 = uVar2;
          local_3c = param_1;
          do {
            iVar26 = uVar20 - 3;
            if (uVar20 < 3) {
              iVar26 = 0;
            }
            puVar4 = local_3c;
            if (local_3c < param_1 + iVar26 * 4) {
              iVar6 = 0;
              do {
                uVar24 = puVar4[1];
                uVar13 = puVar4[2];
                bVar27 = *puVar22 <= *(uint *)((int)local_3c + (0xc - iVar6));
                puVar9 = param_3;
                if (bVar27) {
                  puVar9 = (undefined4 *)((int)puVar3 + iVar6 + -0x10);
                }
                uVar25 = puVar4[3];
                puVar9 = puVar9 + param_2 * 4;
                *puVar9 = *puVar4;
                if (!bVar27) {
                  param_2 = param_2 + 1;
                }
                uVar17 = *puVar22;
                puVar9[2] = uVar13;
                uVar14 = *(uint *)((int)local_3c + (0x1c - iVar6));
                puVar9[1] = uVar24;
                puVar7 = param_3;
                if (uVar17 <= uVar14) {
                  puVar7 = (undefined4 *)((int)puVar3 + iVar6 + -0x20);
                }
                puVar9[3] = uVar25;
                uVar13 = *(undefined4 *)((int)local_3c + (0x14 - iVar6));
                uVar24 = *(undefined4 *)((int)local_3c + (0x18 - iVar6));
                puVar7 = puVar7 + param_2 * 4;
                *puVar7 = *(undefined4 *)((int)local_3c + (0x10 - iVar6));
                if (uVar17 > uVar14) {
                  param_2 = param_2 + 1;
                }
                puVar7[1] = uVar13;
                puVar7[2] = uVar24;
                uVar17 = *(uint *)((int)local_3c + (0x2c - iVar6));
                uVar10 = *puVar22;
                puVar7[3] = uVar14;
                bVar27 = uVar10 <= uVar17;
                uVar13 = puVar4[9];
                puVar9 = param_3;
                if (bVar27) {
                  puVar9 = (undefined4 *)((int)puVar3 + iVar6 + -0x30);
                }
                puVar7 = puVar4 + 8;
                uVar25 = puVar4[10];
                uVar24 = puVar4[0xb];
                puVar4 = puVar4 + 0x10;
                puVar9 = puVar9 + param_2 * 4;
                *puVar9 = *puVar7;
                if (!bVar27) {
                  param_2 = param_2 + 1;
                }
                puVar9[2] = uVar25;
                puVar9[3] = uVar24;
                uVar14 = *(uint *)((int)local_3c + (0x3c - iVar6));
                uVar17 = *puVar22;
                puVar9[1] = uVar13;
                iVar19 = 0x30 - iVar6;
                puVar9 = param_3;
                if (uVar17 <= uVar14) {
                  puVar9 = (undefined4 *)((int)puVar3 + iVar6 + -0x40);
                }
                uVar13 = *(undefined4 *)((int)local_3c + (0x34 - iVar6));
                uVar24 = *(undefined4 *)((int)local_3c + (0x38 - iVar6));
                iVar6 = iVar6 + -0x40;
                puVar9 = puVar9 + param_2 * 4;
                *puVar9 = *(undefined4 *)((int)local_3c + iVar19);
                if (uVar17 > uVar14) {
                  param_2 = param_2 + 1;
                }
                puVar9[1] = uVar13;
                puVar9[2] = uVar24;
                puVar9[3] = uVar14;
              } while (puVar4 < param_1 + iVar26 * 4);
              puVar3 = (undefined4 *)((int)puVar3 + iVar6);
              puVar9 = param_1 + uVar20 * 4;
              local_3c = puVar4;
              if (puVar4 < puVar9) goto LAB_008ba880;
            }
            else {
              puVar9 = param_1 + uVar20 * 4;
              if (local_3c < puVar9) {
LAB_008ba880:
                do {
                  uVar14 = local_3c[3];
                  puVar3 = puVar3 + -4;
                  uVar17 = *puVar22;
                  uVar13 = *local_3c;
                  uVar25 = local_3c[1];
                  uVar24 = local_3c[2];
                  puVar4 = puVar3;
                  if (uVar14 < uVar17) {
                    puVar4 = param_3;
                  }
                  local_3c = local_3c + 4;
                  puVar4 = puVar4 + param_2 * 4;
                  *puVar4 = uVar13;
                  if (uVar14 < uVar17) {
                    param_2 = param_2 + 1;
                  }
                  puVar4[1] = uVar25;
                  puVar4[2] = uVar24;
                  puVar4[3] = uVar14;
                  puVar4 = local_3c;
                } while (local_3c < puVar9);
              }
            }
            if (uVar20 == uVar21) goto LAB_008ba8f4;
            puVar3 = puVar3 + -4;
            uVar13 = puVar4[1];
            uVar25 = puVar4[2];
            uVar24 = puVar4[3];
            puVar9 = puVar3 + param_2 * 4;
            *puVar9 = *puVar4;
            local_3c = puVar4 + 4;
            puVar9[1] = uVar13;
            puVar9[2] = uVar25;
            puVar9[3] = uVar24;
            uVar20 = uVar21;
          } while( true );
        }
        goto LAB_008bb158;
      }
LAB_008ba998:
      if (param_4 < uVar21) goto LAB_008bb158;
      puVar3 = param_3 + uVar21 * 4;
      puVar22 = param_1 + uVar2 * 4 + 3;
      uVar20 = 0;
      local_3c = param_1;
      while( true ) {
        iVar26 = uVar2 - 3;
        if (uVar2 < 3) {
          iVar26 = 0;
        }
        if (local_3c < param_1 + iVar26 * 4) {
          iVar6 = 0;
          puVar4 = local_3c;
          do {
            uVar13 = puVar4[3];
            bVar27 = *puVar22 < *(uint *)((int)local_3c + (0xc - iVar6));
            puVar9 = param_3;
            if (bVar27) {
              puVar9 = (undefined4 *)((int)puVar3 + iVar6 + -0x10);
            }
            uVar24 = puVar4[1];
            uVar25 = puVar4[2];
            puVar9 = puVar9 + uVar20 * 4;
            *puVar9 = *puVar4;
            if (!bVar27) {
              uVar20 = uVar20 + 1;
            }
            puVar9[1] = uVar24;
            puVar9[2] = uVar25;
            uVar17 = *(uint *)((int)local_3c + (0x1c - iVar6));
            uVar14 = *puVar22;
            puVar9[3] = uVar13;
            uVar13 = *(undefined4 *)((int)local_3c + (0x14 - iVar6));
            uVar24 = *(undefined4 *)((int)local_3c + (0x18 - iVar6));
            puVar9 = param_3;
            if (uVar14 < uVar17) {
              puVar9 = (undefined4 *)((int)puVar3 + iVar6 + -0x20);
            }
            puVar9 = puVar9 + uVar20 * 4;
            *puVar9 = *(undefined4 *)((int)local_3c + (0x10 - iVar6));
            if (uVar14 >= uVar17) {
              uVar20 = uVar20 + 1;
            }
            puVar9[1] = uVar13;
            puVar9[2] = uVar24;
            puVar9[3] = uVar17;
            uVar24 = puVar4[9];
            bVar27 = *puVar22 < *(uint *)((int)local_3c + (0x2c - iVar6));
            uVar13 = puVar4[10];
            puVar9 = param_3;
            if (bVar27) {
              puVar9 = (undefined4 *)((int)puVar3 + iVar6 + -0x30);
            }
            puVar7 = puVar4 + 8;
            uVar25 = puVar4[0xb];
            puVar4 = puVar4 + 0x10;
            puVar9 = puVar9 + uVar20 * 4;
            *puVar9 = *puVar7;
            if (!bVar27) {
              uVar20 = uVar20 + 1;
            }
            uVar12 = *(undefined4 *)((int)local_3c + (0x34 - iVar6));
            puVar9[1] = uVar24;
            puVar9[2] = uVar13;
            puVar9[3] = uVar25;
            iVar19 = 0x30 - iVar6;
            uVar13 = *(undefined4 *)((int)local_3c + (0x38 - iVar6));
            uVar17 = *(uint *)((int)local_3c + (0x3c - iVar6));
            uVar14 = *puVar22;
            puVar9 = param_3;
            if (uVar14 < uVar17) {
              puVar9 = (undefined4 *)((int)puVar3 + iVar6 + -0x40);
            }
            iVar6 = iVar6 + -0x40;
            puVar9 = puVar9 + uVar20 * 4;
            *puVar9 = *(undefined4 *)((int)local_3c + iVar19);
            if (uVar14 >= uVar17) {
              uVar20 = uVar20 + 1;
            }
            puVar9[1] = uVar12;
            puVar9[2] = uVar13;
            puVar9[3] = uVar17;
          } while (puVar4 < param_1 + iVar26 * 4);
          puVar3 = (undefined4 *)((int)puVar3 + iVar6);
          local_3c = puVar4;
        }
        while (local_3c < param_1 + uVar2 * 4) {
          uVar14 = local_3c[3];
          puVar3 = puVar3 + -4;
          uVar17 = *puVar22;
          uVar13 = *local_3c;
          uVar24 = local_3c[1];
          uVar25 = local_3c[2];
          local_3c = local_3c + 4;
          puVar4 = puVar3;
          if (uVar14 <= uVar17) {
            puVar4 = param_3;
          }
          puVar4 = puVar4 + uVar20 * 4;
          *puVar4 = uVar13;
          if (uVar14 <= uVar17) {
            uVar20 = uVar20 + 1;
          }
          puVar4[1] = uVar24;
          puVar4[2] = uVar25;
          puVar4[3] = uVar14;
        }
        if (uVar2 == uVar21) break;
        uVar13 = local_3c[1];
        uVar24 = local_3c[2];
        uVar25 = local_3c[3];
        puVar3 = puVar3 + -4;
        puVar4 = param_3 + uVar20 * 4;
        *puVar4 = *local_3c;
        local_3c = local_3c + 4;
        puVar4[1] = uVar13;
        puVar4[2] = uVar24;
        puVar4[3] = uVar25;
        uVar20 = uVar20 + 1;
        uVar2 = uVar21;
      }
      FUN_016dd1aa(param_1,param_3,uVar20 << 4);
      param_2 = uVar21 - uVar20;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar20 * 4;
      puVar4 = param_3 + uVar21 * 4 + -4;
      puVar3 = param_1;
      uVar2 = param_2;
      do {
        uVar12 = *puVar4;
        uVar2 = uVar2 - 1;
        uVar24 = puVar4[1];
        uVar13 = puVar4[2];
        uVar25 = puVar4[3];
        puVar4 = puVar4 + -4;
        *puVar3 = uVar12;
        puVar3[1] = uVar24;
        puVar3[2] = uVar13;
        puVar3[3] = uVar25;
        puVar3 = puVar3 + 4;
      } while (uVar2 != 0);
      if (uVar21 < uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar20,uVar21,uVar21,&DAT_018af348);
      }
      local_70 = 0;
    } while (0x20 < param_2);
  }
LAB_008ba5a4:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    puVar3 = param_3 + param_2 * 4;
    uVar21 = param_2 >> 1;
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        uVar13 = param_1[1];
        uVar24 = param_1[2];
        uVar25 = param_1[3];
        *param_3 = *param_1;
        param_3[1] = uVar13;
        param_3[2] = uVar24;
        param_3[3] = uVar25;
        puVar4 = param_1 + uVar21 * 4;
        uVar24 = puVar4[1];
        uVar25 = puVar4[2];
        uVar13 = puVar4[3];
        puVar9 = param_3 + uVar21 * 4;
        *puVar9 = *puVar4;
        puVar9[1] = uVar24;
        puVar9[2] = uVar25;
        puVar9[3] = uVar13;
        uVar2 = 1;
      }
      else {
        iVar26 = 0x30;
        iVar19 = 0x30;
        iVar6 = 0x20;
        puVar4 = param_1 + (uint)((uint)param_1[7] >= (uint)param_1[3]) * 4;
        if ((uint)param_1[0xf] < (uint)param_1[0xb]) {
          iVar26 = 0x20;
        }
        puVar7 = (undefined4 *)((int)param_1 + iVar26);
        puVar9 = param_1 + (uint)((uint)param_1[7] < (uint)param_1[3]) * 4;
        if ((uint)param_1[0xf] < (uint)param_1[0xb]) {
          iVar6 = 0x30;
        }
        puVar8 = (undefined4 *)((int)param_1 + iVar6);
        puVar22 = puVar4 + 3;
        puVar18 = puVar4;
        puVar5 = puVar7;
        if ((uint)puVar7[3] < *puVar22) {
          puVar18 = puVar8;
          puVar5 = puVar4;
        }
        if ((uint)puVar8[3] < (uint)puVar9[3]) {
          puVar11 = puVar8;
        }
        else {
          puVar11 = puVar9;
          puVar4 = puVar8;
          puVar9 = puVar18;
        }
        if ((uint)puVar7[3] < *puVar22) {
          puVar4 = puVar7;
        }
        uVar20 = puVar9[3];
        uVar2 = puVar4[3];
        uVar13 = puVar11[1];
        uVar25 = puVar11[2];
        uVar24 = puVar11[3];
        puVar7 = puVar9;
        if (uVar2 < uVar20) {
          puVar7 = puVar4;
        }
        *param_3 = *puVar11;
        param_3[1] = uVar13;
        param_3[2] = uVar25;
        if (uVar2 < uVar20) {
          puVar4 = puVar9;
        }
        param_3[3] = uVar24;
        uVar13 = *puVar7;
        uVar24 = puVar7[1];
        uVar25 = puVar7[2];
        param_3[7] = puVar7[3];
        param_3[4] = uVar13;
        param_3[5] = uVar24;
        param_3[6] = uVar25;
        uVar13 = puVar4[1];
        uVar24 = puVar4[2];
        uVar25 = puVar4[3];
        param_3[8] = *puVar4;
        param_3[9] = uVar13;
        param_3[10] = uVar24;
        param_3[0xb] = uVar25;
        uVar13 = puVar5[1];
        uVar24 = puVar5[2];
        uVar25 = puVar5[3];
        param_3[0xc] = *puVar5;
        param_3[0xd] = uVar13;
        param_3[0xe] = uVar24;
        param_3[0xf] = uVar25;
        puVar9 = param_1 + uVar21 * 4 +
                           (uint)((uint)param_1[uVar21 * 4 + 3] <= (uint)param_1[uVar21 * 4 + 7]) *
                           4;
        iVar26 = 0x20;
        puVar4 = param_1 + uVar21 * 4 +
                           (uint)((uint)param_1[uVar21 * 4 + 3] > (uint)param_1[uVar21 * 4 + 7]) * 4
        ;
        if ((uint)param_1[uVar21 * 4 + 0xf] < (uint)param_1[uVar21 * 4 + 0xb]) {
          iVar26 = 0x30;
        }
        puVar7 = (undefined4 *)((int)param_1 + iVar26 + uVar21 * 0x10);
        if ((uint)param_1[uVar21 * 4 + 0xf] < (uint)param_1[uVar21 * 4 + 0xb]) {
          iVar19 = 0x20;
        }
        puVar18 = (undefined4 *)((int)param_1 + iVar19 + uVar21 * 0x10);
        puVar5 = puVar7;
        if ((uint)puVar7[3] < (uint)puVar4[3]) {
          puVar5 = puVar9;
        }
        puVar11 = puVar9;
        puVar8 = puVar18;
        if ((uint)puVar18[3] < (uint)puVar9[3]) {
          puVar11 = puVar7;
          puVar8 = puVar9;
          puVar5 = puVar18;
        }
        if ((uint)puVar7[3] < (uint)puVar4[3]) {
          puVar11 = puVar4;
        }
        else {
          puVar7 = puVar4;
        }
        uVar20 = puVar5[3];
        uVar2 = puVar11[3];
        uVar13 = puVar7[1];
        uVar24 = puVar7[2];
        uVar25 = puVar7[3];
        puVar9 = param_3 + uVar21 * 4;
        *puVar9 = *puVar7;
        puVar4 = puVar11;
        if (uVar20 < uVar2) {
          puVar4 = puVar5;
        }
        puVar9[1] = uVar13;
        puVar9[2] = uVar24;
        puVar9[3] = uVar25;
        if (uVar20 >= uVar2) {
          puVar11 = puVar5;
        }
        uVar12 = puVar4[1];
        uVar13 = puVar4[2];
        uVar23 = *puVar4;
        puVar9[7] = puVar4[3];
        puVar9[6] = uVar13;
        uVar13 = *puVar11;
        uVar24 = puVar11[1];
        uVar15 = puVar11[2];
        puVar9[0xb] = puVar11[3];
        puVar9[9] = uVar24;
        puVar9[8] = uVar13;
        uVar24 = *puVar8;
        uVar25 = puVar8[1];
        uVar16 = puVar8[2];
        puVar9[4] = uVar23;
        uVar13 = puVar8[3];
        puVar9[10] = uVar15;
        puVar9[0xf] = uVar13;
        uVar2 = 4;
        puVar9[5] = uVar12;
        puVar9[0xc] = uVar24;
        puVar9[0xd] = uVar25;
        puVar9[0xe] = uVar16;
      }
    }
    else {
      FUN_008c4240(param_1,param_3,puVar3);
      FUN_008c4240(param_1 + uVar21 * 4,param_3 + uVar21 * 4,puVar3 + 0x20);
      uVar2 = 8;
    }
    if (uVar2 < uVar21) {
      iVar26 = uVar2 << 4;
      uVar20 = uVar2;
      do {
        puVar9 = param_1 + uVar20 * 4;
        uVar24 = puVar9[1];
        uVar13 = puVar9[2];
        uVar17 = puVar9[3];
        puVar4 = param_3 + uVar20 * 4;
        *puVar4 = *puVar9;
        puVar4[1] = uVar24;
        puVar4[2] = uVar13;
        puVar4[3] = uVar17;
        if (uVar17 < (uint)puVar4[-1]) {
          iVar6 = iVar26;
          do {
            iVar19 = iVar6;
            *(undefined4 *)((int)param_3 + iVar19) = *(undefined4 *)((int)param_3 + iVar19 + -0x10);
            *(undefined4 *)((int)param_3 + iVar19 + 4) =
                 *(undefined4 *)((int)param_3 + iVar19 + -0xc);
            *(undefined4 *)((int)param_3 + iVar19 + 8) = *(undefined4 *)((int)param_3 + iVar19 + -8)
            ;
            *(undefined4 *)((int)param_3 + iVar19 + 0xc) =
                 *(undefined4 *)((int)param_3 + iVar19 + -4);
            if (iVar19 == 0x10) {
              puVar4 = param_3;
              goto LAB_008bae70;
            }
            iVar6 = iVar19 + -0x10;
          } while (uVar17 < *(uint *)((int)param_3 + iVar19 + -0x14));
          puVar4 = (undefined4 *)((int)param_3 + iVar19 + -0x10);
LAB_008bae70:
          uVar13 = puVar9[1];
          uVar24 = puVar9[2];
          *puVar4 = *puVar9;
          puVar4[1] = uVar13;
          puVar4[2] = uVar24;
          *(uint *)((int)param_3 + iVar19 + -4) = uVar17;
        }
        uVar20 = uVar20 + 1;
        iVar26 = iVar26 + 0x10;
      } while (uVar20 != uVar21);
    }
    puVar4 = param_3 + uVar21 * 4;
    if (uVar2 < param_2 - uVar21) {
      local_3c = (undefined4 *)0x10;
      uVar20 = uVar2;
      puVar9 = puVar4;
      do {
        puVar5 = param_1 + uVar21 * 4 + uVar20 * 4;
        uVar13 = puVar5[1];
        uVar24 = puVar5[2];
        uVar17 = puVar5[3];
        puVar7 = puVar4 + uVar20 * 4;
        *puVar7 = *puVar5;
        puVar7[1] = uVar13;
        puVar7[2] = uVar24;
        puVar7[3] = uVar17;
        if (uVar17 < (uint)puVar7[-1]) {
          puVar7 = puVar9;
          puVar18 = local_3c;
          do {
            puVar8 = puVar7;
            uVar25 = puVar8[uVar2 * 4 + -1];
            uVar24 = puVar8[uVar2 * 4 + -2];
            uVar13 = puVar8[uVar2 * 4 + -3];
            puVar8[uVar2 * 4] = puVar8[uVar2 * 4 + -4];
            puVar8[uVar2 * 4 + 1] = uVar13;
            puVar8[uVar2 * 4 + 2] = uVar24;
            puVar8[uVar2 * 4 + 3] = uVar25;
            if ((undefined4 *)(uVar2 * 0x10) == puVar18) {
              puVar7 = puVar4;
              goto LAB_008baf48;
            }
            puVar18 = (undefined4 *)((int)puVar18 + 0x10);
            puVar7 = puVar8 + -4;
          } while (uVar17 < (uint)puVar8[uVar2 * 4 + -5]);
          puVar7 = puVar8 + -4 + uVar2 * 4;
LAB_008baf48:
          uVar24 = puVar5[1];
          uVar13 = puVar5[2];
          *puVar7 = *puVar5;
          puVar7[1] = uVar24;
          puVar7[2] = uVar13;
          puVar8[uVar2 * 4 + -1] = uVar17;
        }
        puVar9 = puVar9 + 4;
        uVar20 = uVar20 + 1;
        local_3c = (undefined4 *)((int)local_3c + -0x10);
      } while (uVar20 != param_2 - uVar21);
    }
    puVar9 = puVar4 + -4;
    iVar26 = 0;
    puVar3 = puVar3 + -4;
    do {
      bVar27 = (uint)puVar4[3] < (uint)param_3[3];
      puVar7 = param_3;
      if (bVar27) {
        puVar7 = puVar4;
      }
      uVar24 = puVar7[1];
      uVar13 = puVar7[2];
      uVar25 = puVar7[3];
      puVar5 = (undefined4 *)((int)param_1 + iVar26);
      *puVar5 = *puVar7;
      puVar5[1] = uVar24;
      puVar5[2] = uVar13;
      puVar5[3] = uVar25;
      param_3 = param_3 + (uint)!bVar27 * 4;
      puVar4 = puVar4 + (uint)bVar27 * 4;
      bVar27 = (uint)puVar3[3] < (uint)puVar9[3];
      puVar7 = puVar3;
      if (bVar27) {
        puVar7 = puVar9;
      }
      uVar24 = puVar7[1];
      uVar25 = puVar7[2];
      uVar13 = puVar7[3];
      puVar5 = (undefined4 *)((int)param_1 + ((param_2 * 0x10 + -0x10) - iVar26));
      *puVar5 = *puVar7;
      iVar26 = iVar26 + 0x10;
      puVar5[3] = uVar13;
      iVar6 = 0;
      if (bVar27) {
        iVar6 = -1;
      }
      puVar5[1] = uVar24;
      puVar5[2] = uVar25;
      puVar9 = puVar9 + iVar6 * 4;
      puVar7 = (undefined4 *)0x0;
      if (!bVar27) {
        puVar7 = (undefined4 *)0xffffffff;
      }
      uVar21 = uVar21 - 1;
      puVar3 = puVar3 + (int)puVar7 * 4;
    } while (uVar21 != 0);
    puVar9 = puVar9 + 4;
    if ((param_2 & 1) != 0) {
      bVar27 = puVar9 <= param_3;
      puVar7 = puVar4;
      if (!bVar27) {
        puVar7 = param_3;
      }
      param_1 = (undefined4 *)((int)param_1 + iVar26);
      uVar25 = *puVar7;
      uVar24 = puVar7[1];
      uVar13 = puVar7[2];
      param_1[3] = puVar7[3];
      *param_1 = uVar25;
      param_1[1] = uVar24;
      puVar4 = puVar4 + (uint)bVar27 * 4;
      param_1[2] = uVar13;
      puVar7 = (undefined4 *)(uint)!bVar27;
      param_3 = param_3 + (int)puVar7 * 4;
    }
    if (param_3 == puVar9) {
      puVar7 = puVar3 + 4;
    }
    if (param_3 == puVar9 && puVar4 == puVar7) {
      return;
    }
    FUN_00fb7254();
  }
LAB_008bb158:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x8bb158);
  (*pcVar1)();
LAB_008ba8f4:
  FUN_016dd1aa(param_1,param_3,param_2 << 4);
  iVar26 = uVar21 - param_2;
  if (iVar26 != 0) {
    puVar4 = param_1 + param_2 * 4;
    puVar3 = param_3 + uVar21 * 4 + -4;
    iVar6 = iVar26;
    do {
      uVar25 = *puVar3;
      iVar6 = iVar6 + -1;
      uVar24 = puVar3[1];
      uVar13 = puVar3[2];
      uVar12 = puVar3[3];
      puVar3 = puVar3 + -4;
      *puVar4 = uVar25;
      puVar4[1] = uVar24;
      puVar4[2] = uVar13;
      puVar4[3] = uVar12;
      puVar4 = puVar4 + 4;
    } while (iVar6 != 0);
  }
  if (param_2 == 0) goto LAB_008ba998;
  if (uVar21 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
  }
  FUN_008ba57c(param_1 + param_2 * 4,iVar26,param_3,param_4,param_5,&local_38);
  uVar21 = param_2;
  if (param_2 < 0x21) goto LAB_008ba5a4;
  goto LAB_008ba614;
}

