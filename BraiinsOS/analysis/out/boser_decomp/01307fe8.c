// FUN_01307fe8 @ 01307fe8 size=1740 calls_out=4 calls_in=1
// strings: 

undefined4
FUN_01307fe8(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
            uint param_6,undefined4 param_7,int param_8,int param_9,int param_10)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined4 local_70;
  int iStack_6c;
  int iStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  uint local_54;
  int local_50 [3];
  uint local_44;
  uint local_40;
  int *local_3c;
  undefined4 *local_38;
  uint *local_34;
  undefined4 *local_30;
  uint *local_2c;
  int *local_28;
  
  uVar12 = param_1[2];
  local_70 = param_7;
  iStack_6c = param_8;
  iStack_68 = param_9;
  uVar15 = uVar12 & 0x10000000;
  local_58 = 0x30;
  local_64 = param_10;
  local_5c = 0x30303030;
  local_60 = 0x30303030;
  if (param_5 == 0) {
    uVar14 = 0;
    uVar11 = (uint)*(ushort *)((int)param_1 + 0xe);
    local_54 = 0;
  }
  else {
    uVar11 = (uint)*(ushort *)((int)param_1 + 0xe);
    uVar14 = uVar11;
    if (uVar15 == 0) {
      uVar14 = 9;
    }
    if (uVar14 == 0) {
      uVar14 = 0;
      local_54 = 0;
      if (param_6 * 5 <= param_5) {
        if (param_5 != param_6 * 5 || (param_3 & 1) != 0) {
LAB_013082fc:
          bVar17 = 0xfffffffe < param_3;
          param_3 = param_3 + 1;
          local_50[0] = 0;
          bVar16 = CARRY4(param_4,(uint)bVar17);
          param_4 = param_4 + bVar17;
          if (bVar16) {
            uVar14 = uVar11;
            goto LAB_01308400;
          }
        }
LAB_01308310:
        uVar14 = uVar11;
      }
    }
    else {
      iVar4 = FUN_01bf1250(param_5,param_6);
      param_5 = param_5 - iVar4 * param_6;
      local_60 = CONCAT31(local_60._1_3_,(char)iVar4 + '0');
      if (param_5 == 0) {
        uVar14 = 1;
      }
      else {
        uVar7 = param_6 / 10;
        if (uVar14 == 1) {
LAB_0130825c:
          uVar7 = uVar7 * 5;
          local_54 = uVar14;
          if (uVar7 <= param_5) {
            bVar16 = param_5 == uVar7;
            if (bVar16) {
              uVar7 = (uint)*(byte *)((int)local_50 + (uVar14 - 0x11));
            }
            uVar14 = uVar11;
            if (!bVar16 || (uVar7 & 1) != 0) {
              do {
                uVar7 = uVar14 - 1;
                bVar1 = *(byte *)((int)local_50 + (uVar14 - 0x11));
                cVar13 = bVar1 + 1;
                if (0x38 < bVar1) {
                  cVar13 = '0';
                }
                *(char *)((int)local_50 + (uVar14 - 0x11)) = cVar13;
              } while ((0x38 < bVar1) && (uVar14 = uVar7, uVar7 != 0));
              if (0x38 < bVar1) goto LAB_013082fc;
            }
          }
          goto LAB_01308310;
        }
        if (param_6 < 10) {
LAB_013086b8:
                    /* WARNING: Subroutine does not return */
          FUN_012ffdf4(&DAT_01ce4ab0);
        }
        iVar4 = FUN_01bf1250(param_5);
        param_5 = param_5 - iVar4 * uVar7;
        local_60._0_2_ = CONCAT11((char)iVar4 + '0',(undefined1)local_60);
        if (param_5 == 0) {
          uVar14 = 2;
        }
        else {
          uVar7 = param_6 / 100;
          if (uVar14 == 2) goto LAB_0130825c;
          if (param_6 < 100) goto LAB_013086b8;
          iVar4 = FUN_01bf1250(param_5);
          param_5 = param_5 - iVar4 * uVar7;
          local_60._0_3_ = CONCAT12((char)iVar4 + '0',(undefined2)local_60);
          if (param_5 == 0) {
            uVar14 = 3;
          }
          else {
            uVar7 = param_6 / 1000;
            if (uVar14 == 3) goto LAB_0130825c;
            if (param_6 < 1000) goto LAB_013086b8;
            iVar4 = FUN_01bf1250(param_5);
            param_5 = param_5 - iVar4 * uVar7;
            local_60 = CONCAT13((char)iVar4 + '0',(undefined3)local_60);
            if (param_5 == 0) {
              uVar14 = 4;
            }
            else {
              uVar7 = param_6 / 10000;
              if (uVar14 == 4) goto LAB_0130825c;
              if (param_6 < 10000) goto LAB_013086b8;
              iVar4 = FUN_01bf1250(param_5);
              param_5 = param_5 - iVar4 * uVar7;
              local_5c = CONCAT31(local_5c._1_3_,(char)iVar4 + '0');
              if (param_5 == 0) {
                uVar14 = 5;
              }
              else {
                uVar7 = param_6 / 100000;
                if (uVar14 == 5) goto LAB_0130825c;
                if (param_6 < 100000) goto LAB_013086b8;
                iVar4 = FUN_01bf1250(param_5 & 0xffff);
                uVar9 = param_5 - iVar4 * uVar7;
                local_5c._0_2_ = CONCAT11((char)iVar4 + '0',(undefined1)local_5c);
                if ((uVar9 & 0xffff) == 0) {
                  uVar14 = 6;
                }
                else {
                  param_5 = uVar9 & 0xffff;
                  uVar7 = param_6 / 1000000;
                  if (uVar14 == 6) goto LAB_0130825c;
                  if (param_6 < 1000000) goto LAB_013086b8;
                  iVar4 = FUN_01bf1250(param_5);
                  uVar9 = uVar9 - iVar4 * uVar7;
                  local_5c._0_3_ = CONCAT12((char)iVar4 + '0',(undefined2)local_5c);
                  if ((uVar9 & 0xffff) == 0) {
                    uVar14 = 7;
                  }
                  else {
                    uVar7 = param_6 / 10000000;
                    if (uVar14 == 7) {
                      param_5 = uVar9 & 0xffff;
                      goto LAB_0130825c;
                    }
                    if (param_6 < 10000000) goto LAB_013086b8;
                    iVar4 = FUN_01bf1250(uVar9 & 0xff,uVar7 & 0xff);
                    uVar9 = uVar9 - iVar4 * uVar7;
                    local_5c = CONCAT13((char)iVar4 + '0',(undefined3)local_5c);
                    if ((uVar9 & 0xff) == 0) {
                      uVar14 = 8;
                    }
                    else {
                      uVar7 = (uint)(99999999 < param_6);
                      if (uVar14 == 8) {
                        param_5 = uVar9 & 0xff;
                        goto LAB_0130825c;
                      }
                      if (param_6 < 100000000) goto LAB_013086b8;
                      local_58 = (byte)uVar9 | 0x30;
                      uVar14 = 9;
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_54 = uVar14;
    }
  }
  local_50[0] = 1;
  local_50[2] = param_3;
  local_44 = param_4;
LAB_01308400:
  local_50[1] = 0;
  local_28 = &iStack_68;
  local_2c = &local_54;
  local_30 = &local_60;
  uVar7 = uVar11;
  if (8 < uVar11) {
    uVar7 = 9;
  }
  local_34 = &local_40;
  if (uVar15 == 0) {
    uVar7 = uVar14;
  }
  local_38 = &local_70;
  local_3c = local_50;
  local_40 = uVar7;
  if ((uVar12 & 0x8000000) != 0) {
    uVar2 = *(ushort *)(param_1 + 3);
    iVar4 = 0;
    iVar8 = 0;
    do {
      pcVar10 = (char *)(param_9 + iVar4);
      iVar4 = iVar4 + 1;
      if (-0x41 < *pcVar10) {
        iVar8 = iVar8 + 1;
      }
    } while (param_10 != iVar4);
    iVar4 = 0x14;
    if (local_50[0] != 0) {
      if (param_3 == 0 && param_4 == 0) {
        iVar4 = 1;
      }
      else {
        uVar18 = FUN_01bf0ff0(param_3,param_4,0x540be400,2);
        if (param_4 < 2 || 2 - param_4 < (uint)(param_3 < 0x540be400)) {
          uVar9 = 0;
          uVar18 = CONCAT44(param_4,param_3);
        }
        else {
          uVar9 = 10;
        }
        iVar4 = (int)((ulonglong)uVar18 >> 0x20);
        uVar3 = (uint)uVar18;
        uVar5 = FUN_01bf0ff0(uVar3,iVar4,100000,0);
        bVar16 = (uint)-iVar4 < (uint)(uVar3 < 100000);
        if (bVar16) {
          uVar5 = uVar3;
        }
        if (!bVar16) {
          uVar9 = uVar9 | 5;
        }
        iVar4 = uVar9 + ((uVar5 + 0x5fff6 & uVar5 + 0x7ff9c ^ uVar5 + 0xdfc18 & uVar5 + 0x7d8f0) >>
                        0x11) + 1;
      }
    }
    if (uVar15 == 0) {
      uVar11 = uVar14;
    }
    uVar15 = iVar8 + param_8 + iVar4;
    if (uVar7 != 0) {
      uVar15 = uVar11 + uVar15 + 1;
    }
    if (uVar15 < uVar2) {
      uVar15 = uVar2 - uVar15;
      uVar11 = 0;
      switch((uVar12 & 0x7fffffff) >> 0x1d) {
      case 1:
        uVar11 = uVar15;
        break;
      case 2:
        uVar11 = (uVar15 & 0xffff) >> 1;
      }
      uVar6 = *param_1;
      iVar4 = param_1[1];
      uVar14 = 0;
      do {
        if ((uVar11 & 0xffff) <= (uVar14 & 0xffff)) {
          iVar8 = FUN_013086c8(&local_3c,param_1);
          if (iVar8 != 0) {
            return 1;
          }
          uVar14 = 0;
          do {
            if ((uVar15 - uVar11 & 0xffff) <= (uVar14 & 0xffff)) {
              return 0;
            }
            iVar8 = (**(code **)(iVar4 + 0x10))(uVar6,uVar12 & 0x1fffff);
            uVar14 = uVar14 + 1;
          } while (iVar8 == 0);
          return 1;
        }
        iVar8 = (**(code **)(iVar4 + 0x10))(uVar6,uVar12 & 0x1fffff);
        uVar14 = uVar14 + 1;
      } while (iVar8 == 0);
      return 1;
    }
  }
  uVar6 = FUN_013086c8(&local_3c,param_1);
  return uVar6;
}

