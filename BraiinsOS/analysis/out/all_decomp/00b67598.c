// FUN_00b67598 @ 00b67598 size=3608 calls_out=8 calls_in=2
// strings: 

void FUN_00b67598(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  uint *local_48;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (param_2 < 0x21) {
LAB_00b675b8:
    uVar19 = param_2 >> 1;
    if (uVar19 != 0) {
      if (param_2 < 0x10) {
        if (param_2 < 8) {
          uVar2 = param_1[1];
          uVar8 = param_1[2];
          *param_3 = *param_1;
          param_3[1] = uVar2;
          param_3[2] = uVar8;
          puVar4 = param_1 + uVar19 * 3;
          uVar11 = puVar4[1];
          uVar8 = puVar4[2];
          puVar12 = param_3 + uVar19 * 3;
          *puVar12 = *puVar4;
          uVar2 = 1;
          puVar12[1] = uVar11;
          puVar12[2] = uVar8;
        }
        else {
          bVar21 = param_1[6] <= param_1[9];
          if (param_1[9] == param_1[6]) {
            bVar21 = param_1[7] <= param_1[10];
          }
          iVar13 = 0x18;
          iVar5 = 0x24;
          if (!bVar21) {
            iVar13 = 0x24;
            iVar5 = 0x18;
          }
          bVar21 = *param_1 <= param_1[3];
          if (param_1[3] == *param_1) {
            bVar21 = param_1[1] <= param_1[4];
          }
          uVar2 = (uint)!bVar21;
          puVar10 = (uint *)((int)param_1 + iVar5);
          puVar4 = (uint *)((int)param_1 + iVar13);
          puVar3 = param_1 + (uVar2 | uVar2 << 1);
          puVar12 = param_1 + (uVar2 ^ 1 | (uVar2 ^ 1) << 1);
          bVar21 = *puVar3 <= *puVar4;
          if (*puVar4 == *puVar3) {
            bVar21 = puVar3[1] <= puVar4[1];
          }
          puVar16 = puVar4;
          if (!bVar21) {
            puVar16 = puVar12;
          }
          bVar20 = *puVar12 <= *puVar10;
          if (*puVar10 == *puVar12) {
            bVar20 = puVar12[1] <= puVar10[1];
          }
          puVar6 = puVar12;
          puVar9 = puVar10;
          if (!bVar20) {
            puVar6 = puVar4;
            puVar9 = puVar12;
            puVar16 = puVar10;
          }
          puVar12 = puVar3;
          if (!bVar21) {
            puVar12 = puVar4;
            puVar6 = puVar3;
          }
          uVar8 = puVar12[1];
          uVar2 = puVar6[1];
          uVar11 = *puVar16;
          uVar14 = puVar16[1];
          uVar15 = *puVar6;
          *param_3 = *puVar12;
          param_3[1] = uVar8;
          param_3[2] = puVar12[2];
          bVar21 = uVar15 <= uVar11;
          if (uVar11 == uVar15) {
            bVar21 = uVar2 <= uVar14;
          }
          if (bVar21) {
            puVar4 = puVar6;
            puVar6 = puVar16;
          }
          else {
            puVar4 = puVar16;
          }
          uVar2 = *puVar4;
          uVar14 = puVar4[1];
          param_3[5] = puVar4[2];
          param_3[3] = uVar2;
          uVar8 = puVar6[1];
          uVar2 = puVar6[2];
          param_3[6] = *puVar6;
          param_3[7] = uVar8;
          param_3[8] = uVar2;
          uVar2 = *puVar9;
          uVar8 = puVar9[1];
          uVar11 = puVar9[2];
          param_3[4] = uVar14;
          param_3[9] = uVar2;
          param_3[10] = uVar8;
          param_3[0xb] = uVar11;
          puVar4 = param_1 + uVar19 * 3;
          bVar21 = puVar4[6] <= puVar4[9];
          if (puVar4[9] == puVar4[6]) {
            bVar21 = puVar4[7] <= puVar4[10];
          }
          iVar13 = 0x18;
          iVar5 = 0x24;
          if (!bVar21) {
            iVar13 = 0x24;
            iVar5 = 0x18;
          }
          puVar12 = (uint *)((int)puVar4 + iVar5);
          bVar21 = *puVar4 <= puVar4[3];
          if (puVar4[3] == *puVar4) {
            bVar21 = puVar4[1] <= puVar4[4];
          }
          uVar2 = (uint)!bVar21;
          puVar10 = (uint *)((int)puVar4 + iVar13);
          puVar3 = puVar4 + (uVar2 | uVar2 << 1);
          puVar4 = puVar4 + (uVar2 ^ 1 | (uVar2 ^ 1) << 1);
          bVar21 = *puVar3 <= *puVar10;
          if (*puVar10 == *puVar3) {
            bVar21 = puVar3[1] <= puVar10[1];
          }
          puVar16 = puVar10;
          if (!bVar21) {
            puVar16 = puVar4;
          }
          bVar20 = *puVar4 <= *puVar12;
          if (*puVar12 == *puVar4) {
            bVar20 = puVar4[1] <= puVar12[1];
          }
          puVar6 = puVar4;
          puVar9 = puVar12;
          if (!bVar20) {
            puVar6 = puVar10;
            puVar9 = puVar4;
            puVar16 = puVar12;
          }
          puVar4 = puVar3;
          if (!bVar21) {
            puVar4 = puVar10;
            puVar6 = puVar3;
          }
          uVar2 = *puVar16;
          uVar17 = puVar16[1];
          uVar8 = puVar4[1];
          uVar11 = puVar4[2];
          uVar14 = *puVar6;
          uVar15 = puVar6[1];
          puVar12 = param_3 + uVar19 * 3;
          *puVar12 = *puVar4;
          puVar12[1] = uVar8;
          puVar12[2] = uVar11;
          bVar21 = uVar14 <= uVar2;
          if (uVar2 == uVar14) {
            bVar21 = uVar15 <= uVar17;
          }
          if (bVar21) {
            puVar4 = puVar6;
            puVar6 = puVar16;
          }
          else {
            puVar4 = puVar16;
          }
          uVar2 = *puVar4;
          uVar14 = puVar4[1];
          puVar12[5] = puVar4[2];
          puVar12[3] = uVar2;
          uVar2 = *puVar6;
          uVar8 = puVar6[1];
          uVar11 = puVar6[2];
          puVar12[4] = uVar14;
          puVar12[6] = uVar2;
          puVar12[7] = uVar8;
          puVar12[8] = uVar11;
          uVar2 = puVar9[1];
          uVar8 = puVar9[2];
          puVar12[9] = *puVar9;
          puVar12[10] = uVar2;
          puVar12[0xb] = uVar8;
          uVar2 = 4;
        }
      }
      else {
        FUN_00b683dc(param_1,param_3,param_3 + param_2 * 3);
        FUN_00b683dc(param_1 + uVar19 * 3,param_3 + uVar19 * 3,param_3 + param_2 * 3 + 0x18);
        uVar2 = 8;
      }
      if (uVar2 < uVar19) {
        iVar13 = uVar2 * 0xc;
        uVar8 = uVar2;
        do {
          puVar4 = param_1 + uVar8 * 3;
          uVar11 = *puVar4;
          uVar14 = puVar4[1];
          uVar15 = puVar4[2];
          puVar4 = param_3 + uVar8 * 3;
          *puVar4 = uVar11;
          puVar4[1] = uVar14;
          puVar4[2] = uVar15;
          bVar21 = puVar4[-3] <= uVar11;
          if (uVar11 == puVar4[-3]) {
            bVar21 = puVar4[-2] <= uVar14;
          }
          if (!bVar21) {
            uVar15 = puVar4[2];
            iVar5 = iVar13;
            do {
              *(undefined4 *)((int)param_3 + iVar5 + 4) = *(undefined4 *)((int)param_3 + iVar5 + -8)
              ;
              *(undefined4 *)((int)param_3 + iVar5) = *(undefined4 *)((int)param_3 + iVar5 + -0xc);
              *(undefined4 *)((int)param_3 + iVar5 + 8) = *(undefined4 *)((int)param_3 + iVar5 + -4)
              ;
              if (iVar5 == 0xc) {
                puVar4 = param_3;
                goto LAB_00b68034;
              }
              uVar17 = *(uint *)((int)param_3 + iVar5 + -0x18);
              iVar7 = iVar5 + -0x14;
              iVar5 = iVar5 + -0xc;
              bVar21 = uVar17 <= uVar11;
              if (uVar11 == uVar17) {
                bVar21 = *(uint *)((int)param_3 + iVar7) <= uVar14;
              }
            } while (!bVar21);
            puVar4 = (uint *)((int)param_3 + iVar5);
LAB_00b68034:
            *puVar4 = uVar11;
            puVar4[1] = uVar14;
            puVar4[2] = uVar15;
          }
          uVar8 = uVar8 + 1;
          iVar13 = iVar13 + 0xc;
        } while (uVar8 != uVar19);
      }
      puVar4 = param_3 + uVar19 * 3;
      if (uVar2 < param_2 - uVar19) {
        iVar13 = 0xc;
        uVar8 = uVar2;
        puVar12 = puVar4;
        do {
          puVar10 = param_1 + uVar19 * 3 + uVar8 * 3;
          uVar14 = *puVar10;
          uVar15 = puVar10[1];
          uVar11 = puVar10[2];
          puVar10 = puVar4 + uVar8 * 3;
          *puVar10 = uVar14;
          puVar10[1] = uVar15;
          puVar10[2] = uVar11;
          bVar21 = puVar10[-3] <= uVar14;
          if (uVar14 == puVar10[-3]) {
            bVar21 = puVar10[-2] <= uVar15;
          }
          if (!bVar21) {
            uVar11 = puVar10[2];
            iVar5 = iVar13;
            puVar10 = puVar12;
            do {
              uVar17 = puVar10[uVar2 * 3 + -1];
              puVar10[uVar2 * 3 + 1] = puVar10[uVar2 * 3 + -2];
              puVar10[uVar2 * 3] = puVar10[uVar2 * 3 + -3];
              puVar10[uVar2 * 3 + 2] = uVar17;
              if (uVar2 * 0xc == iVar5) {
                puVar10 = puVar4;
                goto LAB_00b6812c;
              }
              puVar3 = puVar10 + uVar2 * 3 + -6;
              puVar16 = puVar10 + uVar2 * 3 + -5;
              iVar5 = iVar5 + 0xc;
              puVar10 = puVar10 + -3;
              bVar21 = *puVar3 <= uVar14;
              if (uVar14 == *puVar3) {
                bVar21 = *puVar16 <= uVar15;
              }
            } while (!bVar21);
            puVar10 = puVar10 + uVar2 * 3;
LAB_00b6812c:
            *puVar10 = uVar14;
            puVar10[1] = uVar15;
            puVar10[2] = uVar11;
          }
          uVar8 = uVar8 + 1;
          iVar13 = iVar13 + -0xc;
          puVar12 = puVar12 + 3;
        } while (uVar8 != param_2 - uVar19);
      }
      iVar13 = 0;
      puVar12 = param_3 + param_2 * 3;
      puVar10 = puVar4 + -3;
      do {
        puVar3 = puVar12 + -3;
        bVar21 = *param_3 <= *puVar4;
        if (*puVar4 == *param_3) {
          bVar21 = param_3[1] <= puVar4[1];
        }
        uVar2 = (uint)!bVar21;
        puVar16 = param_3;
        if (uVar2 != 0) {
          puVar16 = puVar4;
        }
        uVar15 = puVar16[1];
        uVar8 = puVar16[2];
        puVar9 = (uint *)((int)param_1 + iVar13);
        *puVar9 = *puVar16;
        uVar11 = *puVar3;
        uVar14 = puVar12[-2];
        puVar9[1] = uVar15;
        puVar9[2] = uVar8;
        bVar21 = *puVar10 <= uVar11;
        if (uVar11 == *puVar10) {
          bVar21 = puVar10[1] <= uVar14;
        }
        uVar8 = (uint)!bVar21;
        puVar12 = puVar3;
        if (uVar8 != 0) {
          puVar12 = puVar10;
        }
        uVar19 = uVar19 - 1;
        uVar14 = puVar12[1];
        uVar11 = puVar12[2];
        puVar16 = (uint *)((int)param_1 + ((param_2 * 0xc + -0xc) - iVar13));
        *puVar16 = *puVar12;
        iVar13 = iVar13 + 0xc;
        puVar16[1] = uVar14;
        puVar16[2] = uVar11;
        puVar10 = puVar10 + uVar8 * -3;
        puVar4 = puVar4 + (uVar2 | uVar2 << 1);
        param_3 = param_3 + (uVar2 ^ 1 | (uVar2 ^ 1) << 1);
        puVar12 = puVar3 + (uVar8 | uVar8 << 1);
      } while (uVar19 != 0);
      puVar10 = puVar10 + 3;
      if ((param_2 & 1) != 0) {
        bVar21 = puVar10 <= param_3;
        puVar3 = puVar4;
        if (!bVar21) {
          puVar3 = param_3;
        }
        param_1 = (uint *)((int)param_1 + iVar13);
        uVar19 = *puVar3;
        uVar2 = puVar3[1];
        param_1[2] = puVar3[2];
        *param_1 = uVar19;
        param_1[1] = uVar2;
        puVar4 = puVar4 + ((uint)bVar21 | (uint)bVar21 << 1);
        param_3 = param_3 + ((uint)!bVar21 | (uint)!bVar21 << 1);
      }
      puVar3 = puVar10;
      if (param_3 == puVar10) {
        puVar3 = puVar12;
      }
      if (param_3 != puVar10 || puVar4 != puVar3) {
        FUN_00fb7254();
LAB_00b68398:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xb68398);
        (*pcVar1)();
      }
    }
    return;
  }
  local_48 = param_6;
