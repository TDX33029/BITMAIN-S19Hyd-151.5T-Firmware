// FUN_007dfc00 @ 007dfc00 size=2728 calls_out=8 calls_in=2
// strings: 

void FUN_007dfc00(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  bool bVar21;
  uint *local_44;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  if (0x20 < param_2) {
    local_44 = param_6;
    do {
      uVar15 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_00826b6c(param_1,uVar15,param_3,param_4,1);
          return;
        }
        puVar5 = param_1 + (uVar15 >> 3) * 0x15;
        puVar4 = param_1 + (uVar15 >> 3) * 0xc;
        if (uVar15 < 0x40) {
          uVar3 = *puVar4;
          uVar13 = *param_1;
          puVar11 = puVar5;
          if (uVar13 < uVar3 == uVar3 < *puVar5) {
            puVar11 = puVar4;
          }
          if (uVar13 < uVar3 != uVar13 < *puVar5) {
            puVar11 = param_1;
          }
        }
        else {
          puVar11 = (uint *)FUN_008740a0(param_1,puVar4,puVar5);
        }
        local_30 = *puVar11;
        uStack_2c = puVar11[1];
        uStack_28 = puVar11[2];
        uVar3 = ((uint)((int)puVar11 - (int)param_1) >> 2) * -0x55555555;
        param_5 = param_5 + -1;
        if ((local_44 != (uint *)0x0) && (*puVar11 <= *local_44)) break;
        if (param_4 < uVar15) goto LAB_007e0690;
        param_2 = 0;
        puVar4 = param_3 + uVar15 * 3;
        puVar5 = param_1;
        uVar13 = uVar3;
        while( true ) {
          iVar19 = uVar13 - 3;
          if (uVar13 < 3) {
            iVar19 = 0;
          }
          for (puVar10 = puVar5; puVar10 < param_1 + iVar19 * 3; puVar10 = puVar10 + 0xc) {
            uVar14 = puVar10[1];
            uVar17 = puVar10[2];
            if (*puVar10 < *puVar11) {
              puVar5 = param_3;
              uVar18 = param_2 + 1;
            }
            else {
              puVar5 = puVar4 + -3;
              uVar18 = param_2;
            }
            puVar5 = puVar5 + param_2 * 3;
            *puVar5 = *puVar10;
            puVar5[1] = uVar14;
            puVar5[2] = uVar17;
            uVar14 = puVar10[4];
            uVar17 = puVar10[5];
            if (puVar10[3] < *puVar11) {
              uVar8 = uVar18 + 1;
              puVar5 = param_3;
            }
            else {
              uVar8 = uVar18;
              puVar5 = puVar4 + -6;
            }
            puVar5 = puVar5 + uVar18 * 3;
            *puVar5 = puVar10[3];
            puVar5[1] = uVar14;
            puVar5[2] = uVar17;
            uVar14 = puVar10[7];
            uVar17 = puVar10[8];
            if (puVar10[6] < *puVar11) {
              uVar18 = uVar8 + 1;
              puVar5 = param_3;
            }
            else {
              uVar18 = uVar8;
              puVar5 = puVar4 + -9;
            }
            puVar4 = puVar4 + -0xc;
            puVar5 = puVar5 + uVar8 * 3;
            *puVar5 = puVar10[6];
            uVar8 = *puVar11;
            puVar5[1] = uVar14;
            puVar5[2] = uVar17;
            uVar14 = puVar10[10];
            uVar17 = puVar10[0xb];
            param_2 = uVar18;
            puVar5 = puVar4;
            if (puVar10[9] < uVar8) {
              param_2 = uVar18 + 1;
              puVar5 = param_3;
            }
            puVar5 = puVar5 + uVar18 * 3;
            *puVar5 = puVar10[9];
            puVar5[1] = uVar14;
            puVar5[2] = uVar17;
          }
          while (puVar10 < param_1 + uVar13 * 3) {
            puVar4 = puVar4 + -3;
            uVar17 = *puVar10;
            uVar18 = puVar10[1];
            uVar8 = puVar10[2];
            puVar10 = puVar10 + 3;
            uVar14 = param_2;
            puVar5 = puVar4;
            if (uVar17 < *puVar11) {
              uVar14 = param_2 + 1;
              puVar5 = param_3;
            }
            puVar5 = puVar5 + param_2 * 3;
            *puVar5 = uVar17;
            puVar5[1] = uVar18;
            puVar5[2] = uVar8;
            param_2 = uVar14;
          }
          if (uVar13 == uVar15) break;
          puVar4 = puVar4 + -3;
          uVar13 = puVar10[1];
          uVar14 = puVar10[2];
          puVar5 = puVar10 + 3;
          puVar9 = puVar4 + param_2 * 3;
          *puVar9 = *puVar10;
          puVar9[1] = uVar13;
          puVar9[2] = uVar14;
          uVar13 = uVar15;
        }
        FUN_016dd1aa(param_1,param_3,param_2 * 0xc);
        iVar19 = uVar15 - param_2;
        if (iVar19 != 0) {
          puVar4 = param_3 + uVar15 * 3 + -3;
          puVar5 = param_1 + param_2 * 3;
          iVar7 = iVar19;
          do {
            uVar13 = puVar4[1];
            uVar17 = puVar4[2];
            iVar7 = iVar7 + -1;
            uVar14 = *puVar4;
            puVar4 = puVar4 + -3;
            *puVar5 = uVar14;
            puVar5[1] = uVar13;
            puVar5[2] = uVar17;
            puVar5 = puVar5 + 3;
          } while (iVar7 != 0);
        }
        if (param_2 == 0) break;
        if (uVar15 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_007dfc00(param_1 + param_2 * 3,iVar19,param_3,param_4,param_5,&local_30);
        uVar15 = param_2;
        if (param_2 < 0x21) goto LAB_007dfc20;
      }
      if (param_4 < uVar15) goto LAB_007e0690;
      uVar13 = 0;
      puVar5 = param_3 + uVar15 * 3;
      puVar4 = param_1;
      while( true ) {
        iVar19 = uVar3 - 3;
        if (uVar3 < 3) {
          iVar19 = 0;
        }
        for (; puVar4 < param_1 + iVar19 * 3; puVar4 = puVar4 + 0xc) {
          uVar14 = puVar4[1];
          uVar17 = puVar4[2];
          if (*puVar11 < *puVar4) {
            puVar10 = puVar5 + -3;
            uVar18 = uVar13;
          }
          else {
            puVar10 = param_3;
            uVar18 = uVar13 + 1;
          }
          puVar10 = puVar10 + uVar13 * 3;
          *puVar10 = *puVar4;
          uVar8 = puVar4[3];
          puVar10[1] = uVar14;
          puVar10[2] = uVar17;
          uVar13 = puVar4[4];
          puVar10 = param_3;
          if (*puVar11 < uVar8) {
            puVar10 = puVar5 + -6;
          }
          uVar17 = puVar4[5];
          uVar14 = uVar18;
          if (*puVar11 >= uVar8) {
            uVar14 = uVar18 + 1;
          }
          puVar10 = puVar10 + uVar18 * 3;
          *puVar10 = uVar8;
          uVar18 = puVar4[6];
          puVar10[1] = uVar13;
          puVar10[2] = uVar17;
          uVar17 = puVar4[7];
          puVar10 = param_3;
          if (*puVar11 < uVar18) {
            puVar10 = puVar5 + -9;
          }
          uVar8 = puVar4[8];
          uVar13 = uVar14;
          if (*puVar11 >= uVar18) {
            uVar13 = uVar14 + 1;
          }
          puVar5 = puVar5 + -0xc;
          puVar10 = puVar10 + uVar14 * 3;
          *puVar10 = uVar18;
          uVar18 = *puVar11;
          puVar10[1] = uVar17;
          puVar10[2] = uVar8;
          uVar17 = puVar4[9];
          uVar14 = puVar4[10];
          puVar10 = puVar5;
          if (uVar17 <= uVar18) {
            puVar10 = param_3;
          }
          uVar8 = puVar4[0xb];
          puVar10 = puVar10 + uVar13 * 3;
          *puVar10 = uVar17;
          if (uVar17 <= uVar18) {
            uVar13 = uVar13 + 1;
          }
          puVar10[1] = uVar14;
          puVar10[2] = uVar8;
        }
        uVar14 = uVar13;
        while (puVar4 < param_1 + uVar3 * 3) {
          puVar5 = puVar5 + -3;
          uVar17 = *puVar4;
          uVar8 = puVar4[1];
          uVar18 = puVar4[2];
          puVar4 = puVar4 + 3;
          uVar13 = uVar14;
          puVar10 = puVar5;
          if (uVar17 <= *puVar11) {
            uVar13 = uVar14 + 1;
            puVar10 = param_3;
          }
          puVar10 = puVar10 + uVar14 * 3;
          *puVar10 = uVar17;
          puVar10[1] = uVar8;
          puVar10[2] = uVar18;
          uVar14 = uVar13;
        }
        if (uVar3 == uVar15) break;
        uVar3 = *puVar4;
        uVar17 = puVar4[1];
        uVar18 = puVar4[2];
        puVar4 = puVar4 + 3;
        uVar13 = uVar14 + 1;
        puVar5 = puVar5 + -3;
        puVar10 = param_3 + uVar14 * 3;
        *puVar10 = uVar3;
        puVar10[1] = uVar17;
        puVar10[2] = uVar18;
        uVar3 = uVar15;
      }
      FUN_016dd1aa(param_1,param_3,uVar14 * 0xc);
      param_2 = uVar15 - uVar14;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar14 * 3;
      puVar5 = param_3 + uVar15 * 3 + -3;
      puVar4 = param_1;
      uVar3 = param_2;
      do {
        uVar18 = *puVar5;
        uVar3 = uVar3 - 1;
        uVar17 = puVar5[1];
        uVar13 = puVar5[2];
        puVar5 = puVar5 + -3;
        *puVar4 = uVar18;
        puVar4[1] = uVar17;
        puVar4[2] = uVar13;
        puVar4 = puVar4 + 3;
      } while (uVar3 != 0);
      if (uVar15 < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar14,uVar15,uVar15,&DAT_018af348);
      }
      local_44 = (uint *)0x0;
    } while (0x20 < param_2);
  }
