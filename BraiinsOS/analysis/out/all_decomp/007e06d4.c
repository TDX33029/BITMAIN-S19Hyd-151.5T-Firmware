// FUN_007e06d4 @ 007e06d4 size=2580 calls_out=8 calls_in=2
// strings: 

void FUN_007e06d4(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint *puVar26;
  bool bVar27;
  bool bVar28;
  uint *local_44;
  uint *local_34;
  uint local_30;
  uint local_2c;
  
  if (0x20 < param_2) {
    local_44 = param_6;
    do {
      uVar17 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_00825b40(param_1,uVar17,param_3,param_4,1);
          return;
        }
        if (uVar17 < 0x40) {
          uVar3 = param_1[((uVar17 >> 3) * 8 - (uVar17 >> 3)) * 2];
          uVar14 = param_1[(uVar17 >> 3) * 8];
          uVar20 = *param_1;
          puVar4 = param_1 + (uVar17 >> 3) * 8;
          if (uVar20 < uVar14 != uVar14 < uVar3) {
            puVar4 = param_1 + ((uVar17 >> 3) * 8 - (uVar17 >> 3)) * 2;
          }
          if (uVar20 < uVar14 != uVar20 < uVar3) {
            puVar4 = param_1;
          }
        }
        else {
          puVar4 = (uint *)FUN_0087414c(param_1);
        }
        uVar3 = (int)puVar4 - (int)param_1;
        local_30 = *puVar4;
        local_2c = puVar4[1];
        param_5 = param_5 + -1;
        if ((local_44 != (uint *)0x0) && (local_30 <= *local_44)) break;
        if (param_4 < uVar17) goto LAB_007e10cc;
        puVar6 = param_3 + uVar17 * 2;
        param_2 = 0;
        puVar4 = param_1;
        uVar14 = uVar3 >> 3;
        while( true ) {
          iVar24 = uVar14 - 3;
          if (uVar14 < 3) {
            iVar24 = 0;
          }
          if (puVar4 < param_1 + iVar24 * 2) {
            uVar20 = *(uint *)((int)param_1 + uVar3);
            do {
              uVar9 = *puVar4;
              uVar15 = puVar4[1];
              uVar25 = puVar4[2];
              puVar5 = param_3;
              if (uVar20 <= uVar9) {
                puVar5 = puVar6 + -2;
              }
              uVar21 = puVar4[3];
              iVar23 = param_2 * 2;
              puVar5[iVar23] = uVar9;
              if (uVar20 > uVar9) {
                param_2 = param_2 + 1;
              }
              puVar8 = param_3;
              if (uVar20 <= uVar25) {
                puVar8 = puVar6 + -4;
              }
              (puVar5 + iVar23)[1] = uVar15;
              iVar23 = param_2 * 2;
              puVar8[iVar23] = uVar25;
              if (uVar20 > uVar25) {
                param_2 = param_2 + 1;
              }
              uVar25 = puVar4[4];
              (puVar8 + iVar23)[1] = uVar21;
              uVar9 = puVar4[6];
              puVar5 = param_3;
              if (uVar20 <= uVar25) {
                puVar5 = puVar6 + -6;
              }
              puVar6 = puVar6 + -8;
              iVar23 = param_2 * 2;
              puVar5[iVar23] = uVar25;
              if (uVar20 > uVar25) {
                param_2 = param_2 + 1;
              }
              (puVar5 + iVar23)[1] = puVar4[5];
              puVar5 = puVar6;
              if (uVar9 < uVar20) {
                puVar5 = param_3;
              }
              uVar25 = puVar4[7];
              iVar23 = param_2 * 2;
              puVar5[iVar23] = uVar9;
              if (uVar9 < uVar20) {
                param_2 = param_2 + 1;
              }
              puVar4 = puVar4 + 8;
              (puVar5 + iVar23)[1] = uVar25;
            } while (puVar4 < param_1 + iVar24 * 2);
          }
          if (puVar4 < param_1 + uVar14 * 2) {
            uVar20 = *(uint *)((int)param_1 + uVar3);
            do {
              uVar25 = *puVar4;
              uVar9 = puVar4[1];
              puVar6 = puVar6 + -2;
              puVar4 = puVar4 + 2;
              bVar27 = uVar25 < uVar20;
              puVar5 = puVar6;
              if (bVar27) {
                puVar5 = param_3;
              }
              iVar24 = param_2 * 2;
              puVar5[iVar24] = uVar25;
              if (bVar27) {
                param_2 = param_2 + 1;
              }
              (puVar5 + iVar24)[1] = uVar9;
            } while (puVar4 < param_1 + uVar14 * 2);
          }
          if (uVar14 == uVar17) break;
          puVar6 = puVar6 + -2;
          uVar14 = *puVar4;
          uVar20 = puVar4[1];
          puVar4 = puVar4 + 2;
          puVar6[param_2 * 2] = uVar14;
          (puVar6 + param_2 * 2)[1] = uVar20;
          uVar14 = uVar17;
        }
        FUN_016dd1aa(param_1,param_3,param_2 << 3);
        iVar24 = uVar17 - param_2;
        if (iVar24 != 0) {
          puVar6 = param_1 + param_2 * 2;
          puVar4 = param_3 + uVar17 * 2 + -2;
          iVar23 = iVar24;
          do {
            uVar14 = *puVar4;
            uVar20 = puVar4[1];
            puVar4 = puVar4 + -2;
            *puVar6 = uVar14;
            puVar6[1] = uVar20;
            puVar6 = puVar6 + 2;
            iVar23 = iVar23 + -1;
          } while (iVar23 != 0);
        }
        if (param_2 == 0) break;
        if (uVar17 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_007e06d4(param_1 + param_2 * 2,iVar24,param_3,param_4,param_5,&local_30);
        uVar17 = param_2;
        if (param_2 < 0x21) goto LAB_007e06f4;
      }
      if (param_4 < uVar17) goto LAB_007e10cc;
      puVar6 = param_3 + uVar17 * 2;
      uVar20 = 0;
      puVar4 = param_1;
      uVar14 = uVar3 >> 3;
      while( true ) {
        iVar24 = uVar14 - 3;
        if (uVar14 < 3) {
          iVar24 = 0;
        }
        if (puVar4 < param_1 + iVar24 * 2) {
          uVar25 = *(uint *)((int)param_1 + uVar3);
          do {
            uVar9 = *puVar4;
            uVar21 = puVar4[1];
            uVar15 = puVar4[2];
            puVar5 = param_3;
            if (uVar25 < uVar9) {
              puVar5 = puVar6 + -2;
            }
            uVar22 = puVar4[3];
            iVar23 = uVar20 * 2;
            puVar5[iVar23] = uVar9;
            if (uVar25 >= uVar9) {
              uVar20 = uVar20 + 1;
            }
            (puVar5 + iVar23)[1] = uVar21;
            puVar5 = param_3;
            if (uVar25 < uVar15) {
              puVar5 = puVar6 + -4;
            }
            iVar23 = uVar20 * 2;
            puVar5[iVar23] = uVar15;
            if (uVar25 >= uVar15) {
              uVar20 = uVar20 + 1;
            }
            uVar15 = puVar4[4];
            (puVar5 + iVar23)[1] = uVar22;
            uVar9 = puVar4[6];
            puVar5 = param_3;
            if (uVar25 < uVar15) {
              puVar5 = puVar6 + -6;
            }
            puVar6 = puVar6 + -8;
            iVar23 = uVar20 * 2;
            puVar5[iVar23] = uVar15;
            if (uVar25 >= uVar15) {
              uVar20 = uVar20 + 1;
            }
            (puVar5 + iVar23)[1] = puVar4[5];
            puVar5 = puVar6;
            if (uVar9 <= uVar25) {
              puVar5 = param_3;
            }
            uVar15 = puVar4[7];
            iVar23 = uVar20 * 2;
            puVar5[iVar23] = uVar9;
            if (uVar9 <= uVar25) {
              uVar20 = uVar20 + 1;
            }
            puVar4 = puVar4 + 8;
            (puVar5 + iVar23)[1] = uVar15;
          } while (puVar4 < param_1 + iVar24 * 2);
        }
        if (puVar4 < param_1 + uVar14 * 2) {
          uVar25 = *(uint *)((int)param_1 + uVar3);
          do {
            uVar9 = *puVar4;
            uVar15 = puVar4[1];
            puVar6 = puVar6 + -2;
            puVar4 = puVar4 + 2;
            bVar27 = uVar9 <= uVar25;
            puVar5 = puVar6;
            if (bVar27) {
              puVar5 = param_3;
            }
            iVar24 = uVar20 * 2;
            puVar5[iVar24] = uVar9;
            if (bVar27) {
              uVar20 = uVar20 + 1;
            }
            (puVar5 + iVar24)[1] = uVar15;
          } while (puVar4 < param_1 + uVar14 * 2);
        }
        if (uVar14 == uVar17) break;
        uVar14 = *puVar4;
        uVar25 = puVar4[1];
        puVar4 = puVar4 + 2;
        iVar24 = uVar20 * 2;
        param_3[iVar24] = uVar14;
        uVar20 = uVar20 + 1;
        puVar6 = puVar6 + -2;
        (param_3 + iVar24)[1] = uVar25;
        uVar14 = uVar17;
      }
      FUN_016dd1aa(param_1,param_3,uVar20 << 3);
      param_2 = uVar17 - uVar20;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar20 * 2;
      puVar6 = param_3 + uVar17 * 2 + -2;
      uVar3 = param_2;
      puVar4 = param_1;
      do {
        uVar14 = *puVar6;
        uVar25 = puVar6[1];
        puVar6 = puVar6 + -2;
        *puVar4 = uVar14;
        puVar4[1] = uVar25;
        puVar4 = puVar4 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      if (uVar17 < uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar20,uVar17,uVar17,&DAT_018af348);
      }
      local_44 = (uint *)0x0;
    } while (0x20 < param_2);
  }