LAB_00b67634:
  uVar19 = param_2;
  do {
    if (param_5 == 0) {
      FUN_00b66f18(param_1,uVar19,param_3,param_4,1);
      return;
    }
    puVar12 = param_1 + (uVar19 >> 3) * 0x15;
    puVar4 = param_1 + (uVar19 >> 3) * 0xc;
    if (uVar19 < 0x40) {
      uVar8 = *puVar4;
      uVar2 = *param_1;
      bVar21 = uVar8 <= uVar2;
      if (uVar2 == uVar8) {
        bVar21 = puVar4[1] <= param_1[1];
      }
      uVar11 = *puVar12;
      bVar20 = uVar11 <= uVar2;
      if (uVar2 == uVar11) {
        bVar20 = puVar12[1] <= param_1[1];
      }
      puVar10 = param_1;
      if (!bVar21 == !bVar20) {
        bVar20 = uVar11 <= uVar8;
        if (uVar8 == uVar11) {
          bVar20 = puVar12[1] <= puVar4[1];
        }
        puVar10 = puVar4;
        if (!bVar21 != !bVar20) {
          puVar10 = puVar12;
        }
      }
    }
    else {
      puVar10 = (uint *)FUN_00b689fc(param_1);
    }
    param_5 = param_5 + -1;
    uVar2 = ((uint)((int)puVar10 - (int)param_1) >> 2) * -0x55555555;
    local_30 = *puVar10;
    uStack_2c = puVar10[1];
    uStack_28 = puVar10[2];
    if (local_48 != (uint *)0x0) {
      bVar21 = *puVar10 <= *local_48;
      if (*local_48 == *puVar10) {
        bVar21 = puVar10[1] <= local_48[1];
      }
      if (bVar21) break;
    }
    if (param_4 < uVar19) goto LAB_00b68398;
    param_2 = 0;
    puVar12 = param_3 + uVar19 * 3;
    puVar4 = param_1;
    uVar8 = uVar2;
    while( true ) {
      iVar13 = uVar8 - 3;
      if (uVar8 < 3) {
        iVar13 = 0;
      }
      while (puVar4 < param_1 + iVar13 * 3) {
        uVar11 = puVar4[1];
        uVar14 = puVar4[2];
        uVar15 = *puVar4;
        bVar21 = *puVar10 <= uVar15;
        if (uVar15 == *puVar10) {
          bVar21 = puVar10[1] <= uVar11;
        }
        puVar3 = param_3;
        if (!bVar21 == 0) {
          puVar3 = puVar12 + -3;
        }
        iVar5 = param_2 + !bVar21;
        puVar3 = puVar3 + param_2 * 3;
        *puVar3 = uVar15;
        puVar3[1] = uVar11;
        puVar3[2] = uVar14;
        uVar11 = puVar4[3];
        uVar14 = puVar4[4];
        uVar15 = puVar4[5];
        bVar21 = *puVar10 <= uVar11;
        if (uVar11 == *puVar10) {
          bVar21 = puVar10[1] <= uVar14;
        }
        puVar3 = param_3;
        if (!bVar21 == 0) {
          puVar3 = puVar12 + -6;
        }
        puVar3 = puVar3 + iVar5 * 3;
        *puVar3 = uVar11;
        iVar5 = iVar5 + (uint)!bVar21;
        puVar3[1] = uVar14;
        puVar3[2] = uVar15;
        uVar11 = puVar4[6];
        uVar14 = puVar4[7];
        uVar15 = puVar4[8];
        bVar21 = *puVar10 <= uVar11;
        if (uVar11 == *puVar10) {
          bVar21 = puVar10[1] <= uVar14;
        }
        iVar7 = iVar5 + (uint)!bVar21;
        puVar3 = param_3;
        if (!bVar21 == 0) {
          puVar3 = puVar12 + -9;
        }
        puVar12 = puVar12 + -0xc;
        puVar3 = puVar3 + iVar5 * 3;
        *puVar3 = uVar11;
        puVar3[1] = uVar14;
        puVar3[2] = uVar15;
        uVar11 = puVar4[9];
        uVar14 = puVar4[10];
        uVar15 = puVar4[0xb];
        puVar4 = puVar4 + 0xc;
        bVar21 = *puVar10 <= uVar11;
        if (uVar11 == *puVar10) {
          bVar21 = puVar10[1] <= uVar14;
        }
        param_2 = iVar7 + (uint)!bVar21;
        puVar3 = puVar12;
        if (!bVar21 != 0) {
          puVar3 = param_3;
        }
        puVar3 = puVar3 + iVar7 * 3;
        *puVar3 = uVar11;
        puVar3[1] = uVar14;
        puVar3[2] = uVar15;
      }
      while (puVar4 < param_1 + uVar8 * 3) {
        uVar11 = *puVar4;
        uVar14 = puVar4[1];
        uVar15 = puVar4[2];
        puVar4 = puVar4 + 3;
        puVar12 = puVar12 + -3;
        bVar21 = *puVar10 <= uVar11;
        if (uVar11 == *puVar10) {
          bVar21 = puVar10[1] <= uVar14;
        }
        puVar3 = puVar12;
        if (!bVar21 != 0) {
          puVar3 = param_3;
        }
        puVar3 = puVar3 + param_2 * 3;
        *puVar3 = uVar11;
        puVar3[1] = uVar14;
        puVar3[2] = uVar15;
        param_2 = param_2 + !bVar21;
      }
      if (uVar8 == uVar19) break;
      puVar12 = puVar12 + -3;
      uVar8 = *puVar4;
      uVar11 = puVar4[1];
      uVar14 = puVar4[2];
      puVar4 = puVar4 + 3;
      puVar3 = puVar12 + param_2 * 3;
      *puVar3 = uVar8;
      puVar3[1] = uVar11;
      puVar3[2] = uVar14;
      uVar8 = uVar19;
    }
    FUN_016dd1aa(param_1,param_3,param_2 * 0xc);
    iVar13 = uVar19 - param_2;
    if (iVar13 != 0) {
      puVar4 = param_3 + uVar19 * 3 + -3;
      puVar12 = param_1 + param_2 * 3;
      iVar5 = iVar13;
      do {
        uVar14 = *puVar4;
        iVar5 = iVar5 + -1;
        uVar11 = puVar4[1];
        uVar8 = puVar4[2];
        puVar4 = puVar4 + -3;
        *puVar12 = uVar14;
        puVar12[1] = uVar11;
        puVar12[2] = uVar8;
        puVar12 = puVar12 + 3;
      } while (iVar5 != 0);
    }
    if (param_2 == 0) break;
    if (uVar19 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
    }
    FUN_00b67598(param_1 + param_2 * 3,iVar13,param_3,param_4,param_5,&local_30);
    uVar19 = param_2;
    if (param_2 < 0x21) goto LAB_00b675b8;
  } while( true );
  if (param_4 < uVar19) goto LAB_00b68398;
  uVar8 = 0;
  puVar12 = param_3 + uVar19 * 3;
  puVar4 = param_1;
  while( true ) {
    iVar13 = uVar2 - 3;
    if (uVar2 < 3) {
      iVar13 = 0;
    }
    while (puVar4 < param_1 + iVar13 * 3) {
      uVar11 = *puVar4;
      uVar14 = puVar4[1];
      uVar15 = puVar4[2];
      bVar21 = *puVar10 < uVar11;
      if (*puVar10 == uVar11) {
        bVar21 = puVar10[1] < uVar14;
      }
      iVar5 = uVar8 + !bVar21;
      puVar3 = param_3;
      if (!bVar21 == 0) {
        puVar3 = puVar12 + -3;
      }
      puVar3 = puVar3 + uVar8 * 3;
      *puVar3 = uVar11;
      uVar17 = *puVar10;
      uVar18 = puVar10[1];
      puVar3[1] = uVar14;
      puVar3[2] = uVar15;
      uVar8 = puVar4[3];
      uVar11 = puVar4[4];
      uVar14 = puVar4[5];
      bVar21 = uVar17 < uVar8;
      if (uVar17 == uVar8) {
        bVar21 = uVar18 < uVar11;
      }
      iVar7 = iVar5 + (uint)!bVar21;
      puVar3 = param_3;
      if (!bVar21 == 0) {
        puVar3 = puVar12 + -6;
      }
      puVar3 = puVar3 + iVar5 * 3;
      *puVar3 = uVar8;
      puVar3[1] = uVar11;
      puVar3[2] = uVar14;
      uVar8 = puVar4[6];
      uVar11 = puVar4[7];
      uVar14 = puVar4[8];
      bVar21 = *puVar10 < uVar8;
      if (*puVar10 == uVar8) {
        bVar21 = puVar10[1] < uVar11;
      }
      iVar5 = iVar7 + (uint)!bVar21;
      puVar3 = param_3;
      if (!bVar21 == 0) {
        puVar3 = puVar12 + -9;
      }
      puVar12 = puVar12 + -0xc;
      puVar3 = puVar3 + iVar7 * 3;
      *puVar3 = uVar8;
      uVar8 = puVar4[10];
      puVar3[1] = uVar11;
      puVar3[2] = uVar14;
      uVar11 = puVar4[9];
      uVar14 = puVar4[0xb];
      puVar4 = puVar4 + 0xc;
      bVar21 = *puVar10 < uVar11;
      if (*puVar10 == uVar11) {
        bVar21 = puVar10[1] < uVar8;
      }
      puVar3 = puVar12;
      if (!bVar21 != 0) {
        puVar3 = param_3;
      }
      puVar3 = puVar3 + iVar5 * 3;
      *puVar3 = uVar11;
      puVar3[1] = uVar8;
      uVar8 = iVar5 + (uint)!bVar21;
      puVar3[2] = uVar14;
    }
    uVar11 = uVar8;
    while (puVar4 < param_1 + uVar2 * 3) {
      uVar8 = *puVar4;
      uVar14 = puVar4[1];
      uVar15 = puVar4[2];
      puVar4 = puVar4 + 3;
      puVar12 = puVar12 + -3;
      bVar21 = *puVar10 < uVar8;
      if (*puVar10 == uVar8) {
        bVar21 = puVar10[1] < uVar14;
      }
      puVar3 = puVar12;
      if (!bVar21 != 0) {
        puVar3 = param_3;
      }
      puVar3 = puVar3 + uVar11 * 3;
      *puVar3 = uVar8;
      puVar3[1] = uVar14;
      puVar3[2] = uVar15;
      uVar11 = uVar11 + !bVar21;
    }
    if (uVar2 == uVar19) break;
    uVar2 = *puVar4;
    uVar14 = puVar4[1];
    uVar15 = puVar4[2];
    puVar4 = puVar4 + 3;
    uVar8 = uVar11 + 1;
    puVar12 = puVar12 + -3;
    puVar3 = param_3 + uVar11 * 3;
    *puVar3 = uVar2;
    puVar3[1] = uVar14;
    puVar3[2] = uVar15;
    uVar2 = uVar19;
  }
  FUN_016dd1aa(param_1,param_3,uVar11 * 0xc);
  param_2 = uVar19 - uVar11;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar11 * 3;
  puVar12 = param_3 + uVar19 * 3 + -3;
  uVar2 = param_2;
  puVar4 = param_1;
  do {
    uVar8 = *puVar12;
    uVar15 = puVar12[1];
    uVar2 = uVar2 - 1;
    uVar14 = puVar12[2];
    puVar12 = puVar12 + -3;
    *puVar4 = uVar8;
    puVar4[1] = uVar15;
    puVar4[2] = uVar14;
    puVar4 = puVar4 + 3;
  } while (uVar2 != 0);
  if (uVar19 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar11,uVar19,uVar19,&DAT_018af348);
  }
  local_48 = (uint *)0x0;
  if (param_2 < 0x21) goto LAB_00b675b8;
  goto LAB_00b67634;
}

