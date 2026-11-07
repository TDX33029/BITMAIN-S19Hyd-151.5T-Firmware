// FUN_0117665c @ 0117665c size=2668 calls_out=5 calls_in=0
// strings: 

bool FUN_0117665c(int *param_1,char *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
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
  uint *puVar30;
  uint uVar31;
  uint uVar32;
  undefined4 *puVar33;
  bool bVar34;
  int iVar35;
  uint uVar36;
  undefined4 *puVar37;
  uint *puVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  bool bVar42;
  int iVar43;
  int iVar44;
  uint uVar45;
  undefined8 uVar46;
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
  uint uStack_2c;
  
  bVar42 = true;
  if (*param_2 == '\x05') {
    uVar31 = param_1[0x1c];
    local_6c[2] = *(uint *)(param_2 + 4);
    local_60 = *(undefined4 *)(param_2 + 8);
    iVar35 = param_1[0x1b];
    iVar44 = uVar31 * 100 + iVar35;
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
      iVar39 = *param_1;
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
      iVar4 = param_1[0x17];
LAB_011767c4:
      do {
        do {
          uVar46 = FUN_00f45584(local_6c);
          uVar8 = (undefined4)((ulonglong)uVar46 >> 0x20);
          iVar41 = (int)uVar46;
          if (iVar41 == 0) {
            return true;
          }
          uVar28 = *(undefined4 *)(iVar41 + 4);
          iVar40 = *(int *)(iVar41 + 8);
          local_48 = iVar14;
          local_44 = iVar15;
          local_40 = iVar16;
          iStack_3c = iVar17;
          local_38 = uVar12;
          uStack_34 = uVar13;
          local_30 = uVar10;
          uStack_2c = uVar11;
          FUN_011df94c(&local_48,uVar28,iVar40);
          uVar5 = local_38 ^ 0xff;
          uVar6 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                  (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
          lVar1 = (ulonglong)uVar6 * 0xb36a80d2;
          uVar36 = (uint)lVar1;
          uVar29 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
                   uVar36 >> 0x18) ^
                   uStack_34 * 0x2df45158 +
                   uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
          uVar32 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                   uVar29 >> 0x18;
          lVar2 = (ulonglong)~local_30 * (ulonglong)uVar32;
          uVar45 = (uint)lVar2;
          uVar6 = (uVar5 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
                  local_38 >> 0x18) * -0x4c957f2e +
                  uVar6 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
          iVar43 = 0;
          uVar36 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                   uVar6 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
          uVar5 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
                  uVar36 >> 0x18) * ~local_30 +
                  uVar32 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
          uVar6 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                  (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
          lVar1 = (ulonglong)uVar6 * (ulonglong)uVar36;
          uVar5 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                  uVar5 >> 0x18) ^ (uint)lVar1;
          uVar29 = (uVar45 << 0x18 | (uVar45 >> 8 & 0xff) << 0x10 | (uVar45 >> 0x10 & 0xff) << 8 |
                   uVar45 >> 0x18) ^
                   uVar29 * uVar6 +
                   uVar36 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                             (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar6 = uVar29;
          if ((uVar36 & 0x20) != 0) {
            uVar6 = uVar5;
            uVar5 = uVar29;
          }
          uVar6 = uVar5 << (uVar36 & 0x1f) | (uVar6 >> 1) >> (~uVar36 & 0x1f);
          uVar5 = uVar6 >> 0x19;
LAB_0117691c:
          uVar6 = uVar27 & uVar6;
          uVar29 = *(uint *)(iVar39 + uVar6);
          uVar36 = uVar29 ^ uVar5 * 0x1010101;
          uVar36 = ~uVar36 & 0x80808080 & uVar36 + 0xfefefeff;
LAB_01176948:
          if (uVar36 == 0) goto LAB_011769a4;
          uVar32 = uVar36 - 1 & uVar36;
          uVar45 = uVar6 + ((uint)LZCOUNT(uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 |
                                          (uVar36 >> 0x10 & 0xff) << 8 | uVar36 >> 0x18) >> 3) &
                   uVar27;
          iVar7 = iVar39 + -0x20 + uVar45 * -0x20;
          uVar36 = uVar32;
          if ((iVar40 != *(int *)(iVar7 + 8)) ||
             (iVar7 = thunk_FUN_016dd50a(uVar28,*(undefined4 *)(iVar7 + 4),iVar40), iVar7 != 0))
          goto LAB_01176948;
          iVar40 = *(int *)(iVar39 + -0x14 + uVar45 * -0x20);
          uVar5 = 1;
          if ((int)*(uint *)(iVar40 + 8) < 0) {
            uVar5 = *(uint *)(iVar40 + 8) ^ 0x80000000;
          }
          if (uVar5 == 0) {
            if (*(int *)(iVar40 + 0xc) != 0) {
              return false;
            }
          }
          else if (uVar5 == 1) {
            iVar43 = *(int *)(iVar40 + 0x10);
            puVar37 = *(undefined4 **)(iVar40 + 0xc);
            if (iVar43 == 1) {
              iVar40 = (**(code **)(puVar37[1] + 0x10))(*puVar37,uVar8,param_3);
              if (iVar40 == 0) {
                return false;
              }
            }
            else if (iVar43 != 0) {
              puVar33 = puVar37 + iVar43 * 8;
              do {
                iVar40 = (**(code **)(puVar37[1] + 0x10))(*puVar37,uVar8,param_3);
                if (iVar40 == 0) {
                  return false;
                }
                puVar37 = puVar37 + 8;
              } while (puVar37 != puVar33);
            }
          }
          else {
            puVar37 = *(undefined4 **)(iVar40 + 0x10);
            iVar40 = *(int *)(iVar40 + 0x14) << 5;
            while (iVar40 != 0) {
              iVar43 = (**(code **)(puVar37[1] + 0x10))(*puVar37,uVar8,param_3);
              iVar40 = iVar40 + -0x20;
              puVar37 = puVar37 + 8;
              if (iVar43 == 0) {
                return false;
              }
            }
          }
        } while (iVar26 == 0);
        uVar28 = *(undefined4 *)(iVar41 + 4);
        iVar41 = *(int *)(iVar41 + 8);
        local_48 = iVar22;
        local_44 = iVar23;
        local_40 = iVar24;
        iStack_3c = iVar4;
        local_38 = uVar20;
        uStack_34 = uVar21;
        local_30 = uVar18;
        uStack_2c = uVar19;
        FUN_011df94c(&local_48,uVar28,iVar41);
        uVar5 = local_38 ^ 0xff;
        uVar6 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
        lVar1 = (ulonglong)uVar6 * 0xb36a80d2;
        uVar36 = (uint)lVar1;
        uVar29 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
                 uVar36 >> 0x18) ^
                 uStack_34 * 0x2df45158 +
                 uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
        uVar32 = uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                 uVar29 >> 0x18;
        lVar2 = (ulonglong)~local_30 * (ulonglong)uVar32;
        uVar45 = (uint)lVar2;
        uVar6 = (uVar5 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
                local_38 >> 0x18) * -0x4c957f2e +
                uVar6 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
        uVar36 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                 uVar6 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
        uVar5 = (uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
                uVar36 >> 0x18) * ~local_30 + uVar32 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
        uVar6 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
        lVar1 = (ulonglong)uVar6 * (ulonglong)uVar36;
        uVar5 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                uVar5 >> 0x18) ^ (uint)lVar1;
        uVar29 = (uVar45 << 0x18 | (uVar45 >> 8 & 0xff) << 0x10 | (uVar45 >> 0x10 & 0xff) << 8 |
                 uVar45 >> 0x18) ^
                 uVar29 * uVar6 +
                 uVar36 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                           (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                 (int)((ulonglong)lVar1 >> 0x20);
        uVar6 = uVar29;
        if ((uVar36 & 0x20) != 0) {
          uVar6 = uVar5;
          uVar5 = uVar29;
        }
        uVar6 = uVar5 << (uVar36 & 0x1f) | (uVar6 >> 1) >> (~uVar36 & 0x1f);
        uVar5 = uVar6 >> 0x19;
        local_94 = 0;
LAB_01176b98:
        uVar6 = uVar25 & uVar6;
        uVar29 = *(uint *)(iVar9 + uVar6);
        uVar36 = uVar29 ^ uVar5 * 0x1010101;
        uVar36 = ~uVar36 & 0x80808080 & uVar36 + 0xfefefeff;
LAB_01176bc8:
        if (uVar36 == 0) goto LAB_01176c24;
        uVar32 = uVar6 + ((uint)LZCOUNT(uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 |
                                        (uVar36 >> 0x10 & 0xff) << 8 | uVar36 >> 0x18) >> 3) &
                 uVar25;
        uVar36 = uVar36 - 1 & uVar36;
        iVar40 = iVar9 + -0x14 + uVar32 * -0x14;
        if ((iVar41 != *(int *)(iVar40 + 8)) ||
           (iVar40 = thunk_FUN_016dd50a(uVar28,*(undefined4 *)(iVar40 + 4),iVar41), iVar40 != 0))
        goto LAB_01176bc8;
        iVar41 = iVar9 + uVar32 * -0x14;
        puVar38 = *(uint **)(iVar41 + -8);
        puVar30 = puVar38 + *(int *)(iVar41 + -4);
        while (puVar38 != puVar30) {
          uVar5 = *puVar38;
          if (uVar31 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar5,uVar31,&DAT_018890e0);
          }
          uVar6 = 1;
          puVar38 = puVar38 + 1;
          iVar41 = *(int *)(uVar5 * 100 + iVar35 + 0x50);
          if ((int)*(uint *)(iVar41 + 8) < 0) {
            uVar6 = *(uint *)(iVar41 + 8) ^ 0x80000000;
          }
          if (uVar6 == 0) {
            if (*(int *)(iVar41 + 0xc) != 0) {
              return false;
            }
          }
          else if (uVar6 == 1) {
            iVar40 = *(int *)(iVar41 + 0x10);
            puVar37 = *(undefined4 **)(iVar41 + 0xc);
            if (iVar40 == 1) {
              iVar41 = (**(code **)(puVar37[1] + 0x10))(*puVar37,uVar8,param_3);
              if (iVar41 == 0) {
                return false;
              }
            }
            else {
              puVar33 = puVar37 + iVar40 * 8;
              if (iVar40 != 0) {
                do {
                  iVar41 = (**(code **)(puVar37[1] + 0x10))(*puVar37,uVar8,param_3);
                  if (iVar41 == 0) {
                    return false;
                  }
                  puVar37 = puVar37 + 8;
                } while (puVar37 != puVar33);
              }
            }
          }
          else {
            puVar37 = *(undefined4 **)(iVar41 + 0x10);
            iVar41 = *(int *)(iVar41 + 0x14) << 5;
            while (iVar41 != 0) {
              iVar40 = (**(code **)(puVar37[1] + 0x10))(*puVar37,uVar8,param_3);
              iVar41 = iVar41 + -0x20;
              puVar37 = puVar37 + 8;
              if (iVar40 == 0) {
                return false;
              }
            }
          }
        }
      } while( true );
    }
    if (uVar31 == 0) {
      iVar35 = FUN_00f45584(local_6c);
      return iVar35 == 0;
    }
    do {
      uVar46 = FUN_00f45584(local_6c);
      uVar8 = (undefined4)((ulonglong)uVar46 >> 0x20);
      iVar26 = (int)uVar46;
      if (iVar26 == 0) {
        return true;
      }
      bVar34 = false;
      iVar4 = iVar35;
      do {
        cVar3 = FUN_01164a60(iVar4,*(undefined4 *)(iVar26 + 4),*(undefined4 *)(iVar26 + 8));
        if (cVar3 != '\0') {
          iVar9 = *(int *)(iVar4 + 0x50);
          uVar31 = 1;
          if ((int)*(uint *)(iVar9 + 8) < 0) {
            uVar31 = *(uint *)(iVar9 + 8) ^ 0x80000000;
          }
          if (uVar31 == 0) {
            bVar34 = true;
            if (*(int *)(iVar9 + 0xc) != 0) {
              return false;
            }
          }
          else if (uVar31 == 1) {
            iVar14 = *(int *)(iVar9 + 0x10);
            puVar37 = *(undefined4 **)(iVar9 + 0xc);
            if (iVar14 == 1) {
              iVar9 = (**(code **)(puVar37[1] + 0x10))(*puVar37,uVar8,param_3);
              bVar34 = true;
              if (iVar9 == 0) {
                return false;
              }
            }
            else {
              bVar34 = true;
              if (iVar14 != 0) {
                puVar33 = puVar37 + iVar14 * 8;
                do {
                  iVar9 = (**(code **)(puVar37[1] + 0x10))(*puVar37,uVar8,param_3);
                  if (iVar9 == 0) {
                    return false;
                  }
                  puVar37 = puVar37 + 8;
                } while (puVar37 != puVar33);
                goto LAB_0117706c;
              }
            }
          }
          else {
            puVar37 = *(undefined4 **)(iVar9 + 0x10);
            iVar9 = *(int *)(iVar9 + 0x14) << 5;
            while (iVar9 != 0) {
              iVar14 = (**(code **)(puVar37[1] + 0x10))(*puVar37,uVar8,param_3);
              iVar9 = iVar9 + -0x20;
              puVar37 = puVar37 + 8;
              if (iVar14 == 0) {
                return false;
              }
            }
LAB_0117706c:
            bVar34 = true;
          }
        }
        iVar4 = iVar4 + 100;
      } while (iVar4 != iVar44);
      bVar42 = false;
    } while (bVar34);
  }
  return bVar42;
