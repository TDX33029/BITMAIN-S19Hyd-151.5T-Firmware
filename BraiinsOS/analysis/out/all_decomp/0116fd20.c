// FUN_0116fd20 @ 0116fd20 size=2676 calls_out=5 calls_in=0
// strings: 

bool FUN_0116fd20(int *param_1,char *param_2,undefined4 param_3)

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
  int iVar25;
  uint uVar26;
  undefined4 uVar27;
  uint uVar28;
  bool bVar29;
  uint *puVar30;
  uint uVar31;
  undefined4 *puVar32;
  bool bVar33;
  uint uVar34;
  undefined4 *puVar35;
  uint *puVar36;
  uint uVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  uint uVar44;
  uint uVar45;
  undefined8 uVar46;
  int local_90;
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
  
  bVar29 = true;
  if (*param_2 == '\x05') {
    local_6c[2] = *(uint *)(param_2 + 4);
    local_60 = *(undefined4 *)(param_2 + 8);
    uVar44 = param_1[0x1c];
    local_4c = *(undefined4 *)(param_2 + 0xc);
    if (local_6c[2] == 0) {
      local_4c = 0;
    }
    local_6c[0] = (uint)(local_6c[2] != 0);
    iVar25 = param_1[0x1b];
    uVar37 = param_1[0xd];
    iVar42 = iVar25 + uVar44 * 0x28;
    iVar38 = param_1[0xf];
    local_58 = 0;
    local_6c[1] = 0;
    local_5c = local_6c[0];
    local_54 = local_6c[2];
    local_50 = local_60;
    if (param_1[3] != 0) {
      iVar39 = *param_1;
      uVar26 = param_1[1];
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
LAB_0116fe88:
      do {
        do {
          uVar46 = FUN_00f45584(local_6c);
          uVar8 = (undefined4)((ulonglong)uVar46 >> 0x20);
          iVar41 = (int)uVar46;
          if (iVar41 == 0) {
            return true;
          }
          uVar27 = *(undefined4 *)(iVar41 + 4);
          iVar40 = *(int *)(iVar41 + 8);
          local_48 = iVar14;
          local_44 = iVar15;
          local_40 = iVar16;
          iStack_3c = iVar17;
          local_38 = uVar12;
          uStack_34 = uVar13;
          local_30 = uVar10;
          uStack_2c = uVar11;
          FUN_011df94c(&local_48,uVar27,iVar40);
          uVar5 = local_38 ^ 0xff;
          uVar6 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                  (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
          lVar1 = (ulonglong)uVar6 * 0xb36a80d2;
          uVar34 = (uint)lVar1;
          uVar28 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
                   uVar34 >> 0x18) ^
                   uStack_34 * 0x2df45158 +
                   uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
          uVar31 = uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
                   uVar28 >> 0x18;
          lVar2 = (ulonglong)~local_30 * (ulonglong)uVar31;
          uVar45 = (uint)lVar2;
          uVar6 = (uVar5 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
                  local_38 >> 0x18) * -0x4c957f2e +
                  uVar6 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
          iVar43 = 0;
          uVar34 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                   uVar6 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
          uVar5 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
                  uVar34 >> 0x18) * ~local_30 +
                  uVar31 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
          uVar6 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                  (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
          lVar1 = (ulonglong)uVar6 * (ulonglong)uVar34;
          uVar5 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                  uVar5 >> 0x18) ^ (uint)lVar1;
          uVar28 = (uVar45 << 0x18 | (uVar45 >> 8 & 0xff) << 0x10 | (uVar45 >> 0x10 & 0xff) << 8 |
                   uVar45 >> 0x18) ^
                   uVar28 * uVar6 +
                   uVar34 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                             (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                   (int)((ulonglong)lVar1 >> 0x20);
          uVar6 = uVar28;
          if ((uVar34 & 0x20) != 0) {
            uVar6 = uVar5;
            uVar5 = uVar28;
          }
          uVar6 = uVar5 << (uVar34 & 0x1f) | (uVar6 >> 1) >> (~uVar34 & 0x1f);
          uVar5 = uVar6 >> 0x19;
LAB_0116ffe0:
          uVar6 = uVar26 & uVar6;
          uVar28 = *(uint *)(iVar39 + uVar6);
          uVar34 = uVar28 ^ uVar5 * 0x1010101;
          uVar34 = ~uVar34 & 0x80808080 & uVar34 + 0xfefefeff;
LAB_0117000c:
          if (uVar34 == 0) goto LAB_01170068;
          uVar45 = uVar34 - 1 & uVar34;
          uVar31 = uVar6 + ((uint)LZCOUNT(uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 |
                                          (uVar34 >> 0x10 & 0xff) << 8 | uVar34 >> 0x18) >> 3) &
                   uVar26;
          iVar7 = iVar39 + -0x20 + uVar31 * -0x20;
          uVar34 = uVar45;
          if ((iVar40 != *(int *)(iVar7 + 8)) ||
             (iVar7 = thunk_FUN_016dd50a(uVar27,*(undefined4 *)(iVar7 + 4),iVar40), iVar7 != 0))
          goto LAB_0117000c;
          iVar40 = *(int *)(iVar39 + -0x14 + uVar31 * -0x20);
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
            puVar35 = *(undefined4 **)(iVar40 + 0xc);
            if (iVar43 == 1) {
              iVar40 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar8,param_3);
              if (iVar40 == 0) {
                return false;
              }
            }
            else if (iVar43 != 0) {
              puVar32 = puVar35 + iVar43 * 8;
              do {
                iVar40 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar8,param_3);
                if (iVar40 == 0) {
                  return false;
                }
                puVar35 = puVar35 + 8;
              } while (puVar35 != puVar32);
            }
          }
          else {
            puVar35 = *(undefined4 **)(iVar40 + 0x10);
            iVar40 = *(int *)(iVar40 + 0x14) << 5;
            while (iVar40 != 0) {
              iVar43 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar8,param_3);
              iVar40 = iVar40 + -0x20;
              puVar35 = puVar35 + 8;
              if (iVar43 == 0) {
                return false;
              }
            }
          }
        } while (iVar38 == 0);
        uVar27 = *(undefined4 *)(iVar41 + 4);
        iVar41 = *(int *)(iVar41 + 8);
        local_48 = iVar22;
        local_44 = iVar23;
        local_40 = iVar24;
        iStack_3c = iVar4;
        local_38 = uVar20;
        uStack_34 = uVar21;
        local_30 = uVar18;
        uStack_2c = uVar19;
        FUN_011df94c(&local_48,uVar27,iVar41);
        uVar5 = local_38 ^ 0xff;
        uVar6 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
        lVar1 = (ulonglong)uVar6 * 0xb36a80d2;
        uVar34 = (uint)lVar1;
        uVar28 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
                 uVar34 >> 0x18) ^
                 uStack_34 * 0x2df45158 +
                 uVar5 * 0x2d7f954c + (int)((ulonglong)uVar5 * 0x2df45158 >> 0x20);
        uVar31 = uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
                 uVar28 >> 0x18;
        lVar2 = (ulonglong)~local_30 * (ulonglong)uVar31;
        uVar45 = (uint)lVar2;
        uVar6 = (uVar5 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
                local_38 >> 0x18) * -0x4c957f2e +
                uVar6 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
        uVar34 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                 uVar6 >> 0x18) ^ (uint)((ulonglong)uVar5 * 0x2df45158);
        uVar5 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
                uVar34 >> 0x18) * ~local_30 + uVar31 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
        uVar6 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
        lVar1 = (ulonglong)uVar6 * (ulonglong)uVar34;
        uVar5 = (uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                uVar5 >> 0x18) ^ (uint)lVar1;
        uVar28 = (uVar45 << 0x18 | (uVar45 >> 8 & 0xff) << 0x10 | (uVar45 >> 0x10 & 0xff) << 8 |
                 uVar45 >> 0x18) ^
                 uVar28 * uVar6 +
                 uVar34 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                           (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                 (int)((ulonglong)lVar1 >> 0x20);
        uVar6 = uVar28;
        if ((uVar34 & 0x20) != 0) {
          uVar6 = uVar5;
          uVar5 = uVar28;
        }
        uVar6 = uVar5 << (uVar34 & 0x1f) | (uVar6 >> 1) >> (~uVar34 & 0x1f);
        uVar5 = uVar6 >> 0x19;
        local_90 = 0;
LAB_0117025c:
        uVar6 = uVar37 & uVar6;
        uVar28 = *(uint *)(iVar9 + uVar6);
        uVar34 = uVar28 ^ uVar5 * 0x1010101;
        uVar34 = ~uVar34 & 0x80808080 & uVar34 + 0xfefefeff;
LAB_0117028c:
        if (uVar34 == 0) goto LAB_011702ec;
        uVar31 = uVar6 + ((uint)LZCOUNT(uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 |
                                        (uVar34 >> 0x10 & 0xff) << 8 | uVar34 >> 0x18) >> 3) &
                 uVar37;
        uVar34 = uVar34 - 1 & uVar34;
        iVar40 = iVar9 + -0x14 + uVar31 * -0x14;
        if ((iVar41 != *(int *)(iVar40 + 8)) ||
           (iVar40 = thunk_FUN_016dd50a(uVar27,*(undefined4 *)(iVar40 + 4),iVar41), iVar40 != 0))
        goto LAB_0117028c;
        iVar41 = iVar9 + uVar31 * -0x14;
        puVar36 = *(uint **)(iVar41 + -8);
        puVar30 = puVar36 + *(int *)(iVar41 + -4);
        while (puVar36 != puVar30) {
          uVar5 = *puVar36;
          if (uVar44 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar5,uVar44,&DAT_018890e0);
          }
          puVar36 = puVar36 + 1;
          uVar6 = 1;
          iVar41 = *(int *)(iVar25 + uVar5 * 0x28 + 0x14);
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
            puVar35 = *(undefined4 **)(iVar41 + 0xc);
            if (iVar40 == 1) {
              iVar41 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar8,param_3);
              if (iVar41 == 0) {
                return false;
              }
            }
            else {
              puVar32 = puVar35 + iVar40 * 8;
              if (iVar40 != 0) {
                do {
                  iVar41 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar8,param_3);
                  if (iVar41 == 0) {
                    return false;
                  }
                  puVar35 = puVar35 + 8;
                } while (puVar35 != puVar32);
              }
            }
          }
          else {
            puVar35 = *(undefined4 **)(iVar41 + 0x10);
            iVar41 = *(int *)(iVar41 + 0x14) << 5;
            while (iVar41 != 0) {
              iVar40 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar8,param_3);
              iVar41 = iVar41 + -0x20;
              puVar35 = puVar35 + 8;
              if (iVar40 == 0) {
                return false;
              }
            }
          }
        }
      } while( true );
    }
    if (uVar44 == 0) {
      iVar25 = FUN_00f45584(local_6c);
      return iVar25 == 0;
    }
    do {
      uVar46 = FUN_00f45584(local_6c);
      uVar8 = (undefined4)((ulonglong)uVar46 >> 0x20);
      iVar38 = (int)uVar46;
      if (iVar38 == 0) {
        return true;
      }
      bVar33 = false;
      iVar4 = iVar25;
      do {
        cVar3 = FUN_0116bd94(iVar4,*(undefined4 *)(iVar38 + 4),*(undefined4 *)(iVar38 + 8));
        if (cVar3 != '\0') {
          iVar9 = *(int *)(iVar4 + 0x14);
          uVar44 = 1;
          if ((int)*(uint *)(iVar9 + 8) < 0) {
            uVar44 = *(uint *)(iVar9 + 8) ^ 0x80000000;
          }
          if (uVar44 == 0) {
            bVar33 = true;
            if (*(int *)(iVar9 + 0xc) != 0) {
              return false;
            }
          }
          else if (uVar44 == 1) {
            iVar14 = *(int *)(iVar9 + 0x10);
            puVar35 = *(undefined4 **)(iVar9 + 0xc);
            if (iVar14 == 1) {
              iVar9 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar8,param_3);
              bVar33 = true;
              if (iVar9 == 0) {
                return false;
              }
            }
            else {
              bVar33 = true;
              if (iVar14 != 0) {
                puVar32 = puVar35 + iVar14 * 8;
                do {
                  iVar9 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar8,param_3);
                  if (iVar9 == 0) {
                    return false;
                  }
                  puVar35 = puVar35 + 8;
                } while (puVar35 != puVar32);
              }
            }
          }
          else {
            puVar35 = *(undefined4 **)(iVar9 + 0x10);
            iVar9 = *(int *)(iVar9 + 0x14) << 5;
            while (iVar9 != 0) {
              iVar14 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar8,param_3);
              iVar9 = iVar9 + -0x20;
              puVar35 = puVar35 + 8;
              if (iVar14 == 0) {
                return false;
              }
            }
            bVar33 = true;
          }
        }
        iVar4 = iVar4 + 0x28;
      } while (iVar4 != iVar42);
      bVar29 = false;
    } while (bVar33);
  }
  return bVar29;
