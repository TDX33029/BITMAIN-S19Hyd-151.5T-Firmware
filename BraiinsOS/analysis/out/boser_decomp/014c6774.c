// FUN_014c6774 @ 014c6774 size=2796 calls_out=10 calls_in=2
// strings: 

void FUN_014c6774(int *param_1,uint param_2,int *param_3,uint param_4,int param_5,int *param_6)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint3 uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  bool bVar26;
  bool bVar27;
  int *local_70;
  int local_34 [2];
  int local_2c [2];
  
  if (0x20 < param_2) {
    local_70 = param_6;
    uVar22 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_014c55b8(param_1,uVar22,param_3,param_4,1);
          return;
        }
        if (uVar22 < 0x40) {
          iVar11 = param_1[(uVar22 >> 3) * 4];
          bVar2 = *(byte *)(iVar11 + 0x2b);
          bVar3 = *(byte *)(*param_1 + 0x2b);
          uVar21 = (uint)*(uint3 *)(iVar11 + 0x29);
          uVar14 = (uint)*(uint3 *)(*param_1 + 0x29);
          uVar24 = uVar21 & 0xff;
          uVar15 = uVar14 & 0xff;
          bVar26 = uVar15 < uVar24;
          if ((uVar15 == uVar24) &&
             (uVar7 = (uVar21 & 0xffff) >> 8, uVar16 = (uVar14 & 0xffff) >> 8,
             bVar26 = uVar16 < uVar7, uVar16 == uVar7)) {
            if (bVar3 == 0) {
              bVar26 = false;
              if (bVar2 != 0) {
                bVar26 = true;
              }
            }
            else {
              bVar26 = bVar3 < bVar2;
            }
          }
          iVar11 = param_1[(uVar22 >> 3) * 8 - (uVar22 >> 3)];
          bVar4 = *(byte *)(iVar11 + 0x2b);
          uVar16 = (uint)*(uint3 *)(iVar11 + 0x29);
          uVar7 = uVar16 & 0xff;
          bVar27 = uVar15 < uVar7;
          if ((uVar15 == uVar7) &&
             (uVar15 = (uVar16 & 0xffff) >> 8, uVar14 = (uVar14 & 0xffff) >> 8,
             bVar27 = uVar14 < uVar15, uVar14 == uVar15)) {
            if (bVar3 == 0) {
              bVar27 = false;
              if (bVar4 != 0) {
                bVar27 = true;
              }
            }
            else {
              bVar27 = bVar3 < bVar4;
            }
          }
          piVar8 = param_1;
          if (bVar26 == bVar27) {
            bVar27 = uVar24 < uVar7;
            if ((uVar24 == uVar7) &&
               (uVar15 = (uVar16 & 0xffff) >> 8, uVar14 = (uVar21 & 0xffff) >> 8,
               bVar27 = uVar14 < uVar15, uVar14 == uVar15)) {
              if (bVar2 == 0) {
                bVar27 = bVar4 != 0;
              }
              else {
                bVar27 = bVar2 < bVar4;
              }
            }
            piVar8 = param_1 + (uVar22 >> 3) * 4;
            if (bVar26 != bVar27) {
              piVar8 = param_1 + ((uVar22 >> 3) * 8 - (uVar22 >> 3));
            }
          }
        }
        else {
          piVar8 = (int *)FUN_014c1804(param_1);
        }
        uVar15 = (int)piVar8 - (int)param_1;
        local_34[0] = *piVar8;
        param_5 = param_5 + -1;
        if (local_70 == (int *)0x0) break;
        bVar2 = *(byte *)(*local_70 + 0x2b);
        uVar24 = (uint)*(uint3 *)(*local_70 + 0x29);
        uVar21 = *(uint3 *)(local_34[0] + 0x29) & 0xff;
        uVar14 = uVar24 & 0xff;
        bVar26 = uVar21 <= uVar14;
        if ((uVar14 != uVar21) ||
           (uVar14 = (*(uint3 *)(local_34[0] + 0x29) & 0xffff) >> 8, uVar21 = (uVar24 & 0xffff) >> 8
           , bVar26 = uVar14 <= uVar21, uVar21 != uVar14)) {
          if (bVar26) goto LAB_014c6d7c;
          break;
        }
        if (bVar2 == 0) {
          if (*(byte *)(local_34[0] + 0x2b) != 0) break;
        }
        else if (bVar2 < *(byte *)(local_34[0] + 0x2b)) break;