LAB_01176c24:
  if ((uVar29 & 0x80808080 & uVar29 << 1) != 0) goto LAB_011767c4;
  local_94 = local_94 + 4;
  uVar6 = uVar6 + local_94;
  goto LAB_01176b98;
LAB_011769a4:
  if ((uVar29 & 0x80808080 & uVar29 << 1) != 0) goto LAB_01176dd4;
  iVar43 = iVar43 + 4;
  uVar6 = uVar6 + iVar43;
  goto LAB_0117691c;
LAB_01176dd4:
  if (uVar31 == 0) {
    return false;
  }
  bVar42 = false;
  iVar40 = iVar35;
  do {
    iVar43 = iVar40;
    while( true ) {
      cVar3 = FUN_01164a60(iVar43,*(undefined4 *)(iVar41 + 4),*(undefined4 *)(iVar41 + 8));
      iVar40 = iVar43 + 100;
      if (cVar3 != '\0') break;
      iVar43 = iVar40;
      if (iVar40 == iVar44) {
        if (!bVar42) {
          return false;
        }
        goto LAB_011767c4;
      }
    }
    iVar43 = *(int *)(iVar43 + 0x50);
    uVar5 = 1;
    if ((int)*(uint *)(iVar43 + 8) < 0) {
      uVar5 = *(uint *)(iVar43 + 8) ^ 0x80000000;
    }
    if (uVar5 == 0) {
      if (*(int *)(iVar43 + 0xc) != 0) {
        return false;
      }
    }
    else if (uVar5 == 1) {
      iVar7 = *(int *)(iVar43 + 0x10);
      puVar37 = *(undefined4 **)(iVar43 + 0xc);
      if (iVar7 == 1) {
        iVar43 = (**(code **)(puVar37[1] + 0x10))(*puVar37,uVar8,param_3);
        if (iVar43 == 0) {
          return false;
        }
      }
      else if (iVar7 != 0) {
        puVar33 = puVar37 + iVar7 * 8;
        do {
          iVar43 = (**(code **)(puVar37[1] + 0x10))(*puVar37,uVar8,param_3);
          if (iVar43 == 0) {
            return false;
          }
          puVar37 = puVar37 + 8;
        } while (puVar37 != puVar33);
      }
    }
    else {
      puVar37 = *(undefined4 **)(iVar43 + 0x10);
      iVar43 = *(int *)(iVar43 + 0x14) << 5;
      while (iVar43 != 0) {
        iVar7 = (**(code **)(puVar37[1] + 0x10))(*puVar37,uVar8,param_3);
        iVar43 = iVar43 + -0x20;
        puVar37 = puVar37 + 8;
        if (iVar7 == 0) {
          return false;
        }
      }
    }
    bVar42 = true;
  } while (iVar40 != iVar44);
  goto LAB_011767c4;
}

