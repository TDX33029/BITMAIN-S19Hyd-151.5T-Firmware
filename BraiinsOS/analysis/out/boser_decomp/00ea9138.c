// FUN_00ea9138 @ 00ea9138 size=1512 calls_out=14 calls_in=4
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00ea9138(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 uint param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 **ppuVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint local_2050;
  undefined1 *local_204c;
  undefined1 *local_2048;
  undefined2 local_2044;
  undefined4 **local_2040;
  undefined4 *local_203c;
  uint *local_2038;
  int local_2034;
  undefined4 local_2030;
  undefined4 *local_2028;
  int local_2024;
  undefined4 *local_2020;
  int local_201c;
  undefined1 *local_2018;
  int local_1ff8;
  int local_1ff4;
  
  local_204c = (undefined1 *)0x1b6;
  local_2048 = (undefined1 *)0x1;
  local_2050 = 0;
  local_2044 = 0;
  local_2038 = &local_2050;
  if (param_3 >> 7 < 3) {
    FUN_01bed4e2(&local_2028,param_2,param_3);
    *(undefined1 *)((int)&local_2028 + param_3) = 0;
    FUN_012fbc58(&local_2034,&local_2028,param_3 + 1);
    if (local_2034 == 1) {
      local_2040 = (undefined4 **)0x2;
      local_203c = &DAT_01d27a70;
    }
    else {
      FUN_01980058(&local_2040,local_2030,&local_2050);
    }
  }
  else {
    FUN_019a0974(&local_2040,param_2,param_3,&local_2038);
  }
  puVar1 = local_203c;
  puVar8 = param_1 + 1;
  if (((char)local_2040 != '\x04') && (((uint)local_2040 & 0xff) != 4)) {
    uVar11 = (uint)local_2040 >> 8;
    goto LAB_00ea9340;
  }
  ppuVar12 = &local_2028;
  FUN_01bed93e(ppuVar12,0,0x68);
  iVar3 = FUN_01bf05c2(puVar1,ppuVar12);
  puVar5 = local_2018;
  if (iVar3 == -1) {
    local_2028 = (undefined4 *)FUN_01be3244();
    local_2028 = (undefined4 *)*local_2028;
    ppuVar12 = (undefined4 **)0x0;
LAB_00ea9334:
    FUN_01bf01d6(puVar1);
  }
  else {
    if (((uint)local_2018 & 0xf000) != 0x8000) {
      local_2028 = (undefined4 *)&DAT_01d2784c;
      ppuVar12 = (undefined4 **)0x2;
      goto LAB_00ea9334;
    }
    if (puVar1 != (undefined4 *)0xffffffff) {
      local_2050 = 0;
      local_204c = local_2018;
      local_2048 = &LAB_01000100;
      local_2044 = 1;
      if (param_5 >> 7 < 3) {
        local_2038 = &local_2050;
        FUN_01bed4e2(ppuVar12,param_4,param_5);
        *(undefined1 *)((int)ppuVar12 + param_5) = 0;
        FUN_012fbc58(&local_2034,ppuVar12,param_5 + 1);
        if (local_2034 == 1) {
          local_2040 = (undefined4 **)0x2;
          local_203c = &DAT_01d27a70;
        }
        else {
          FUN_01980058(&local_2040,local_2030,&local_2050);
        }
      }
      else {
        local_2038 = &local_2050;
        FUN_019a0974(&local_2040,param_4,param_5,&local_2038);
      }
      puVar2 = local_203c;
      if (((char)local_2040 == '\x04') || (((uint)local_2040 & 0xff) == 4)) {
        FUN_01bed93e(&local_2028,0,0x68);
        uVar17 = FUN_01bf05c2(puVar2,&local_2028);
        puVar15 = local_2028;
        uVar18 = CONCAT44((int)((ulonglong)uVar17 >> 0x20),local_2018);
        if ((int)uVar17 == -1) {
          puVar4 = (undefined4 *)FUN_01be3244();
          puVar4 = (undefined4 *)*puVar4;
        }
        else {
          uVar11 = (uint)local_2018 & 0xf000;
          if (uVar11 != 0x8000) {
LAB_00ea9408:
            if (puVar2 != (undefined4 *)0xffffffff) {
              if ((local_1ff8 == 0 && local_1ff4 == 0) || (uVar11 != 0x8000)) {
                puVar15 = (undefined4 *)0x0;
                iVar3 = 0;
                iVar13 = 0;
                if (local_1ff8 != 0 || local_1ff4 != 0) {
LAB_00ea94c4:
                  if (uVar11 == 0x1000 || uVar11 == 0xc000) {
                    iVar13 = iVar3;
                  }
                  else {
                    FUN_019ad75c(&local_2028,puVar1,puVar2);
                    uVar11 = 1;
                    if (3 < ((uint)local_2028 & 0xff)) {
                      uVar11 = ((uint)local_2028 & 0xff) - 4;
                    }
                    if ((uVar11 & 0xff) != 2) {
                      if ((uVar11 & 0xff) != 1) {
                        bVar16 = CARRY4((uint)local_2020,(uint)puVar15);
                        local_2020 = (undefined4 *)((int)local_2020 + (int)puVar15);
                        local_201c = local_201c + iVar3 + (uint)bVar16;
                        goto LAB_00ea9550;
                      }
                      goto LAB_00ea9518;
                    }
                    bVar16 = CARRY4((uint)local_2020,(uint)puVar15);
                    puVar15 = (undefined4 *)((int)local_2020 + (int)puVar15);
                    iVar13 = local_201c + iVar3 + (uint)bVar16;
                  }
                }
                uVar11 = 0;
                iVar3 = 0;
                do {
                  while (puVar5 = (undefined1 *)FUN_01bf0424(puVar1,&local_2028,0x2000),
                        puVar5 != &DAT_ffffffff) {
                    if (puVar5 == (undefined1 *)0x0) {
                      *param_1 = 0;
                      param_1[2] = uVar11 + (int)puVar15;
                      param_1[3] = iVar3 + iVar13 + (uint)CARRY4(uVar11,(uint)puVar15);
                      goto LAB_00ea96c4;
                    }
                    ppuVar12 = &local_2028;
                    puVar14 = puVar5;
                    do {
                      puVar7 = (undefined1 *)FUN_01bf053e(puVar2,ppuVar12,puVar14);
                      if (puVar7 == &DAT_ffffffff) {
                        puVar4 = (undefined4 *)FUN_01be3244();
                        local_2050 = local_2050 & 0xffffff00;
                        local_204c = (undefined1 *)*puVar4;
                        if ((undefined1 *)*puVar4 != &SUB_00000004) {
                          puVar6 = &local_2050;
                          goto LAB_00ea9654;
                        }
                      }
                      else {
                        local_204c = puVar7;
                        local_2050 = CONCAT31(local_2050._1_3_,4);
                        if (puVar7 == (undefined1 *)0x0) {
                          puVar6 = &DAT_01d2e7c8;
LAB_00ea9654:
                          uVar9 = *puVar6;
                          if ((uVar9 & 0xff) != 4) {
                            uVar10 = puVar6[1];
                            goto LAB_00ea969c;
                          }
                          break;
                        }
                        if (puVar14 < puVar7) {
                    /* WARNING: Subroutine does not return */
                          FUN_012faff4(puVar7,puVar14,puVar14,&DAT_01d27754);
                        }
                        ppuVar12 = (undefined4 **)((int)ppuVar12 + (int)puVar7);
                        puVar14 = puVar14 + -(int)puVar7;
                      }
                    } while (puVar14 != (undefined1 *)0x0);
                    bVar16 = CARRY4(uVar11,(uint)puVar5);
                    uVar11 = uVar11 + (int)puVar5;
                    iVar3 = iVar3 + (uint)bVar16;
                  }
                  puVar6 = (uint *)FUN_01be3244();
                  uVar10 = *puVar6;
                } while (uVar10 == 4);
                uVar9 = 0;
LAB_00ea969c:
                *param_1 = 1;
                *puVar8 = uVar9;
                param_1[2] = uVar10;
              }
              else {
                FUN_019ad358(&local_2028,puVar1,puVar2);
                uVar9 = 1;
                if (3 < ((uint)local_2028 & 0xff)) {
                  uVar9 = ((uint)local_2028 & 0xff) - 4;
                }
                if ((uVar9 & 0xff) == 0) {
LAB_00ea9550:
                  bVar16 = false;
                  local_2024 = local_201c;
                  local_2028 = local_2020;
                }
                else {
                  if ((uVar9 & 0xff) != 1) {
                    iVar3 = local_201c;
                    puVar15 = local_2020;
                    goto LAB_00ea94c4;
                  }
LAB_00ea9518:
                  bVar16 = true;
                }
                if (bVar16) {
                  *param_1 = 1;
                  *puVar8 = (uint)local_2028;
                  param_1[2] = local_2024;
                }
                else {
                  *param_1 = 0;
                  param_1[2] = local_2028;
                  param_1[3] = local_2024;
                }
              }
LAB_00ea96c4:
              FUN_01bf01d6(puVar2);
              goto LAB_00ea96cc;
            }
            puVar4 = puVar15;
            goto LAB_00ea9494;
          }
          do {
            uVar18 = FUN_01bea9c6(puVar2,puVar5);
            if ((undefined1 *)uVar18 != &DAT_ffffffff) goto LAB_00ea9408;
            puVar4 = (undefined4 *)FUN_01be3244();
            puVar4 = (undefined4 *)*puVar4;
          } while (puVar4 == (undefined4 *)0x4);
        }
        FUN_01bf01d6(puVar2);
        uVar18 = 0;
      }
      else {
        uVar18 = CONCAT44((uint)local_2040 >> 8,local_2040);
        puVar4 = local_203c;
      }
LAB_00ea9494:
      *puVar8 = (uint)uVar18 & 0xff | (int)((ulonglong)uVar18 >> 0x20) << 8;
      param_1[2] = puVar4;
      *param_1 = 1;
LAB_00ea96cc:
      FUN_01bf01d6(puVar1);
      return;
    }
  }
  uVar11 = 0;
  local_2040 = ppuVar12;
  local_203c = local_2028;
LAB_00ea9340:
  *puVar8 = (uint)local_2040 & 0xff | uVar11 << 8;
  param_1[2] = local_203c;
  *param_1 = 1;
  return;
}

