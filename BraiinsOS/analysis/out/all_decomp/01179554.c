// FUN_01179554 @ 01179554 size=3080 calls_out=5 calls_in=0
// strings: 

bool FUN_01179554(int *param_1,char *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined4 *puVar22;
  int iVar23;
  uint uVar24;
  bool bVar25;
  uint uVar26;
  uint *puVar27;
  bool bVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  undefined4 uVar32;
  undefined4 *puVar33;
  uint uVar34;
  uint *puVar35;
  int iVar36;
  uint uVar37;
  undefined8 uVar38;
  int local_c4;
  uint local_6c [3];
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  
  bVar28 = true;
  if (*param_2 == '\x05') {
    uVar29 = param_1[0x13];
    local_6c[2] = *(uint *)(param_2 + 4);
    local_60 = *(undefined4 *)(param_2 + 8);
    iVar20 = param_1[0x12];
    iVar36 = uVar29 * 100 + iVar20;
    local_4c = *(undefined4 *)(param_2 + 0xc);
    if (local_6c[2] == 0) {
      local_4c = 0;
    }
    iVar18 = param_1[0xf];
    local_6c[0] = (uint)(local_6c[2] != 0);
    iVar21 = *param_1;
    uVar26 = param_1[1];
    local_58 = 0;
    local_6c[1] = 0;
    local_5c = local_6c[0];
    local_54 = local_6c[2];
    local_50 = local_60;
    if (param_1[0x10] == 0) {
      if (uVar29 == 0) {
        iVar20 = FUN_00f45584(local_6c);
        return iVar20 == 0;
      }
      do {
        uVar38 = FUN_00f45584(local_6c);
        uVar10 = (undefined4)((ulonglong)uVar38 >> 0x20);
        iVar18 = (int)uVar38;
        if (iVar18 == 0) {
          return true;
        }
        bVar25 = false;
        iVar21 = iVar20;
        do {
          cVar3 = FUN_01164a60(iVar21,*(undefined4 *)(iVar18 + 4),*(undefined4 *)(iVar18 + 8));
          if (cVar3 != '\0') {
            iVar7 = *(int *)(iVar21 + 0x50);
            uVar29 = 1;
            if ((int)*(uint *)(iVar7 + 8) < 0) {
              uVar29 = *(uint *)(iVar7 + 8) ^ 0x80000000;
            }
            if (uVar29 == 0) {
              bVar25 = true;
              if (*(int *)(iVar7 + 0xc) != 0) {
                return false;
              }
            }
            else if (uVar29 == 1) {
              iVar4 = *(int *)(iVar7 + 0x10);
              puVar33 = *(undefined4 **)(iVar7 + 0xc);
              if (iVar4 == 1) {
                iVar7 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
                bVar25 = true;
                if (iVar7 == 0) {
                  return false;
                }
              }
              else {
                bVar25 = true;
                if (iVar4 != 0) {
                  puVar22 = puVar33 + iVar4 * 8;
                  do {
                    iVar7 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
                    if (iVar7 == 0) {
                      return false;
                    }
                    puVar33 = puVar33 + 8;
                  } while (puVar33 != puVar22);
                }
              }
            }
            else {
              puVar33 = *(undefined4 **)(iVar7 + 0x10);
              iVar7 = *(int *)(iVar7 + 0x14) << 5;
              while (iVar7 != 0) {
                iVar4 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
                iVar7 = iVar7 + -0x20;
                puVar33 = puVar33 + 8;
                if (iVar4 == 0) {
                  return false;
                }
              }
              bVar25 = true;
            }
          }
          iVar21 = iVar21 + 100;
        } while (iVar21 != iVar36);
        bVar28 = false;
      } while (bVar25);
    }
    else {
      iVar7 = param_1[0x10] << 5;
      if (param_1[3] != 0) {
        uVar11 = param_1[4];
        uVar12 = param_1[5];
        uVar13 = param_1[6];
        uVar14 = param_1[7];
        iVar15 = param_1[8];
        iVar16 = param_1[9];
        iVar17 = param_1[10];
        iVar4 = param_1[0xb];
LAB_01179664:
        do {
          uVar38 = FUN_00f45584(local_6c);
          uVar10 = (undefined4)((ulonglong)uVar38 >> 0x20);
          iVar30 = (int)uVar38;
          if (iVar30 == 0) {
            return true;
          }
          uVar32 = *(undefined4 *)(iVar30 + 4);
          iVar23 = *(int *)(iVar30 + 8);
          iVar6 = iVar18;
          iVar9 = iVar7;
          while ((*(int *)(iVar6 + 8) != iVar23 ||
                 (iVar5 = thunk_FUN_016dd50a(*(undefined4 *)(iVar6 + 4),uVar32,iVar23), iVar5 != 0))
                ) {
            iVar6 = iVar6 + 0x20;
            iVar9 = iVar9 + -0x20;
            if (iVar9 == 0) goto LAB_01179718;
          }
          iVar6 = *(int *)(iVar6 + 0xc);
          uVar8 = 1;
          if ((int)*(uint *)(iVar6 + 8) < 0) {
            uVar8 = *(uint *)(iVar6 + 8) ^ 0x80000000;
          }
          if (uVar8 == 0) {
            if (*(int *)(iVar6 + 0xc) != 0) {
              return false;
            }
          }
          else if (uVar8 == 1) {
            iVar9 = *(int *)(iVar6 + 0x10);
            puVar33 = *(undefined4 **)(iVar6 + 0xc);
            if (iVar9 == 1) {
              iVar6 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
              if (iVar6 == 0) {
                return false;
              }
            }
            else if (iVar9 != 0) {
              puVar22 = puVar33 + iVar9 * 8;
              do {
                iVar6 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
                if (iVar6 == 0) {
                  return false;
                }
                puVar33 = puVar33 + 8;
              } while (puVar33 != puVar22);
            }
          }
          else {
            puVar33 = *(undefined4 **)(iVar6 + 0x10);
            iVar6 = *(int *)(iVar6 + 0x14) << 5;
            while (iVar6 != 0) {
              iVar9 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
              iVar6 = iVar6 + -0x20;
              puVar33 = puVar33 + 8;
              if (iVar9 == 0) {
                return false;
              }
            }
          }
          uVar32 = *(undefined4 *)(iVar30 + 4);
          iVar30 = *(int *)(iVar30 + 8);
          local_48 = iVar15;
          local_44 = iVar16;
          local_40 = iVar17;
          iStack_3c = iVar4;
          local_38 = uVar13;
          uStack_34 = uVar14;
          local_30 = uVar11;
          local_2c = uVar12;
          FUN_011df94c(&local_48,uVar32,iVar30);
          uVar8 = local_38 ^ 0xff;
          uVar31 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                   (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
          lVar1 = (ulonglong)uVar31 * 0xb36a80d2;
          uVar19 = (uint)lVar1;
          uVar34 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                   uVar19 >> 0x18) ^
                   uStack_34 * 0x2df45158 +
                   uVar8 * 0x2d7f954c + (int)((ulonglong)uVar8 * 0x2df45158 >> 0x20);
          uVar24 = uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
                   uVar34 >> 0x18;
          lVar2 = (ulonglong)~local_30 * (ulonglong)uVar24;
          uVar37 = (uint)lVar2;
          uVar19 = (uVar8 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8
                   | local_38 >> 0x18) * -0x4c957f2e +
                   uVar31 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
          uVar31 = (uVar19 * 0x1000000 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8
                   | uVar19 >> 0x18) ^ (uint)((ulonglong)uVar8 * 0x2df45158);
          uVar8 = (uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 | (uVar31 >> 0x10 & 0xff) << 8 |
                  uVar31 >> 0x18) * ~local_30 + uVar24 * ~local_2c + (int)((ulonglong)lVar2 >> 0x20)
          ;
          uVar19 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 |
                   (local_2c >> 0x10 & 0xff) << 8 | local_2c >> 0x18;
          lVar1 = (ulonglong)uVar19 * (ulonglong)uVar31;
          uVar8 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                  uVar8 >> 0x18) ^ (uint)lVar1;
          uVar24 = (uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
                   uVar37 >> 0x18) ^
                   uVar34 * uVar19 +
                   uVar31 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                             (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar19 = uVar24;
          if ((uVar31 & 0x20) != 0) {
            uVar19 = uVar8;
            uVar8 = uVar24;
          }
          uVar19 = uVar8 << (uVar31 & 0x1f) | (uVar19 >> 1) >> (~uVar31 & 0x1f);
          uVar8 = uVar19 >> 0x19;
          local_c4 = 0;
LAB_011799b0:
          uVar19 = uVar26 & uVar19;
          uVar24 = *(uint *)(iVar21 + uVar19);
          uVar31 = uVar24 ^ uVar8 * 0x1010101;
          uVar31 = ~uVar31 & 0x80808080 & uVar31 + 0xfefefeff;
LAB_011799dc:
          if (uVar31 == 0) goto LAB_01179a38;
          uVar34 = uVar19 + ((uint)LZCOUNT(uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 |
                                           (uVar31 >> 0x10 & 0xff) << 8 | uVar31 >> 0x18) >> 3) &
                   uVar26;
          uVar31 = uVar31 - 1 & uVar31;
          iVar6 = iVar21 + -0x14 + uVar34 * -0x14;
          if ((iVar30 != *(int *)(iVar6 + 8)) ||
             (iVar6 = thunk_FUN_016dd50a(uVar32,*(undefined4 *)(iVar6 + 4),iVar30), iVar6 != 0))
          goto LAB_011799dc;
          iVar30 = iVar21 + uVar34 * -0x14;
          puVar27 = *(uint **)(iVar30 + -8);
          puVar35 = puVar27 + *(int *)(iVar30 + -4);
          while (puVar27 != puVar35) {
            uVar8 = *puVar27;
            if (uVar29 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar8,uVar29,&DAT_018890e0);
            }
            uVar19 = 1;
            puVar27 = puVar27 + 1;
            iVar30 = *(int *)(uVar8 * 100 + iVar20 + 0x50);
            if ((int)*(uint *)(iVar30 + 8) < 0) {
              uVar19 = *(uint *)(iVar30 + 8) ^ 0x80000000;
            }
            if (uVar19 == 0) {
              if (*(int *)(iVar30 + 0xc) != 0) {
                return false;
              }
            }
            else if (uVar19 == 1) {
              iVar6 = *(int *)(iVar30 + 0x10);
              puVar33 = *(undefined4 **)(iVar30 + 0xc);
              if (iVar6 == 1) {
                iVar30 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
                if (iVar30 == 0) {
                  return false;
                }
              }
              else {
                puVar22 = puVar33 + iVar6 * 8;
                if (iVar6 != 0) {
                  do {
                    iVar30 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
                    if (iVar30 == 0) {
                      return false;
                    }
                    puVar33 = puVar33 + 8;
                  } while (puVar33 != puVar22);
                }
              }
            }
            else {
              puVar33 = *(undefined4 **)(iVar30 + 0x10);
              iVar30 = *(int *)(iVar30 + 0x14) << 5;
              while (iVar30 != 0) {
                iVar6 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
                iVar30 = iVar30 + -0x20;
                puVar33 = puVar33 + 8;
                if (iVar6 == 0) {
                  return false;
                }
              }
            }
          }
        } while( true );
      }
      if (uVar29 != 0) {
LAB_01179d7c:
        do {
          uVar38 = FUN_00f45584(local_6c);
          uVar10 = (undefined4)((ulonglong)uVar38 >> 0x20);
          iVar21 = (int)uVar38;
          if (iVar21 == 0) {
            return true;
          }
          uVar32 = *(undefined4 *)(iVar21 + 4);
          iVar16 = *(int *)(iVar21 + 8);
          iVar4 = iVar18;
          iVar15 = iVar7;
          do {
            if ((*(int *)(iVar4 + 8) == iVar16) &&
               (iVar17 = thunk_FUN_016dd50a(*(undefined4 *)(iVar4 + 4),uVar32,iVar16), iVar17 == 0))
            {
              iVar21 = *(int *)(iVar4 + 0xc);
              uVar29 = 1;
              if ((int)*(uint *)(iVar21 + 8) < 0) {
                uVar29 = *(uint *)(iVar21 + 8) ^ 0x80000000;
              }
              if (uVar29 == 0) {
                if (*(int *)(iVar21 + 0xc) != 0) {
                  return false;
                }
              }
              else if (uVar29 == 1) {
                puVar33 = *(undefined4 **)(iVar21 + 0xc);
                iVar21 = *(int *)(iVar21 + 0x10);
                if (iVar21 == 1) {
                  iVar21 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
                  if (iVar21 == 0) {
                    return false;
                  }
                }
                else if (iVar21 != 0) {
                  puVar22 = puVar33 + iVar21 * 8;
                  do {
                    iVar21 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
                    if (iVar21 == 0) {
                      return false;
                    }
                    puVar33 = puVar33 + 8;
                  } while (puVar33 != puVar22);
                }
              }
              else {
                puVar33 = *(undefined4 **)(iVar21 + 0x10);
                iVar21 = *(int *)(iVar21 + 0x14) << 5;
                while (iVar21 != 0) {
                  iVar4 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
                  iVar21 = iVar21 + -0x20;
                  puVar33 = puVar33 + 8;
                  if (iVar4 == 0) {
                    return false;
                  }
                }
              }
              goto LAB_01179d7c;
            }
            iVar4 = iVar4 + 0x20;
            iVar15 = iVar15 + -0x20;
          } while (iVar15 != 0);
          bVar28 = false;
          iVar4 = iVar20;
          do {
            iVar15 = iVar4;
            while( true ) {
              cVar3 = FUN_01164a60(iVar15,*(undefined4 *)(iVar21 + 4),*(undefined4 *)(iVar21 + 8));
              iVar4 = iVar15 + 100;
              if (cVar3 != '\0') break;
              iVar15 = iVar4;
              if (iVar4 == iVar36) {
                if (!bVar28) {
                  return false;
                }
                goto LAB_01179d7c;
              }
            }
            iVar15 = *(int *)(iVar15 + 0x50);
            uVar29 = 1;
            if ((int)*(uint *)(iVar15 + 8) < 0) {
              uVar29 = *(uint *)(iVar15 + 8) ^ 0x80000000;
            }
            if (uVar29 == 0) {
              if (*(int *)(iVar15 + 0xc) != 0) {
                return false;
              }
            }
            else if (uVar29 == 1) {
              iVar16 = *(int *)(iVar15 + 0x10);
              puVar33 = *(undefined4 **)(iVar15 + 0xc);
              if (iVar16 == 1) {
                iVar15 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
                if (iVar15 == 0) {
                  return false;
                }
              }
              else if (iVar16 != 0) {
                puVar22 = puVar33 + iVar16 * 8;
                do {
                  iVar15 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
                  if (iVar15 == 0) {
                    return false;
                  }
                  puVar33 = puVar33 + 8;
                } while (puVar33 != puVar22);
              }
            }
            else {
              puVar33 = *(undefined4 **)(iVar15 + 0x10);
              iVar15 = *(int *)(iVar15 + 0x14) << 5;
              while (iVar15 != 0) {
                iVar16 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
                iVar15 = iVar15 + -0x20;
                puVar33 = puVar33 + 8;
                if (iVar16 == 0) {
                  return false;
                }
              }
            }
            bVar28 = true;
          } while (iVar4 != iVar36);
        } while( true );
      }
      do {
        while( true ) {
          uVar38 = FUN_00f45584(local_6c);
          uVar10 = (undefined4)((ulonglong)uVar38 >> 0x20);
          iVar20 = (int)uVar38;
          if (iVar20 == 0) {
            return true;
          }
          uVar32 = *(undefined4 *)(iVar20 + 4);
          iVar21 = *(int *)(iVar20 + 8);
          iVar20 = iVar18;
          iVar36 = iVar7;
          while ((*(int *)(iVar20 + 8) != iVar21 ||
                 (iVar4 = thunk_FUN_016dd50a(*(undefined4 *)(iVar20 + 4),uVar32,iVar21), iVar4 != 0)
                 )) {
            iVar20 = iVar20 + 0x20;
            iVar36 = iVar36 + -0x20;
            if (iVar36 == 0) {
              return false;
            }
          }
          iVar20 = *(int *)(iVar20 + 0xc);
          uVar29 = 1;
          if ((int)*(uint *)(iVar20 + 8) < 0) {
            uVar29 = *(uint *)(iVar20 + 8) ^ 0x80000000;
          }
          if (uVar29 == 0) break;
          if (uVar29 == 1) {
            puVar33 = *(undefined4 **)(iVar20 + 0xc);
            iVar20 = *(int *)(iVar20 + 0x10);
            if (iVar20 == 1) {
              iVar20 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
              if (iVar20 == 0) {
                return false;
              }
            }
            else if (iVar20 != 0) {
              puVar22 = puVar33 + iVar20 * 8;
              do {
                iVar20 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
                if (iVar20 == 0) {
                  return false;
                }
                puVar33 = puVar33 + 8;
              } while (puVar33 != puVar22);
            }
          }
          else {
            puVar33 = *(undefined4 **)(iVar20 + 0x10);
            iVar20 = *(int *)(iVar20 + 0x14) << 5;
            while (iVar20 != 0) {
              iVar36 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
              iVar20 = iVar20 + -0x20;
              puVar33 = puVar33 + 8;
              if (iVar36 == 0) {
                return false;
              }
            }
          }
        }
        bVar28 = false;
      } while (*(int *)(iVar20 + 0xc) == 0);
    }
  }
  return bVar28;
