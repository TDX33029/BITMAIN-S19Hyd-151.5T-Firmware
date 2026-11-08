// FUN_01238114 @ 01238114 size=2720 calls_out=13 calls_in=148
// strings: 

undefined8 FUN_01238114(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  code *pcVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint **ppuVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  undefined8 uVar18;
  int *local_a8;
  uint local_a4;
  int local_a0;
  undefined4 local_9c;
  uint local_98;
  int local_94;
  undefined4 local_90;
  uint *local_8c;
  undefined4 local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  uint *local_74;
  uint *local_70;
  uint *local_6c;
  uint *local_68;
  uint *local_64;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  undefined4 local_50;
  uint *local_4c;
  undefined4 local_48;
  uint *local_44 [8];
  
  puVar12 = (uint *)param_1[3];
  if (puVar12 == (uint *)0x0) {
    DataMemoryBarrier(0xb);
    if (DAT_018da8bc != 0) {
      FUN_0120d52c();
    }
    do {
      iVar11 = *DAT_018da8b4;
      bVar1 = (bool)hasExclusiveAccess(DAT_018da8b4);
    } while (!bVar1);
    *DAT_018da8b4 = iVar11 + 1;
    if (-1 < iVar11) {
      return CONCAT44(DAT_018da8b8,DAT_018da8b4);
    }
LAB_01238bb4:
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xfdee,0x1238bb4);
    (*pcVar3)();
  }
  puVar5 = (uint *)puVar12[3];
  if (puVar5 != (uint *)0x0 || *param_1 != 0x80000001) {
    local_98 = 0;
    puVar15 = (uint *)&DAT_00000001;
    puVar16 = puVar12;
    puVar17 = param_1;
    if (*param_1 != 0x80000001) goto LAB_01238260;
    do {
      uVar9 = puVar17[1];
      puVar17 = puVar16;
      if (uVar9 == 0) {
        iVar11 = 2;
      }
      else {
        uVar13 = uVar9;
        if (99999 < uVar9) {
          uVar13 = uVar9 / 100000;
        }
        uVar10 = uVar13 + 0x5fff6 & uVar13 + 0x7ff9c ^ uVar13 + 0xdfc18 & uVar13 + 0x7d8f0;
        uVar13 = uVar10 >> 0x11;
        if (99999 < uVar9) {
          uVar13 = (uVar10 >> 0x11) + 5;
        }
        iVar11 = uVar13 + 2;
      }
      while( true ) {
        puVar16 = (uint *)puVar17[3];
        local_98 = iVar11 + local_98;
        if (puVar16 == (uint *)0x0) {
          if ((int)local_98 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(0,local_98);
          }
          if (local_98 == 0) {
            local_94 = 1;
            local_98 = 0;
          }
          else {
            local_94 = thunk_FUN_016d4a50(local_98);
            if (local_94 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,local_98);
            }
          }
          local_90 = 0;
          if (puVar15 <= &DAT_00000010) {
            FUN_016dd606(&local_88,0,0x3c);
            local_8c = param_1;
            ppuVar14 = (uint **)&local_88;
            if (puVar5 != (uint *)0x0) {
              puVar16 = (uint *)puVar5[3];
              local_88 = puVar12;
              ppuVar14 = &local_84;
              if (puVar16 != (uint *)0x0) {
                puVar12 = (uint *)puVar16[3];
                local_84 = puVar5;
                ppuVar14 = &local_80;
                if (puVar12 != (uint *)0x0) {
                  puVar5 = (uint *)puVar12[3];
                  local_80 = puVar16;
                  ppuVar14 = &local_7c;
                  if (puVar5 != (uint *)0x0) {
                    puVar16 = (uint *)puVar5[3];
                    local_7c = puVar12;
                    ppuVar14 = &local_78;
                    if (puVar16 != (uint *)0x0) {
                      puVar12 = (uint *)puVar16[3];
                      local_78 = puVar5;
                      ppuVar14 = &local_74;
                      if (puVar12 != (uint *)0x0) {
                        puVar5 = (uint *)puVar12[3];
                        local_74 = puVar16;
                        ppuVar14 = &local_70;
                        if (puVar5 != (uint *)0x0) {
                          puVar16 = (uint *)puVar5[3];
                          local_70 = puVar12;
                          ppuVar14 = &local_6c;
                          if (puVar16 != (uint *)0x0) {
                            puVar12 = (uint *)puVar16[3];
                            local_6c = puVar5;
                            ppuVar14 = &local_68;
                            if (puVar12 != (uint *)0x0) {
                              puVar5 = (uint *)puVar12[3];
                              local_68 = puVar16;
                              ppuVar14 = &local_64;
                              if (puVar5 != (uint *)0x0) {
                                puVar16 = (uint *)puVar5[3];
                                local_64 = puVar12;
                                ppuVar14 = &local_60;
                                if (puVar16 != (uint *)0x0) {
                                  puVar12 = (uint *)puVar16[3];
                                  local_60 = puVar5;
                                  ppuVar14 = &local_5c;
                                  if (puVar12 != (uint *)0x0) {
                                    puVar5 = (uint *)puVar12[3];
                                    local_5c = puVar16;
                                    ppuVar14 = &local_58;
                                    if (puVar5 != (uint *)0x0) {
                                      puVar16 = (uint *)puVar5[3];
                                      local_58 = puVar12;
                                      ppuVar14 = &local_54;
                                      if (puVar16 != (uint *)0x0) {
                                        local_54 = puVar5;
                                        ppuVar14 = (uint **)&local_50;
                                        if (puVar16[3] != 0) {
                                          local_50 = puVar16;
                                          ppuVar14 = &local_4c;
                                          if (*(int *)(puVar16[3] + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_00faa4a4(0x10,0x10,&DAT_0188ac28);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_012386a0;
          }
          uVar7 = 0;
          uVar9 = local_98;
          if ((puVar15 < (uint *)0x40000000) && (uVar9 = (int)puVar15 * 4, uVar9 < 0x7ffffffd)) {
            piVar4 = (int *)thunk_FUN_016d4a50(uVar9);
            if (piVar4 != (int *)0x0) {
              *piVar4 = (int)param_1;
              local_44[0] = (uint *)&DAT_00000001;
              local_4c = puVar15;
              local_48 = piVar4;
              goto LAB_012388e0;
            }
            uVar7 = 4;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar7,uVar9);
        }
        puVar15 = (uint *)((int)puVar15 + 1);
        if (*puVar17 == 0x80000001) break;
LAB_01238260:
        iVar11 = puVar17[2] + 1;
        puVar17 = puVar16;
      }
    } while( true );
  }
  uVar9 = param_1[1];
  if (uVar9 < 0x10) {
    DataMemoryBarrier(0xb);
    if (DAT_018d86e0 != 0) {
      FUN_0120d0c0();
    }
    piVar4 = *(int **)(&DAT_018d8660 + uVar9 * 8);
    do {
      iVar11 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar11 + 1;
    if (-1 < iVar11) {
      return *(undefined8 *)(&DAT_018d8660 + uVar9 * 8);
    }
    goto LAB_01238bb4;
  }
  iVar11 = 10;
  if (uVar9 < 10000) {
    if (99 < uVar9) goto LAB_01238454;
LAB_012383e8:
    iVar6 = iVar11;
    uVar13 = uVar9;
    if (9 < uVar9) goto LAB_012383f4;
LAB_01238498:
    iVar11 = iVar6 + -1;
    *(byte *)((int)local_44 + iVar6 + -0x49) = (byte)uVar13 | 0x30;
  }
  else {
    iVar6 = 0;
    uVar13 = uVar9;
    do {
      iVar11 = iVar6;
      uVar9 = uVar13 / 10000;
      uVar10 = (uint)((short)(uVar13 % 10000 >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_44 + iVar11 + -0x42) = *(undefined2 *)(&DAT_0040f4ca + uVar10 * 2);
      *(undefined2 *)((int)local_44 + iVar11 + -0x40) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar13 % 10000 + uVar10 * -100 & 0xffff) * 2);
      bVar1 = 99999999 < uVar13;
      iVar6 = iVar11 + -4;
      uVar13 = uVar9;
    } while (bVar1);
    iVar11 = iVar11 + 6;
    if (uVar9 < 100) goto LAB_012383e8;
LAB_01238454:
    iVar6 = iVar11 + -2;
    uVar13 = (uint)((short)((uVar9 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)((int)local_44 + iVar11 + -0x4a) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar9 + uVar13 * -100 & 0xffff) * 2);
    if (uVar13 < 10) goto LAB_01238498;
LAB_012383f4:
    iVar11 = iVar6 + -2;
    *(undefined2 *)((int)local_44 + iVar6 + -0x4a) = *(undefined2 *)(&DAT_0040f4ca + uVar13 * 2);
  }
  local_94 = 10 - iVar11;
  local_98 = (int)local_44 + iVar11 + -0x48;
  local_4c = &local_98;
  local_48 = &DAT_0157d360;
  FUN_00600d2c(&local_a4,&DAT_0058542c,&local_4c);
  uVar18 = FUN_011e1508(local_a0,local_9c);
  goto joined_r0x01238b5c;
LAB_012386a0:
  uVar9 = local_90;
  if (&local_8c != ppuVar14) {
    ppuVar14 = ppuVar14 + -1;
    if (*ppuVar14 != (uint *)0x0) {
      if (local_98 == local_90) {
        FUN_011cf828(&local_98,local_90,1,1,1);
      }
      puVar12 = *ppuVar14;
      uVar9 = uVar9 + 1;
      *(undefined1 *)(local_94 + local_90) = 0x2f;
      local_90 = uVar9;
      if (*puVar12 == 0x80000001) {
        uVar13 = puVar12[1];
        iVar11 = 10;
        if (uVar13 < 10000) {
          if (99 < uVar13) goto LAB_012387b8;
LAB_01238788:
          iVar6 = iVar11;
          uVar10 = uVar13;
          if (9 < uVar13) goto LAB_01238794;
LAB_012387f4:
          iVar11 = iVar6 + -1;
          *(byte *)((int)local_44 + iVar6 + -9) = (byte)uVar10 | 0x30;
        }
        else {
          iVar6 = 0;
          uVar10 = uVar13;
          do {
            iVar11 = iVar6;
            uVar13 = uVar10 / 10000;
            uVar2 = (uint)((short)(uVar10 % 10000 >> 2) * 0x147b) >> 0x11;
            *(undefined2 *)((int)local_44 + iVar11 + -2) =
                 *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
            *(undefined2 *)((int)local_44 + iVar11) =
                 *(undefined2 *)(&DAT_0040f4ca + (uVar10 % 10000 + uVar2 * -100 & 0xffff) * 2);
            bVar1 = 99999999 < uVar10;
            iVar6 = iVar11 + -4;
            uVar10 = uVar13;
          } while (bVar1);
          iVar11 = iVar11 + 6;
          if (uVar13 < 100) goto LAB_01238788;
LAB_012387b8:
          iVar6 = iVar11 + -2;
          uVar10 = (uint)((short)((uVar13 & 0xffff) >> 2) * 0x147b) >> 0x11;
          *(undefined2 *)((int)local_44 + iVar11 + -10) =
               *(undefined2 *)(&DAT_0040f4ca + (uVar13 + uVar10 * -100 & 0xffff) * 2);
          if (uVar10 < 10) goto LAB_012387f4;
LAB_01238794:
          iVar11 = iVar6 + -2;
          *(undefined2 *)((int)local_44 + iVar6 + -10) = *(undefined2 *)(&DAT_0040f4ca + uVar10 * 2)
          ;
        }
        uVar13 = 10 - iVar11;
        if (local_98 - uVar9 < uVar13) {
          FUN_011cf828(&local_98,uVar9,uVar13,1,1);
        }
        uVar9 = local_90;
        FUN_016dd1aa(local_94 + local_90,(int)local_44 + iVar11 + -8,uVar13);
        local_90 = uVar9 + uVar13;
      }
      else {
        FUN_01238c50(&local_98,puVar12[1],puVar12[2]);
      }
    }
    goto LAB_012386a0;
  }
  goto LAB_01238b3c;
  while( true ) {
    if (local_44[0] == local_4c) {
      FUN_011c4424(&local_4c);
      piVar4 = local_48;
    }
    piVar4[(int)puVar5] = (int)puVar12;
    local_44[0] = (uint *)((int)puVar5 + 1);
    puVar12 = (uint *)puVar12[3];
    if (puVar12 == (uint *)0x0) break;
LAB_012388e0:
    puVar5 = local_44[0];
    if (puVar12[3] == 0) break;
  }
  piVar4 = local_48;
  if (local_44[0] != (uint *)0x0) {
    local_a8 = local_48 + (int)local_44[0];
    do {
      uVar9 = local_90;
      if (local_98 == local_90) {
        FUN_011cf828(&local_98,local_90,1,1,1);
      }
      uVar9 = uVar9 + 1;
      local_a8 = local_a8 + -1;
      *(undefined1 *)(local_94 + local_90) = 0x2f;
      piVar8 = (int *)*local_a8;
      local_90 = uVar9;
      if (*piVar8 == -0x7fffffff) {
        uVar13 = piVar8[1];
        iVar11 = 10;
        if (uVar13 < 10000) {
          if (99 < uVar13) goto LAB_01238a60;
LAB_01238a2c:
          iVar6 = iVar11;
          uVar10 = uVar13;
          if (9 < uVar13) goto LAB_01238a38;
LAB_01238a98:
          iVar11 = iVar6 + -1;
          *(byte *)((int)local_44 + iVar6 + -0x49) = (byte)uVar10 | 0x30;
        }
        else {
          iVar6 = 0;
          uVar10 = uVar13;
          do {
            iVar11 = iVar6;
            uVar13 = uVar10 / 10000;
            uVar2 = (uint)((short)(uVar10 % 10000 >> 2) * 0x147b) >> 0x11;
            *(undefined2 *)((int)local_44 + iVar11 + -0x42) =
                 *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
            *(undefined2 *)((int)local_44 + iVar11 + -0x40) =
                 *(undefined2 *)(&DAT_0040f4ca + (uVar10 % 10000 + uVar2 * -100 & 0xffff) * 2);
            bVar1 = 99999999 < uVar10;
            iVar6 = iVar11 + -4;
            uVar10 = uVar13;
          } while (bVar1);
          iVar11 = iVar11 + 6;
          if (uVar13 < 100) goto LAB_01238a2c;
LAB_01238a60:
          iVar6 = iVar11 + -2;
          uVar10 = (uint)((short)((uVar13 & 0xffff) >> 2) * 0x147b) >> 0x11;
          *(undefined2 *)((int)local_44 + iVar11 + -0x4a) =
               *(undefined2 *)(&DAT_0040f4ca + (uVar13 + uVar10 * -100 & 0xffff) * 2);
          if (uVar10 < 10) goto LAB_01238a98;
LAB_01238a38:
          iVar11 = iVar6 + -2;
          *(undefined2 *)((int)local_44 + iVar6 + -0x4a) =
               *(undefined2 *)(&DAT_0040f4ca + uVar10 * 2);
        }
        uVar13 = 10 - iVar11;
        if (local_98 - uVar9 < uVar13) {
          FUN_011cf828(&local_98,uVar9,uVar13,1,1);
        }
        uVar9 = local_90;
        FUN_016dd1aa(local_94 + local_90,(int)local_44 + iVar11 + -0x48,uVar13);
        local_90 = uVar9 + uVar13;
      }
      else {
        FUN_01238c50(&local_98,piVar8[1],piVar8[2]);
      }
    } while (piVar4 != local_a8);
  }
  if (local_4c != (uint *)0x0) {
    thunk_FUN_016d3fb4(piVar4);
  }
LAB_01238b3c:
  iVar11 = local_94;
  uVar9 = local_98;
  uVar18 = FUN_011e1508(local_94,local_90);
  local_a0 = iVar11;
  local_a4 = uVar9;
joined_r0x01238b5c:
  if (local_a4 == 0) {
    return uVar18;
  }
  thunk_FUN_016d3fb4(local_a0);
  return uVar18;
}

