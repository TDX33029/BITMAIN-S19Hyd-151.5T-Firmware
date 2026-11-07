// FUN_009ecd50 @ 009ecd50 size=1952 calls_out=18 calls_in=0
// strings: stderr

void FUN_009ecd50(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  code *pcVar10;
  undefined4 uVar11;
  uint *extraout_r2;
  undefined4 uVar12;
  uint *puVar13;
  undefined4 uVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined4 *local_8c;
  undefined4 *local_88;
  undefined4 local_68;
  undefined4 *local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  code *local_54;
  char *local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 *local_3c;
  char **local_34;
  undefined4 *local_30;
  uint *local_2c;
  code *local_28;
  
  uVar11 = *param_1;
  uVar12 = param_1[1];
  uVar19 = thunk_FUN_016de0ee(param_1,0x240,param_1[4]);
  puVar5 = (uint *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
  puVar15 = extraout_r2 + 2;
  do {
    while (FUN_00a01438(&local_34,uVar11,uVar12), puVar13 = local_2c, puVar17 = local_30,
          local_34 != (char **)0x80000001) {
      if (local_34 == (char **)0x80000000) {
        uVar16 = 3;
        goto LAB_009ed2f0;
      }
      uVar16 = *puVar5;
      uVar18 = puVar5[1];
      if (uVar16 == 0 && uVar18 == 0) {
        ClearExclusiveLocal();
        uVar6 = DAT_018dd9a8;
        uVar8 = DAT_018dd9ac;
        do {
          uVar3 = DAT_018dd9ac;
          uVar2 = DAT_018dd9a8;
          if (uVar6 == 0xffffffff && uVar8 == 0xffffffff) {
            FUN_015ee8c8();
LAB_009ed50c:
                    /* WARNING: Does not return */
            pcVar10 = (code *)software_udf(0xfdee,0x9ed50c);
            (*pcVar10)();
          }
          uVar16 = uVar6 + 1;
          uVar18 = uVar8 + (0xfffffffe < uVar6);
          if (DAT_018dd9a8 == uVar6 && DAT_018dd9ac == uVar8) {
            bVar1 = (bool)hasExclusiveAccess(0x18dd9a8);
            if (bVar1) {
              DAT_018dd9a8 = uVar16;
              DAT_018dd9ac = uVar18;
            }
            bVar4 = 0;
            if (bVar1) {
              bVar4 = 0xff;
            }
          }
          else {
            bVar4 = 0;
            ClearExclusiveLocal();
          }
          uVar6 = uVar2;
          uVar8 = uVar3;
        } while (!(bool)(bVar4 & 1));
        *puVar5 = uVar16;
        puVar5[1] = uVar18;
      }
      ClearExclusiveLocal();
      if (uVar16 == *extraout_r2 && uVar18 == extraout_r2[1]) {
        uVar16 = extraout_r2[3] + 1;
        if (extraout_r2[3] == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00410806,0x26,&DAT_018aaff4);
        }
      }
      else {
        do {
          if (*puVar15 != 0) {
            ClearExclusiveLocal();
            FUN_015bf680(puVar15);
            goto LAB_009eceec;
          }
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = 1;
        DataMemoryBarrier(0xb);
LAB_009eceec:
        do {
          bVar1 = (bool)hasExclusiveAccess(extraout_r2);
        } while (!bVar1);
        *extraout_r2 = uVar16;
        extraout_r2[1] = uVar18;
        uVar16 = 1;
      }
      extraout_r2[3] = uVar16;
      FUN_015ee8f0(&local_40,extraout_r2,puVar17,puVar13);
      uVar16 = extraout_r2[3];
      extraout_r2[3] = uVar16 - 1;
      if (uVar16 - 1 != 0) {
LAB_009ecf5c:
        if ((char)local_40 != '\x04') goto LAB_009ecfb8;
LAB_009ecf68:
        uVar16 = 2;
joined_r0x009ecf74:
        if ((-0x7fffffff < (int)local_34) && (local_34 != (char **)0x0)) {
          thunk_FUN_016d3fb4(local_30);
        }
        if (uVar16 == 2) {
          local_88 = local_8c;
LAB_009ed008:
          FUN_00a02968(&local_34,uVar11,uVar12);
          puVar13 = local_2c;
          puVar17 = local_30;
          if (local_34 == (char **)0x80000000) {
            uVar16 = 3;
          }
          else {
            if (local_34 != (char **)0x80000001) {
              uVar16 = *puVar5;
              uVar18 = puVar5[1];
              if (uVar16 == 0 && uVar18 == 0) {
                ClearExclusiveLocal();
                uVar6 = DAT_018dd9a8;
                uVar8 = DAT_018dd9ac;
                do {
                  uVar3 = DAT_018dd9ac;
                  uVar2 = DAT_018dd9a8;
                  if (uVar6 == 0xffffffff && uVar8 == 0xffffffff) {
                    FUN_015ee8c8();
                    goto LAB_009ed50c;
                  }
                  uVar16 = uVar6 + 1;
                  uVar18 = uVar8 + (0xfffffffe < uVar6);
                  if (DAT_018dd9a8 == uVar6 && DAT_018dd9ac == uVar8) {
                    bVar1 = (bool)hasExclusiveAccess(0x18dd9a8);
                    if (bVar1) {
                      DAT_018dd9a8 = uVar16;
                      DAT_018dd9ac = uVar18;
                    }
                    bVar4 = 0;
                    if (bVar1) {
                      bVar4 = 0xff;
                    }
                  }
                  else {
                    bVar4 = 0;
                    ClearExclusiveLocal();
                  }
                  uVar6 = uVar2;
                  uVar8 = uVar3;
                } while (!(bool)(bVar4 & 1));
                *puVar5 = uVar16;
                puVar5[1] = uVar18;
              }
              ClearExclusiveLocal();
              if (uVar16 == *extraout_r2 && uVar18 == extraout_r2[1]) {
                uVar16 = extraout_r2[3] + 1;
                if (extraout_r2[3] == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8(&DAT_00410806,0x26,&DAT_018aaff4);
                }
              }
              else {
                do {
                  if (*puVar15 != 0) {
                    ClearExclusiveLocal();
                    FUN_015bf680(puVar15);
                    goto LAB_009ed118;
                  }
                  bVar1 = (bool)hasExclusiveAccess(puVar15);
                } while (!bVar1);
                *puVar15 = 1;
                DataMemoryBarrier(0xb);
LAB_009ed118:
                do {
                  bVar1 = (bool)hasExclusiveAccess(extraout_r2);
                } while (!bVar1);
                *extraout_r2 = uVar16;
                extraout_r2[1] = uVar18;
                uVar16 = 1;
              }
              extraout_r2[3] = uVar16;
              if (extraout_r2[4] != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb715c(&DAT_018ab4fc);
              }
              puVar7 = (undefined4 *)0xffffffff;
              uVar16 = 4;
              extraout_r2[4] = 0xffffffff;
              while (puVar13 != (undefined4 *)0x0) {
                while (puVar7 = (undefined4 *)FUN_016e034e(2,puVar17,puVar13),
                      puVar7 != (undefined4 *)0xffffffff) {
                  local_40 = CONCAT31(local_40._1_3_,4);
                  if (puVar7 == (undefined4 *)0x0) {
                    puVar7 = &DAT_018aeae8;
                    puVar9 = &DAT_018aeaf8;
                    goto LAB_009ed24c;
                  }
                  if (puVar13 < puVar7) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa36c(puVar7,puVar13,puVar13,&DAT_018aab58);
                  }
                  puVar17 = (undefined4 *)((int)puVar17 + (int)puVar7);
                  puVar13 = (uint *)((int)puVar13 - (int)puVar7);
                  if (puVar13 == (undefined4 *)0x0) goto LAB_009ed1b4;
                }
                puVar7 = (undefined4 *)FUN_016d2bc8();
                puVar7 = (undefined4 *)*puVar7;
                local_40 = local_40 & 0xffffff00;
                if (puVar7 != (undefined4 *)&DAT_00000004) goto LAB_009ed248;
              }
              goto LAB_009ed1b4;
            }
            uVar16 = (uint)local_30 & 0xff;
          }
          local_8c = local_88;
        }
        goto LAB_009ed2f0;
      }
      do {
        bVar1 = (bool)hasExclusiveAccess(extraout_r2);
      } while (!bVar1);
      *extraout_r2 = 0;
      extraout_r2[1] = 0;
      DataMemoryBarrier(0xb);
      do {
        uVar16 = *puVar15;
        bVar1 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar1);
      *puVar15 = 0;
      if (uVar16 != 2) goto LAB_009ecf5c;
      FUN_016d6968(0xf0,puVar15,0x81,1);
      if ((char)local_40 == '\x04') goto LAB_009ecf68;
LAB_009ecfb8:
      local_88 = local_3c;
      uVar16 = (local_40 & 0xffff) >> 8;
      puVar13 = (uint *)(local_40 & 0xff);
      if (puVar13 == (uint *)&DAT_00000004) goto joined_r0x009ecf74;
      if ((-0x7fffffff < (int)local_34) && (local_34 != (char **)0x0)) {
        thunk_FUN_016d3fb4(local_30);
      }
LAB_009ed320:
      if (&SUB_00000002 < puVar13) {
        uVar14 = *local_88;
        puVar17 = (undefined4 *)local_88[1];
        pcVar10 = (code *)*puVar17;
        if (pcVar10 != (code *)0x0) {
          (*pcVar10)(uVar14);
        }
        if (puVar17[1] != 0) {
          thunk_FUN_016d3fb4(uVar14);
        }
        thunk_FUN_016d3fb4(local_88);
      }
    }
    uVar16 = 1;
LAB_009ed2f0:
    FUN_01603ee8(&local_34,extraout_r2);
    if ((char)local_34 != '\x04') {
      uVar16 = ((uint)local_34 & 0xffff) >> 8;
      puVar13 = (uint *)((uint)local_34 & 0xff);
      if (puVar13 != (uint *)&DAT_00000004) {
        local_88 = local_30;
        goto LAB_009ed320;
      }
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar16) {
    case 1:
    case 3:
      FUN_009ffc8c(param_1[2],param_1[3]);
      FUN_01603ee8(&local_68,param_1[4]);
      if ((char)local_68 != '\x04') {
        local_60 = local_68;
        local_58 = &local_60;
        local_5c = local_64;
        local_54 = FUN_015ef5b4;
        local_4c = 6;
        local_50 = "stderr";
        FUN_015ee5cc(&local_48,&DAT_018dd9d8,&DAT_0057312b,&local_58);
        puVar17 = local_5c;
        if ((char)local_48 != '\x04') {
          local_30 = &DAT_015bee04;
          local_34 = &local_50;
          local_40 = local_48;
          local_2c = &local_40;
          local_3c = (undefined4 *)local_44;
          local_28 = FUN_015ef5b4;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0056faa6,&local_34,&DAT_018aab78);
        }
        if ((char)local_60 == '\x03') {
          uVar11 = *local_5c;
          puVar7 = (undefined4 *)local_5c[1];
          pcVar10 = (code *)*puVar7;
          if (pcVar10 != (code *)0x0) {
            (*pcVar10)(uVar11);
          }
          if (puVar7[1] != 0) {
            thunk_FUN_016d3fb4(uVar11);
          }
          thunk_FUN_016d3fb4(puVar17);
        }
      }
      FUN_009ed690(param_1);
      return;
    }
  } while( true );
