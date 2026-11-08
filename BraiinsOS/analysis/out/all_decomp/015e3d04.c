// FUN_015e3d04 @ 015e3d04 size=2708 calls_out=8 calls_in=2
// strings: 

void FUN_015e3d04(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  bool bVar26;
  bool bVar27;
  uint *local_44;
  int local_38;
  uint *local_34;
  uint local_2c;
  uint local_28;
  
  if (0x20 < param_2) {
    local_44 = param_6;
    do {
      uVar21 = param_2;
      while( true ) {
        if (param_5 == 0) {
          FUN_015e37b0(param_1,uVar21,param_3,param_4,1);
          return;
        }
        if (uVar21 < 0x40) {
          uVar19 = param_1[((uVar21 >> 3) * 8 - (uVar21 >> 3)) * 2];
          uVar6 = param_1[(uVar21 >> 3) * 8];
          uVar13 = *param_1;
          puVar3 = param_1 + (uVar21 >> 3) * 8;
          if (uVar13 < uVar6 != uVar6 < uVar19) {
            puVar3 = param_1 + ((uVar21 >> 3) * 8 - (uVar21 >> 3)) * 2;
          }
          if (uVar13 < uVar6 != uVar13 < uVar19) {
            puVar3 = param_1;
          }
        }
        else {
          puVar3 = (uint *)FUN_015e4bcc(param_1);
        }
        local_28 = puVar3[1];
        param_5 = param_5 + -1;
        local_2c = *puVar3;
        uVar6 = (uint)((int)puVar3 - (int)param_1) >> 3;
        if ((local_44 != (uint *)0x0) && (local_2c <= *local_44)) break;
        if (param_4 < uVar21) goto LAB_015e477c;
        puVar10 = param_3 + uVar21 * 2;
        param_2 = 0;
        puVar5 = param_1;
        uVar13 = uVar6;
        while( true ) {
          iVar22 = uVar13 - 3;
          if (uVar13 < 3) {
            iVar22 = 0;
          }
          if (puVar5 < param_1 + iVar22 * 2) {
            uVar19 = *puVar3;
            do {
              uVar9 = *puVar5;
              uVar16 = puVar5[1];
              uVar24 = puVar5[2];
              puVar4 = param_3;
              if (uVar19 <= uVar9) {
                puVar4 = puVar10 + -2;
              }
              uVar23 = puVar5[3];
              iVar20 = param_2 * 2;
              puVar4[iVar20] = uVar9;
              if (uVar19 > uVar9) {
                param_2 = param_2 + 1;
              }
              puVar8 = param_3;
              if (uVar19 <= uVar24) {
                puVar8 = puVar10 + -4;
              }
              (puVar4 + iVar20)[1] = uVar16;
              iVar20 = param_2 * 2;
              puVar8[iVar20] = uVar24;
              if (uVar19 > uVar24) {
                param_2 = param_2 + 1;
              }
              uVar24 = puVar5[4];
              (puVar8 + iVar20)[1] = uVar23;
              uVar9 = puVar5[6];
              puVar4 = param_3;
              if (uVar19 <= uVar24) {
                puVar4 = puVar10 + -6;
              }
              puVar10 = puVar10 + -8;
              iVar20 = param_2 * 2;
              puVar4[iVar20] = uVar24;
              if (uVar19 > uVar24) {
                param_2 = param_2 + 1;
              }
              (puVar4 + iVar20)[1] = puVar5[5];
              puVar4 = puVar10;
              if (uVar9 < uVar19) {
                puVar4 = param_3;
              }
              uVar24 = puVar5[7];
              iVar20 = param_2 * 2;
              puVar4[iVar20] = uVar9;
              if (uVar9 < uVar19) {
                param_2 = param_2 + 1;
              }
              puVar5 = puVar5 + 8;
              (puVar4 + iVar20)[1] = uVar24;
            } while (puVar5 < param_1 + iVar22 * 2);
          }
          if (puVar5 < param_1 + uVar13 * 2) {
            uVar19 = *puVar3;
            do {
              uVar24 = *puVar5;
              uVar9 = puVar5[1];
              puVar10 = puVar10 + -2;
              puVar5 = puVar5 + 2;
              puVar4 = puVar10;
              if (uVar24 < uVar19) {
                puVar4 = param_3;
              }
              iVar22 = param_2 * 2;
              puVar4[iVar22] = uVar24;
              if (uVar24 < uVar19) {
                param_2 = param_2 + 1;
              }
              (puVar4 + iVar22)[1] = uVar9;
            } while (puVar5 < param_1 + uVar13 * 2);
          }
          if (uVar13 == uVar21) break;
          puVar10 = puVar10 + -2;
          uVar13 = *puVar5;
          uVar19 = puVar5[1];
          puVar5 = puVar5 + 2;
          puVar10[param_2 * 2] = uVar13;
          (puVar10 + param_2 * 2)[1] = uVar19;
          uVar13 = uVar21;
        }
        FUN_016dd1aa(param_1,param_3,param_2 << 3);
        iVar22 = uVar21 - param_2;
        if (iVar22 != 0) {
          puVar10 = param_1 + param_2 * 2;
          puVar5 = param_3 + uVar21 * 2 + -2;
          iVar20 = iVar22;
          do {
            uVar13 = *puVar5;
            uVar19 = puVar5[1];
            puVar5 = puVar5 + -2;
            *puVar10 = uVar13;
            puVar10[1] = uVar19;
            puVar10 = puVar10 + 2;
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
        }
        if (param_2 == 0) break;
        if (uVar21 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ab268);
        }
        FUN_015e3d04(param_1 + param_2 * 2,iVar22,param_3,param_4,param_5,&local_2c);
        uVar21 = param_2;
        if (param_2 < 0x21) goto LAB_015e41b4;
      }
      if (param_4 < uVar21) goto LAB_015e477c;
      puVar10 = param_3 + uVar21 * 2;
      uVar13 = 0;
      puVar5 = param_1;
      while( true ) {
        iVar22 = uVar6 - 3;
        if (uVar6 < 3) {
          iVar22 = 0;
        }
        if (puVar5 < param_1 + iVar22 * 2) {
          uVar19 = *puVar3;
          do {
            uVar24 = *puVar5;
            uVar16 = puVar5[1];
            uVar9 = puVar5[2];
            puVar4 = param_3;
            if (uVar19 < uVar24) {
              puVar4 = puVar10 + -2;
            }
            uVar23 = puVar5[3];
            iVar20 = uVar13 * 2;
            puVar4[iVar20] = uVar24;
            if (uVar19 >= uVar24) {
              uVar13 = uVar13 + 1;
            }
            (puVar4 + iVar20)[1] = uVar16;
            puVar4 = param_3;
            if (uVar19 < uVar9) {
              puVar4 = puVar10 + -4;
            }
            iVar20 = uVar13 * 2;
            puVar4[iVar20] = uVar9;
            if (uVar19 >= uVar9) {
              uVar13 = uVar13 + 1;
            }
            uVar9 = puVar5[4];
            (puVar4 + iVar20)[1] = uVar23;
            uVar24 = puVar5[6];
            puVar4 = param_3;
            if (uVar19 < uVar9) {
              puVar4 = puVar10 + -6;
            }
            puVar10 = puVar10 + -8;
            iVar20 = uVar13 * 2;
            puVar4[iVar20] = uVar9;
            if (uVar19 >= uVar9) {
              uVar13 = uVar13 + 1;
            }
            (puVar4 + iVar20)[1] = puVar5[5];
            puVar4 = puVar10;
            if (uVar24 <= uVar19) {
              puVar4 = param_3;
            }
            uVar9 = puVar5[7];
            iVar20 = uVar13 * 2;
            puVar4[iVar20] = uVar24;
            if (uVar24 <= uVar19) {
              uVar13 = uVar13 + 1;
            }
            puVar5 = puVar5 + 8;
            (puVar4 + iVar20)[1] = uVar9;
          } while (puVar5 < param_1 + iVar22 * 2);
        }
        if (puVar5 < param_1 + uVar6 * 2) {
          uVar19 = *puVar3;
          do {
            uVar24 = *puVar5;
            uVar9 = puVar5[1];
            puVar10 = puVar10 + -2;
            puVar5 = puVar5 + 2;
            puVar4 = puVar10;
            if (uVar24 <= uVar19) {
              puVar4 = param_3;
            }
            iVar22 = uVar13 * 2;
            puVar4[iVar22] = uVar24;
            if (uVar24 <= uVar19) {
              uVar13 = uVar13 + 1;
            }
            (puVar4 + iVar22)[1] = uVar9;
          } while (puVar5 < param_1 + uVar6 * 2);
        }
        if (uVar6 == uVar21) break;
        uVar6 = *puVar5;
        uVar19 = puVar5[1];
        puVar5 = puVar5 + 2;
        iVar22 = uVar13 * 2;
        param_3[iVar22] = uVar6;
        uVar13 = uVar13 + 1;
        puVar10 = puVar10 + -2;
        (param_3 + iVar22)[1] = uVar19;
        uVar6 = uVar21;
      }
      FUN_016dd1aa(param_1,param_3,uVar13 << 3);
      param_2 = uVar21 - uVar13;
      if (param_2 == 0) {
        return;
      }
      param_1 = param_1 + uVar13 * 2;
      puVar5 = param_3 + uVar21 * 2 + -2;
      uVar6 = param_2;
      puVar3 = param_1;
      do {
        uVar24 = *puVar5;
        uVar6 = uVar6 - 1;
        uVar19 = puVar5[1];
        puVar5 = puVar5 + -2;
        *puVar3 = uVar24;
        puVar3[1] = uVar19;
        puVar3 = puVar3 + 2;
      } while (uVar6 != 0);
      if (uVar21 < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar13,uVar21,uVar21,&DAT_018ab278);
      }
      local_44 = (uint *)0x0;
    } while (0x20 < param_2);
  }
