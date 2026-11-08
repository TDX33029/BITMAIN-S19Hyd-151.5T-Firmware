// FUN_010de4dc @ 010de4dc size=2560 calls_out=8 calls_in=2
// strings: 

void FUN_010de4dc(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  bool bVar29;
  uint *local_40;
  uint *local_34;
  uint local_2c;
  uint local_28;
  
  if (0x20 < param_2) {
    local_40 = param_6;
    do {
      uVar26 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_010dfa34(param_1,uVar26,param_3,param_4,1);
          return;
        }
        if (uVar26 < 0x40) {
          uVar23 = param_1[((uVar26 >> 3) * 8 - (uVar26 >> 3)) * 2];
          uVar3 = param_1[(uVar26 >> 3) * 8];
          uVar18 = *param_1;
          puVar4 = param_1 + (uVar26 >> 3) * 8;
          if (uVar18 < uVar3 != uVar3 < uVar23) {
            puVar4 = param_1 + ((uVar26 >> 3) * 8 - (uVar26 >> 3)) * 2;
          }
          if (uVar18 < uVar3 != uVar18 < uVar23) {
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
        if ((local_40 != (uint *)0x0) && (local_2c <= *local_40)) break;
        if (param_4 < uVar26) goto LAB_010deec0;
        puVar11 = param_3 + uVar26 * 2;
        param_2 = 0;
        puVar6 = param_1;
        uVar18 = uVar3;
        while( true ) {
          iVar25 = uVar18 - 3;
          if (uVar18 < 3) {
            iVar25 = 0;
          }
          if (puVar6 < param_1 + iVar25 * 2) {
            uVar23 = *puVar4;
            do {
              uVar9 = *puVar6;
              uVar15 = puVar6[1];
              uVar27 = puVar6[2];
              puVar5 = param_3;
              if (uVar23 <= uVar9) {
                puVar5 = puVar11 + -2;
              }
              uVar19 = puVar6[3];
              iVar24 = param_2 * 2;
              puVar5[iVar24] = uVar9;
              if (uVar23 > uVar9) {
                param_2 = param_2 + 1;
              }
              puVar10 = param_3;
              if (uVar23 <= uVar27) {
                puVar10 = puVar11 + -4;
              }
              (puVar5 + iVar24)[1] = uVar15;
              iVar24 = param_2 * 2;
              puVar10[iVar24] = uVar27;
              if (uVar23 > uVar27) {
                param_2 = param_2 + 1;
              }
              uVar27 = puVar6[4];
              (puVar10 + iVar24)[1] = uVar19;
              uVar9 = puVar6[6];
              puVar5 = param_3;
              if (uVar23 <= uVar27) {
                puVar5 = puVar11 + -6;
              }
              puVar11 = puVar11 + -8;
              iVar24 = param_2 * 2;
              puVar5[iVar24] = uVar27;
              if (uVar23 > uVar27) {
                param_2 = param_2 + 1;
              }
              (puVar5 + iVar24)[1] = puVar6[5];
              puVar5 = puVar11;
              if (uVar9 < uVar23) {
                puVar5 = param_3;
              }
              uVar27 = puVar6[7];
              iVar24 = param_2 * 2;
              puVar5[iVar24] = uVar9;
              if (uVar9 < uVar23) {
                param_2 = param_2 + 1;
              }
              puVar6 = puVar6 + 8;
              (puVar5 + iVar24)[1] = uVar27;
            } while (puVar6 < param_1 + iVar25 * 2);
          }
          if (puVar6 < param_1 + uVar18 * 2) {
            uVar23 = *puVar4;
            do {
              uVar27 = *puVar6;
              uVar9 = puVar6[1];
              puVar11 = puVar11 + -2;
              puVar6 = puVar6 + 2;
              puVar5 = puVar11;
              if (uVar27 < uVar23) {
                puVar5 = param_3;
              }
              iVar25 = param_2 * 2;
              puVar5[iVar25] = uVar27;
              if (uVar27 < uVar23) {
                param_2 = param_2 + 1;
              }
              (puVar5 + iVar25)[1] = uVar9;
            } while (puVar6 < param_1 + uVar18 * 2);
          }
          if (uVar18 == uVar26) break;
          puVar11 = puVar11 + -2;
          uVar18 = *puVar6;
          uVar23 = puVar6[1];
          puVar6 = puVar6 + 2;
          puVar11[param_2 * 2] = uVar18;
          (puVar11 + param_2 * 2)[1] = uVar23;
          uVar18 = uVar26;
        }
        FUN_016dd1aa(param_1,param_3,param_2 << 3);
        iVar25 = uVar26 - param_2;
        if (iVar25 != 0) {
          puVar11 = param_1 + param_2 * 2;
          puVar6 = param_3 + uVar26 * 2 + -2;
          iVar24 = iVar25;
          do {
            uVar18 = *puVar6;
            uVar23 = puVar6[1];
            puVar6 = puVar6 + -2;
            *puVar11 = uVar18;
            puVar11[1] = uVar23;
            puVar11 = puVar11 + 2;
            iVar24 = iVar24 + -1;
          } while (iVar24 != 0);
        }
        if (param_2 == 0) break;
        if (uVar26 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
        }
        FUN_010de4dc(param_1 + param_2 * 2,iVar25,param_3,param_4,param_5,&local_2c);
        uVar26 = param_2;
        if (param_2 < 0x21) goto LAB_010de4fc;
      }
      if (param_4 < uVar26) goto LAB_010deec0;
      puVar11 = param_3 + uVar26 * 2;
      uVar18 = 0;
      puVar6 = param_1;
      while( true ) {
        iVar25 = uVar3 - 3;
        if (uVar3 < 3) {
          iVar25 = 0;
        }
        if (puVar6 < param_1 + iVar25 * 2) {
          uVar23 = *puVar4;
          do {
            uVar27 = *puVar6;
            uVar15 = puVar6[1];
            uVar9 = puVar6[2];
            puVar5 = param_3;
            if (uVar23 < uVar27) {
              puVar5 = puVar11 + -2;
            }
            uVar19 = puVar6[3];
            iVar24 = uVar18 * 2;
            puVar5[iVar24] = uVar27;
            if (uVar23 >= uVar27) {
              uVar18 = uVar18 + 1;
            }
            (puVar5 + iVar24)[1] = uVar15;
            puVar5 = param_3;
            if (uVar23 < uVar9) {
              puVar5 = puVar11 + -4;
            }
            iVar24 = uVar18 * 2;
            puVar5[iVar24] = uVar9;
            if (uVar23 >= uVar9) {
              uVar18 = uVar18 + 1;
            }
            uVar9 = puVar6[4];
            (puVar5 + iVar24)[1] = uVar19;
            uVar27 = puVar6[6];
            puVar5 = param_3;
            if (uVar23 < uVar9) {
              puVar5 = puVar11 + -6;
            }
            puVar11 = puVar11 + -8;
            iVar24 = uVar18 * 2;
            puVar5[iVar24] = uVar9;
            if (uVar23 >= uVar9) {
              uVar18 = uVar18 + 1;
            }
            (puVar5 + iVar24)[1] = puVar6[5];
            puVar5 = puVar11;
            if (uVar27 <= uVar23) {
              puVar5 = param_3;
            }
            uVar9 = puVar6[7];
            iVar24 = uVar18 * 2;
            puVar5[iVar24] = uVar27;
            if (uVar27 <= uVar23) {
              uVar18 = uVar18 + 1;
            }
            puVar6 = puVar6 + 8;
            (puVar5 + iVar24)[1] = uVar9;
          } while (puVar6 < param_1 + iVar25 * 2);
        }
        if (puVar6 < param_1 + uVar3 * 2) {
          uVar23 = *puVar4;
          do {
            uVar27 = *puVar6;
            uVar9 = puVar6[1];
            puVar11 = puVar11 + -2;
            puVar6 = puVar6 + 2;
            puVar5 = puVar11;
            if (uVar27 <= uVar23) {
              puVar5 = param_3;
            }
            iVar25 = uVar18 * 2;
            puVar5[iVar25] = uVar27;
            if (uVar27 <= uVar23) {
              uVar18 = uVar18 + 1;
            }
            (puVar5 + iVar25)[1] = uVar9;
          } while (puVar6 < param_1 + uVar3 * 2);
        }
        if (uVar3 == uVar26) break;
        uVar3 = *puVar6;
        uVar23 = puVar6[1];
        puVar6 = puVar6 + 2;
        iVar25 = uVar18 * 2;
        param_3[iVar25] = uVar3;
        uVar18 = uVar18 + 1;
        puVar11 = puVar11 + -2;
        (param_3 + iVar25)[1] = uVar23;
        uVar3 = uVar26;
      }
      FUN_016dd1aa(param_1,param_3,uVar18 << 3);
      param_2 = uVar26 - uVar18;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar18 * 2;
      puVar6 = param_3 + uVar26 * 2 + -2;
      uVar3 = param_2;
      puVar4 = param_1;
      do {
        uVar27 = *puVar6;
        uVar3 = uVar3 - 1;
        uVar23 = puVar6[1];
        puVar6 = puVar6 + -2;
        *puVar4 = uVar27;
        puVar4[1] = uVar23;
        puVar4 = puVar4 + 2;
      } while (uVar3 != 0);
      if (uVar26 < uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar18,uVar26,uVar26,&DAT_018af348);
      }
      local_40 = (uint *)0x0;
    } while (0x20 < param_2);
  }
