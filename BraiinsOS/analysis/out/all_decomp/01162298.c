// FUN_01162298 @ 01162298 size=4084 calls_out=5 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_01162298(int *param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
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
  undefined4 *puVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint *puVar27;
  int iVar28;
  uint *puVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  bool bVar33;
  undefined4 uVar34;
  undefined4 *puVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  undefined8 uVar40;
  int local_c8;
  uint local_6c;
  undefined4 local_68;
  int local_64;
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
  
  uVar5 = 1;
  if (*param_2 == '\x05') {
    uVar36 = param_1[0x16];
    local_64 = *(int *)(param_2 + 4);
    local_60 = *(undefined4 *)(param_2 + 8);
    iVar24 = param_1[0x15];
    iVar38 = uVar36 * 100 + iVar24;
    local_4c = *(undefined4 *)(param_2 + 0xc);
    local_58 = 0;
    if (local_64 == 0) {
      local_4c = 0;
    }
    local_68 = 0;
    iVar28 = *param_1;
    uVar30 = param_1[1];
    iVar20 = param_1[0x12];
    local_6c = (uint)(local_64 != 0);
    local_5c = local_6c;
    local_54 = local_64;
    local_50 = local_60;
    if (param_1[0x13] != 0) {
      iVar37 = param_1[0x13] << 5;
      iVar9 = param_1[0xc];
      if (param_1[3] == 0) {
        if (uVar36 != 0) {
LAB_01162c44:
          do {
            uVar40 = FUN_00f45584(&local_6c);
            uVar5 = (undefined4)((ulonglong)uVar40 >> 0x20);
            iVar28 = (int)uVar40;
            if (iVar28 == 0) {
              return 1;
            }
            uVar34 = *(undefined4 *)(iVar28 + 4);
            iVar18 = *(int *)(iVar28 + 8);
            iVar6 = iVar20;
            iVar17 = iVar37;
            do {
              if ((*(int *)(iVar6 + 8) == iVar18) &&
                 (iVar19 = thunk_FUN_016dd50a(*(undefined4 *)(iVar6 + 4),uVar34,iVar18), iVar19 == 0
                 )) {
                iVar28 = *(int *)(iVar6 + 0xc);
                uVar36 = 1;
                if ((int)*(uint *)(iVar28 + 8) < 0) {
                  uVar36 = *(uint *)(iVar28 + 8) ^ 0x80000000;
                }
                if (uVar36 == 0) {
                  iVar28 = *(int *)(iVar28 + 0xc);
joined_r0x01162e98:
                  if (iVar28 != 0) {
                    return 0;
                  }
                }
                else if (uVar36 == 1) {
                  puVar35 = *(undefined4 **)(iVar28 + 0xc);
                  iVar28 = *(int *)(iVar28 + 0x10);
                  if (iVar28 == 1) {
LAB_01162e64:
                    iVar28 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
                    if (iVar28 == 0) {
                      return 0;
                    }
                  }
                  else if (iVar28 != 0) {
                    puVar23 = puVar35 + iVar28 * 8;
                    do {
                      iVar28 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
                      if (iVar28 == 0) {
                        return 0;
                      }
                      puVar35 = puVar35 + 8;
                    } while (puVar35 != puVar23);
                  }
                }
                else {
                  puVar35 = *(undefined4 **)(iVar28 + 0x10);
                  iVar28 = *(int *)(iVar28 + 0x14) << 5;
                  while (iVar28 != 0) {
                    iVar6 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
                    iVar28 = iVar28 + -0x20;
                    puVar35 = puVar35 + 8;
                    if (iVar6 == 0) {
                      return 0;
                    }
                  }
                }
                goto LAB_01162c44;
              }
              iVar6 = iVar6 + 0x20;
              iVar17 = iVar17 + -0x20;
            } while (iVar17 != 0);
            bVar33 = false;
            iVar6 = iVar24;
            do {
              iVar17 = iVar6;
              while( true ) {
                cVar4 = FUN_01164a60(iVar17,*(undefined4 *)(iVar28 + 4),*(undefined4 *)(iVar28 + 8))
                ;
                iVar6 = iVar17 + 100;
                if (cVar4 != '\0') break;
                iVar17 = iVar6;
                if (iVar6 == iVar38) {
                  if (bVar33) goto LAB_01162c44;
                  uVar36 = 1;
                  if ((int)*(uint *)(iVar9 + 8) < 0) {
                    uVar36 = *(uint *)(iVar9 + 8) ^ 0x80000000;
                  }
                  if (uVar36 == 0) {
                    iVar28 = *(int *)(iVar9 + 0xc);
                    goto joined_r0x01162e98;
                  }
                  if (uVar36 == 1) {
                    puVar35 = *(undefined4 **)(iVar9 + 0xc);
                    iVar28 = *(int *)(iVar9 + 0x10);
                    if (iVar28 == 1) goto LAB_01162e64;
                    if (iVar28 != 0) {
                      puVar23 = puVar35 + iVar28 * 8;
                      do {
                        iVar28 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
                        if (iVar28 == 0) {
                          return 0;
                        }
                        puVar35 = puVar35 + 8;
                      } while (puVar35 != puVar23);
                    }
                  }
                  else {
                    puVar35 = *(undefined4 **)(iVar9 + 0x10);
                    iVar28 = *(int *)(iVar9 + 0x14) << 5;
                    while (iVar28 != 0) {
                      iVar6 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
                      iVar28 = iVar28 + -0x20;
                      puVar35 = puVar35 + 8;
                      if (iVar6 == 0) {
                        return 0;
                      }
                    }
                  }
                  goto LAB_01162c44;
                }
              }
              iVar17 = *(int *)(iVar17 + 0x50);
              uVar36 = 1;
              if ((int)*(uint *)(iVar17 + 8) < 0) {
                uVar36 = *(uint *)(iVar17 + 8) ^ 0x80000000;
              }
              if (uVar36 == 0) {
                if (*(int *)(iVar17 + 0xc) != 0) {
                  return 0;
                }
              }
              else if (uVar36 == 1) {
                iVar18 = *(int *)(iVar17 + 0x10);
                puVar35 = *(undefined4 **)(iVar17 + 0xc);
                if (iVar18 == 1) {
                  iVar17 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
                  if (iVar17 == 0) {
                    return 0;
                  }
                }
                else if (iVar18 != 0) {
                  puVar23 = puVar35 + iVar18 * 8;
                  do {
                    iVar17 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
                    if (iVar17 == 0) {
                      return 0;
                    }
                    puVar35 = puVar35 + 8;
                  } while (puVar35 != puVar23);
                }
              }
              else {
                puVar35 = *(undefined4 **)(iVar17 + 0x10);
                iVar17 = *(int *)(iVar17 + 0x14) << 5;
                while (iVar17 != 0) {
                  iVar18 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
                  iVar17 = iVar17 + -0x20;
                  puVar35 = puVar35 + 8;
                  if (iVar18 == 0) {
                    return 0;
                  }
                }
              }
              bVar33 = true;
            } while (iVar6 != iVar38);
          } while( true );
        }
LAB_01163068:
        do {
          uVar40 = FUN_00f45584(&local_6c);
          uVar5 = (undefined4)((ulonglong)uVar40 >> 0x20);
          iVar24 = (int)uVar40;
          if (iVar24 == 0) {
            return 1;
          }
          uVar34 = *(undefined4 *)(iVar24 + 4);
          iVar28 = *(int *)(iVar24 + 8);
          iVar24 = iVar20;
          iVar38 = iVar37;
          do {
            if ((*(int *)(iVar24 + 8) == iVar28) &&
               (iVar6 = thunk_FUN_016dd50a(*(undefined4 *)(iVar24 + 4),uVar34,iVar28), iVar6 == 0))
            {
              iVar24 = *(int *)(iVar24 + 0xc);
              uVar36 = 1;
              if ((int)*(uint *)(iVar24 + 8) < 0) {
                uVar36 = *(uint *)(iVar24 + 8) ^ 0x80000000;
              }
              if (uVar36 == 0) {
                iVar24 = *(int *)(iVar24 + 0xc);
                goto joined_r0x011631dc;
              }
              if (uVar36 == 1) {
                puVar35 = *(undefined4 **)(iVar24 + 0xc);
                iVar24 = *(int *)(iVar24 + 0x10);
                if (iVar24 == 1) goto LAB_0116315c;
                if (iVar24 != 0) {
                  puVar23 = puVar35 + iVar24 * 8;
                  do {
                    iVar24 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
                    if (iVar24 == 0) {
                      return 0;
                    }
                    puVar35 = puVar35 + 8;
                  } while (puVar35 != puVar23);
                }
              }
              else {
                puVar35 = *(undefined4 **)(iVar24 + 0x10);
                iVar24 = *(int *)(iVar24 + 0x14) << 5;
                while (iVar24 != 0) {
                  iVar38 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
                  iVar24 = iVar24 + -0x20;
                  puVar35 = puVar35 + 8;
                  if (iVar38 == 0) {
                    return 0;
                  }
                }
              }
              goto LAB_01163068;
            }
            iVar24 = iVar24 + 0x20;
            iVar38 = iVar38 + -0x20;
          } while (iVar38 != 0);
          uVar36 = 1;
          if ((int)*(uint *)(iVar9 + 8) < 0) {
            uVar36 = *(uint *)(iVar9 + 8) ^ 0x80000000;
          }
          if (uVar36 == 0) {
            iVar24 = *(int *)(iVar9 + 0xc);
joined_r0x011631dc:
            if (iVar24 != 0) {
              return 0;
            }
          }
          else if (uVar36 == 1) {
            iVar24 = *(int *)(iVar9 + 0x10);
            puVar35 = *(undefined4 **)(iVar9 + 0xc);
            if (iVar24 == 1) {
LAB_0116315c:
              iVar24 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
              if (iVar24 == 0) {
                return 0;
              }
            }
            else {
              puVar23 = puVar35 + iVar24 * 8;
              if (iVar24 != 0) {
                do {
                  iVar24 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
                  if (iVar24 == 0) {
                    return 0;
                  }
                  puVar35 = puVar35 + 8;
                } while (puVar35 != puVar23);
              }
            }
          }
          else {
            puVar35 = *(undefined4 **)(iVar9 + 0x10);
            iVar24 = *(int *)(iVar9 + 0x14) << 5;
            while (iVar24 != 0) {
              iVar38 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
              iVar24 = iVar24 + -0x20;
              puVar35 = puVar35 + 8;
              if (iVar38 == 0) {
                return 0;
              }
            }
          }
        } while( true );
      }
      uVar13 = param_1[4];
      uVar14 = param_1[5];
      uVar15 = param_1[6];
      uVar16 = param_1[7];
      iVar17 = param_1[8];
      iVar18 = param_1[9];
      iVar19 = param_1[10];
      iVar6 = param_1[0xb];
LAB_011623ac:
      do {
        uVar40 = FUN_00f45584(&local_6c);
        uVar5 = (undefined4)((ulonglong)uVar40 >> 0x20);
        iVar31 = (int)uVar40;
        if (iVar31 == 0) {
          return 1;
        }
        uVar34 = *(undefined4 *)(iVar31 + 4);
        iVar25 = *(int *)(iVar31 + 8);
        iVar8 = iVar20;
        iVar11 = iVar37;
        while ((*(int *)(iVar8 + 8) != iVar25 ||
               (iVar7 = thunk_FUN_016dd50a(*(undefined4 *)(iVar8 + 4),uVar34,iVar25), iVar7 != 0)))
        {
          iVar8 = iVar8 + 0x20;
          iVar11 = iVar11 + -0x20;
          if (iVar11 == 0) goto LAB_0116245c;
        }
        iVar8 = *(int *)(iVar8 + 0xc);
        uVar10 = 1;
        if ((int)*(uint *)(iVar8 + 8) < 0) {
          uVar10 = *(uint *)(iVar8 + 8) ^ 0x80000000;
        }
        if (uVar10 == 0) {
          if (*(int *)(iVar8 + 0xc) != 0) {
            return 0;
          }
        }
        else if (uVar10 == 1) {
          iVar11 = *(int *)(iVar8 + 0x10);
          puVar35 = *(undefined4 **)(iVar8 + 0xc);
          if (iVar11 == 1) {
            iVar8 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
            if (iVar8 == 0) {
              return 0;
            }
          }
          else if (iVar11 != 0) {
            puVar23 = puVar35 + iVar11 * 8;
            do {
              iVar8 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
              if (iVar8 == 0) {
                return 0;
              }
              puVar35 = puVar35 + 8;
            } while (puVar35 != puVar23);
          }
        }
        else {
          puVar35 = *(undefined4 **)(iVar8 + 0x10);
          iVar8 = *(int *)(iVar8 + 0x14) << 5;
          while (iVar8 != 0) {
            iVar11 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
            iVar8 = iVar8 + -0x20;
            puVar35 = puVar35 + 8;
            if (iVar11 == 0) {
              return 0;
            }
          }
        }
        uVar34 = *(undefined4 *)(iVar31 + 4);
        iVar31 = *(int *)(iVar31 + 8);
        local_48 = iVar17;
        local_44 = iVar18;
        local_40 = iVar19;
        iStack_3c = iVar6;
        local_38 = uVar15;
        uStack_34 = uVar16;
        local_30 = uVar13;
        local_2c = uVar14;
        FUN_011df94c(&local_48,uVar34,iVar31);
        uVar10 = local_38 ^ 0xff;
        uVar32 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                 (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
        lVar2 = (ulonglong)uVar32 * 0xb36a80d2;
        uVar21 = (uint)lVar2;
        uVar12 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                 uVar21 >> 0x18) ^
                 uStack_34 * 0x2df45158 +
                 uVar10 * 0x2d7f954c + (int)((ulonglong)uVar10 * 0x2df45158 >> 0x20);
        uVar26 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                 uVar12 >> 0x18;
        uVar22 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8
                 | local_2c >> 0x18;
        lVar3 = (ulonglong)~local_30 * (ulonglong)uVar26;
        uVar39 = (uint)lVar3;
        uVar21 = (uVar10 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
                 local_38 >> 0x18) * -0x4c957f2e +
                 uVar32 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
        uVar32 = (uVar21 * 0x1000000 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                 uVar21 >> 0x18) ^ (uint)((ulonglong)uVar10 * 0x2df45158);
        uVar10 = (uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
                 uVar32 >> 0x18) * ~local_30 + uVar26 * ~local_2c + (int)((ulonglong)lVar3 >> 0x20);
        lVar2 = (ulonglong)uVar22 * (ulonglong)uVar32;
        uVar10 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                 uVar10 >> 0x18) ^ (uint)lVar2;
        uVar12 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
                 uVar39 >> 0x18) ^
                 uVar12 * uVar22 +
                 uVar32 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                           (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                 (int)((ulonglong)lVar2 >> 0x20);
        uVar21 = uVar12;
        if ((uVar32 & 0x20) != 0) {
          uVar21 = uVar10;
          uVar10 = uVar12;
        }
        uVar21 = uVar10 << (uVar32 & 0x1f) | (uVar21 >> 1) >> (~uVar32 & 0x1f);
        uVar10 = uVar21 >> 0x19;
        local_c8 = 0;
LAB_01162794:
        uVar21 = uVar30 & uVar21;
        uVar12 = *(uint *)(iVar28 + uVar21);
        uVar32 = uVar12 ^ uVar10 * 0x1010101;
        uVar32 = ~uVar32 & 0x80808080 & uVar32 + 0xfefefeff;
LAB_011627c0:
        if (uVar32 == 0) goto LAB_0116281c;
        uVar22 = uVar32 >> 8;
        uVar26 = uVar32 >> 0x10;
        uVar39 = uVar32 >> 0x18;
        uVar1 = uVar32 << 0x18;
        uVar32 = uVar32 - 1 & uVar32;
        uVar22 = uVar21 + ((uint)LZCOUNT(uVar1 | (uVar22 & 0xff) << 0x10 | (uVar26 & 0xff) << 8 |
                                         uVar39) >> 3) & uVar30;
        iVar8 = iVar28 + -0x14 + uVar22 * -0x14;
        if ((iVar31 != *(int *)(iVar8 + 8)) ||
           (iVar8 = thunk_FUN_016dd50a(uVar34,*(undefined4 *)(iVar8 + 4),iVar31), iVar8 != 0))
        goto LAB_011627c0;
        iVar31 = iVar28 + uVar22 * -0x14;
        puVar29 = *(uint **)(iVar31 + -8);
        puVar27 = puVar29 + *(int *)(iVar31 + -4);
        while (puVar29 != puVar27) {
          uVar10 = *puVar29;
          if (uVar36 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar10,uVar36,&DAT_018890a0);
          }
          uVar21 = 1;
          puVar29 = puVar29 + 1;
          iVar31 = *(int *)(uVar10 * 100 + iVar24 + 0x50);
          if ((int)*(uint *)(iVar31 + 8) < 0) {
            uVar21 = *(uint *)(iVar31 + 8) ^ 0x80000000;
          }
          if (uVar21 == 0) {
            if (*(int *)(iVar31 + 0xc) != 0) {
              return 0;
            }
          }
          else if (uVar21 == 1) {
            iVar8 = *(int *)(iVar31 + 0x10);
            puVar35 = *(undefined4 **)(iVar31 + 0xc);
            if (iVar8 == 1) {
              iVar31 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
              if (iVar31 == 0) {
                return 0;
              }
            }
            else {
              puVar23 = puVar35 + iVar8 * 8;
              if (iVar8 != 0) {
                do {
                  iVar31 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
                  if (iVar31 == 0) {
                    return 0;
                  }
                  puVar35 = puVar35 + 8;
                } while (puVar35 != puVar23);
              }
            }
          }
          else {
            puVar35 = *(undefined4 **)(iVar31 + 0x10);
            iVar31 = *(int *)(iVar31 + 0x14) << 5;
            while (iVar31 != 0) {
              iVar8 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
              iVar31 = iVar31 + -0x20;
              puVar35 = puVar35 + 8;
              if (iVar8 == 0) {
                return 0;
              }
            }
          }
        }
      } while( true );
    }
    iVar20 = param_1[0xc];
    if (uVar36 != 0) {
LAB_01162a1c:
      do {
        uVar40 = FUN_00f45584(&local_6c);
        uVar5 = (undefined4)((ulonglong)uVar40 >> 0x20);
        iVar28 = (int)uVar40;
        if (iVar28 == 0) {
          return 1;
        }
        bVar33 = false;
        iVar37 = iVar24;
        do {
          iVar9 = iVar37;
          while( true ) {
            cVar4 = FUN_01164a60(iVar9,*(undefined4 *)(iVar28 + 4),*(undefined4 *)(iVar28 + 8));
            iVar37 = iVar9 + 100;
            if (cVar4 != '\0') break;
            iVar9 = iVar37;
            if (iVar37 == iVar38) {
              if (!bVar33) {
                uVar36 = 1;
                if ((int)*(uint *)(iVar20 + 8) < 0) {
                  uVar36 = *(uint *)(iVar20 + 8) ^ 0x80000000;
                }
                if (uVar36 == 0) {
                  if (*(int *)(iVar20 + 0xc) != 0) {
                    return 0;
                  }
                }
                else if (uVar36 == 1) {
                  iVar28 = *(int *)(iVar20 + 0x10);
                  puVar35 = *(undefined4 **)(iVar20 + 0xc);
                  if (iVar28 == 1) {
                    iVar28 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
                    if (iVar28 == 0) {
                      return 0;
                    }
                  }
                  else if (iVar28 != 0) {
                    puVar23 = puVar35 + iVar28 * 8;
                    do {
                      iVar28 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
                      if (iVar28 == 0) {
                        return 0;
                      }
                      puVar35 = puVar35 + 8;
                    } while (puVar35 != puVar23);
                  }
                }
                else {
                  puVar35 = *(undefined4 **)(iVar20 + 0x10);
                  iVar28 = *(int *)(iVar20 + 0x14) << 5;
                  while (iVar28 != 0) {
                    iVar37 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
                    iVar28 = iVar28 + -0x20;
                    puVar35 = puVar35 + 8;
                    if (iVar37 == 0) {
                      return 0;
                    }
                  }
                }
              }
              goto LAB_01162a1c;
            }
          }
          iVar9 = *(int *)(iVar9 + 0x50);
          uVar36 = 1;
          if ((int)*(uint *)(iVar9 + 8) < 0) {
            uVar36 = *(uint *)(iVar9 + 8) ^ 0x80000000;
          }
          if (uVar36 == 0) {
            if (*(int *)(iVar9 + 0xc) != 0) {
              return 0;
            }
          }
          else if (uVar36 == 1) {
            iVar6 = *(int *)(iVar9 + 0x10);
            puVar35 = *(undefined4 **)(iVar9 + 0xc);
            if (iVar6 == 1) {
              iVar9 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
              if (iVar9 == 0) {
                return 0;
              }
            }
            else if (iVar6 != 0) {
              puVar23 = puVar35 + iVar6 * 8;
              do {
                iVar9 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
                if (iVar9 == 0) {
                  return 0;
                }
                puVar35 = puVar35 + 8;
              } while (puVar35 != puVar23);
            }
          }
          else {
            puVar35 = *(undefined4 **)(iVar9 + 0x10);
            iVar9 = *(int *)(iVar9 + 0x14) << 5;
            while (iVar9 != 0) {
              iVar6 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
              iVar9 = iVar9 + -0x20;
              puVar35 = puVar35 + 8;
              if (iVar6 == 0) {
                return 0;
              }
            }
          }
          bVar33 = true;
        } while (iVar37 != iVar38);
      } while( true );
    }
    do {
      while( true ) {
        uVar40 = FUN_00f45584(&local_6c);
        uVar5 = (undefined4)((ulonglong)uVar40 >> 0x20);
        if ((int)uVar40 == 0) {
          return 1;
        }
        uVar36 = 1;
        if ((int)*(uint *)(iVar20 + 8) < 0) {
          uVar36 = *(uint *)(iVar20 + 8) ^ 0x80000000;
        }
        if (uVar36 == 0) break;
        if (uVar36 == 1) {
          iVar24 = *(int *)(iVar20 + 0x10);
          puVar35 = *(undefined4 **)(iVar20 + 0xc);
          if (iVar24 == 1) {
            iVar24 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
            if (iVar24 == 0) {
              return 0;
            }
          }
          else {
            puVar23 = puVar35 + iVar24 * 8;
            if (iVar24 != 0) {
              do {
                iVar24 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
                if (iVar24 == 0) {
                  return 0;
                }
                puVar35 = puVar35 + 8;
              } while (puVar35 != puVar23);
            }
          }
        }
        else {
          puVar35 = *(undefined4 **)(iVar20 + 0x10);
          iVar24 = *(int *)(iVar20 + 0x14) << 5;
          while (iVar24 != 0) {
            iVar38 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
            iVar24 = iVar24 + -0x20;
            puVar35 = puVar35 + 8;
            if (iVar38 == 0) {
              return 0;
            }
          }
        }
      }
      uVar5 = 0;
    } while (*(int *)(iVar20 + 0xc) == 0);
  }
  return uVar5;
