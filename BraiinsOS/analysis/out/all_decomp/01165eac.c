// FUN_01165eac @ 01165eac size=2948 calls_out=6 calls_in=0
// strings: 

undefined4 FUN_01165eac(int *param_1,char *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  undefined4 *puVar30;
  uint uVar31;
  uint *puVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  int iVar39;
  undefined4 *puVar40;
  bool bVar41;
  uint *puVar42;
  uint uVar43;
  uint uVar44;
  undefined8 uVar45;
  int local_f8;
  int local_94;
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
  
  uVar4 = 1;
  if (*param_2 == '\x05') {
    uVar43 = param_1[0x1f];
    local_6c[2] = *(uint *)(param_2 + 4);
    local_60 = *(undefined4 *)(param_2 + 8);
    iVar33 = param_1[0x1e];
    iVar34 = uVar43 * 100 + iVar33;
    local_4c = *(undefined4 *)(param_2 + 0xc);
    if (local_6c[2] == 0) {
      local_4c = 0;
    }
    local_6c[0] = (uint)(local_6c[2] != 0);
    uVar25 = param_1[0xd];
    iVar26 = param_1[0xf];
    local_58 = 0;
    local_6c[1] = 0;
    local_5c = local_6c[0];
    local_54 = local_6c[2];
    local_50 = local_60;
    if (param_1[3] != 0) {
      iVar35 = *param_1;
      uVar27 = param_1[1];
      iVar9 = param_1[0xc];
      uVar10 = param_1[4];
      uVar11 = param_1[5];
      uVar12 = param_1[6];
      uVar13 = param_1[7];
      iVar14 = param_1[8];
      iVar15 = param_1[9];
      iVar16 = param_1[10];
      iVar17 = param_1[0xb];
      uVar18 = param_1[0x10];
      uVar19 = param_1[0x11];
      uVar20 = param_1[0x12];
      uVar21 = param_1[0x13];
      iVar22 = param_1[0x14];
      iVar23 = param_1[0x15];
      iVar24 = param_1[0x16];
      iVar5 = param_1[0x17];
LAB_0116601c:
      do {
        do {
          uVar45 = FUN_00f45584(local_6c);
          uVar4 = (undefined4)((ulonglong)uVar45 >> 0x20);
          iVar39 = (int)uVar45;
          if (iVar39 == 0) {
            return 1;
          }
          uVar28 = *(undefined4 *)(iVar39 + 4);
          iVar36 = *(int *)(iVar39 + 8);
          local_48 = iVar14;
          local_44 = iVar15;
          local_40 = iVar16;
          iStack_3c = iVar17;
          local_38 = uVar12;
          uStack_34 = uVar13;
          local_30 = uVar10;
          local_2c = uVar11;
          FUN_011df94c(&local_48,uVar28,iVar36);
          uVar6 = local_38 ^ 0xff;
          uVar7 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                  (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
          lVar1 = (ulonglong)uVar7 * 0xb36a80d2;
          uVar37 = (uint)lVar1;
          uVar29 = (uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
                   uVar37 >> 0x18) ^
                   uStack_34 * 0x2df45158 +
                   uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20);
          uVar31 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                   uVar29 >> 0x18;
          lVar2 = (ulonglong)~local_30 * (ulonglong)uVar31;
          uVar44 = (uint)lVar2;
          uVar38 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 |
                   (local_2c >> 0x10 & 0xff) << 8 | local_2c >> 0x18;
          uVar7 = (uVar6 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
                  local_38 >> 0x18) * -0x4c957f2e +
                  uVar7 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
          uVar37 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                   uVar7 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
          uVar6 = (uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
                  uVar37 >> 0x18) * ~local_30 + uVar31 * ~local_2c + (int)((ulonglong)lVar2 >> 0x20)
          ;
          lVar1 = (ulonglong)uVar38 * (ulonglong)uVar37;
          uVar6 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                  uVar6 >> 0x18) ^ (uint)lVar1;
          uVar29 = (uVar44 << 0x18 | (uVar44 >> 8 & 0xff) << 0x10 | (uVar44 >> 0x10 & 0xff) << 8 |
                   uVar44 >> 0x18) ^
                   uVar29 * uVar38 +
                   uVar37 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                             (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar7 = uVar29;
          if ((uVar37 & 0x20) != 0) {
            uVar7 = uVar6;
            uVar6 = uVar29;
          }
          uVar7 = uVar6 << (uVar37 & 0x1f) | (uVar7 >> 1) >> (~uVar37 & 0x1f);
          uVar6 = uVar7 >> 0x19;
          local_f8 = 0;
LAB_01166180:
          uVar7 = uVar27 & uVar7;
          uVar29 = *(uint *)(iVar35 + uVar7);
          uVar37 = uVar29 ^ uVar6 * 0x1010101;
          uVar37 = ~uVar37 & 0x80808080 & uVar37 + 0xfefefeff;
LAB_011661b4:
          if (uVar37 == 0) goto LAB_01166210;
          uVar38 = uVar37 - 1 & uVar37;
          uVar31 = uVar7 + ((uint)LZCOUNT(uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 |
                                          (uVar37 >> 0x10 & 0xff) << 8 | uVar37 >> 0x18) >> 3) &
                   uVar27;
          iVar8 = iVar35 + -0x20 + uVar31 * -0x20;
          uVar37 = uVar38;
          if ((iVar36 != *(int *)(iVar8 + 8)) ||
             (iVar8 = thunk_FUN_016dd50a(uVar28,*(undefined4 *)(iVar8 + 4),iVar36), iVar8 != 0))
          goto LAB_011661b4;
          iVar36 = *(int *)(iVar35 + -0x14 + uVar31 * -0x20);
          uVar6 = 1;
          if ((int)*(uint *)(iVar36 + 8) < 0) {
            uVar6 = *(uint *)(iVar36 + 8) ^ 0x80000000;
          }
          if (uVar6 == 0) {
            if (*(int *)(iVar36 + 0xc) != 0) {
              return 0;
            }
          }
          else if (uVar6 == 1) {
            puVar30 = *(undefined4 **)(iVar36 + 0xc);
            iVar36 = *(int *)(iVar36 + 0x10);
            if (iVar36 == 1) {
              iVar36 = (**(code **)(puVar30[1] + 0x10))(*puVar30,uVar4,param_3);
              if (iVar36 == 0) {
                return 0;
              }
            }
            else if (iVar36 != 0) {
              puVar40 = puVar30 + iVar36 * 8;
              do {
                iVar36 = (**(code **)(puVar30[1] + 0x10))(*puVar30,uVar4,param_3);
                if (iVar36 == 0) {
                  return 0;
                }
                puVar30 = puVar30 + 8;
              } while (puVar30 != puVar40);
            }
          }
          else {
            puVar30 = *(undefined4 **)(iVar36 + 0x10);
            iVar36 = *(int *)(iVar36 + 0x14) << 5;
            while (iVar36 != 0) {
              iVar8 = (**(code **)(puVar30[1] + 0x10))(*puVar30,uVar4,param_3);
              iVar36 = iVar36 + -0x20;
              puVar30 = puVar30 + 8;
              if (iVar8 == 0) {
                return 0;
              }
            }
          }
        } while (iVar26 == 0);
        uVar28 = *(undefined4 *)(iVar39 + 4);
        iVar39 = *(int *)(iVar39 + 8);
        local_48 = iVar22;
        local_44 = iVar23;
        local_40 = iVar24;
        iStack_3c = iVar5;
        local_38 = uVar20;
        uStack_34 = uVar21;
        local_30 = uVar18;
        local_2c = uVar19;
        FUN_011df94c(&local_48,uVar28,iVar39);
        uVar6 = local_38 ^ 0xff;
        uVar7 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
        lVar1 = (ulonglong)uVar7 * 0xb36a80d2;
        uVar37 = (uint)lVar1;
        uVar29 = (uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
                 uVar37 >> 0x18) ^
                 uStack_34 * 0x2df45158 +
                 uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20);
        uVar31 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                 uVar29 >> 0x18;
        lVar2 = (ulonglong)~local_30 * (ulonglong)uVar31;
        uVar38 = (uint)lVar2;
        uVar7 = (uVar6 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
                local_38 >> 0x18) * -0x4c957f2e +
                uVar7 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
        uVar37 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                 uVar7 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
        uVar6 = (uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
                uVar37 >> 0x18) * ~local_30 + uVar31 * ~local_2c + (int)((ulonglong)lVar2 >> 0x20);
        uVar7 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
                local_2c >> 0x18;
        lVar1 = (ulonglong)uVar7 * (ulonglong)uVar37;
        uVar6 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                uVar6 >> 0x18) ^ (uint)lVar1;
        uVar29 = (uVar38 << 0x18 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8 |
                 uVar38 >> 0x18) ^
                 uVar29 * uVar7 +
                 uVar37 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                           (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                 (int)((ulonglong)lVar1 >> 0x20);
        uVar7 = uVar29;
        if ((uVar37 & 0x20) != 0) {
          uVar7 = uVar6;
          uVar6 = uVar29;
        }
        uVar7 = uVar6 << (uVar37 & 0x1f) | (uVar7 >> 1) >> (~uVar37 & 0x1f);
        uVar6 = uVar7 >> 0x19;
        local_94 = 0;
LAB_011663fc:
        uVar7 = uVar25 & uVar7;
        uVar29 = *(uint *)(iVar9 + uVar7);
        uVar37 = uVar29 ^ uVar6 * 0x1010101;
        uVar37 = ~uVar37 & 0x80808080 & uVar37 + 0xfefefeff;
LAB_0116642c:
        if (uVar37 == 0) goto LAB_01166488;
        uVar31 = uVar7 + ((uint)LZCOUNT(uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 |
                                        (uVar37 >> 0x10 & 0xff) << 8 | uVar37 >> 0x18) >> 3) &
                 uVar25;
        uVar37 = uVar37 - 1 & uVar37;
        iVar36 = iVar9 + -0x14 + uVar31 * -0x14;
        if ((iVar39 != *(int *)(iVar36 + 8)) ||
           (iVar36 = thunk_FUN_016dd50a(uVar28,*(undefined4 *)(iVar36 + 4),iVar39), iVar36 != 0))
        goto LAB_0116642c;
        iVar39 = iVar9 + uVar31 * -0x14;
        puVar42 = *(uint **)(iVar39 + -8);
        puVar32 = puVar42 + *(int *)(iVar39 + -4);
        while (puVar42 != puVar32) {
          uVar6 = *puVar42;
          if (uVar43 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar6,uVar43,&DAT_018890a0);
          }
          uVar7 = 1;
          puVar42 = puVar42 + 1;
          iVar39 = *(int *)(uVar6 * 100 + iVar33 + 0x50);
          if ((int)*(uint *)(iVar39 + 8) < 0) {
            uVar7 = *(uint *)(iVar39 + 8) ^ 0x80000000;
          }
          if (uVar7 == 0) {
            if (*(int *)(iVar39 + 0xc) != 0) {
              return 0;
            }
          }
          else if (uVar7 == 1) {
            iVar36 = *(int *)(iVar39 + 0x10);
            puVar30 = *(undefined4 **)(iVar39 + 0xc);
            if (iVar36 == 1) {
              iVar39 = (**(code **)(puVar30[1] + 0x10))(*puVar30,uVar4,param_3);
              if (iVar39 == 0) {
                return 0;
              }
            }
            else {
              puVar40 = puVar30 + iVar36 * 8;
              if (iVar36 != 0) {
                do {
                  iVar39 = (**(code **)(puVar30[1] + 0x10))(*puVar30,uVar4,param_3);
                  if (iVar39 == 0) {
                    return 0;
                  }
                  puVar30 = puVar30 + 8;
                } while (puVar30 != puVar40);
              }
            }
          }
          else {
            puVar30 = *(undefined4 **)(iVar39 + 0x10);
            iVar39 = *(int *)(iVar39 + 0x14) << 5;
            while (iVar39 != 0) {
              iVar36 = (**(code **)(puVar30[1] + 0x10))(*puVar30,uVar4,param_3);
              iVar39 = iVar39 + -0x20;
              puVar30 = puVar30 + 8;
              if (iVar36 == 0) {
                return 0;
              }
            }
          }
        }
      } while( true );
    }
    iVar26 = param_1[0x18];
    if (uVar43 != 0) {
LAB_011666f0:
      do {
        uVar45 = FUN_00f45584(local_6c);
        uVar4 = (undefined4)((ulonglong)uVar45 >> 0x20);
        iVar5 = (int)uVar45;
        if (iVar5 == 0) {
          return 1;
        }
        bVar41 = false;
        iVar9 = iVar33;
        do {
          iVar14 = iVar9;
          while( true ) {
            cVar3 = FUN_01164a60(iVar14,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
            iVar9 = iVar14 + 100;
            if (cVar3 != '\0') break;
            iVar14 = iVar9;
            if (iVar9 == iVar34) {
              if (!bVar41) {
                uVar43 = 1;
                if ((int)*(uint *)(iVar26 + 8) < 0) {
                  uVar43 = *(uint *)(iVar26 + 8) ^ 0x80000000;
                }
                if (uVar43 == 0) {
                  if (*(int *)(iVar26 + 0xc) != 0) {
                    return 0;
                  }
                }
                else if (uVar43 == 1) {
                  puVar30 = *(undefined4 **)(iVar26 + 0xc);
                  iVar5 = *(int *)(iVar26 + 0x10);
                  if (iVar5 == 1) {
                    iVar5 = (**(code **)(puVar30[1] + 0x10))(*puVar30,uVar4,param_3);
                    if (iVar5 == 0) {
                      return 0;
                    }
                  }
                  else if (iVar5 != 0) {
                    puVar40 = puVar30 + iVar5 * 8;
                    do {
                      iVar5 = (**(code **)(puVar30[1] + 0x10))(*puVar30,uVar4,param_3);
                      if (iVar5 == 0) {
                        return 0;
                      }
                      puVar30 = puVar30 + 8;
                    } while (puVar30 != puVar40);
                  }
                }
                else {
                  puVar30 = *(undefined4 **)(iVar26 + 0x10);
                  iVar5 = *(int *)(iVar26 + 0x14) << 5;
                  while (iVar5 != 0) {
                    iVar9 = (**(code **)(puVar30[1] + 0x10))(*puVar30,uVar4,param_3);
                    iVar5 = iVar5 + -0x20;
                    puVar30 = puVar30 + 8;
                    if (iVar9 == 0) {
                      return 0;
                    }
                  }
                }
              }
              goto LAB_011666f0;
            }
          }
          iVar14 = *(int *)(iVar14 + 0x50);
          uVar43 = 1;
          if ((int)*(uint *)(iVar14 + 8) < 0) {
            uVar43 = *(uint *)(iVar14 + 8) ^ 0x80000000;
          }
          if (uVar43 == 0) {
            if (*(int *)(iVar14 + 0xc) != 0) {
              return 0;
            }
          }
          else if (uVar43 == 1) {
            iVar15 = *(int *)(iVar14 + 0x10);
            puVar30 = *(undefined4 **)(iVar14 + 0xc);
            if (iVar15 == 1) {
              iVar14 = (**(code **)(puVar30[1] + 0x10))(*puVar30,uVar4,param_3);
              if (iVar14 == 0) {
                return 0;
              }
            }
            else if (iVar15 != 0) {
              puVar40 = puVar30 + iVar15 * 8;
              do {
                iVar14 = (**(code **)(puVar30[1] + 0x10))(*puVar30,uVar4,param_3);
                if (iVar14 == 0) {
                  return 0;
                }
                puVar30 = puVar30 + 8;
              } while (puVar30 != puVar40);
            }
          }
          else {
            puVar30 = *(undefined4 **)(iVar14 + 0x10);
            iVar14 = *(int *)(iVar14 + 0x14) << 5;
            while (iVar14 != 0) {
              iVar15 = (**(code **)(puVar30[1] + 0x10))(*puVar30,uVar4,param_3);
              iVar14 = iVar14 + -0x20;
              puVar30 = puVar30 + 8;
              if (iVar15 == 0) {
                return 0;
              }
            }
          }
          bVar41 = true;
        } while (iVar9 != iVar34);
      } while( true );
    }
    do {
      while( true ) {
        uVar45 = FUN_00f45584(local_6c);
        uVar4 = (undefined4)((ulonglong)uVar45 >> 0x20);
        if ((int)uVar45 == 0) {
          return 1;
        }
        uVar43 = 1;
        if ((int)*(uint *)(iVar26 + 8) < 0) {
          uVar43 = *(uint *)(iVar26 + 8) ^ 0x80000000;
        }
        if (uVar43 == 0) break;
        if (uVar43 == 1) {
          iVar33 = *(int *)(iVar26 + 0x10);
          puVar30 = *(undefined4 **)(iVar26 + 0xc);
          if (iVar33 == 1) {
            iVar33 = (**(code **)(puVar30[1] + 0x10))(*puVar30,uVar4,param_3);
            if (iVar33 == 0) {
              return 0;
            }
          }
          else {
            puVar40 = puVar30 + iVar33 * 8;
            if (iVar33 != 0) {
              do {
                iVar33 = (**(code **)(puVar30[1] + 0x10))(*puVar30,uVar4,param_3);
                if (iVar33 == 0) {
                  return 0;
                }
                puVar30 = puVar30 + 8;
              } while (puVar30 != puVar40);
            }
          }
        }
        else {
          puVar30 = *(undefined4 **)(iVar26 + 0x10);
          iVar33 = *(int *)(iVar26 + 0x14) << 5;
          while (iVar33 != 0) {
            iVar34 = (**(code **)(puVar30[1] + 0x10))(*puVar30,uVar4,param_3);
            iVar33 = iVar33 + -0x20;
            puVar30 = puVar30 + 8;
            if (iVar34 == 0) {
              return 0;
            }
          }
        }
      }
      uVar4 = 0;
    } while (*(int *)(iVar26 + 0xc) == 0);
  }
  return uVar4;
