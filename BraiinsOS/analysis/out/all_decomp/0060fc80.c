// FUN_0060fc80 @ 0060fc80 size=2608 calls_out=8 calls_in=2
// strings: 

void FUN_0060fc80(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

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
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint *puVar25;
  uint *puVar26;
  bool bVar27;
  bool bVar28;
  uint *local_3c;
  uint local_2c;
  uint local_28;
  
  if (0x20 < param_2) {
    local_3c = param_6;
    uVar17 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_0060d988(param_1,uVar17,param_3,param_4,1);
          return;
        }
        if (uVar17 < 0x40) {
          uVar19 = param_1[((uVar17 >> 3) * 8 - (uVar17 >> 3)) * 2];
          uVar14 = param_1[(uVar17 >> 3) * 8];
          uVar3 = *param_1;
          puVar4 = param_1 + (uVar17 >> 3) * 8;
          if (uVar3 < uVar14 != uVar14 < uVar19) {
            puVar4 = param_1 + ((uVar17 >> 3) * 8 - (uVar17 >> 3)) * 2;
          }
          if (uVar3 < uVar14 != uVar3 < uVar19) {
            puVar4 = param_1;
          }
        }
        else {
          puVar4 = (uint *)FUN_010dce48(param_1);
        }
        local_28 = puVar4[1];
        param_5 = param_5 + -1;
        local_2c = *puVar4;
        uVar3 = (uint)((int)puVar4 - (int)param_1) >> 3;
        if ((local_3c == (uint *)0x0) || (*local_3c < local_2c)) break;
LAB_0060ff80:
        if (param_4 < uVar17) goto LAB_00610694;
        puVar10 = param_3 + uVar17 * 2;
        uVar14 = 0;
        puVar6 = param_1;
        while( true ) {
          iVar23 = uVar3 - 3;
          if (uVar3 < 3) {
            iVar23 = 0;
          }
          if (puVar6 < param_1 + iVar23 * 2) {
            uVar19 = *puVar4;
            do {
              uVar24 = *puVar6;
              uVar15 = puVar6[1];
              uVar8 = puVar6[2];
              puVar5 = param_3;
              if (uVar19 < uVar24) {
                puVar5 = puVar10 + -2;
              }
              uVar20 = puVar6[3];
              iVar22 = uVar14 * 2;
              puVar5[iVar22] = uVar24;
              if (uVar19 >= uVar24) {
                uVar14 = uVar14 + 1;
              }
              (puVar5 + iVar22)[1] = uVar15;
              puVar5 = param_3;
              if (uVar19 < uVar8) {
                puVar5 = puVar10 + -4;
              }
              iVar22 = uVar14 * 2;
              puVar5[iVar22] = uVar8;
              if (uVar19 >= uVar8) {
                uVar14 = uVar14 + 1;
              }
              uVar8 = puVar6[4];
              (puVar5 + iVar22)[1] = uVar20;
              uVar24 = puVar6[6];
              puVar5 = param_3;
              if (uVar19 < uVar8) {
                puVar5 = puVar10 + -6;
              }
              puVar10 = puVar10 + -8;
              iVar22 = uVar14 * 2;
              puVar5[iVar22] = uVar8;
              if (uVar19 >= uVar8) {
                uVar14 = uVar14 + 1;
              }
              (puVar5 + iVar22)[1] = puVar6[5];
              puVar5 = puVar10;
              if (uVar24 <= uVar19) {
                puVar5 = param_3;
              }
              uVar8 = puVar6[7];
              iVar22 = uVar14 * 2;
              puVar5[iVar22] = uVar24;
              if (uVar24 <= uVar19) {
                uVar14 = uVar14 + 1;
              }
              puVar6 = puVar6 + 8;
              (puVar5 + iVar22)[1] = uVar8;
            } while (puVar6 < param_1 + iVar23 * 2);
          }
          if (puVar6 < param_1 + uVar3 * 2) {
            uVar19 = *puVar4;
            do {
              uVar8 = *puVar6;
              puVar10 = puVar10 + -2;
              uVar24 = puVar6[1];
              puVar6 = puVar6 + 2;
              puVar5 = puVar10;
              if (uVar8 <= uVar19) {
                puVar5 = param_3;
              }
              iVar23 = uVar14 * 2;
              puVar5[iVar23] = uVar8;
              if (uVar8 <= uVar19) {
                uVar14 = uVar14 + 1;
              }
              (puVar5 + iVar23)[1] = uVar24;
            } while (puVar6 < param_1 + uVar3 * 2);
          }
          if (uVar3 == uVar17) break;
          uVar3 = *puVar6;
          uVar19 = puVar6[1];
          puVar6 = puVar6 + 2;
          iVar23 = uVar14 * 2;
          param_3[iVar23] = uVar3;
          uVar14 = uVar14 + 1;
          puVar10 = puVar10 + -2;
          (param_3 + iVar23)[1] = uVar19;
          uVar3 = uVar17;
        }
        FUN_016dd1aa(param_1,param_3,uVar14 << 3);
        param_2 = uVar17 - uVar14;
        if (param_2 == 0) {
          return;
        }
        param_1 = param_1 + uVar14 * 2;
        puVar6 = param_3 + uVar17 * 2 + -2;
        uVar3 = param_2;
        puVar4 = param_1;
        do {
          uVar24 = *puVar6;
          uVar3 = uVar3 - 1;
          uVar19 = puVar6[1];
          puVar6 = puVar6 + -2;
          *puVar4 = uVar24;
          puVar4[1] = uVar19;
          puVar4 = puVar4 + 2;
        } while (uVar3 != 0);
        if (uVar17 < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar14,uVar17,uVar17,&DAT_018af348);
        }
        local_3c = (uint *)0x0;
        uVar17 = param_2;
        if (param_2 < 0x21) goto LAB_0060fca4;
      }
      if (param_4 < uVar17) goto LAB_00610694;
      puVar10 = param_3 + uVar17 * 2;
      param_2 = 0;
      puVar6 = param_1;
      uVar14 = uVar3;
      while( true ) {
        iVar23 = uVar14 - 3;
        if (uVar14 < 3) {
          iVar23 = 0;
        }
        if (puVar6 < param_1 + iVar23 * 2) {
          uVar19 = *puVar4;
          do {
            uVar8 = *puVar6;
            uVar15 = puVar6[1];
            uVar24 = puVar6[2];
            puVar5 = param_3;
            if (uVar19 <= uVar8) {
              puVar5 = puVar10 + -2;
            }
            uVar20 = puVar6[3];
            iVar22 = param_2 * 2;
            puVar5[iVar22] = uVar8;
            if (uVar19 > uVar8) {
              param_2 = param_2 + 1;
            }
            puVar9 = param_3;
            if (uVar19 <= uVar24) {
              puVar9 = puVar10 + -4;
            }
            (puVar5 + iVar22)[1] = uVar15;
            iVar22 = param_2 * 2;
            puVar9[iVar22] = uVar24;
            if (uVar19 > uVar24) {
              param_2 = param_2 + 1;
            }
            uVar24 = puVar6[4];
            (puVar9 + iVar22)[1] = uVar20;
            uVar8 = puVar6[6];
            puVar5 = param_3;
            if (uVar19 <= uVar24) {
              puVar5 = puVar10 + -6;
            }
            puVar10 = puVar10 + -8;
            iVar22 = param_2 * 2;
            puVar5[iVar22] = uVar24;
            if (uVar19 > uVar24) {
              param_2 = param_2 + 1;
            }
            (puVar5 + iVar22)[1] = puVar6[5];
            puVar5 = puVar10;
            if (uVar8 < uVar19) {
              puVar5 = param_3;
            }
            uVar24 = puVar6[7];
            iVar22 = param_2 * 2;
            puVar5[iVar22] = uVar8;
            if (uVar8 < uVar19) {
              param_2 = param_2 + 1;
            }
            puVar6 = puVar6 + 8;
            (puVar5 + iVar22)[1] = uVar24;
          } while (puVar6 < param_1 + iVar23 * 2);
        }
        if (puVar6 < param_1 + uVar14 * 2) {
          uVar19 = *puVar4;
          do {
            uVar24 = *puVar6;
            uVar8 = puVar6[1];
            puVar10 = puVar10 + -2;
            puVar6 = puVar6 + 2;
            puVar5 = puVar10;
            if (uVar24 < uVar19) {
              puVar5 = param_3;
            }
            iVar23 = param_2 * 2;
            puVar5[iVar23] = uVar24;
            if (uVar24 < uVar19) {
              param_2 = param_2 + 1;
            }
            (puVar5 + iVar23)[1] = uVar8;
          } while (puVar6 < param_1 + uVar14 * 2);
        }
        if (uVar14 == uVar17) break;
        puVar10 = puVar10 + -2;
        uVar14 = *puVar6;
        uVar19 = puVar6[1];
        puVar6 = puVar6 + 2;
        puVar10[param_2 * 2] = uVar14;
        (puVar10 + param_2 * 2)[1] = uVar19;
        uVar14 = uVar17;
      }
      FUN_016dd1aa(param_1,param_3,param_2 << 3);
      iVar23 = uVar17 - param_2;
      if (iVar23 != 0) {
        puVar10 = param_1 + param_2 * 2;
        puVar6 = param_3 + uVar17 * 2 + -2;
        iVar22 = iVar23;
        do {
          uVar14 = *puVar6;
          uVar19 = puVar6[1];
          puVar6 = puVar6 + -2;
          *puVar10 = uVar14;
          puVar10[1] = uVar19;
          puVar10 = puVar10 + 2;
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
      if (param_2 == 0) goto LAB_0060ff80;
      if (uVar17 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
      }
      FUN_0060fc80(param_1 + param_2 * 2,iVar23,param_3,param_4,param_5,&local_2c);
      uVar17 = param_2;
    } while (0x20 < param_2);
  }