LAB_01179a38:
  if ((uVar24 & 0x80808080 & uVar24 << 1) != 0) goto LAB_01179664;
  local_c4 = local_c4 + 4;
  uVar19 = uVar19 + local_c4;
  goto LAB_011799b0;
LAB_01179718:
  if (uVar29 == 0) {
    return false;
  }
  bVar28 = false;
  iVar6 = iVar20;
  do {
    iVar9 = iVar6;
    while( true ) {
      cVar3 = FUN_01164a60(iVar9,*(undefined4 *)(iVar30 + 4),*(undefined4 *)(iVar30 + 8));
      iVar6 = iVar9 + 100;
      if (cVar3 != '\0') break;
      iVar9 = iVar6;
      if (iVar6 == iVar36) {
        if (!bVar28) {
          return false;
        }
        goto LAB_01179664;
      }
    }
    iVar9 = *(int *)(iVar9 + 0x50);
    uVar8 = 1;
    if ((int)*(uint *)(iVar9 + 8) < 0) {
      uVar8 = *(uint *)(iVar9 + 8) ^ 0x80000000;
    }
    if (uVar8 == 0) {
      if (*(int *)(iVar9 + 0xc) != 0) {
        return false;
      }
    }
    else if (uVar8 == 1) {
      iVar23 = *(int *)(iVar9 + 0x10);
      puVar33 = *(undefined4 **)(iVar9 + 0xc);
      if (iVar23 == 1) {
        iVar9 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
        if (iVar9 == 0) {
          return false;
        }
      }
      else if (iVar23 != 0) {
        puVar22 = puVar33 + iVar23 * 8;
        do {
          iVar9 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
          if (iVar9 == 0) {
            return false;
          }
          puVar33 = puVar33 + 8;
        } while (puVar33 != puVar22);
      }
    }
    else {
      puVar33 = *(undefined4 **)(iVar9 + 0x10);
      iVar9 = *(int *)(iVar9 + 0x14) << 5;
      while (iVar9 != 0) {
        iVar23 = (**(code **)(puVar33[1] + 0x10))(*puVar33,uVar10,param_3);
        iVar9 = iVar9 + -0x20;
        puVar33 = puVar33 + 8;
        if (iVar23 == 0) {
          return false;
        }
      }
    }
    bVar28 = true;
  } while (iVar6 != iVar36);
  goto LAB_01179664;
}

