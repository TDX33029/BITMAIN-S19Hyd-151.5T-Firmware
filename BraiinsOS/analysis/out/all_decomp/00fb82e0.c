// FUN_00fb82e0 @ 00fb82e0 size=1780 calls_out=4 calls_in=1
// strings: 

undefined4
FUN_00fb82e0(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
            undefined1 *param_6,undefined4 param_7,int param_8,char *param_9,int param_10)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined4 local_70;
  int local_6c;
  char *local_68;
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
  char **local_28;
  
  local_70 = param_7;
  local_58 = 0x30;
  local_5c = 0x30303030;
  local_60 = 0x30303030;
  uVar4 = param_1[2];
  uVar14 = uVar4 & 0x10000000;
  local_6c = param_8;
  local_64 = param_10;
  local_68 = param_9;
  if (param_5 == 0) {
    uVar10 = 0;
    uVar11 = (uint)*(ushort *)((int)param_1 + 0xe);
LAB_00fb86f0:
    uVar12 = uVar11;
    local_54 = uVar10;
  }
  else {
    uVar11 = (uint)*(ushort *)((int)param_1 + 0xe);
    uVar10 = uVar11;
    if (uVar14 == 0) {
      uVar10 = 9;
    }
    uVar12 = uVar11;
    if (uVar10 != 0) {
      iVar5 = FUN_018462e8(param_5,param_6);
      param_5 = param_5 - iVar5 * (int)param_6;
      local_60 = CONCAT31(local_60._1_3_,(char)iVar5 + '0');
      if (param_5 == 0) {
        uVar10 = 1;
      }
      else {
        uVar9 = (uint)param_6 / 10;
        if (uVar10 == 1) {
LAB_00fb8604:
          uVar9 = uVar9 * 5;
          local_54 = uVar10;
          if (uVar9 <= param_5) {
            bVar16 = param_5 == uVar9;
            if (bVar16) {
              uVar9 = (uint)*(byte *)((int)local_50 + (uVar10 - 0x11));
            }
            uVar10 = uVar11;
            if (!bVar16 || (uVar9 & 1) != 0) {
              do {
                uVar9 = uVar10 - 1;
                bVar1 = *(byte *)((int)local_50 + (uVar10 - 0x11));
                cVar13 = bVar1 + 1;
                if (0x38 < bVar1) {
                  cVar13 = '0';
                }
                *(char *)((int)local_50 + (uVar10 - 0x11)) = cVar13;
              } while ((0x38 < bVar1) && (uVar10 = uVar9, uVar9 != 0));
              if (0x38 < bVar1) goto LAB_00fb8694;
            }
            goto LAB_00fb86a8;
          }
          uVar10 = uVar11;
          goto LAB_00fb86f4;
        }
        if (param_6 < (undefined1 *)0xa) {
LAB_00fb89d8:
                    /* WARNING: Subroutine does not return */
          FUN_00faf2a4(&DAT_0188127c);
        }
        iVar5 = FUN_018462e8(param_5,uVar9);
        param_5 = param_5 - iVar5 * uVar9;
        local_60._0_2_ = CONCAT11((char)iVar5 + '0',(undefined1)local_60);
        if (param_5 == 0) {
          uVar10 = 2;
        }
        else {
          uVar9 = (uint)param_6 / 100;
          if (uVar10 == 2) goto LAB_00fb8604;
          if (param_6 < (undefined1 *)0x64) goto LAB_00fb89d8;
          iVar5 = FUN_018462e8(param_5,uVar9);
          param_5 = param_5 - iVar5 * uVar9;
          local_60._0_3_ = CONCAT12((char)iVar5 + '0',(undefined2)local_60);
          if (param_5 == 0) {
            uVar10 = 3;
          }
          else {
            uVar9 = (uint)param_6 / 1000;
            if (uVar10 == 3) goto LAB_00fb8604;
            if (param_6 < (undefined1 *)0x3e8) goto LAB_00fb89d8;
            iVar5 = FUN_018462e8(param_5,uVar9);
            param_5 = param_5 - iVar5 * uVar9;
            local_60 = CONCAT13((char)iVar5 + '0',(undefined3)local_60);
            if (param_5 == 0) {
              uVar10 = 4;
            }
            else {
              uVar9 = (uint)param_6 / 10000;
              if (uVar10 == 4) goto LAB_00fb8604;
              if (param_6 < (undefined1 *)0x2710) goto LAB_00fb89d8;
              iVar5 = FUN_018462e8(param_5,uVar9);
              param_5 = param_5 - iVar5 * uVar9;
              local_5c = CONCAT31(local_5c._1_3_,(char)iVar5 + '0');
              if (param_5 == 0) {
                uVar10 = 5;
              }
              else {
                uVar9 = (uint)param_6 / 100000;
                if (uVar10 == 5) goto LAB_00fb8604;
                if (param_6 < (undefined1 *)0x186a0) goto LAB_00fb89d8;
                iVar5 = FUN_018462e8(param_5 & 0xffff,uVar9);
                uVar15 = param_5 - iVar5 * uVar9;
                local_5c._0_2_ = CONCAT11((char)iVar5 + '0',(undefined1)local_5c);
                if ((uVar15 & 0xffff) == 0) {
                  uVar10 = 6;
                }
                else {
                  param_5 = uVar15 & 0xffff;
                  uVar9 = (uint)param_6 / 1000000;
                  if (uVar10 == 6) goto LAB_00fb8604;
                  if (param_6 < &DAT_000f4240) goto LAB_00fb89d8;
                  iVar5 = FUN_018462e8(param_5,uVar9);
                  uVar15 = uVar15 - iVar5 * uVar9;
                  local_5c._0_3_ = CONCAT12((char)iVar5 + '0',(undefined2)local_5c);
                  if ((uVar15 & 0xffff) == 0) {
                    uVar10 = 7;
                  }
                  else {
                    uVar9 = (uint)param_6 / 10000000;
                    if (uVar10 == 7) {
                      param_5 = uVar15 & 0xffff;
                      goto LAB_00fb8604;
                    }
                    if (param_6 < &LAB_00989680) goto LAB_00fb89d8;
                    iVar5 = FUN_018462e8(uVar15 & 0xff,uVar9 & 0xff);
                    uVar15 = uVar15 - iVar5 * uVar9;
                    local_5c = CONCAT13((char)iVar5 + '0',(undefined3)local_5c);
                    if ((uVar15 & 0xff) == 0) {
                      uVar10 = 8;
                    }
                    else {
                      uVar9 = (uint)((undefined1 *)0x5f5e0ff < param_6);
                      if (uVar10 == 8) {
                        param_5 = uVar15 & 0xff;
                        goto LAB_00fb8604;
                      }
                      if (param_6 < (undefined1 *)0x5f5e100) goto LAB_00fb89d8;
                      local_58 = (byte)uVar15 | 0x30;
                      uVar10 = 9;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_00fb86f0;
    }
    uVar10 = 0;
    local_54 = 0;
    if ((uint)((int)param_6 * 5) <= param_5) {
      if (param_5 != (int)param_6 * 5 || (param_3 & 1) != 0) {
LAB_00fb8694:
        bVar17 = 0xfffffffe < param_3;
        param_3 = param_3 + 1;
        local_50[0] = 0;
        bVar16 = CARRY4(param_4,(uint)bVar17);
        param_4 = param_4 + bVar17;
        if (bVar16) goto LAB_00fb8704;
      }
LAB_00fb86a8:
      uVar10 = uVar11;
    }
  }
LAB_00fb86f4:
  local_50[0] = 1;
  uVar11 = uVar10;
  local_50[2] = param_3;
  local_44 = param_4;
LAB_00fb8704:
  local_50[1] = 0;
  local_28 = &local_68;
  local_2c = &local_54;
  local_30 = &local_60;
  local_34 = &local_40;
  local_38 = &local_70;
  local_3c = local_50;
  uVar10 = uVar12;
  if (8 < uVar12) {
    uVar10 = 9;
  }
  if (uVar14 == 0) {
    uVar10 = uVar11;
  }
  local_40 = uVar10;
  if ((uVar4 & 0x8000000) != 0) {
    uVar2 = *(ushort *)(param_1 + 3);
    uVar9 = (uint)(-0x41 < *param_9);
    if (param_10 != 1) {
      if (-0x41 < param_9[1]) {
        uVar9 = uVar9 + 1;
      }
      if ((param_10 != 2) && (-0x41 < param_9[2])) {
        uVar9 = uVar9 + 1;
      }
    }
    iVar5 = 0x14;
    if (local_50[0] != 0) {
      if (param_3 == 0 && param_4 == 0) {
        iVar5 = 1;
      }
      else {
        uVar18 = FUN_01846088(param_3,param_4,0x540be400,2);
        if (param_4 < 2 || 2 - param_4 < (uint)(param_3 < 0x540be400)) {
          uVar15 = 0;
          uVar18 = CONCAT44(param_4,param_3);
        }
        else {
          uVar15 = 10;
        }
        iVar5 = (int)((ulonglong)uVar18 >> 0x20);
        uVar3 = (uint)uVar18;
        uVar6 = FUN_01846088(uVar3,iVar5,100000,0);
        bVar16 = (uint)-iVar5 < (uint)(uVar3 < 100000);
        if (bVar16) {
          uVar6 = uVar3;
        }
        if (!bVar16) {
          uVar15 = uVar15 | 5;
        }
        iVar5 = uVar15 + ((uVar6 + 0x5fff6 & uVar6 + 0x7ff9c ^ uVar6 + 0xdfc18 & uVar6 + 0x7d8f0) >>
                         0x11) + 1;
      }
    }
    if (uVar14 == 0) {
      uVar12 = uVar11;
    }
    uVar14 = uVar9 + param_8 + iVar5;
    if (uVar10 != 0) {
      uVar14 = uVar12 + uVar14 + 1;
    }
    if (uVar14 < uVar2) {
      uVar14 = uVar2 - uVar14;
      uVar10 = 0;
      switch((uVar4 & 0x7fffffff) >> 0x1d) {
      case 1:
        uVar10 = uVar14;
        break;
      case 2:
        uVar10 = (uVar14 & 0xffff) >> 1;
      }
      uVar7 = *param_1;
      iVar5 = param_1[1];
      uVar11 = 0;
      do {
        if ((uVar10 & 0xffff) <= (uVar11 & 0xffff)) {
          iVar8 = FUN_00fb89e8(&local_3c,param_1);
          if (iVar8 != 0) {
            return 1;
          }
          uVar11 = 0;
          do {
            if ((uVar14 - uVar10 & 0xffff) <= (uVar11 & 0xffff)) {
              return 0;
            }
            iVar8 = (**(code **)(iVar5 + 0x10))(uVar7,uVar4 & 0x1fffff);
            uVar11 = uVar11 + 1;
          } while (iVar8 == 0);
          return 1;
        }
        iVar8 = (**(code **)(iVar5 + 0x10))(uVar7,uVar4 & 0x1fffff);
        uVar11 = uVar11 + 1;
      } while (iVar8 == 0);
      return 1;
    }
  }
  uVar7 = FUN_00fb89e8(&local_3c,param_1);
  return uVar7;
}