LAB_009ed248:
  puVar9 = &local_40;
LAB_009ed24c:
  uVar16 = *puVar9;
  if (puVar7 == (undefined4 *)&DAT_00000009) {
    puVar13 = (uint *)&DAT_00000004;
    puVar9 = (uint *)(uVar16 & 0xff);
  }
  if (puVar7 != (undefined4 *)&DAT_00000009 || puVar9 != (uint *)0x0) {
LAB_009ed1b4:
    puVar13 = (uint *)(uVar16 & 0xff);
    local_88 = puVar7;
  }
  uVar16 = extraout_r2[3];
  extraout_r2[3] = uVar16 - 1;
  extraout_r2[4] = extraout_r2[4] + 1;
  if (uVar16 - 1 == 0) {
    do {
      bVar1 = (bool)hasExclusiveAccess(extraout_r2);
    } while (!bVar1);
    *extraout_r2 = 0;
    extraout_r2[1] = 0;
    DataMemoryBarrier(0xb);
    do {
      uVar16 = *puVar15;
      bVar1 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar1);
    *puVar15 = 0;
    if (uVar16 == 2) {
      FUN_016d6968(0xf0,puVar15,0x81,1);
    }
  }
  if (puVar13 != (uint *)&DAT_00000004) {
    if ((-0x7fffffff < (int)local_34) && (local_34 != (char **)0x0)) {
      thunk_FUN_016d3fb4(local_30);
    }
    local_8c = local_88;
    goto LAB_009ed320;
  }
  if ((-0x7fffffff < (int)local_34) && (local_34 != (char **)0x0)) {
    thunk_FUN_016d3fb4(local_30);
  }
  goto LAB_009ed008;
}