LAB_007dfc20:
  uVar15 = param_2 >> 1;
  if (uVar15 != 0) {
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        uVar3 = param_1[1];
        uVar13 = param_1[2];
        *param_3 = *param_1;
        param_3[1] = uVar3;
        param_3[2] = uVar13;
        puVar4 = param_1 + uVar15 * 3;
        uVar14 = puVar4[1];
        uVar13 = puVar4[2];
        puVar5 = param_3 + uVar15 * 3;
        *puVar5 = *puVar4;
        uVar3 = 1;
        puVar5[1] = uVar14;
        puVar5[2] = uVar13;
      }
      else {
        uVar13 = (uint)(*param_1 <= param_1[3]);
        uVar3 = (uint)(*param_1 > param_1[3]);
        iVar19 = 0x24;
        iVar7 = 0x18;
        if (param_1[9] < param_1[6]) {
          iVar19 = 0x18;
          iVar7 = 0x24;
        }
        puVar11 = (uint *)((int)param_1 + iVar7);
        puVar10 = (uint *)((int)param_1 + iVar19);
        uVar14 = *puVar10;
        puVar4 = param_1 + (uVar13 | uVar13 << 1);
        uVar13 = *puVar4;
        puVar5 = puVar10;
        if (uVar14 < uVar13) {
          puVar5 = puVar4;
        }
        puVar9 = param_1 + (uVar3 | uVar3 << 1);
        puVar16 = puVar4;
        if (uVar14 < uVar13) {
          puVar16 = puVar11;
        }
        if (*puVar11 < *puVar9) {
          puVar6 = puVar11;
        }
        else {
          puVar6 = puVar9;
          puVar4 = puVar11;
          puVar9 = puVar16;
        }
        if (uVar14 < uVar13) {
          puVar4 = puVar10;
        }
        uVar17 = *puVar9;
        uVar13 = *puVar4;
        uVar3 = *puVar6;
        uVar14 = puVar6[1];
        param_3[2] = puVar6[2];
        puVar11 = puVar9;
        if (uVar13 < uVar17) {
          puVar11 = puVar4;
        }
        *param_3 = uVar3;
        param_3[1] = uVar14;
        if (uVar13 < uVar17) {
          puVar4 = puVar9;
        }
        uVar3 = *puVar11;
        uVar13 = puVar11[1];
        param_3[5] = puVar11[2];
        param_3[4] = uVar13;
        param_3[3] = uVar3;
        uVar3 = puVar4[1];
        uVar13 = puVar4[2];
        param_3[6] = *puVar4;
        param_3[7] = uVar3;
        param_3[8] = uVar13;
        uVar3 = puVar5[1];
        uVar13 = puVar5[2];
        param_3[9] = *puVar5;
        param_3[10] = uVar3;
        param_3[0xb] = uVar13;
        puVar4 = param_1 + uVar15 * 3;
        uVar3 = (uint)(*puVar4 <= puVar4[3]);
        uVar13 = (uint)(*puVar4 > puVar4[3]);
        iVar19 = 0x24;
        iVar7 = 0x18;
        if (puVar4[9] < puVar4[6]) {
          iVar19 = 0x18;
          iVar7 = 0x24;
        }
        puVar9 = (uint *)((int)puVar4 + iVar19);
        puVar11 = (uint *)((int)puVar4 + iVar7);
        puVar10 = puVar4 + (uVar13 | uVar13 << 1);
        puVar4 = puVar4 + (uVar3 | uVar3 << 1);
        puVar5 = puVar11;
        if (*puVar11 < *puVar10) {
          puVar5 = puVar4;
        }
        puVar6 = puVar4;
        puVar16 = puVar9;
        if (*puVar9 < *puVar4) {
          puVar6 = puVar11;
          puVar16 = puVar4;
          puVar5 = puVar9;
        }
        if (*puVar11 < *puVar10) {
          puVar6 = puVar10;
        }
        else {
          puVar11 = puVar10;
        }
        uVar17 = puVar11[1];
        uVar3 = puVar11[2];
        uVar14 = *puVar5;
        uVar13 = *puVar6;
        puVar4 = param_3 + uVar15 * 3;
        *puVar4 = *puVar11;
        puVar4[2] = uVar3;
        if (uVar14 < uVar13) {
          puVar11 = puVar6;
          puVar6 = puVar5;
        }
        else {
          puVar11 = puVar5;
        }
        uVar18 = *puVar6;
        uVar3 = puVar6[1];
        puVar4[5] = puVar6[2];
        puVar4[4] = uVar3;
        uVar3 = *puVar11;
        uVar13 = puVar11[1];
        uVar14 = puVar11[2];
        puVar4[3] = uVar18;
        puVar4[6] = uVar3;
        puVar4[7] = uVar13;
        puVar4[8] = uVar14;
        uVar3 = *puVar16;
        uVar13 = puVar16[1];
        uVar14 = puVar16[2];
        puVar4[1] = uVar17;
        puVar4[9] = uVar3;
        puVar4[10] = uVar13;
        puVar4[0xb] = uVar14;
        uVar3 = 4;
      }
    }
    else {
      FUN_007f3398(param_1,param_3,param_3 + param_2 * 3);
      FUN_007f3398(param_1 + uVar15 * 3,param_3 + uVar15 * 3,param_3 + param_2 * 3 + 0x18);
      uVar3 = 8;
    }
    if (uVar3 < uVar15) {
      iVar19 = uVar3 * 0xc;
      uVar13 = uVar3;
      do {
        puVar4 = param_1 + uVar13 * 3;
        uVar14 = *puVar4;
        uVar17 = puVar4[1];
        uVar18 = puVar4[2];
        puVar4 = param_3 + uVar13 * 3;
        *puVar4 = uVar14;
        puVar4[1] = uVar17;
        puVar4[2] = uVar18;
        if (uVar14 < puVar4[-3]) {
          uVar17 = puVar4[1];
          uVar18 = puVar4[2];
          iVar7 = iVar19;
          do {
            *(undefined4 *)((int)param_3 + iVar7 + 4) = *(undefined4 *)((int)param_3 + iVar7 + -8);
            *(undefined4 *)((int)param_3 + iVar7) = *(undefined4 *)((int)param_3 + iVar7 + -0xc);
            *(undefined4 *)((int)param_3 + iVar7 + 8) = *(undefined4 *)((int)param_3 + iVar7 + -4);
            if (iVar7 == 0xc) {
              puVar4 = param_3;
              goto LAB_007e03b8;
            }
            iVar2 = iVar7 + -0x18;
            iVar7 = iVar7 + -0xc;
          } while (uVar14 < *(uint *)((int)param_3 + iVar2));
          puVar4 = (uint *)((int)param_3 + iVar7);
LAB_007e03b8:
          *puVar4 = uVar14;
          puVar4[1] = uVar17;
          puVar4[2] = uVar18;
        }
        uVar13 = uVar13 + 1;
        iVar19 = iVar19 + 0xc;
      } while (uVar13 != uVar15);
    }
    puVar4 = param_3 + uVar15 * 3;
    if (uVar3 < param_2 - uVar15) {
      iVar19 = 0xc;
      uVar13 = uVar3;
      puVar5 = puVar4;
      do {
        puVar11 = param_1 + uVar15 * 3 + uVar13 * 3;
        uVar14 = *puVar11;
        uVar17 = puVar11[1];
        uVar18 = puVar11[2];
        puVar11 = puVar4 + uVar13 * 3;
        *puVar11 = uVar14;
        puVar11[1] = uVar17;
        puVar11[2] = uVar18;
        if (uVar14 < puVar11[-3]) {
          uVar18 = puVar11[1];
          uVar17 = puVar11[2];
          iVar7 = iVar19;
          puVar11 = puVar5;
          do {
            uVar12 = puVar11[uVar3 * 3 + -1];
            uVar8 = puVar11[uVar3 * 3 + -2];
            puVar11[uVar3 * 3] = puVar11[uVar3 * 3 + -3];
            puVar11[uVar3 * 3 + 1] = uVar8;
            puVar11[uVar3 * 3 + 2] = uVar12;
            if (uVar3 * 0xc == iVar7) {
              puVar11 = puVar4;
              goto LAB_007e0484;
            }
            puVar10 = puVar11 + uVar3 * 3 + -6;
            iVar7 = iVar7 + 0xc;
            puVar11 = puVar11 + -3;
          } while (uVar14 < *puVar10);
          puVar11 = puVar11 + uVar3 * 3;
LAB_007e0484:
          puVar11[1] = uVar18;
          *puVar11 = uVar14;
          puVar11[2] = uVar17;
        }
        iVar19 = iVar19 + -0xc;
        puVar5 = puVar5 + 3;
        uVar13 = uVar13 + 1;
      } while (uVar13 != param_2 - uVar15);
    }
    puVar5 = puVar4 + -3;
    iVar19 = 0;
    puVar11 = param_3 + param_2 * 3 + -3;
    do {
      bVar20 = *puVar4 < *param_3;
      puVar10 = param_3;
      if (bVar20) {
        puVar10 = puVar4;
      }
      uVar13 = puVar10[1];
      uVar14 = puVar10[2];
      puVar9 = (uint *)((int)param_1 + iVar19);
      *puVar9 = *puVar10;
      uVar3 = *puVar11;
      puVar9[1] = uVar13;
      puVar9[2] = uVar14;
      bVar21 = uVar3 < *puVar5;
      param_3 = param_3 + ((uint)!bVar20 | (uint)!bVar20 << 1);
      puVar10 = puVar11;
      if (bVar21) {
        puVar10 = puVar5;
      }
      puVar4 = puVar4 + ((uint)bVar20 | (uint)bVar20 << 1);
      iVar7 = 0;
      if (bVar21) {
        iVar7 = -1;
      }
      uVar13 = puVar10[1];
      uVar3 = puVar10[2];
      puVar5 = puVar5 + iVar7 * 3;
      iVar7 = 0;
      if (!bVar21) {
        iVar7 = -1;
      }
      puVar9 = (uint *)((int)param_1 + ((param_2 * 0xc + -0xc) - iVar19));
      *puVar9 = *puVar10;
      puVar10 = (uint *)(iVar7 * 3);
      iVar19 = iVar19 + 0xc;
      uVar15 = uVar15 - 1;
      puVar9[1] = uVar13;
      puVar11 = puVar11 + iVar7 * 3;
      puVar9[2] = uVar3;
    } while (uVar15 != 0);
    puVar5 = puVar5 + 3;
    if ((param_2 & 1) != 0) {
      bVar20 = puVar5 <= param_3;
      puVar10 = puVar4;
      if (!bVar20) {
        puVar10 = param_3;
      }
      param_1 = (uint *)((int)param_1 + iVar19);
      uVar15 = *puVar10;
      uVar3 = puVar10[1];
      param_1[2] = puVar10[2];
      *param_1 = uVar15;
      param_1[1] = uVar3;
      puVar10 = (uint *)((uint)!bVar20 | (uint)!bVar20 << 1);
      puVar4 = puVar4 + ((uint)bVar20 | (uint)bVar20 << 1);
      param_3 = param_3 + (int)puVar10;
    }
    if (param_3 == puVar5) {
      puVar10 = puVar11 + 3;
    }
    if (param_3 != puVar5 || puVar4 != puVar10) {
      FUN_00fb7254();
LAB_007e0690:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x7e0690);
      (*pcVar1)();
    }
  }
  return;
}