LAB_010de4fc:
  uVar26 = param_2 >> 1;
  if (uVar26 != 0) {
    puVar4 = param_3 + param_2 * 2;
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        uVar3 = param_1[1];
        *param_3 = *param_1;
        param_3[1] = uVar3;
        param_3[uVar26 * 2] = param_1[uVar26 * 2];
        (param_3 + uVar26 * 2)[1] = (param_1 + uVar26 * 2)[1];
        uVar3 = 1;
      }
      else {
        uVar3 = 2;
        uVar18 = 3;
        if (param_1[6] < param_1[4]) {
          uVar3 = 3;
          uVar18 = 2;
        }
        uVar23 = (uint)(*param_1 <= param_1[2]);
        puVar6 = param_1 + uVar23 * 2;
        uVar15 = *puVar6;
        puVar10 = param_1 + uVar18 * 2;
        uVar9 = *puVar10;
        uVar27 = (uint)(*param_1 > param_1[2]);
        puVar5 = param_1 + uVar27 * 2;
        uVar19 = *puVar5;
        puVar11 = puVar10;
        if (uVar9 < uVar15) {
          puVar11 = puVar6;
        }
        puVar7 = param_1 + uVar3 * 2;
        uVar21 = *puVar7;
        uVar12 = uVar23;
        puVar16 = puVar6;
        if (uVar9 < uVar15) {
          uVar12 = uVar3;
          puVar16 = puVar7;
        }
        if (uVar19 <= uVar21) {
          puVar6 = puVar7;
          uVar23 = uVar3;
        }
        if (uVar9 < uVar15) {
          uVar23 = uVar18;
          puVar6 = puVar10;
        }
        if (uVar19 <= uVar21) {
          uVar27 = uVar12;
          puVar7 = puVar5;
        }
        uVar3 = puVar7[1];
        if (uVar19 > uVar21) {
          puVar16 = puVar5;
        }
        *param_3 = *puVar7;
        param_3[1] = uVar3;
        puVar5 = puVar16;
        if (param_1[uVar23 * 2] < param_1[uVar27 * 2]) {
          puVar5 = puVar6;
          puVar6 = puVar16;
        }
        uVar3 = puVar6[1];
        param_3[4] = *puVar6;
        uVar18 = *puVar5;
        uVar23 = puVar5[1];
        param_3[5] = uVar3;
        puVar6 = param_1 + uVar26 * 2;
        uVar3 = *puVar6;
        param_3[2] = uVar18;
        param_3[3] = uVar23;
        uVar27 = (uint)(uVar3 <= puVar6[2]);
        uVar23 = (uint)(uVar3 > puVar6[2]);
        uVar18 = 2;
        uVar3 = 3;
        puVar5 = puVar6 + uVar23 * 2;
        if (puVar6[6] < puVar6[4]) {
          uVar18 = 3;
          uVar3 = 2;
        }
        puVar7 = puVar6 + uVar18 * 2;
        puVar16 = puVar6 + uVar3 * 2;
        puVar10 = puVar6 + uVar27 * 2;
        puVar17 = puVar7;
        uVar9 = uVar18;
        if (*puVar7 < *puVar5) {
          puVar17 = puVar10;
          uVar9 = uVar27;
        }
        if (*puVar16 < *puVar10) {
          puVar22 = puVar7;
        }
        else {
          puVar22 = puVar10;
          uVar3 = uVar9;
          puVar10 = puVar16;
          puVar16 = puVar17;
          uVar18 = uVar27;
        }
        bVar28 = *puVar5 <= *puVar7;
        uVar3 = puVar6[uVar3 * 2];
        if (bVar28) {
          puVar7 = puVar5;
        }
        uVar27 = *puVar7;
        uVar9 = puVar7[1];
        if (!bVar28) {
          puVar22 = puVar5;
        }
        uVar15 = *puVar11;
        if (!bVar28) {
          uVar18 = uVar23;
        }
        uVar18 = puVar6[uVar18 * 2];
        param_3[7] = puVar11[1];
        param_3[6] = uVar15;
        puVar6 = param_3 + uVar26 * 2;
        *puVar6 = uVar27;
        if (uVar3 < uVar18) {
          puVar11 = puVar22;
          puVar22 = puVar16;
        }
        else {
          puVar11 = puVar16;
        }
        uVar23 = puVar22[1];
        puVar6[2] = *puVar22;
        uVar3 = *puVar11;
        puVar6[5] = puVar11[1];
        puVar6[4] = uVar3;
        uVar3 = *puVar10;
        uVar18 = puVar10[1];
        puVar6[3] = uVar23;
        puVar6[6] = uVar3;
        uVar3 = 4;
        puVar6[1] = uVar9;
        puVar6[7] = uVar18;
      }
    }
    else {
      FUN_00613d48(param_1,param_3,puVar4);
      FUN_00613d48(param_1 + uVar26 * 2,param_3 + uVar26 * 2,puVar4 + 0x10);
      uVar3 = 8;
    }
    if (uVar3 < uVar26) {
      iVar24 = uVar3 * -8 + 8;
      iVar25 = uVar3 << 3;
      uVar18 = uVar3;
      do {
        uVar23 = param_1[uVar18 * 2];
        puVar6 = param_3 + uVar18 * 2;
        *puVar6 = uVar23;
        uVar27 = (param_1 + uVar18 * 2)[1];
        puVar6[1] = uVar27;
        if (uVar23 < puVar6[-2]) {
          iVar8 = iVar24;
          iVar13 = iVar25;
          do {
            uVar20 = ((undefined4 *)((int)param_3 - iVar8))[1];
            *(undefined4 *)((int)param_3 + iVar13) = *(undefined4 *)((int)param_3 - iVar8);
            ((undefined4 *)((int)param_3 + iVar13))[1] = uVar20;
            if (iVar13 == 8) {
              puVar6 = param_3;
              goto LAB_010dec20;
            }
            iVar8 = iVar8 + 8;
            iVar14 = iVar13 + -8;
            iVar2 = iVar13 + -0x10;
            iVar13 = iVar14;
          } while (uVar23 < *(uint *)((int)param_3 + iVar2));
          puVar6 = (uint *)((int)param_3 + iVar14);
LAB_010dec20:
          *puVar6 = uVar23;
          puVar6[1] = uVar27;
        }
        uVar18 = uVar18 + 1;
        iVar24 = iVar24 + -8;
        iVar25 = iVar25 + 8;
      } while (uVar18 != uVar26);
    }
    puVar6 = param_3 + uVar26 * 2;
    if (uVar3 < param_2 - uVar26) {
      iVar25 = 8;
      local_34 = param_3 + uVar26 * 2 + -2;
      uVar18 = uVar3;
      puVar11 = puVar6;
      do {
        uVar23 = param_1[uVar26 * 2 + uVar18 * 2];
        puVar5 = puVar6 + uVar18 * 2;
        *puVar5 = uVar23;
        uVar27 = (param_1 + uVar26 * 2 + uVar18 * 2)[1];
        puVar5[1] = uVar27;
        if (uVar23 < puVar5[-2]) {
          iVar24 = iVar25;
          puVar5 = local_34;
          puVar10 = puVar11;
          do {
            uVar9 = (puVar5 + uVar3 * 2)[1];
            puVar10[uVar3 * 2] = puVar5[uVar3 * 2];
            (puVar10 + uVar3 * 2)[1] = uVar9;
            if (uVar3 * 8 == iVar24) {
              puVar5 = puVar6;
              goto LAB_010dece4;
            }
            puVar5 = puVar5 + -2;
            iVar24 = iVar24 + 8;
            puVar7 = puVar10 + -2;
            puVar16 = puVar10 + uVar3 * 2 + -4;
            puVar10 = puVar7;
          } while (uVar23 < *puVar16);
          puVar5 = puVar7 + uVar3 * 2;
LAB_010dece4:
          *puVar5 = uVar23;
          puVar5[1] = uVar27;
        }
        uVar18 = uVar18 + 1;
        iVar25 = iVar25 + -8;
        puVar11 = puVar11 + 2;
        local_34 = local_34 + 2;
      } while (uVar18 != param_2 - uVar26);
    }
    puVar11 = puVar6 + -2;
    iVar25 = 0;
    puVar4 = puVar4 + -2;
    do {
      uVar3 = *puVar11;
      bVar28 = *param_3 <= *puVar6;
      puVar5 = param_3;
      if (!bVar28) {
        puVar5 = puVar6;
      }
      uVar23 = puVar5[1];
      *(uint *)((int)param_1 + iVar25) = *puVar5;
      uVar18 = *puVar4;
      ((uint *)((int)param_1 + iVar25))[1] = uVar23;
      bVar29 = uVar18 < uVar3;
      puVar5 = puVar4;
      if (bVar29) {
        puVar5 = puVar11;
      }
      param_3 = param_3 + (uint)bVar28 * 2;
      uVar3 = puVar5[1];
      iVar24 = 0;
      if (bVar29) {
        iVar24 = -1;
      }
      puVar11 = puVar11 + iVar24 * 2;
      iVar24 = 0;
      if (!bVar29) {
        iVar24 = -1;
      }
      puVar6 = puVar6 + (uint)!bVar28 * 2;
      puVar10 = (uint *)((int)param_1 + ((param_2 * 8 + -8) - iVar25));
      *puVar10 = *puVar5;
      puVar4 = puVar4 + iVar24 * 2;
      iVar25 = iVar25 + 8;
      puVar10[1] = uVar3;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
    puVar11 = puVar11 + 2;
    if ((param_2 & 1) != 0) {
      bVar28 = puVar11 <= param_3;
      puVar5 = puVar6;
      if (!bVar28) {
        puVar5 = param_3;
      }
      uVar26 = puVar5[1];
      *(uint *)((int)param_1 + iVar25) = *puVar5;
      ((uint *)((int)param_1 + iVar25))[1] = uVar26;
      puVar6 = puVar6 + (uint)bVar28 * 2;
      param_3 = param_3 + (uint)!bVar28 * 2;
    }
    bVar28 = param_3 != puVar11;
    if (!bVar28) {
      puVar11 = puVar4 + 2;
    }
    if (bVar28 || puVar6 != puVar11) {
      FUN_00fb7254();
LAB_010deec0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x10deec0);
      (*pcVar1)();
    }
  }
  return;
}