LAB_011702ec:
  if ((uVar28 & 0x80808080 & uVar28 << 1) != 0) goto LAB_0116fe88;
  local_90 = local_90 + 4;
  uVar6 = uVar6 + local_90;
  goto LAB_0117025c;
LAB_01170068:
  if ((uVar28 & 0x80808080 & uVar28 << 1) != 0) goto LAB_01170498;
  iVar43 = iVar43 + 4;
  uVar6 = uVar6 + iVar43;
  goto LAB_0116ffe0;
LAB_01170498:
  if (uVar44 == 0) {
    return false;
  }
  bVar29 = false;
  iVar40 = iVar25;
  do {
    iVar43 = iVar40;
    while( true ) {
      cVar3 = FUN_0116bd94(iVar43,*(undefined4 *)(iVar41 + 4),*(undefined4 *)(iVar41 + 8));
      iVar40 = iVar43 + 0x28;
      if (cVar3 != '\0') break;
      iVar43 = iVar40;
      if (iVar40 == iVar42) {
        if (!bVar29) {
          return false;
        }
        goto LAB_0116fe88;
      }
    }
    iVar43 = *(int *)(iVar43 + 0x14);
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
      puVar35 = *(undefined4 **)(iVar43 + 0xc);
      if (iVar7 == 1) {
        iVar43 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar8,param_3);
        if (iVar43 == 0) {
          return false;
        }
      }
      else if (iVar7 != 0) {
        puVar32 = puVar35 + iVar7 * 8;
        do {
          iVar43 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar8,param_3);
          if (iVar43 == 0) {
            return false;
          }
          puVar35 = puVar35 + 8;
        } while (puVar35 != puVar32);
      }
    }
    else {
      puVar35 = *(undefined4 **)(iVar43 + 0x10);
      iVar43 = *(int *)(iVar43 + 0x14) << 5;
      while (iVar43 != 0) {
        iVar7 = (**(code **)(puVar35[1] + 0x10))(*puVar35,uVar8,param_3);
        iVar43 = iVar43 + -0x20;
        puVar35 = puVar35 + 8;
        if (iVar7 == 0) {
          return false;
        }
      }
    }
    bVar29 = true;
  } while (iVar40 != iVar42);
  goto LAB_0116fe88;
}