LAB_0116245c:
  if (uVar36 == 0) {
LAB_0116258c:
    uVar10 = 1;
    if ((int)*(uint *)(iVar9 + 8) < 0) {
      uVar10 = *(uint *)(iVar9 + 8) ^ 0x80000000;
    }
    if (uVar10 == 0) {
      if (*(int *)(iVar9 + 0xc) != 0) {
        return 0;
      }
    }
    else if (uVar10 == 1) {
      puVar35 = *(undefined4 **)(iVar9 + 0xc);
      iVar31 = *(int *)(iVar9 + 0x10);
      if (iVar31 == 1) {
        iVar31 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
        if (iVar31 == 0) {
          return 0;
        }
      }
      else if (iVar31 != 0) {
        puVar23 = puVar35 + iVar31 * 8;
        do {
          iVar31 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
          if (iVar31 == 0) {
            return 0;
          }
          puVar35 = puVar35 + 8;
        } while (puVar35 != puVar23);
      }
    }
    else {
      puVar35 = *(undefined4 **)(iVar9 + 0x10);
      iVar31 = *(int *)(iVar9 + 0x14) << 5;
      while (iVar31 != 0) {
        iVar8 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
        iVar31 = iVar31 + -0x20;
        puVar35 = puVar35 + 8;
        if (iVar8 == 0) {
          return 0;
        }
      }
    }
  }
  else {
    bVar33 = false;
    iVar8 = iVar24;
    do {
      iVar11 = iVar8;
      while( true ) {
        cVar4 = FUN_01164a60(iVar11,*(undefined4 *)(iVar31 + 4),*(undefined4 *)(iVar31 + 8));
        iVar8 = iVar11 + 100;
        if (cVar4 != '\0') break;
        iVar11 = iVar8;
        if (iVar8 == iVar38) {
          if (bVar33) goto LAB_011623ac;
          goto LAB_0116258c;
        }
      }
      iVar11 = *(int *)(iVar11 + 0x50);
      uVar10 = 1;
      if ((int)*(uint *)(iVar11 + 8) < 0) {
        uVar10 = *(uint *)(iVar11 + 8) ^ 0x80000000;
      }
      if (uVar10 == 0) {
        if (*(int *)(iVar11 + 0xc) != 0) {
          return 0;
        }
      }
      else if (uVar10 == 1) {
        iVar25 = *(int *)(iVar11 + 0x10);
        puVar35 = *(undefined4 **)(iVar11 + 0xc);
        if (iVar25 == 1) {
          iVar11 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
          if (iVar11 == 0) {
            return 0;
          }
        }
        else if (iVar25 != 0) {
          puVar23 = puVar35 + iVar25 * 8;
          do {
            iVar11 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
            if (iVar11 == 0) {
              return 0;
            }
            puVar35 = puVar35 + 8;
          } while (puVar35 != puVar23);
        }
      }
      else {
        puVar35 = *(undefined4 **)(iVar11 + 0x10);
        iVar11 = *(int *)(iVar11 + 0x14) << 5;
        while (iVar11 != 0) {
          iVar25 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar5,param_3);
          iVar11 = iVar11 + -0x20;
          puVar35 = puVar35 + 8;
          if (iVar25 == 0) {
            return 0;
          }
        }
      }
      bVar33 = true;
    } while (iVar8 != iVar38);
  }
  goto LAB_011623ac;
LAB_0116281c:
  if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) goto LAB_011623ac;
  local_c8 = local_c8 + 4;
  uVar21 = uVar21 + local_c8;
  goto LAB_01162794;
}