LAB_01166210:
  if ((uVar29 & 0x80808080 & uVar29 << 1) != 0) goto LAB_0116663c;
  local_f8 = local_f8 + 4;
  uVar7 = uVar7 + local_f8;
  goto LAB_01166180;
LAB_0116663c:
  if (uVar43 == 0) {
LAB_011666bc:
    iVar39 = FUN_011d00ac(param_1 + 0x18,uVar4,param_3);
    if (iVar39 == 0) {
      return 0;
    }
  }
  else {
    bVar41 = false;
    iVar36 = iVar33;
    do {
      while( true ) {
        cVar3 = FUN_01164a60(iVar36,*(undefined4 *)(iVar39 + 4),*(undefined4 *)(iVar39 + 8));
        iVar8 = iVar36 + 100;
        if (cVar3 != '\0') break;
        iVar36 = iVar8;
        if (iVar8 == iVar34) {
          if (!bVar41) goto LAB_011666bc;
          goto LAB_0116601c;
        }
      }
      iVar36 = FUN_011d00ac(iVar36 + 0x50,uVar4,param_3);
      if (iVar36 == 0) {
        return 0;
      }
      bVar41 = true;
      iVar36 = iVar8;
    } while (iVar8 != iVar34);
  }
  goto LAB_0116601c;
LAB_01166488:
  if ((uVar29 & 0x80808080 & uVar29 << 1) != 0) goto LAB_0116601c;
  local_94 = local_94 + 4;
  uVar7 = uVar7 + local_94;
  goto LAB_011663fc;
}

