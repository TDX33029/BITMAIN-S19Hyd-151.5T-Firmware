// FUN_01169d90 @ 01169d90 size=4052 calls_out=5 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_01169d90(int *param_1,char *param_2,undefined4 param_3)

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
  int iVar10;
  uint uVar11;
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
  int iVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  uint uVar26;
  int iVar27;
  undefined4 *puVar28;
  uint uVar29;
  uint *puVar30;
  int iVar31;
  uint uVar32;
  uint *puVar33;
  int iVar34;
  uint uVar35;
  bool bVar36;
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
    iVar31 = param_1[0x12];
    local_64 = *(int *)(param_2 + 4);
    local_60 = *(undefined4 *)(param_2 + 8);
    local_4c = *(undefined4 *)(param_2 + 0xc);
    local_58 = 0;
    local_68 = 0;
    if (local_64 == 0) {
      local_4c = 0;
    }
    uVar32 = param_1[0x16];
    local_6c = (uint)(local_64 != 0);
    iVar20 = param_1[0x15];
    iVar23 = *param_1;
    uVar26 = param_1[1];
    iVar37 = iVar20 + uVar32 * 0x28;
    local_5c = local_6c;
    local_54 = local_64;
    local_50 = local_60;
    if (param_1[0x13] != 0) {
      iVar38 = param_1[0x13] << 5;
      iVar10 = param_1[0xc];
      if (param_1[3] == 0) {
        if (uVar32 != 0) {
LAB_0116a72c:
          do {
            uVar40 = FUN_00f45584(&local_6c);
            uVar5 = (undefined4)((ulonglong)uVar40 >> 0x20);
            iVar23 = (int)uVar40;
            if (iVar23 == 0) {
              return 1;
            }
            uVar24 = *(undefined4 *)(iVar23 + 4);
            iVar18 = *(int *)(iVar23 + 8);
            iVar6 = iVar31;
            iVar17 = iVar38;
            do {
              if ((*(int *)(iVar6 + 8) == iVar18) &&
                 (iVar19 = thunk_FUN_016dd50a(*(undefined4 *)(iVar6 + 4),uVar24,iVar18), iVar19 == 0
                 )) {
                iVar23 = *(int *)(iVar6 + 0xc);
                uVar26 = 1;
                if ((int)*(uint *)(iVar23 + 8) < 0) {
                  uVar26 = *(uint *)(iVar23 + 8) ^ 0x80000000;
                }
                if (uVar26 == 0) {
                  iVar23 = *(int *)(iVar23 + 0xc);
joined_r0x0116a974:
                  if (iVar23 != 0) {
                    return 0;
                  }
                }
                else if (uVar26 == 1) {
                  puVar25 = *(undefined4 **)(iVar23 + 0xc);
                  iVar23 = *(int *)(iVar23 + 0x10);
                  if (iVar23 == 1) {
LAB_0116a940:
                    iVar23 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
                    if (iVar23 == 0) {
                      return 0;
                    }
                  }
                  else if (iVar23 != 0) {
                    puVar28 = puVar25 + iVar23 * 8;
                    do {
                      iVar23 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
                      if (iVar23 == 0) {
                        return 0;
                      }
                      puVar25 = puVar25 + 8;
                    } while (puVar25 != puVar28);
                  }
                }
                else {
                  puVar25 = *(undefined4 **)(iVar23 + 0x10);
                  iVar23 = *(int *)(iVar23 + 0x14) << 5;
                  while (iVar23 != 0) {
                    iVar6 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
                    iVar23 = iVar23 + -0x20;
                    puVar25 = puVar25 + 8;
                    if (iVar6 == 0) {
                      return 0;
                    }
                  }
                }
                goto LAB_0116a72c;
              }
              iVar6 = iVar6 + 0x20;
              iVar17 = iVar17 + -0x20;
            } while (iVar17 != 0);
            bVar36 = false;
            iVar6 = iVar20;
            do {
              iVar17 = iVar6;
              while( true ) {
                cVar4 = FUN_0116bd94(iVar17,*(undefined4 *)(iVar23 + 4),*(undefined4 *)(iVar23 + 8))
                ;
                iVar6 = iVar17 + 0x28;
                if (cVar4 != '\0') break;
                iVar17 = iVar6;
                if (iVar6 == iVar37) {
                  if (bVar36) goto LAB_0116a72c;
                  uVar26 = 1;
                  if ((int)*(uint *)(iVar10 + 8) < 0) {
                    uVar26 = *(uint *)(iVar10 + 8) ^ 0x80000000;
                  }
                  if (uVar26 == 0) {
                    iVar23 = *(int *)(iVar10 + 0xc);
                    goto joined_r0x0116a974;
                  }
                  if (uVar26 == 1) {
                    puVar25 = *(undefined4 **)(iVar10 + 0xc);
                    iVar23 = *(int *)(iVar10 + 0x10);
                    if (iVar23 == 1) goto LAB_0116a940;
                    if (iVar23 != 0) {
                      puVar28 = puVar25 + iVar23 * 8;
                      do {
                        iVar23 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
                        if (iVar23 == 0) {
                          return 0;
                        }
                        puVar25 = puVar25 + 8;
                      } while (puVar25 != puVar28);
                    }
                  }
                  else {
                    puVar25 = *(undefined4 **)(iVar10 + 0x10);
                    iVar23 = *(int *)(iVar10 + 0x14) << 5;
                    while (iVar23 != 0) {
                      iVar6 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
                      iVar23 = iVar23 + -0x20;
                      puVar25 = puVar25 + 8;
                      if (iVar6 == 0) {
                        return 0;
                      }
                    }
                  }
                  goto LAB_0116a72c;
                }
              }
              iVar17 = *(int *)(iVar17 + 0x14);
              uVar26 = 1;
              if ((int)*(uint *)(iVar17 + 8) < 0) {
                uVar26 = *(uint *)(iVar17 + 8) ^ 0x80000000;
              }
              if (uVar26 == 0) {
                if (*(int *)(iVar17 + 0xc) != 0) {
                  return 0;
                }
              }
              else if (uVar26 == 1) {
                puVar25 = *(undefined4 **)(iVar17 + 0xc);
                iVar17 = *(int *)(iVar17 + 0x10);
                if (iVar17 == 1) {
                  iVar17 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
                  if (iVar17 == 0) {
                    return 0;
                  }
                }
                else if (iVar17 != 0) {
                  puVar28 = puVar25 + iVar17 * 8;
                  do {
                    iVar17 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
                    if (iVar17 == 0) {
                      return 0;
                    }
                    puVar25 = puVar25 + 8;
                  } while (puVar25 != puVar28);
                }
              }
              else {
                puVar25 = *(undefined4 **)(iVar17 + 0x10);
                iVar17 = *(int *)(iVar17 + 0x14) << 5;
                while (iVar17 != 0) {
                  iVar18 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
                  iVar17 = iVar17 + -0x20;
                  puVar25 = puVar25 + 8;
                  if (iVar18 == 0) {
                    return 0;
                  }
                }
              }
              bVar36 = true;
            } while (iVar6 != iVar37);
          } while( true );
        }
LAB_0116ab44:
        do {
          uVar40 = FUN_00f45584(&local_6c);
          uVar5 = (undefined4)((ulonglong)uVar40 >> 0x20);
          iVar20 = (int)uVar40;
          if (iVar20 == 0) {
            return 1;
          }
          uVar24 = *(undefined4 *)(iVar20 + 4);
          iVar37 = *(int *)(iVar20 + 8);
          iVar20 = iVar31;
          iVar23 = iVar38;
          do {
            if ((*(int *)(iVar20 + 8) == iVar37) &&
               (iVar6 = thunk_FUN_016dd50a(*(undefined4 *)(iVar20 + 4),uVar24,iVar37), iVar6 == 0))
            {
              iVar20 = *(int *)(iVar20 + 0xc);
              uVar26 = 1;
              if ((int)*(uint *)(iVar20 + 8) < 0) {
                uVar26 = *(uint *)(iVar20 + 8) ^ 0x80000000;
              }
              if (uVar26 == 0) {
                iVar20 = *(int *)(iVar20 + 0xc);
                goto joined_r0x0116acb8;
              }
              if (uVar26 == 1) {
                puVar25 = *(undefined4 **)(iVar20 + 0xc);
                iVar20 = *(int *)(iVar20 + 0x10);
                if (iVar20 == 1) goto LAB_0116ac38;
                if (iVar20 != 0) {
                  puVar28 = puVar25 + iVar20 * 8;
                  do {
                    iVar20 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
                    if (iVar20 == 0) {
                      return 0;
                    }
                    puVar25 = puVar25 + 8;
                  } while (puVar25 != puVar28);
                }
              }
              else {
                puVar25 = *(undefined4 **)(iVar20 + 0x10);
                iVar20 = *(int *)(iVar20 + 0x14) << 5;
                while (iVar20 != 0) {
                  iVar23 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
                  iVar20 = iVar20 + -0x20;
                  puVar25 = puVar25 + 8;
                  if (iVar23 == 0) {
                    return 0;
                  }
                }
              }
              goto LAB_0116ab44;
            }
            iVar20 = iVar20 + 0x20;
            iVar23 = iVar23 + -0x20;
          } while (iVar23 != 0);
          uVar26 = 1;
          if ((int)*(uint *)(iVar10 + 8) < 0) {
            uVar26 = *(uint *)(iVar10 + 8) ^ 0x80000000;
          }
          if (uVar26 == 0) {
            iVar20 = *(int *)(iVar10 + 0xc);
joined_r0x0116acb8:
            if (iVar20 != 0) {
              return 0;
            }
          }
          else if (uVar26 == 1) {
            iVar20 = *(int *)(iVar10 + 0x10);
            puVar25 = *(undefined4 **)(iVar10 + 0xc);
            if (iVar20 == 1) {
LAB_0116ac38:
              iVar20 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
              if (iVar20 == 0) {
                return 0;
              }
            }
            else {
              puVar28 = puVar25 + iVar20 * 8;
              if (iVar20 != 0) {
                do {
                  iVar20 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
                  if (iVar20 == 0) {
                    return 0;
                  }
                  puVar25 = puVar25 + 8;
                } while (puVar25 != puVar28);
              }
            }
          }
          else {
            puVar25 = *(undefined4 **)(iVar10 + 0x10);
            iVar20 = *(int *)(iVar10 + 0x14) << 5;
            while (iVar20 != 0) {
              iVar23 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
              iVar20 = iVar20 + -0x20;
              puVar25 = puVar25 + 8;
              if (iVar23 == 0) {
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
LAB_01169ea4:
      do {
        uVar40 = FUN_00f45584(&local_6c);
        uVar5 = (undefined4)((ulonglong)uVar40 >> 0x20);
        iVar34 = (int)uVar40;
        if (iVar34 == 0) {
          return 1;
        }
        uVar24 = *(undefined4 *)(iVar34 + 4);
        iVar27 = *(int *)(iVar34 + 8);
        iVar8 = iVar38;
        iVar9 = iVar31;
        while ((*(int *)(iVar9 + 8) != iVar27 ||
               (iVar7 = thunk_FUN_016dd50a(*(undefined4 *)(iVar9 + 4),uVar24,iVar27), iVar7 != 0)))
        {
          iVar9 = iVar9 + 0x20;
          iVar8 = iVar8 + -0x20;
          if (iVar8 == 0) goto LAB_01169f4c;
        }
        iVar8 = *(int *)(iVar9 + 0xc);
        uVar11 = 1;
        if ((int)*(uint *)(iVar8 + 8) < 0) {
          uVar11 = *(uint *)(iVar8 + 8) ^ 0x80000000;
        }
        if (uVar11 == 0) {
          if (*(int *)(iVar8 + 0xc) != 0) {
            return 0;
          }
        }
        else if (uVar11 == 1) {
          puVar25 = *(undefined4 **)(iVar8 + 0xc);
          iVar8 = *(int *)(iVar8 + 0x10);
          if (iVar8 == 1) {
            iVar8 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
            if (iVar8 == 0) {
              return 0;
            }
          }
          else if (iVar8 != 0) {
            puVar28 = puVar25 + iVar8 * 8;
            do {
              iVar8 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
              if (iVar8 == 0) {
                return 0;
              }
              puVar25 = puVar25 + 8;
            } while (puVar25 != puVar28);
          }
        }
        else {
          puVar25 = *(undefined4 **)(iVar8 + 0x10);
          iVar8 = *(int *)(iVar8 + 0x14) << 5;
          while (iVar8 != 0) {
            iVar9 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
            iVar8 = iVar8 + -0x20;
            puVar25 = puVar25 + 8;
            if (iVar9 == 0) {
              return 0;
            }
          }
        }
        uVar24 = *(undefined4 *)(iVar34 + 4);
        iVar34 = *(int *)(iVar34 + 8);
        local_48 = iVar17;
        local_44 = iVar18;
        local_40 = iVar19;
        iStack_3c = iVar6;
        local_38 = uVar15;
        uStack_34 = uVar16;
        local_30 = uVar13;
        local_2c = uVar14;
        FUN_011df94c(&local_48,uVar24,iVar34);
        uVar11 = local_38 ^ 0xff;
        uVar35 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                 (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
        lVar2 = (ulonglong)uVar35 * 0xb36a80d2;
        uVar21 = (uint)lVar2;
        uVar12 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                 uVar21 >> 0x18) ^
                 uStack_34 * 0x2df45158 +
                 uVar11 * 0x2d7f954c + (int)((ulonglong)uVar11 * 0x2df45158 >> 0x20);
        uVar29 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                 uVar12 >> 0x18;
        uVar22 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8
                 | local_2c >> 0x18;
        lVar3 = (ulonglong)~local_30 * (ulonglong)uVar29;
        uVar39 = (uint)lVar3;
        uVar21 = (uVar11 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
                 local_38 >> 0x18) * -0x4c957f2e +
                 uVar35 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
        uVar35 = (uVar21 * 0x1000000 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                 uVar21 >> 0x18) ^ (uint)((ulonglong)uVar11 * 0x2df45158);
        uVar11 = (uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
                 uVar35 >> 0x18) * ~local_30 + uVar29 * ~local_2c + (int)((ulonglong)lVar3 >> 0x20);
        lVar2 = (ulonglong)uVar22 * (ulonglong)uVar35;
        uVar11 = (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                 uVar11 >> 0x18) ^ (uint)lVar2;
        uVar12 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
                 uVar39 >> 0x18) ^
                 uVar12 * uVar22 +
                 uVar35 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                           (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                 (int)((ulonglong)lVar2 >> 0x20);
        uVar21 = uVar12;
        if ((uVar35 & 0x20) != 0) {
          uVar21 = uVar11;
          uVar11 = uVar12;
        }
        uVar21 = uVar11 << (uVar35 & 0x1f) | (uVar21 >> 1) >> (~uVar35 & 0x1f);
        uVar11 = uVar21 >> 0x19;
        local_c8 = 0;
LAB_0116a284:
        uVar21 = uVar26 & uVar21;
        uVar12 = *(uint *)(iVar23 + uVar21);
        uVar35 = uVar12 ^ uVar11 * 0x1010101;
        uVar35 = ~uVar35 & 0x80808080 & uVar35 + 0xfefefeff;
LAB_0116a2ac:
        if (uVar35 == 0) goto LAB_0116a308;
        uVar22 = uVar35 >> 8;
        uVar29 = uVar35 >> 0x10;
        uVar39 = uVar35 >> 0x18;
        uVar1 = uVar35 << 0x18;
        uVar35 = uVar35 - 1 & uVar35;
        uVar22 = uVar21 + ((uint)LZCOUNT(uVar1 | (uVar22 & 0xff) << 0x10 | (uVar29 & 0xff) << 8 |
                                         uVar39) >> 3) & uVar26;
        iVar8 = iVar23 + -0x14 + uVar22 * -0x14;
        if ((iVar34 != *(int *)(iVar8 + 8)) ||
           (iVar8 = thunk_FUN_016dd50a(uVar24,*(undefined4 *)(iVar8 + 4),iVar34), iVar8 != 0))
        goto LAB_0116a2ac;
        iVar34 = iVar23 + uVar22 * -0x14;
        puVar33 = *(uint **)(iVar34 + -8);
        puVar30 = puVar33 + *(int *)(iVar34 + -4);
        while (puVar33 != puVar30) {
          uVar11 = *puVar33;
          if (uVar32 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar11,uVar32,&DAT_018890a0);
          }
          puVar33 = puVar33 + 1;
          uVar21 = 1;
          iVar34 = *(int *)(iVar20 + uVar11 * 0x28 + 0x14);
          if ((int)*(uint *)(iVar34 + 8) < 0) {
            uVar21 = *(uint *)(iVar34 + 8) ^ 0x80000000;
          }
          if (uVar21 == 0) {
            if (*(int *)(iVar34 + 0xc) != 0) {
              return 0;
            }
          }
          else if (uVar21 == 1) {
            iVar8 = *(int *)(iVar34 + 0x10);
            puVar25 = *(undefined4 **)(iVar34 + 0xc);
            if (iVar8 == 1) {
              iVar34 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
              if (iVar34 == 0) {
                return 0;
              }
            }
            else {
              puVar28 = puVar25 + iVar8 * 8;
              if (iVar8 != 0) {
                do {
                  iVar34 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
                  if (iVar34 == 0) {
                    return 0;
                  }
                  puVar25 = puVar25 + 8;
                } while (puVar25 != puVar28);
              }
            }
          }
          else {
            puVar25 = *(undefined4 **)(iVar34 + 0x10);
            iVar34 = *(int *)(iVar34 + 0x14) << 5;
            while (iVar34 != 0) {
              iVar8 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
              iVar34 = iVar34 + -0x20;
              puVar25 = puVar25 + 8;
              if (iVar8 == 0) {
                return 0;
              }
            }
          }
        }
      } while( true );
    }
    iVar31 = param_1[0xc];
    if (uVar32 != 0) {
LAB_0116a50c:
      do {
        uVar40 = FUN_00f45584(&local_6c);
        uVar5 = (undefined4)((ulonglong)uVar40 >> 0x20);
        iVar23 = (int)uVar40;
        if (iVar23 == 0) {
          return 1;
        }
        bVar36 = false;
        iVar38 = iVar20;
        do {
          iVar10 = iVar38;
          while( true ) {
            cVar4 = FUN_0116bd94(iVar10,*(undefined4 *)(iVar23 + 4),*(undefined4 *)(iVar23 + 8));
            iVar38 = iVar10 + 0x28;
            if (cVar4 != '\0') break;
            iVar10 = iVar38;
            if (iVar38 == iVar37) {
              if (!bVar36) {
                uVar26 = 1;
                if ((int)*(uint *)(iVar31 + 8) < 0) {
                  uVar26 = *(uint *)(iVar31 + 8) ^ 0x80000000;
                }
                if (uVar26 == 0) {
                  if (*(int *)(iVar31 + 0xc) != 0) {
                    return 0;
                  }
                }
                else if (uVar26 == 1) {
                  puVar25 = *(undefined4 **)(iVar31 + 0xc);
                  iVar23 = *(int *)(iVar31 + 0x10);
                  if (iVar23 == 1) {
                    iVar23 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
                    if (iVar23 == 0) {
                      return 0;
                    }
                  }
                  else if (iVar23 != 0) {
                    puVar28 = puVar25 + iVar23 * 8;
                    do {
                      iVar23 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
                      if (iVar23 == 0) {
                        return 0;
                      }
                      puVar25 = puVar25 + 8;
                    } while (puVar25 != puVar28);
                  }
                }
                else {
                  puVar25 = *(undefined4 **)(iVar31 + 0x10);
                  iVar23 = *(int *)(iVar31 + 0x14) << 5;
                  while (iVar23 != 0) {
                    iVar38 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
                    iVar23 = iVar23 + -0x20;
                    puVar25 = puVar25 + 8;
                    if (iVar38 == 0) {
                      return 0;
                    }
                  }
                }
              }
              goto LAB_0116a50c;
            }
          }
          iVar10 = *(int *)(iVar10 + 0x14);
          uVar26 = 1;
          if ((int)*(uint *)(iVar10 + 8) < 0) {
            uVar26 = *(uint *)(iVar10 + 8) ^ 0x80000000;
          }
          if (uVar26 == 0) {
            if (*(int *)(iVar10 + 0xc) != 0) {
              return 0;
            }
          }
          else if (uVar26 == 1) {
            puVar25 = *(undefined4 **)(iVar10 + 0xc);
            iVar10 = *(int *)(iVar10 + 0x10);
            if (iVar10 == 1) {
              iVar10 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
              if (iVar10 == 0) {
                return 0;
              }
            }
            else if (iVar10 != 0) {
              puVar28 = puVar25 + iVar10 * 8;
              do {
                iVar10 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
                if (iVar10 == 0) {
                  return 0;
                }
                puVar25 = puVar25 + 8;
              } while (puVar25 != puVar28);
            }
          }
          else {
            puVar25 = *(undefined4 **)(iVar10 + 0x10);
            iVar10 = *(int *)(iVar10 + 0x14) << 5;
            while (iVar10 != 0) {
              iVar6 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
              iVar10 = iVar10 + -0x20;
              puVar25 = puVar25 + 8;
              if (iVar6 == 0) {
                return 0;
              }
            }
          }
          bVar36 = true;
        } while (iVar38 != iVar37);
      } while( true );
    }
    do {
      while( true ) {
        uVar40 = FUN_00f45584(&local_6c);
        uVar5 = (undefined4)((ulonglong)uVar40 >> 0x20);
        if ((int)uVar40 == 0) {
          return 1;
        }
        uVar26 = 1;
        if ((int)*(uint *)(iVar31 + 8) < 0) {
          uVar26 = *(uint *)(iVar31 + 8) ^ 0x80000000;
        }
        if (uVar26 == 0) break;
        if (uVar26 == 1) {
          iVar20 = *(int *)(iVar31 + 0x10);
          puVar25 = *(undefined4 **)(iVar31 + 0xc);
          if (iVar20 == 1) {
            iVar20 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
            if (iVar20 == 0) {
              return 0;
            }
          }
          else {
            puVar28 = puVar25 + iVar20 * 8;
            if (iVar20 != 0) {
              do {
                iVar20 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
                if (iVar20 == 0) {
                  return 0;
                }
                puVar25 = puVar25 + 8;
              } while (puVar25 != puVar28);
            }
          }
        }
        else {
          puVar25 = *(undefined4 **)(iVar31 + 0x10);
          iVar20 = *(int *)(iVar31 + 0x14) << 5;
          while (iVar20 != 0) {
            iVar23 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
            iVar20 = iVar20 + -0x20;
            puVar25 = puVar25 + 8;
            if (iVar23 == 0) {
              return 0;
            }
          }
        }
      }
      uVar5 = 0;
    } while (*(int *)(iVar31 + 0xc) == 0);
  }
  return uVar5;
LAB_01169f4c:
  if (uVar32 == 0) {
LAB_0116a080:
    uVar11 = 1;
    if ((int)*(uint *)(iVar10 + 8) < 0) {
      uVar11 = *(uint *)(iVar10 + 8) ^ 0x80000000;
    }
    if (uVar11 == 0) {
      if (*(int *)(iVar10 + 0xc) != 0) {
        return 0;
      }
    }
    else if (uVar11 == 1) {
      puVar25 = *(undefined4 **)(iVar10 + 0xc);
      iVar34 = *(int *)(iVar10 + 0x10);
      if (iVar34 == 1) {
        iVar34 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
        if (iVar34 == 0) {
          return 0;
        }
      }
      else if (iVar34 != 0) {
        puVar28 = puVar25 + iVar34 * 8;
        do {
          iVar34 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
          if (iVar34 == 0) {
            return 0;
          }
          puVar25 = puVar25 + 8;
        } while (puVar25 != puVar28);
      }
    }
    else {
      puVar25 = *(undefined4 **)(iVar10 + 0x10);
      iVar34 = *(int *)(iVar10 + 0x14) << 5;
      while (iVar34 != 0) {
        iVar8 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
        iVar34 = iVar34 + -0x20;
        puVar25 = puVar25 + 8;
        if (iVar8 == 0) {
          return 0;
        }
      }
    }
  }
  else {
    bVar36 = false;
    iVar8 = iVar20;
    do {
      iVar9 = iVar8;
      while( true ) {
        cVar4 = FUN_0116bd94(iVar9,*(undefined4 *)(iVar34 + 4),*(undefined4 *)(iVar34 + 8));
        iVar8 = iVar9 + 0x28;
        if (cVar4 != '\0') break;
        iVar9 = iVar8;
        if (iVar8 == iVar37) {
          if (bVar36) goto LAB_01169ea4;
          goto LAB_0116a080;
        }
      }
      iVar9 = *(int *)(iVar9 + 0x14);
      uVar11 = 1;
      if ((int)*(uint *)(iVar9 + 8) < 0) {
        uVar11 = *(uint *)(iVar9 + 8) ^ 0x80000000;
      }
      if (uVar11 == 0) {
        if (*(int *)(iVar9 + 0xc) != 0) {
          return 0;
        }
      }
      else if (uVar11 == 1) {
        iVar27 = *(int *)(iVar9 + 0x10);
        puVar25 = *(undefined4 **)(iVar9 + 0xc);
        if (iVar27 == 1) {
          iVar9 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
          if (iVar9 == 0) {
            return 0;
          }
        }
        else if (iVar27 != 0) {
          puVar28 = puVar25 + iVar27 * 8;
          do {
            iVar9 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
            if (iVar9 == 0) {
              return 0;
            }
            puVar25 = puVar25 + 8;
          } while (puVar25 != puVar28);
        }
      }
      else {
        puVar25 = *(undefined4 **)(iVar9 + 0x10);
        iVar9 = *(int *)(iVar9 + 0x14) << 5;
        while (iVar9 != 0) {
          iVar27 = (**(code **)(puVar25[1] + 0x10))(*puVar25,uVar5,param_3);
          iVar9 = iVar9 + -0x20;
          puVar25 = puVar25 + 8;
          if (iVar27 == 0) {
            return 0;
          }
        }
      }
      bVar36 = true;
    } while (iVar8 != iVar37);
  }
  goto LAB_01169ea4;
LAB_0116a308:
  if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) goto LAB_01169ea4;
  local_c8 = local_c8 + 4;
  uVar21 = uVar21 + local_c8;
  goto LAB_0116a284;
}