LAB_014c6d7c:
        if (param_4 < uVar22) goto LAB_014c7230;
        piVar10 = param_3 + uVar22;
        uVar21 = 0;
        piVar8 = param_1;
        uVar14 = uVar15 >> 2;
        while( true ) {
          iVar11 = uVar14 - 3;
          if (uVar14 < 3) {
            iVar11 = 0;
          }
          if (piVar8 < param_1 + iVar11) {
            bVar2 = *(byte *)(*(int *)((int)param_1 + uVar15) + 0x2b);
            uVar5 = *(ushort *)(*(int *)((int)param_1 + uVar15) + 0x29);
            uVar24 = (uint)(uVar5 >> 8);
            uVar7 = uVar5 & 0xff;
            do {
              iVar12 = *piVar8;
              uVar16 = *(uint3 *)(iVar12 + 0x29) & 0xff;
              uVar13 = (uint)(uVar7 < uVar16);
              if ((uVar7 == uVar16) &&
                 (uVar16 = (*(uint3 *)(iVar12 + 0x29) & 0xffff) >> 8,
                 uVar13 = (uint)(uVar24 < uVar16), uVar24 == uVar16)) {
                if (bVar2 == 0) {
                  uVar13 = (uint)(*(byte *)(iVar12 + 0x2b) != 0);
                }
                else {
                  uVar13 = (uint)(bVar2 < *(byte *)(iVar12 + 0x2b));
                }
              }
              iVar23 = piVar8[1];
              piVar9 = param_3;
              if (uVar13 != 0) {
                piVar9 = piVar10 + -1;
              }
              bVar3 = *(byte *)(iVar23 + 0x2b);
              uVar6 = *(uint3 *)(iVar23 + 0x29);
              piVar9[uVar21] = iVar12;
              uVar16 = uVar6 & 0xff;
              uVar20 = (uint)(uVar7 < uVar16);
              if ((uVar7 == uVar16) &&
                 (uVar16 = (uVar6 & 0xffff) >> 8, uVar20 = (uint)(uVar24 < uVar16), uVar24 == uVar16
                 )) {
                if (bVar2 == 0) {
                  uVar20 = (uint)(bVar3 != 0);
                }
                else {
                  uVar20 = (uint)(bVar2 < bVar3);
                }
              }
              iVar25 = uVar21 + (uVar13 ^ 1);
              iVar12 = piVar8[2];
              piVar9 = param_3;
              if (uVar20 != 0) {
                piVar9 = piVar10 + -2;
              }
              bVar3 = *(byte *)(iVar12 + 0x2b);
              uVar6 = *(uint3 *)(iVar12 + 0x29);
              piVar9[iVar25] = iVar23;
              uVar16 = uVar6 & 0xff;
              uVar21 = (uint)(uVar7 < uVar16);
              if ((uVar7 == uVar16) &&
                 (uVar16 = (uVar6 & 0xffff) >> 8, uVar21 = (uint)(uVar24 < uVar16), uVar24 == uVar16
                 )) {
                if (bVar2 == 0) {
                  uVar21 = (uint)(bVar3 != 0);
                }
                else {
                  uVar21 = (uint)(bVar2 < bVar3);
                }
              }
              iVar25 = iVar25 + (uVar20 ^ 1);
              iVar23 = piVar8[3];
              piVar9 = param_3;
              if (uVar21 != 0) {
                piVar9 = piVar10 + -3;
              }
              bVar3 = *(byte *)(iVar23 + 0x2b);
              uVar6 = *(uint3 *)(iVar23 + 0x29);
              piVar9[iVar25] = iVar12;
              uVar16 = uVar6 & 0xff;
              uVar13 = (uint)(uVar7 < uVar16);
              if ((uVar7 == uVar16) &&
                 (uVar16 = (uVar6 & 0xffff) >> 8, uVar13 = (uint)(uVar24 < uVar16), uVar24 == uVar16
                 )) {
                if (bVar2 == 0) {
                  uVar13 = (uint)(bVar3 != 0);
                }
                else {
                  uVar13 = (uint)(bVar2 < bVar3);
                }
              }
              piVar10 = piVar10 + -4;
              iVar25 = iVar25 + (uVar21 ^ 1);
              piVar8 = piVar8 + 4;
              piVar9 = param_3;
              if (uVar13 != 0) {
                piVar9 = piVar10;
              }
              piVar9[iVar25] = iVar23;
              uVar21 = iVar25 + (uVar13 ^ 1);
            } while (piVar8 < param_1 + iVar11);
          }
          if (piVar8 < param_1 + uVar14) {
            bVar2 = *(byte *)(*(int *)((int)param_1 + uVar15) + 0x2b);
            uVar5 = *(ushort *)(*(int *)((int)param_1 + uVar15) + 0x29);
            uVar24 = (uint)(uVar5 >> 8);
            uVar7 = uVar5 & 0xff;
            do {
              iVar11 = *piVar8;
              uVar16 = *(uint3 *)(iVar11 + 0x29) & 0xff;
              uVar13 = (uint)(uVar7 < uVar16);
              if ((uVar7 == uVar16) &&
                 (uVar16 = (*(uint3 *)(iVar11 + 0x29) & 0xffff) >> 8,
                 uVar13 = (uint)(uVar24 < uVar16), uVar24 == uVar16)) {
                if (bVar2 == 0) {
                  uVar13 = (uint)(*(byte *)(iVar11 + 0x2b) != 0);
                }
                else {
                  uVar13 = (uint)(bVar2 < *(byte *)(iVar11 + 0x2b));
                }
              }
              piVar10 = piVar10 + -1;
              piVar8 = piVar8 + 1;
              piVar9 = param_3;
              if (uVar13 != 0) {
                piVar9 = piVar10;
              }
              piVar9[uVar21] = iVar11;
              uVar21 = uVar21 + (uVar13 ^ 1);
            } while (piVar8 < param_1 + uVar14);
          }
          if (uVar14 == uVar22) break;
          piVar10 = piVar10 + -1;
          param_3[uVar21] = *piVar8;
          uVar21 = uVar21 + 1;
          piVar8 = piVar8 + 1;
          uVar14 = uVar22;
        }
        FUN_01bed4e2(param_1,param_3,uVar21 << 2);
        param_2 = uVar22 - uVar21;
        if (param_2 == 0) {
          return;
        }
        piVar8 = param_3 + (uVar22 - 1);
        piVar10 = param_1 + uVar21;
        uVar15 = param_2;
        do {
          uVar15 = uVar15 - 1;
          *piVar10 = *piVar8;
          piVar8 = piVar8 + -1;
          piVar10 = piVar10 + 1;
        } while (uVar15 != 0);
        if (uVar22 < uVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar21,uVar22,uVar22,&DAT_01d30598);
        }
        param_1 = param_1 + uVar21;
        local_70 = (int *)0x0;
        uVar22 = param_2;
        if (param_2 < 0x21) goto LAB_014c679c;
      }
      if (param_4 < uVar22) goto LAB_014c7230;
      piVar10 = param_3 + uVar22;
      param_2 = 0;
      piVar8 = param_1;
      uVar14 = uVar15 >> 2;
      iVar11 = local_34[0];
      while( true ) {
        iVar12 = uVar14 - 3;
        if (uVar14 < 3) {
          iVar12 = 0;
        }
        iVar23 = iVar11;
        if (piVar8 < param_1 + iVar12) {
          iVar23 = *(int *)((int)param_1 + uVar15);
          bVar2 = *(byte *)(iVar23 + 0x2b);
          bVar3 = *(byte *)(iVar11 + 0x2b);
          uVar21 = (uint)(*(ushort *)(iVar23 + 0x29) >> 8);
          uVar16 = *(ushort *)(iVar23 + 0x29) & 0xff;
          uVar7 = *(ushort *)(iVar11 + 0x29) & 0xff;
          uVar24 = (uint)(*(ushort *)(iVar11 + 0x29) >> 8);
          do {
            iVar11 = *piVar8;
            uVar20 = *(uint3 *)(iVar11 + 0x29) & 0xff;
            uVar13 = (uint)(uVar20 < uVar7);
            if (uVar20 == uVar7) {
              uVar20 = (*(uint3 *)(iVar11 + 0x29) & 0xffff) >> 8;
              uVar13 = (uint)(uVar20 < uVar24);
              if (uVar20 == uVar24) {
                uVar13 = (uint)(*(byte *)(iVar11 + 0x2b) < bVar3);
              }
            }
            iVar25 = piVar8[1];
            piVar9 = param_3;
            if (uVar13 == 0) {
              piVar9 = piVar10 + -1;
            }
            bVar4 = *(byte *)(iVar25 + 0x2b);
            uVar6 = *(uint3 *)(iVar25 + 0x29);
            piVar9[param_2] = iVar11;
            uVar17 = uVar6 & 0xff;
            uVar20 = (uint)(uVar17 < uVar16);
            if (uVar17 == uVar16) {
              uVar17 = (uVar6 & 0xffff) >> 8;
              uVar20 = (uint)(uVar17 < uVar21);
              if (uVar17 == uVar21) {
                uVar20 = (uint)(bVar4 < bVar2);
              }
            }
            iVar11 = piVar8[2];
            piVar9 = param_3;
            if (uVar20 == 0) {
              piVar9 = piVar10 + -2;
            }
            bVar4 = *(byte *)(iVar11 + 0x2b);
            uVar6 = *(uint3 *)(iVar11 + 0x29);
            piVar9[param_2 + uVar13] = iVar25;
            uVar18 = uVar6 & 0xff;
            uVar17 = (uint)(uVar18 < uVar16);
            if (uVar18 == uVar16) {
              uVar18 = (uVar6 & 0xffff) >> 8;
              uVar17 = (uint)(uVar18 < uVar21);
              if (uVar18 == uVar21) {
                uVar17 = (uint)(bVar4 < bVar2);
              }
            }
            iVar25 = param_2 + uVar13 + uVar20;
            iVar19 = piVar8[3];
            bVar4 = *(byte *)(iVar19 + 0x2b);
            uVar6 = *(uint3 *)(iVar19 + 0x29);
            piVar9 = param_3;
            if (uVar17 == 0) {
              piVar9 = piVar10 + -3;
            }
            piVar9[iVar25] = iVar11;
            uVar20 = uVar6 & 0xff;
            uVar13 = (uint)(uVar20 < uVar16);
            if (uVar20 == uVar16) {
              uVar20 = (uVar6 & 0xffff) >> 8;
              uVar13 = (uint)(uVar20 < uVar21);
              if (uVar20 == uVar21) {
                uVar13 = (uint)(bVar4 < bVar2);
              }
            }
            piVar10 = piVar10 + -4;
            iVar25 = iVar25 + uVar17;
            param_2 = iVar25 + uVar13;
            piVar8 = piVar8 + 4;
            piVar9 = piVar10;
            if (uVar13 != 0) {
              piVar9 = param_3;
            }
            piVar9[iVar25] = iVar19;
          } while (piVar8 < param_1 + iVar12);
        }
        if (piVar8 < param_1 + uVar14) {
          iVar23 = *(int *)((int)param_1 + uVar15);
          bVar2 = *(byte *)(iVar23 + 0x2b);
          uVar21 = (uint)(*(ushort *)(iVar23 + 0x29) >> 8);
          uVar24 = *(ushort *)(iVar23 + 0x29) & 0xff;
          do {
            iVar11 = *piVar8;
            uVar16 = *(uint3 *)(iVar11 + 0x29) & 0xff;
            uVar7 = (uint)(uVar16 < uVar24);
            if (uVar16 == uVar24) {
              uVar16 = (*(uint3 *)(iVar11 + 0x29) & 0xffff) >> 8;
              uVar7 = (uint)(uVar16 < uVar21);
              if (uVar16 == uVar21) {
                uVar7 = (uint)(*(byte *)(iVar11 + 0x2b) < bVar2);
              }
            }
            piVar10 = piVar10 + -1;
            piVar8 = piVar8 + 1;
            piVar9 = piVar10;
            if (uVar7 != 0) {
              piVar9 = param_3;
            }
            piVar9[param_2] = iVar11;
            param_2 = param_2 + uVar7;
          } while (piVar8 < param_1 + uVar14);
        }
        if (uVar14 == uVar22) break;
        piVar10 = piVar10 + -1;
        piVar10[param_2] = *piVar8;
        piVar8 = piVar8 + 1;
        uVar14 = uVar22;
        iVar11 = iVar23;
      }
      FUN_01bed4e2(param_1,param_3,param_2 << 2);
      iVar11 = uVar22 - param_2;
      if (iVar11 != 0) {
        piVar8 = param_3 + (uVar22 - 1);
        piVar10 = param_1 + param_2;
        iVar12 = iVar11;
        do {
          iVar12 = iVar12 + -1;
          *piVar10 = *piVar8;
          piVar8 = piVar8 + -1;
          piVar10 = piVar10 + 1;
        } while (iVar12 != 0);
      }
      if (param_2 == 0) goto LAB_014c6d7c;
      if (uVar22 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_014c6774(param_1 + param_2,iVar11,param_3,param_4,param_5,local_34);
      uVar22 = param_2;
    } while (0x20 < param_2);
  }
