// FUN_0117320c @ 0117320c size=3016 calls_out=5 calls_in=0
// strings: 

bool FUN_0117320c(int *param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 *puVar26;
  uint uVar27;
  int iVar28;
  undefined4 *puVar29;
  uint uVar30;
  uint *puVar31;
  int iVar32;
  uint uVar33;
  uint *puVar34;
  int iVar35;
  uint uVar36;
  bool bVar37;
  int iVar38;
  uint uVar39;
  undefined8 uVar40;
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
  
  bVar23 = true;
  if (*param_2 == '\x05') {
    iVar32 = param_1[0xf];
    local_6c[2] = *(uint *)(param_2 + 4);
    local_60 = *(undefined4 *)(param_2 + 8);
    local_4c = *(undefined4 *)(param_2 + 0xc);
    local_58 = 0;
    local_6c[1] = 0;
    if (local_6c[2] == 0) {
      local_4c = 0;
    }
    uVar33 = param_1[0x13];
    local_6c[0] = (uint)(local_6c[2] != 0);
    iVar20 = param_1[0x12];
    iVar24 = *param_1;
    uVar27 = param_1[1];
    iVar38 = iVar20 + uVar33 * 0x28;
    local_5c = local_6c[0];
    local_54 = local_6c[2];
    local_50 = local_60;
    if (param_1[0x10] == 0) {
      if (uVar33 == 0) {
        iVar32 = FUN_00f45584(local_6c);
        return iVar32 == 0;
      }
      do {
        uVar40 = FUN_00f45584(local_6c);
        uVar12 = (undefined4)((ulonglong)uVar40 >> 0x20);
        iVar32 = (int)uVar40;
        if (iVar32 == 0) {
          return true;
        }
        bVar37 = false;
        iVar24 = iVar20;
        do {
          cVar4 = FUN_0116bd94(iVar24,*(undefined4 *)(iVar32 + 4),*(undefined4 *)(iVar32 + 8));
          if (cVar4 != '\0') {
            iVar9 = *(int *)(iVar24 + 0x14);
            uVar27 = 1;
            if ((int)*(uint *)(iVar9 + 8) < 0) {
              uVar27 = *(uint *)(iVar9 + 8) ^ 0x80000000;
            }
            if (uVar27 == 0) {
              bVar37 = true;
              if (*(int *)(iVar9 + 0xc) != 0) {
                return false;
              }
            }
            else if (uVar27 == 1) {
              iVar5 = *(int *)(iVar9 + 0x10);
              puVar26 = *(undefined4 **)(iVar9 + 0xc);
              if (iVar5 == 1) {
                iVar9 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
                bVar37 = true;
                if (iVar9 == 0) {
                  return false;
                }
              }
              else {
                bVar37 = true;
                if (iVar5 != 0) {
                  puVar29 = puVar26 + iVar5 * 8;
                  do {
                    iVar9 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
                    if (iVar9 == 0) {
                      return false;
                    }
                    puVar26 = puVar26 + 8;
                  } while (puVar26 != puVar29);
                }
              }
            }
            else {
              puVar26 = *(undefined4 **)(iVar9 + 0x10);
              iVar9 = *(int *)(iVar9 + 0x14) << 5;
              while (iVar9 != 0) {
                iVar5 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
                iVar9 = iVar9 + -0x20;
                puVar26 = puVar26 + 8;
                if (iVar5 == 0) {
                  return false;
                }
              }
              bVar37 = true;
            }
          }
          iVar24 = iVar24 + 0x28;
        } while (iVar24 != iVar38);
        bVar23 = false;
      } while (bVar37);
    }
    else {
      iVar9 = param_1[0x10] << 5;
      if (param_1[3] != 0) {
        uVar13 = param_1[4];
        uVar14 = param_1[5];
        uVar15 = param_1[6];
        uVar16 = param_1[7];
        iVar17 = param_1[8];
        iVar18 = param_1[9];
        iVar19 = param_1[10];
        iVar5 = param_1[0xb];
LAB_01173318:
        do {
          uVar40 = FUN_00f45584(local_6c);
          uVar12 = (undefined4)((ulonglong)uVar40 >> 0x20);
          iVar35 = (int)uVar40;
          if (iVar35 == 0) {
            return true;
          }
          uVar25 = *(undefined4 *)(iVar35 + 4);
          iVar28 = *(int *)(iVar35 + 8);
          iVar7 = iVar9;
          iVar8 = iVar32;
          while ((*(int *)(iVar8 + 8) != iVar28 ||
                 (iVar6 = thunk_FUN_016dd50a(*(undefined4 *)(iVar8 + 4),uVar25,iVar28), iVar6 != 0))
                ) {
            iVar8 = iVar8 + 0x20;
            iVar7 = iVar7 + -0x20;
            if (iVar7 == 0) goto LAB_011733c0;
          }
          iVar7 = *(int *)(iVar8 + 0xc);
          uVar10 = 1;
          if ((int)*(uint *)(iVar7 + 8) < 0) {
            uVar10 = *(uint *)(iVar7 + 8) ^ 0x80000000;
          }
          if (uVar10 == 0) {
            if (*(int *)(iVar7 + 0xc) != 0) {
              return false;
            }
          }
          else if (uVar10 == 1) {
            puVar26 = *(undefined4 **)(iVar7 + 0xc);
            iVar7 = *(int *)(iVar7 + 0x10);
            if (iVar7 == 1) {
              iVar7 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
              if (iVar7 == 0) {
                return false;
              }
            }
            else if (iVar7 != 0) {
              puVar29 = puVar26 + iVar7 * 8;
              do {
                iVar7 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
                if (iVar7 == 0) {
                  return false;
                }
                puVar26 = puVar26 + 8;
              } while (puVar26 != puVar29);
            }
          }
          else {
            puVar26 = *(undefined4 **)(iVar7 + 0x10);
            iVar7 = *(int *)(iVar7 + 0x14) << 5;
            while (iVar7 != 0) {
              iVar8 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
              iVar7 = iVar7 + -0x20;
              puVar26 = puVar26 + 8;
              if (iVar8 == 0) {
                return false;
              }
            }
          }
          uVar25 = *(undefined4 *)(iVar35 + 4);
          iVar35 = *(int *)(iVar35 + 8);
          local_48 = iVar17;
          local_44 = iVar18;
          local_40 = iVar19;
          iStack_3c = iVar5;
          local_38 = uVar15;
          uStack_34 = uVar16;
          local_30 = uVar13;
          local_2c = uVar14;
          FUN_011df94c(&local_48,uVar25,iVar35);
          uVar10 = local_38 ^ 0xff;
          uVar36 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                   (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
          lVar2 = (ulonglong)uVar36 * 0xb36a80d2;
          uVar21 = (uint)lVar2;
          uVar11 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                   uVar21 >> 0x18) ^
                   uStack_34 * 0x2df45158 +
                   uVar10 * 0x2d7f954c + (int)((ulonglong)uVar10 * 0x2df45158 >> 0x20);
          uVar30 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                   uVar11 >> 0x18;
          uVar22 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 |
                   (local_2c >> 0x10 & 0xff) << 8 | local_2c >> 0x18;
          lVar3 = (ulonglong)~local_30 * (ulonglong)uVar30;
          uVar39 = (uint)lVar3;
          uVar21 = (uVar10 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8
                   | local_38 >> 0x18) * -0x4c957f2e +
                   uVar36 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
          uVar36 = (uVar21 * 0x1000000 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8
                   | uVar21 >> 0x18) ^ (uint)((ulonglong)uVar10 * 0x2df45158);
          uVar10 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
                   uVar36 >> 0x18) * ~local_30 +
                   uVar30 * ~local_2c + (int)((ulonglong)lVar3 >> 0x20);
          lVar2 = (ulonglong)uVar22 * (ulonglong)uVar36;
          uVar10 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8
                   | uVar10 >> 0x18) ^ (uint)lVar2;
          uVar11 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
                   uVar39 >> 0x18) ^
                   uVar11 * uVar22 +
                   uVar36 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                             (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                   (int)((ulonglong)lVar2 >> 0x20);
          uVar21 = uVar11;
          if ((uVar36 & 0x20) != 0) {
            uVar21 = uVar10;
            uVar10 = uVar11;
          }
          uVar21 = uVar10 << (uVar36 & 0x1f) | (uVar21 >> 1) >> (~uVar36 & 0x1f);
          uVar10 = uVar21 >> 0x19;
          local_c4 = 0;
LAB_01173658:
          uVar21 = uVar27 & uVar21;
          uVar11 = *(uint *)(iVar24 + uVar21);
          uVar36 = uVar11 ^ uVar10 * 0x1010101;
          uVar36 = ~uVar36 & 0x80808080 & uVar36 + 0xfefefeff;
LAB_01173680:
          if (uVar36 == 0) goto LAB_011736dc;
          uVar22 = uVar36 >> 8;
          uVar30 = uVar36 >> 0x10;
          uVar39 = uVar36 >> 0x18;
          uVar1 = uVar36 << 0x18;
          uVar36 = uVar36 - 1 & uVar36;
          uVar22 = uVar21 + ((uint)LZCOUNT(uVar1 | (uVar22 & 0xff) << 0x10 | (uVar30 & 0xff) << 8 |
                                           uVar39) >> 3) & uVar27;
          iVar7 = iVar24 + -0x14 + uVar22 * -0x14;
          if ((iVar35 != *(int *)(iVar7 + 8)) ||
             (iVar7 = thunk_FUN_016dd50a(uVar25,*(undefined4 *)(iVar7 + 4),iVar35), iVar7 != 0))
          goto LAB_01173680;
          iVar35 = iVar24 + uVar22 * -0x14;
          puVar34 = *(uint **)(iVar35 + -8);
          puVar31 = puVar34 + *(int *)(iVar35 + -4);
          while (puVar34 != puVar31) {
            uVar10 = *puVar34;
            if (uVar33 <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar10,uVar33,&DAT_018890e0);
            }
            puVar34 = puVar34 + 1;
            uVar21 = 1;
            iVar35 = *(int *)(iVar20 + uVar10 * 0x28 + 0x14);
            if ((int)*(uint *)(iVar35 + 8) < 0) {
              uVar21 = *(uint *)(iVar35 + 8) ^ 0x80000000;
            }
            if (uVar21 == 0) {
              if (*(int *)(iVar35 + 0xc) != 0) {
                return false;
              }
            }
            else if (uVar21 == 1) {
              iVar7 = *(int *)(iVar35 + 0x10);
              puVar26 = *(undefined4 **)(iVar35 + 0xc);
              if (iVar7 == 1) {
                iVar35 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
                if (iVar35 == 0) {
                  return false;
                }
              }
              else {
                puVar29 = puVar26 + iVar7 * 8;
                if (iVar7 != 0) {
                  do {
                    iVar35 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
                    if (iVar35 == 0) {
                      return false;
                    }
                    puVar26 = puVar26 + 8;
                  } while (puVar26 != puVar29);
                }
              }
            }
            else {
              puVar26 = *(undefined4 **)(iVar35 + 0x10);
              iVar35 = *(int *)(iVar35 + 0x14) << 5;
              while (iVar35 != 0) {
                iVar7 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
                iVar35 = iVar35 + -0x20;
                puVar26 = puVar26 + 8;
                if (iVar7 == 0) {
                  return false;
                }
              }
            }
          }
        } while( true );
      }
      if (uVar33 != 0) {
LAB_01173a0c:
        do {
          uVar40 = FUN_00f45584(local_6c);
          uVar12 = (undefined4)((ulonglong)uVar40 >> 0x20);
          iVar24 = (int)uVar40;
          if (iVar24 == 0) {
            return true;
          }
          uVar25 = *(undefined4 *)(iVar24 + 4);
          iVar18 = *(int *)(iVar24 + 8);
          iVar5 = iVar32;
          iVar17 = iVar9;
          do {
            if ((*(int *)(iVar5 + 8) == iVar18) &&
               (iVar19 = thunk_FUN_016dd50a(*(undefined4 *)(iVar5 + 4),uVar25,iVar18), iVar19 == 0))
            {
              iVar24 = *(int *)(iVar5 + 0xc);
              uVar27 = 1;
              if ((int)*(uint *)(iVar24 + 8) < 0) {
                uVar27 = *(uint *)(iVar24 + 8) ^ 0x80000000;
              }
              if (uVar27 == 0) {
                if (*(int *)(iVar24 + 0xc) != 0) {
                  return false;
                }
              }
              else if (uVar27 == 1) {
                puVar26 = *(undefined4 **)(iVar24 + 0xc);
                iVar24 = *(int *)(iVar24 + 0x10);
                if (iVar24 == 1) {
                  iVar24 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
                  if (iVar24 == 0) {
                    return false;
                  }
                }
                else if (iVar24 != 0) {
                  puVar29 = puVar26 + iVar24 * 8;
                  do {
                    iVar24 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
                    if (iVar24 == 0) {
                      return false;
                    }
                    puVar26 = puVar26 + 8;
                  } while (puVar26 != puVar29);
                }
              }
              else {
                puVar26 = *(undefined4 **)(iVar24 + 0x10);
                iVar24 = *(int *)(iVar24 + 0x14) << 5;
                while (iVar24 != 0) {
                  iVar5 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
                  iVar24 = iVar24 + -0x20;
                  puVar26 = puVar26 + 8;
                  if (iVar5 == 0) {
                    return false;
                  }
                }
              }
              goto LAB_01173a0c;
            }
            iVar5 = iVar5 + 0x20;
            iVar17 = iVar17 + -0x20;
          } while (iVar17 != 0);
          bVar23 = false;
          iVar5 = iVar20;
          do {
            iVar17 = iVar5;
            while( true ) {
              cVar4 = FUN_0116bd94(iVar17,*(undefined4 *)(iVar24 + 4),*(undefined4 *)(iVar24 + 8));
              iVar5 = iVar17 + 0x28;
              if (cVar4 != '\0') break;
              iVar17 = iVar5;
              if (iVar5 == iVar38) {
                if (!bVar23) {
                  return false;
                }
                goto LAB_01173a0c;
              }
            }
            iVar17 = *(int *)(iVar17 + 0x14);
            uVar27 = 1;
            if ((int)*(uint *)(iVar17 + 8) < 0) {
              uVar27 = *(uint *)(iVar17 + 8) ^ 0x80000000;
            }
            if (uVar27 == 0) {
              if (*(int *)(iVar17 + 0xc) != 0) {
                return false;
              }
            }
            else if (uVar27 == 1) {
              puVar26 = *(undefined4 **)(iVar17 + 0xc);
              iVar17 = *(int *)(iVar17 + 0x10);
              if (iVar17 == 1) {
                iVar17 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
                if (iVar17 == 0) {
                  return false;
                }
              }
              else if (iVar17 != 0) {
                puVar29 = puVar26 + iVar17 * 8;
                do {
                  iVar17 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
                  if (iVar17 == 0) {
                    return false;
                  }
                  puVar26 = puVar26 + 8;
                } while (puVar26 != puVar29);
              }
            }
            else {
              puVar26 = *(undefined4 **)(iVar17 + 0x10);
              iVar17 = *(int *)(iVar17 + 0x14) << 5;
              while (iVar17 != 0) {
                iVar18 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
                iVar17 = iVar17 + -0x20;
                puVar26 = puVar26 + 8;
                if (iVar18 == 0) {
                  return false;
                }
              }
            }
            bVar23 = true;
          } while (iVar5 != iVar38);
        } while( true );
      }
      do {
        while( true ) {
          uVar40 = FUN_00f45584(local_6c);
          uVar12 = (undefined4)((ulonglong)uVar40 >> 0x20);
          iVar20 = (int)uVar40;
          if (iVar20 == 0) {
            return true;
          }
          uVar25 = *(undefined4 *)(iVar20 + 4);
          iVar38 = *(int *)(iVar20 + 8);
          iVar20 = iVar32;
          iVar24 = iVar9;
          while ((*(int *)(iVar20 + 8) != iVar38 ||
                 (iVar5 = thunk_FUN_016dd50a(*(undefined4 *)(iVar20 + 4),uVar25,iVar38), iVar5 != 0)
                 )) {
            iVar20 = iVar20 + 0x20;
            iVar24 = iVar24 + -0x20;
            if (iVar24 == 0) {
              return false;
            }
          }
          iVar20 = *(int *)(iVar20 + 0xc);
          uVar27 = 1;
          if ((int)*(uint *)(iVar20 + 8) < 0) {
            uVar27 = *(uint *)(iVar20 + 8) ^ 0x80000000;
          }
          if (uVar27 == 0) break;
          if (uVar27 == 1) {
            puVar26 = *(undefined4 **)(iVar20 + 0xc);
            iVar20 = *(int *)(iVar20 + 0x10);
            if (iVar20 == 1) {
              iVar20 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
              if (iVar20 == 0) {
                return false;
              }
            }
            else if (iVar20 != 0) {
              puVar29 = puVar26 + iVar20 * 8;
              do {
                iVar20 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
                if (iVar20 == 0) {
                  return false;
                }
                puVar26 = puVar26 + 8;
              } while (puVar26 != puVar29);
            }
          }
          else {
            puVar26 = *(undefined4 **)(iVar20 + 0x10);
            iVar20 = *(int *)(iVar20 + 0x14) << 5;
            while (iVar20 != 0) {
              iVar24 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
              iVar20 = iVar20 + -0x20;
              puVar26 = puVar26 + 8;
              if (iVar24 == 0) {
                return false;
              }
            }
          }
        }
        bVar23 = false;
      } while (*(int *)(iVar20 + 0xc) == 0);
    }
  }
  return bVar23;