LAB_015e41b4:
  uVar21 = param_2 >> 1;
  if (uVar21 != 0) {
    puVar3 = param_3 + param_2 * 2;
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        uVar6 = param_1[1];
        *param_3 = *param_1;
        param_3[1] = uVar6;
        param_3[uVar21 * 2] = param_1[uVar21 * 2];
        (param_3 + uVar21 * 2)[1] = (param_1 + uVar21 * 2)[1];
        uVar6 = 1;
      }
      else {
        uVar13 = 2;
        uVar6 = 3;
        if (param_1[6] < param_1[4]) {
          uVar6 = 2;
          uVar13 = 3;
        }
        uVar24 = (uint)(param_1[2] < *param_1);
        puVar25 = param_1 + uVar6 * 2;
        uVar19 = (uint)(param_1[2] >= *param_1);
        puVar8 = param_1 + uVar24 * 2;
        puVar17 = param_1 + uVar19 * 2;
        puVar10 = param_1 + uVar13 * 2;
        uVar9 = uVar19;
        puVar5 = puVar17;
        puVar4 = puVar25;
        if (*puVar25 < *puVar17) {
          uVar9 = uVar13;
          puVar5 = puVar10;
          puVar4 = puVar17;
        }
        puVar18 = puVar17;
        if (*puVar8 <= *puVar10) {
          puVar18 = puVar10;
          uVar19 = uVar13;
        }
        if (*puVar25 < *puVar17) {
          uVar19 = uVar6;
          puVar18 = puVar25;
        }
        if (*puVar10 < *puVar8) {
          puVar5 = puVar8;
        }
        else {
          puVar10 = puVar8;
          uVar24 = uVar9;
        }
        uVar6 = puVar10[1];
        *param_3 = *puVar10;
        param_3[1] = uVar6;
        puVar10 = puVar5;
        if (param_1[uVar19 * 2] < param_1[uVar24 * 2]) {
          puVar10 = puVar18;
          puVar18 = puVar5;
        }
        uVar6 = puVar18[1];
        param_3[4] = *puVar18;
        uVar13 = *puVar10;
        uVar19 = puVar10[1];
        param_3[5] = uVar6;
        puVar5 = param_1 + uVar21 * 2;
        uVar6 = *puVar5;
        param_3[2] = uVar13;
        param_3[3] = uVar19;
        uVar13 = 2;
        uVar24 = (uint)(uVar6 <= puVar5[2]);
        uVar19 = (uint)(uVar6 > puVar5[2]);
        uVar6 = 3;
        puVar10 = puVar5 + uVar19 * 2;
        uVar9 = *puVar10;
        if (puVar5[6] < puVar5[4]) {
          uVar6 = 2;
          uVar13 = 3;
        }
        puVar17 = puVar5 + uVar13 * 2;
        uVar23 = *puVar17;
        puVar8 = puVar5 + uVar6 * 2;
        uVar16 = uVar13;
        if (uVar23 < uVar9) {
          uVar16 = uVar24;
        }
        puVar25 = puVar5 + uVar24 * 2;
        puVar18 = puVar17;
        if (uVar23 < uVar9) {
          puVar18 = puVar25;
        }
        if (*puVar8 < *puVar25) {
          puVar15 = puVar17;
        }
        else {
          uVar6 = uVar16;
          uVar13 = uVar24;
          puVar15 = puVar25;
          puVar25 = puVar8;
          puVar8 = puVar18;
        }
        uVar6 = puVar5[uVar6 * 2];
        if (uVar9 <= uVar23) {
          puVar17 = puVar10;
        }
        else {
          puVar15 = puVar10;
        }
        uVar24 = puVar4[1];
        if (uVar9 > uVar23) {
          uVar13 = uVar19;
        }
        uVar19 = *puVar17;
        uVar9 = puVar17[1];
        uVar13 = puVar5[uVar13 * 2];
        param_3[6] = *puVar4;
        param_3[7] = uVar24;
        puVar5 = param_3 + uVar21 * 2;
        *puVar5 = uVar19;
        puVar5[1] = uVar9;
        if (uVar6 < uVar13) {
          puVar10 = puVar15;
          puVar15 = puVar8;
        }
        else {
          puVar10 = puVar8;
        }
        uVar6 = puVar15[1];
        puVar5[2] = *puVar15;
        puVar5[3] = uVar6;
        uVar6 = puVar10[1];
        puVar5[4] = *puVar10;
        puVar5[5] = uVar6;
        uVar13 = puVar25[1];
        puVar5[6] = *puVar25;
        uVar6 = 4;
        puVar5[7] = uVar13;
      }
    }
    else {
      FUN_015e47c0(param_1,param_3,puVar3);
      FUN_015e47c0(param_1 + uVar21 * 2,param_3 + uVar21 * 2,puVar3 + 0x10);
      uVar6 = 8;
    }
    if (uVar6 < uVar21) {
      iVar20 = uVar6 * -8 + 8;
      iVar22 = uVar6 << 3;
      uVar13 = uVar6;
      do {
        uVar19 = param_1[uVar13 * 2];
        puVar5 = param_3 + uVar13 * 2;
        *puVar5 = uVar19;
        uVar24 = (param_1 + uVar13 * 2)[1];
        puVar5[1] = uVar24;
        if (uVar19 < puVar5[-2]) {
          iVar7 = iVar20;
          iVar11 = iVar22;
          do {
            uVar14 = ((undefined4 *)((int)param_3 - iVar7))[1];
            *(undefined4 *)((int)param_3 + iVar11) = *(undefined4 *)((int)param_3 - iVar7);
            ((undefined4 *)((int)param_3 + iVar11))[1] = uVar14;
            if (iVar11 == 8) {
              puVar5 = param_3;
              goto LAB_015e44d0;
            }
            iVar7 = iVar7 + 8;
            iVar12 = iVar11 + -8;
            iVar2 = iVar11 + -0x10;
            iVar11 = iVar12;
          } while (uVar19 < *(uint *)((int)param_3 + iVar2));
          puVar5 = (uint *)((int)param_3 + iVar12);
LAB_015e44d0:
          *puVar5 = uVar19;
          puVar5[1] = uVar24;
        }
        uVar13 = uVar13 + 1;
        iVar20 = iVar20 + -8;
        iVar22 = iVar22 + 8;
      } while (uVar13 != uVar21);
    }
    puVar5 = param_3 + uVar21 * 2;
    if (uVar6 < param_2 - uVar21) {
      local_34 = param_3 + uVar21 * 2 + -2;
      local_38 = 8;
      uVar13 = uVar6;
      puVar10 = puVar5;
      do {
        uVar19 = param_1[uVar21 * 2 + uVar13 * 2];
        puVar4 = puVar5 + uVar13 * 2;
        *puVar4 = uVar19;
        uVar24 = (param_1 + uVar21 * 2 + uVar13 * 2)[1];
        puVar4[1] = uVar24;
        if (uVar19 < puVar4[-2]) {
          iVar22 = local_38;
          puVar4 = local_34;
          puVar8 = puVar10;
          do {
            uVar9 = (puVar4 + uVar6 * 2)[1];
            puVar8[uVar6 * 2] = puVar4[uVar6 * 2];
            (puVar8 + uVar6 * 2)[1] = uVar9;
            if (uVar6 * 8 == iVar22) {
              puVar4 = puVar5;
              goto LAB_015e45a0;
            }
            puVar4 = puVar4 + -2;
            iVar22 = iVar22 + 8;
            puVar25 = puVar8 + -2;
            puVar17 = puVar8 + uVar6 * 2 + -4;
            puVar8 = puVar25;
          } while (uVar19 < *puVar17);
          puVar4 = puVar25 + uVar6 * 2;
LAB_015e45a0:
          *puVar4 = uVar19;
          puVar4[1] = uVar24;
        }
        uVar13 = uVar13 + 1;
        puVar10 = puVar10 + 2;
        local_34 = local_34 + 2;
        local_38 = local_38 + -8;
      } while (uVar13 != param_2 - uVar21);
    }
    puVar10 = puVar5 + -2;
    iVar22 = 0;
    puVar3 = puVar3 + -2;
    do {
      uVar6 = *puVar10;
      bVar26 = *param_3 <= *puVar5;
      puVar4 = param_3;
      if (!bVar26) {
        puVar4 = puVar5;
      }
      uVar19 = puVar4[1];
      param_3 = param_3 + (uint)bVar26 * 2;
      *(uint *)((int)param_1 + iVar22) = *puVar4;
      uVar13 = *puVar3;
      ((uint *)((int)param_1 + iVar22))[1] = uVar19;
      bVar27 = uVar13 < uVar6;
      puVar5 = puVar5 + (uint)!bVar26 * 2;
      puVar4 = puVar3;
      if (bVar27) {
        puVar4 = puVar10;
      }
      uVar6 = puVar4[1];
      puVar8 = (uint *)((int)param_1 + ((param_2 * 8 + -8) - iVar22));
      *puVar8 = *puVar4;
      iVar22 = iVar22 + 8;
      puVar8[1] = uVar6;
      iVar20 = 0;
      if (bVar27) {
        iVar20 = -1;
      }
      puVar10 = puVar10 + iVar20 * 2;
      iVar20 = 0;
      if (!bVar27) {
        iVar20 = -1;
      }
      uVar21 = uVar21 - 1;
      puVar3 = puVar3 + iVar20 * 2;
    } while (uVar21 != 0);
    puVar10 = puVar10 + 2;
    if ((param_2 & 1) != 0) {
      bVar26 = puVar10 <= param_3;
      puVar4 = puVar5;
      if (!bVar26) {
        puVar4 = param_3;
      }
      uVar21 = puVar4[1];
      *(uint *)((int)param_1 + iVar22) = *puVar4;
      ((uint *)((int)param_1 + iVar22))[1] = uVar21;
      puVar5 = puVar5 + (uint)bVar26 * 2;
      param_3 = param_3 + (uint)!bVar26 * 2;
    }
    bVar26 = param_3 != puVar10;
    if (!bVar26) {
      puVar10 = puVar3 + 2;
    }
    if (bVar26 || puVar5 != puVar10) {
      FUN_00fb7254();
LAB_015e477c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15e477c);
      (*pcVar1)();
    }
  }
  return;
}