LAB_0060fca4:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    puVar4 = param_3 + param_2 * 2;
    uVar17 = param_2 >> 1;
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
        uVar24 = (uint)(*param_1 <= param_1[2]);
        uVar20 = (uint)(*param_1 > param_1[2]);
        puVar9 = param_1 + uVar20 * 2;
        uVar8 = *puVar9;
        puVar26 = param_1 + uVar24 * 2;
        puVar25 = param_1 + uVar3 * 2;
        puVar5 = param_1 + uVar14 * 2;
        uVar15 = *puVar5;
        uVar19 = uVar24;
        puVar6 = puVar26;
        puVar10 = puVar25;
        if (*puVar25 < *puVar26) {
          uVar19 = uVar14;
          puVar6 = puVar5;
          puVar10 = puVar26;
        }
        puVar13 = puVar26;
        if (uVar8 <= uVar15) {
          puVar13 = puVar5;
          uVar24 = uVar14;
        }
        if (*puVar25 < *puVar26) {
          uVar24 = uVar3;
          puVar13 = puVar25;
        }
        uVar3 = param_1[uVar24 * 2];
        if (uVar15 < uVar8) {
          uVar19 = uVar20;
        }
        else {
          puVar5 = puVar9;
        }
        uVar14 = param_1[uVar19 * 2];
        if (uVar15 < uVar8) {
          puVar6 = puVar9;
        }
        puVar9 = puVar13;
        if (uVar3 < uVar14) {
          puVar9 = puVar6;
        }
        uVar19 = puVar5[1];
        *param_3 = *puVar5;
        if (uVar3 < uVar14) {
          puVar6 = puVar13;
        }
        param_3[1] = uVar19;
        uVar3 = puVar9[1];
        param_3[4] = *puVar9;
        uVar14 = *puVar6;
        uVar19 = puVar6[1];
        param_3[5] = uVar3;
        puVar6 = param_1 + uVar17 * 2;
        uVar3 = *puVar6;
        param_3[2] = uVar14;
        param_3[3] = uVar19;
        uVar24 = (uint)(uVar3 <= puVar6[2]);
        uVar19 = (uint)(uVar3 > puVar6[2]);
        uVar14 = 2;
        uVar3 = 3;
        puVar5 = puVar6 + uVar19 * 2;
        uVar8 = *puVar5;
        if (puVar6[6] < puVar6[4]) {
          uVar3 = 2;
          uVar14 = 3;
        }
        puVar9 = puVar6 + uVar14 * 2;
        uVar20 = *puVar9;
        puVar25 = puVar6 + uVar3 * 2;
        puVar26 = puVar6 + uVar24 * 2;
        puVar13 = puVar9;
        uVar15 = uVar14;
        if (uVar20 < uVar8) {
          puVar13 = puVar26;
          uVar15 = uVar24;
        }
        if (*puVar25 < *puVar26) {
          puVar18 = puVar9;
        }
        else {
          puVar18 = puVar26;
          uVar3 = uVar15;
          puVar26 = puVar25;
          puVar25 = puVar13;
          uVar14 = uVar24;
        }
        if (uVar8 <= uVar20) {
          puVar9 = puVar5;
        }
        else {
          puVar18 = puVar5;
        }
        uVar21 = puVar10[1];
        uVar24 = *puVar9;
        uVar15 = puVar9[1];
        uVar3 = puVar6[uVar3 * 2];
        if (uVar8 > uVar20) {
          uVar14 = uVar19;
        }
        uVar14 = puVar6[uVar14 * 2];
        param_3[6] = *puVar10;
        param_3[7] = uVar21;
        puVar6 = param_3 + uVar17 * 2;
        *puVar6 = uVar24;
        puVar6[1] = uVar15;
        if (uVar3 < uVar14) {
          puVar10 = puVar18;
          puVar18 = puVar25;
        }
        else {
          puVar10 = puVar25;
        }
        uVar19 = puVar18[1];
        puVar6[2] = *puVar18;
        uVar3 = puVar10[1];
        puVar6[4] = *puVar10;
        puVar6[5] = uVar3;
        uVar14 = puVar26[1];
        puVar6[6] = *puVar26;
        uVar3 = 4;
        puVar6[3] = uVar19;
        puVar6[7] = uVar14;
      }
    }
    else {
      FUN_00613d48(param_1,param_3,puVar4);
      FUN_00613d48(param_1 + uVar17 * 2,param_3 + uVar17 * 2,puVar4 + 0x10);
      uVar3 = 8;
    }
    if (uVar3 < uVar17) {
      iVar22 = uVar3 * -8 + 8;
      iVar23 = uVar3 << 3;
      uVar14 = uVar3;
      do {
        uVar19 = param_1[uVar14 * 2];
        puVar6 = param_3 + uVar14 * 2;
        *puVar6 = uVar19;
        uVar24 = (param_1 + uVar14 * 2)[1];
        puVar6[1] = uVar24;
        if (uVar19 < puVar6[-2]) {
          iVar7 = iVar22;
          iVar11 = iVar23;
          do {
            uVar16 = ((undefined4 *)((int)param_3 - iVar7))[1];
            *(undefined4 *)((int)param_3 + iVar11) = *(undefined4 *)((int)param_3 - iVar7);
            ((undefined4 *)((int)param_3 + iVar11))[1] = uVar16;
            if (iVar11 == 8) {
              puVar6 = param_3;
              goto LAB_006103fc;
            }
            iVar7 = iVar7 + 8;
            iVar12 = iVar11 + -8;
            iVar2 = iVar11 + -0x10;
            iVar11 = iVar12;
          } while (uVar19 < *(uint *)((int)param_3 + iVar2));
          puVar6 = (uint *)((int)param_3 + iVar12);
LAB_006103fc:
          *puVar6 = uVar19;
          puVar6[1] = uVar24;
        }
        uVar14 = uVar14 + 1;
        iVar22 = iVar22 + -8;
        iVar23 = iVar23 + 8;
      } while (uVar14 != uVar17);
    }
    puVar6 = param_3 + uVar17 * 2;
    if (uVar3 < param_2 - uVar17) {
      iVar23 = 8;
      puVar5 = param_3 + uVar17 * 2 + -2;
      uVar14 = uVar3;
      puVar10 = puVar6;
      do {
        uVar19 = param_1[uVar17 * 2 + uVar14 * 2];
        puVar9 = puVar6 + uVar14 * 2;
        *puVar9 = uVar19;
        uVar24 = (param_1 + uVar17 * 2 + uVar14 * 2)[1];
        puVar9[1] = uVar24;
        if (uVar19 < puVar9[-2]) {
          iVar22 = iVar23;
          puVar9 = puVar5;
          puVar26 = puVar10;
          do {
            uVar8 = (puVar9 + uVar3 * 2)[1];
            puVar26[uVar3 * 2] = puVar9[uVar3 * 2];
            (puVar26 + uVar3 * 2)[1] = uVar8;
            if (uVar3 * 8 == iVar22) {
              puVar9 = puVar6;
              goto LAB_006104c8;
            }
            puVar9 = puVar9 + -2;
            iVar22 = iVar22 + 8;
            puVar13 = puVar26 + -2;
            puVar25 = puVar26 + uVar3 * 2 + -4;
            puVar26 = puVar13;
          } while (uVar19 < *puVar25);
          puVar9 = puVar13 + uVar3 * 2;
LAB_006104c8:
          *puVar9 = uVar19;
          puVar9[1] = uVar24;
        }
        puVar5 = puVar5 + 2;
        iVar23 = iVar23 + -8;
        puVar10 = puVar10 + 2;
        uVar14 = uVar14 + 1;
      } while (uVar14 != param_2 - uVar17);
    }
    puVar10 = puVar6 + -2;
    iVar23 = 0;
    puVar4 = puVar4 + -2;
    do {
      uVar3 = *puVar10;
      bVar27 = *param_3 <= *puVar6;
      puVar5 = param_3;
      if (!bVar27) {
        puVar5 = puVar6;
      }
      uVar19 = puVar5[1];
      *(uint *)((int)param_1 + iVar23) = *puVar5;
      uVar14 = *puVar4;
      ((uint *)((int)param_1 + iVar23))[1] = uVar19;
      bVar28 = uVar14 < uVar3;
      param_3 = param_3 + (uint)bVar27 * 2;
      iVar22 = 0;
      puVar5 = puVar4;
      if (bVar28) {
        puVar5 = puVar10;
      }
      uVar3 = puVar5[1];
      if (bVar28) {
        iVar22 = -1;
      }
      puVar10 = puVar10 + iVar22 * 2;
      iVar22 = 0;
      puVar6 = puVar6 + (uint)!bVar27 * 2;
      if (!bVar28) {
        iVar22 = -1;
      }
      uVar17 = uVar17 - 1;
      puVar9 = (uint *)((int)param_1 + ((param_2 * 8 + -8) - iVar23));
      *puVar9 = *puVar5;
      puVar4 = puVar4 + iVar22 * 2;
      iVar23 = iVar23 + 8;
      puVar9[1] = uVar3;
    } while (uVar17 != 0);
    puVar10 = puVar10 + 2;
    if ((param_2 & 1) != 0) {
      bVar27 = puVar10 <= param_3;
      puVar5 = puVar6;
      if (!bVar27) {
        puVar5 = param_3;
      }
      uVar17 = puVar5[1];
      *(uint *)((int)param_1 + iVar23) = *puVar5;
      ((uint *)((int)param_1 + iVar23))[1] = uVar17;
      puVar6 = puVar6 + (uint)bVar27 * 2;
      param_3 = param_3 + (uint)!bVar27 * 2;
    }
    bVar27 = param_3 == puVar10;
    if (bVar27) {
      puVar10 = puVar4 + 2;
    }
    if (bVar27 && puVar6 == puVar10) {
      return;
    }
    FUN_00fb7254();
  }
LAB_00610694:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x610694);
  (*pcVar1)();
}