LAB_014c679c:
  if (1 < param_2) {
    if (param_4 < param_2 + 0x10) {
LAB_014c7230:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x14c7230);
      (*pcVar1)();
    }
    uVar22 = param_2 >> 1;
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        iVar11 = param_1[uVar22];
        uVar15 = 1;
        *param_3 = *param_1;
        param_3[uVar22] = iVar11;
      }
      else {
        FUN_014c1acc(param_1,param_3);
        FUN_014c1acc(param_1 + uVar22,param_3 + uVar22);
        uVar15 = 4;
      }
    }
    else {
      FUN_014c1dbc(param_1,param_3,param_3 + param_2);
      FUN_014c1dbc(param_1 + uVar22,param_3 + uVar22,param_3 + param_2 + 8);
      uVar15 = 8;
    }
    local_2c[0] = 0;
    iVar11 = 0;
    local_2c[1] = uVar22;
    do {
      iVar12 = local_2c[iVar11];
      uVar14 = uVar22;
      if (iVar12 != 0) {
        uVar14 = param_2 - uVar22;
      }
      if (uVar15 < uVar14) {
        iVar23 = uVar14 - uVar15;
        piVar8 = param_1 + uVar15 + iVar12;
        piVar10 = param_3 + uVar15 + iVar12;
        do {
          *piVar10 = *piVar8;
          FUN_014c19b0(param_3 + iVar12,piVar10);
          iVar23 = iVar23 + -1;
          piVar8 = piVar8 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar23 != 0);
      }
      bVar26 = iVar11 == 0;
      iVar11 = 1;
    } while (bVar26);
    FUN_014c1df4(param_3,param_2,param_1);
  }
  return;
}