LAB_007e06f4:
  uVar17 = param_2 >> 1;
  if (uVar17 != 0) {
    puVar4 = param_3 + param_2 * 2;
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        uVar3 = param_1[1];
        *param_3 = *param_1;
        param_3[1] = uVar3;
        param_3[uVar17 * 2] = param_1[uVar17 * 2];
        (param_3 + uVar17 * 2)[1] = (param_1 + uVar17 * 2)[1];
        uVar3 = 1;
      }
      else {
        uVar14 = 2;
        uVar3 = 3;
        if (param_1[6] < param_1[4]) {
          uVar3 = 2;
          uVar14 = 3;
        }
        uVar25 = (uint)(*param_1 <= param_1[2]);
        uVar21 = (uint)(*param_1 > param_1[2]);
        puVar10 = param_1 + uVar21 * 2;
        uVar9 = *puVar10;
        puVar19 = param_1 + uVar25 * 2;
        puVar26 = param_1 + uVar3 * 2;
        puVar8 = param_1 + uVar14 * 2;
        uVar15 = *puVar8;
        uVar20 = uVar25;
        puVar6 = puVar19;
        puVar5 = puVar26;
        if (*puVar26 < *puVar19) {
          uVar20 = uVar14;
          puVar6 = puVar8;
          puVar5 = puVar19;
        }
        puVar13 = puVar19;
        if (uVar9 <= uVar15) {
          puVar13 = puVar8;
          uVar25 = uVar14;
        }
        if (*puVar26 < *puVar19) {
          uVar25 = uVar3;
          puVar13 = puVar26;
        }
        uVar3 = param_1[uVar25 * 2];
        if (uVar15 < uVar9) {
          uVar20 = uVar21;
        }
        else {
          puVar8 = puVar10;
        }
        uVar14 = param_1[uVar20 * 2];
        if (uVar15 < uVar9) {
          puVar6 = puVar10;
        }
        puVar10 = puVar13;
        if (uVar3 < uVar14) {
          puVar10 = puVar6;
        }
        uVar20 = puVar8[1];
        *param_3 = *puVar8;
        if (uVar3 < uVar14) {
          puVar6 = puVar13;
        }
        param_3[1] = uVar20;
        uVar3 = puVar10[1];
        param_3[4] = *puVar10;
        uVar14 = *puVar6;
        uVar20 = puVar6[1];
        param_3[5] = uVar3;
        puVar6 = param_1 + uVar17 * 2;
        uVar3 = *puVar6;
        param_3[2] = uVar14;
        param_3[3] = uVar20;
        uVar25 = (uint)(uVar3 <= puVar6[2]);
        uVar20 = (uint)(uVar3 > puVar6[2]);
        uVar14 = 2;
        uVar3 = 3;
        puVar8 = puVar6 + uVar20 * 2;
        uVar9 = *puVar8;
        if (puVar6[6] < puVar6[4]) {
          uVar3 = 2;
          uVar14 = 3;
        }
        puVar10 = puVar6 + uVar14 * 2;
        uVar21 = *puVar10;
        puVar26 = puVar6 + uVar3 * 2;
        puVar19 = puVar6 + uVar25 * 2;
        puVar13 = puVar10;
        uVar15 = uVar14;
        if (uVar21 < uVar9) {
          puVar13 = puVar19;
          uVar15 = uVar25;
        }
        if (*puVar26 < *puVar19) {
          puVar18 = puVar10;
        }
        else {
          puVar18 = puVar19;
          uVar3 = uVar15;
          puVar19 = puVar26;
          puVar26 = puVar13;
          uVar14 = uVar25;
        }
        if (uVar9 <= uVar21) {
          puVar10 = puVar8;
        }
        else {
          puVar18 = puVar8;
        }
        uVar22 = puVar5[1];
        uVar25 = *puVar10;
        uVar15 = puVar10[1];
        uVar3 = puVar6[uVar3 * 2];
        if (uVar9 > uVar21) {
          uVar14 = uVar20;
        }
        uVar14 = puVar6[uVar14 * 2];
        param_3[6] = *puVar5;
        param_3[7] = uVar22;
        puVar6 = param_3 + uVar17 * 2;
        *puVar6 = uVar25;
        puVar6[1] = uVar15;
        if (uVar3 < uVar14) {
          puVar5 = puVar18;
          puVar18 = puVar26;
        }
        else {
          puVar5 = puVar26;
        }
        uVar20 = puVar18[1];
        puVar6[2] = *puVar18;
        uVar3 = *puVar5;
        puVar6[5] = puVar5[1];
        puVar6[4] = uVar3;
        uVar14 = puVar19[1];
        puVar6[6] = *puVar19;
        uVar3 = 4;
        puVar6[3] = uVar20;
        puVar6[7] = uVar14;
      }
    }
    else {
      FUN_007f37a4(param_1,param_3,puVar4);
      FUN_007f37a4(param_1 + uVar17 * 2,param_3 + uVar17 * 2,puVar4 + 0x10);
      uVar3 = 8;
    }
    if (uVar3 < uVar17) {
      iVar23 = uVar3 * -8 + 8;
      iVar24 = uVar3 << 3;
      uVar14 = uVar3;
      do {
        uVar20 = param_1[uVar14 * 2];
        puVar6 = param_3 + uVar14 * 2;
        *puVar6 = uVar20;
        uVar25 = (param_1 + uVar14 * 2)[1];
        puVar6[1] = uVar25;
        if (uVar20 < puVar6[-2]) {
          iVar7 = iVar23;
          iVar11 = iVar24;
          do {
            uVar16 = ((undefined4 *)((int)param_3 - iVar7))[1];
            *(undefined4 *)((int)param_3 + iVar11) = *(undefined4 *)((int)param_3 - iVar7);
            ((undefined4 *)((int)param_3 + iVar11))[1] = uVar16;
            if (iVar11 == 8) {
              puVar6 = param_3;
              goto LAB_007e0e30;
            }
            iVar7 = iVar7 + 8;
            iVar12 = iVar11 + -8;
            iVar2 = iVar11 + -0x10;
            iVar11 = iVar12;
          } while (uVar20 < *(uint *)((int)param_3 + iVar2));
          puVar6 = (uint *)((int)param_3 + iVar12);
LAB_007e0e30:
          *puVar6 = uVar20;
          puVar6[1] = uVar25;
        }
        uVar14 = uVar14 + 1;
        iVar23 = iVar23 + -8;
        iVar24 = iVar24 + 8;
      } while (uVar14 != uVar17);
    }
    puVar6 = param_3 + uVar17 * 2;
    if (uVar3 < param_2 - uVar17) {
      iVar24 = 8;
      local_34 = param_3 + uVar17 * 2 + -2;
      uVar14 = uVar3;
      puVar5 = puVar6;
      do {
        uVar20 = param_1[uVar17 * 2 + uVar14 * 2];
        puVar8 = puVar6 + uVar14 * 2;
        *puVar8 = uVar20;
        uVar25 = (param_1 + uVar17 * 2 + uVar14 * 2)[1];
        puVar8[1] = uVar25;
        if (uVar20 < puVar8[-2]) {
          iVar23 = iVar24;
          puVar8 = local_34;
          puVar10 = puVar5;
          do {
            uVar9 = (puVar8 + uVar3 * 2)[1];
            puVar10[uVar3 * 2] = puVar8[uVar3 * 2];
            (puVar10 + uVar3 * 2)[1] = uVar9;
            if (uVar3 * 8 == iVar23) {
              puVar8 = puVar6;
              goto LAB_007e0f00;
            }
            puVar8 = puVar8 + -2;
            iVar23 = iVar23 + 8;
            puVar26 = puVar10 + -2;
            puVar19 = puVar10 + uVar3 * 2 + -4;
            puVar10 = puVar26;
          } while (uVar20 < *puVar19);
          puVar8 = puVar26 + uVar3 * 2;
LAB_007e0f00:
          *puVar8 = uVar20;
          puVar8[1] = uVar25;
        }
        uVar14 = uVar14 + 1;
        iVar24 = iVar24 + -8;
        puVar5 = puVar5 + 2;
        local_34 = local_34 + 2;
      } while (uVar14 != param_2 - uVar17);
    }
    puVar5 = puVar6 + -2;
    iVar24 = 0;
    puVar4 = puVar4 + -2;
    do {
      uVar3 = *puVar5;
      bVar27 = *param_3 <= *puVar6;
      puVar8 = param_3;
      if (!bVar27) {
        puVar8 = puVar6;
      }
      uVar20 = puVar8[1];
      *(uint *)((int)param_1 + iVar24) = *puVar8;
      uVar14 = *puVar4;
      ((uint *)((int)param_1 + iVar24))[1] = uVar20;
      bVar28 = uVar14 < uVar3;
      param_3 = param_3 + (uint)bVar27 * 2;
      iVar23 = 0;
      puVar8 = puVar4;
      if (bVar28) {
        puVar8 = puVar5;
      }
      uVar3 = puVar8[1];
      if (bVar28) {
        iVar23 = -1;
      }
      puVar5 = puVar5 + iVar23 * 2;
      iVar23 = 0;
      puVar6 = puVar6 + (uint)!bVar27 * 2;
      if (!bVar28) {
        iVar23 = -1;
      }
      uVar17 = uVar17 - 1;
      puVar10 = (uint *)((int)param_1 + ((param_2 * 8 + -8) - iVar24));
      *puVar10 = *puVar8;
      puVar4 = puVar4 + iVar23 * 2;
      iVar24 = iVar24 + 8;
      puVar10[1] = uVar3;
    } while (uVar17 != 0);
    puVar5 = puVar5 + 2;
    if ((param_2 & 1) != 0) {
      bVar27 = puVar5 <= param_3;
      puVar8 = puVar6;
      if (!bVar27) {
        puVar8 = param_3;
      }
      uVar17 = puVar8[1];
      *(uint *)((int)param_1 + iVar24) = *puVar8;
      ((uint *)((int)param_1 + iVar24))[1] = uVar17;
      puVar6 = puVar6 + (uint)bVar27 * 2;
      param_3 = param_3 + (uint)!bVar27 * 2;
    }
    bVar27 = param_3 != puVar5;
    if (!bVar27) {
      puVar5 = puVar4 + 2;
    }
    if (bVar27 || puVar6 != puVar5) {
      FUN_00fb7254();
LAB_007e10cc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x7e10cc);
      (*pcVar1)();
    }
  }
  return;
}