LAB_011736dc:
  if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) goto LAB_01173318;
  local_c4 = local_c4 + 4;
  uVar21 = uVar21 + local_c4;
  goto LAB_01173658;
LAB_011733c0:
  if (uVar33 == 0) {
    return false;
  }
  bVar23 = false;
  iVar7 = iVar20;
  do {
    iVar8 = iVar7;
    while( true ) {
      cVar4 = FUN_0116bd94(iVar8,*(undefined4 *)(iVar35 + 4),*(undefined4 *)(iVar35 + 8));
      iVar7 = iVar8 + 0x28;
      if (cVar4 != '\0') break;
      iVar8 = iVar7;
      if (iVar7 == iVar38) {
        if (!bVar23) {
          return false;
        }
        goto LAB_01173318;
      }
    }
    iVar8 = *(int *)(iVar8 + 0x14);
    uVar10 = 1;
    if ((int)*(uint *)(iVar8 + 8) < 0) {
      uVar10 = *(uint *)(iVar8 + 8) ^ 0x80000000;
    }
    if (uVar10 == 0) {
      if (*(int *)(iVar8 + 0xc) != 0) {
        return false;
      }
    }
    else if (uVar10 == 1) {
      puVar26 = *(undefined4 **)(iVar8 + 0xc);
      iVar8 = *(int *)(iVar8 + 0x10);
      if (iVar8 == 1) {
        iVar8 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
        if (iVar8 == 0) {
          return false;
        }
      }
      else if (iVar8 != 0) {
        puVar29 = puVar26 + iVar8 * 8;
        do {
          iVar8 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
          if (iVar8 == 0) {
            return false;
          }
          puVar26 = puVar26 + 8;
        } while (puVar26 != puVar29);
      }
    }
    else {
      puVar26 = *(undefined4 **)(iVar8 + 0x10);
      iVar8 = *(int *)(iVar8 + 0x14) << 5;
      while (iVar8 != 0) {
        iVar28 = (**(code **)(puVar26[1] + 0x10))(*puVar26,uVar12,param_3);
        iVar8 = iVar8 + -0x20;
        puVar26 = puVar26 + 8;
        if (iVar28 == 0) {
          return false;
        }
      }
    }
    bVar23 = true;
  } while (iVar7 != iVar38);
  goto LAB_01173318;
}

