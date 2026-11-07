// FUN_012f5888 @ 012f5888 size=2164 calls_out=7 calls_in=0
// strings: dependencyabort request body | options

void FUN_012f5888(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 **local_d0;
  undefined4 *local_cc;
  undefined *local_c8;
  undefined4 uStack_c4;
  int local_48;
  undefined4 *local_44;
  undefined4 local_40;
  int local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 **local_28;
  
  piVar4 = *(int **)*param_1;
  *(undefined4 *)*param_1 = 0;
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac42c);
  }
  local_40 = 0;
  local_48 = 0;
  local_44 = (undefined4 *)&DAT_00000004;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_0130f7f4;
    puVar1[1] = &DAT_012f64b4;
    local_d0 = (undefined4 **)0x6;
    local_c8 = &DAT_0188e4d4;
    local_cc = puVar1;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    *puVar1 = local_d0;
    puVar1[1] = local_cc;
    puVar1[2] = local_c8;
    puVar1[3] = uStack_c4;
    FUN_0132f244(&local_48);
    puVar3 = local_44;
    *local_44 = &DAT_00568d68;
    local_44[1] = 4;
    local_44[2] = puVar1;
    local_44[3] = &DAT_0188da5c;
    local_40 = 1;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &LAB_01324b40;
      puVar1[1] = &LAB_012f64b8;
      local_d0 = (undefined4 **)0x6;
      local_c8 = &DAT_0188e4d4;
      local_cc = puVar1;
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x10);
      }
      *puVar1 = local_d0;
      puVar1[1] = local_cc;
      puVar1[2] = local_c8;
      puVar1[3] = uStack_c4;
      if (local_48 == 1) {
        FUN_0132f244(&local_48);
        puVar3 = local_44;
      }
      puVar3[5] = 7;
      puVar3[4] = &DAT_003b7c43;
      puVar3[6] = puVar1;
      local_40 = 2;
      puVar3[7] = &DAT_0188da5c;
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &LAB_012f64c0;
        puVar1[1] = &LAB_012f64c8;
        local_c8 = &DAT_0188e1d0;
        local_d0 = (undefined4 **)0x7;
        local_cc = puVar1;
        puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
        if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x10);
        }
        *puVar1 = local_d0;
        puVar1[1] = local_cc;
        puVar1[2] = local_c8;
        puVar1[3] = uStack_c4;
        if (local_48 == 2) {
          FUN_0132f244(&local_48);
          puVar3 = local_44;
        }
        puVar3[8] = "dependencyabort request body";
        puVar3[9] = 10;
        puVar3[10] = puVar1;
        puVar3[0xb] = &DAT_0188da5c;
        local_40 = 3;
        puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = &LAB_012fec30;
          puVar1[1] = &LAB_012f64d0;
          local_d0 = (undefined4 **)0x7;
          local_c8 = &DAT_0188da48;
          local_cc = puVar1;
          puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
          if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x10);
          }
          *puVar1 = local_d0;
          puVar1[1] = local_cc;
          puVar1[2] = local_c8;
          puVar1[3] = uStack_c4;
          if (local_48 == 3) {
            FUN_0132f244(&local_48);
            puVar3 = local_44;
          }
          puVar3[0xc] = &DAT_003b7c4a;
          puVar3[0xd] = 0x11;
          puVar3[0xe] = puVar1;
          puVar3[0xf] = &DAT_0188da5c;
          local_40 = 4;
          puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = &LAB_012f64d8;
            puVar1[1] = &LAB_012f64e0;
            local_d0 = (undefined4 **)0x7;
            local_c8 = &DAT_0188da48;
            local_cc = puVar1;
            puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
            if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x10);
            }
            *puVar1 = local_d0;
            puVar1[1] = local_cc;
            puVar1[2] = local_c8;
            puVar1[3] = uStack_c4;
            if (local_48 == 4) {
              FUN_0132f244(&local_48);
              puVar3 = local_44;
            }
            puVar3[0x10] = &DAT_003b7c5b;
            puVar3[0x11] = 0xf;
            puVar3[0x12] = puVar1;
            puVar3[0x13] = &DAT_0188da5c;
            local_40 = 5;
            puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = &LAB_012f64e8;
              puVar1[1] = &LAB_012f64f0;
              local_d0 = (undefined4 **)0x7;
              local_c8 = &DAT_0188e3f0;
              local_cc = puVar1;
              puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
              if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,0x10);
              }
              *puVar1 = local_d0;
              puVar1[1] = local_cc;
              puVar1[2] = local_c8;
              puVar1[3] = uStack_c4;
              if (local_48 == 5) {
                FUN_0132f244(&local_48);
                puVar3 = local_44;
              }
              puVar3[0x14] = &DAT_003b7c6a;
              puVar3[0x15] = 0xc;
              puVar3[0x16] = puVar1;
              puVar3[0x17] = &DAT_0188da5c;
              local_40 = 6;
              puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
              if (puVar1 != (undefined4 *)0x0) {
                *puVar1 = &LAB_012f64f8;
                puVar1[1] = &LAB_012f6500;
                local_d0 = (undefined4 **)0x7;
                local_c8 = &DAT_0188e3c8;
                local_cc = puVar1;
                puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
                if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(4,0x10);
                }
                *puVar1 = local_d0;
                puVar1[1] = local_cc;
                puVar1[2] = local_c8;
                puVar1[3] = uStack_c4;
                if (local_48 == 6) {
                  FUN_0132f244(&local_48);
                  puVar3 = local_44;
                }
                puVar3[0x18] = &DAT_003b7be4;
                puVar3[0x19] = 9;
                puVar3[0x1a] = puVar1;
                puVar3[0x1b] = &DAT_0188da5c;
                local_40 = 7;
                puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                if (puVar1 != (undefined4 *)0x0) {
                  *puVar1 = &LAB_012f6508;
                  puVar1[1] = &LAB_012f6510;
                  local_c8 = &DAT_0188e1e4;
                  local_d0 = (undefined4 **)0x7;
                  local_cc = puVar1;
                  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
                  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600874(4,0x10);
                  }
                  *puVar1 = local_d0;
                  puVar1[1] = local_cc;
                  puVar1[2] = local_c8;
                  puVar1[3] = uStack_c4;
                  if (local_48 == 7) {
                    FUN_0132f244(&local_48);
                    puVar3 = local_44;
                  }
                  puVar3[0x1d] = 7;
                  puVar3[0x1c] = &DAT_003b7c76;
                  puVar3[0x1e] = puVar1;
                  puVar3[0x1f] = &DAT_0188da5c;
                  local_40 = 8;
                  puVar1 = (undefined4 *)thunk_FUN_016d4a50();
                  if (puVar1 != (undefined4 *)0x0) {
                    *puVar1 = &LAB_012f6518;
                    puVar1[1] = &LAB_012f6520;
                    local_c8 = &DAT_0188e150;
                    local_d0 = (undefined4 **)0x7;
                    local_cc = puVar1;
                    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
                    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00600874(4,0x10);
                    }
                    *puVar1 = local_d0;
                    puVar1[1] = local_cc;
                    puVar1[2] = local_c8;
                    puVar1[3] = uStack_c4;
                    if (local_48 == 8) {
                      FUN_0132f244(&local_48);
                      puVar3 = local_44;
                    }
                    local_40 = 9;
                    puVar3[0x20] = &DAT_003b7bd0;
                    puVar3[0x21] = 9;
                    puVar3[0x22] = puVar1;
                    puVar3[0x23] = &DAT_0188da5c;
                    puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                    if (puVar1 != (undefined4 *)0x0) {
                      *puVar1 = &LAB_012f6528;
                      puVar1[1] = &LAB_012f6530;
                      local_d0 = (undefined4 **)0x6;
                      local_c8 = &DAT_0188e5f4;
                      local_cc = puVar1;
                      puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
                      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00600874(4,0x10);
                      }
                      *puVar1 = local_d0;
                      puVar1[1] = local_cc;
                      puVar1[2] = local_c8;
                      puVar1[3] = uStack_c4;
                      if (local_48 == 9) {
                        FUN_0132f244(&local_48);
                        puVar3 = local_44;
                      }
                      puVar3[0x24] = "options";
                      puVar3[0x25] = 7;
                      puVar3[0x26] = puVar1;
                      puVar3[0x27] = &DAT_0188da5c;
                      local_40 = 10;
                      puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                      if (puVar1 != (undefined4 *)0x0) {
                        *puVar1 = &LAB_012fec90;
                        puVar1[1] = &LAB_012f6538;
                        local_d0 = (undefined4 **)0x6;
                        local_c8 = &DAT_0188e6a8;
                        local_cc = puVar1;
                        puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
                        if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00600874(4,0x10);
                        }
                        *puVar1 = local_d0;
                        puVar1[1] = local_cc;
                        puVar1[2] = local_c8;
                        puVar1[3] = uStack_c4;
                        if (local_48 == 10) {
                          FUN_0132f244(&local_48);
                          puVar3 = local_44;
                        }
                        puVar3[0x28] = &DAT_00565350;
                        puVar3[0x29] = 0x10;
                        puVar3[0x2a] = puVar1;
                        puVar3[0x2b] = &DAT_0188da5c;
                        local_40 = 0xb;
                        puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                        if (puVar1 != (undefined4 *)0x0) {
                          *puVar1 = &LAB_012f6540;
                          puVar1[1] = &LAB_012f6548;
                          local_d0 = (undefined4 **)&DAT_00000006;
                          local_c8 = &DAT_0188e4d4;
                          local_cc = puVar1;
                          puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
                          if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00600874(4,0x10);
                          }
                          *puVar1 = local_d0;
                          puVar1[1] = local_cc;
                          puVar1[2] = local_c8;
                          puVar1[3] = uStack_c4;
                          if (local_48 == 0xb) {
                            FUN_0132f244(&local_48);
                            puVar3 = local_44;
                          }
                          puVar3[0x2c] = &DAT_003b7c7d;
                          puVar3[0x2d] = 6;
                          puVar3[0x2e] = puVar1;
                          puVar3[0x2f] = &DAT_0188da5c;
                          local_40 = 0xc;
                          local_30 = 0xc;
                          local_34 = local_44;
                          local_38 = local_48;
                          local_2c = &DAT_018d88d4;
                          DataMemoryBarrier(0xb);
                          if (DAT_018d88d4 != 0) {
                            local_28 = &local_2c;
                            local_d0 = &local_28;
                            FUN_015eedc4(&DAT_018d88d4,0,&local_d0,&DAT_0188f000,&DAT_0188e9dc);
                          }
                          FUN_0133b670(&local_d0,&DAT_003b7c83,0x13,&local_38,DAT_018d88d8,
                                       &DAT_0188f908);
                          iVar2 = thunk_FUN_016d4a50(0x88);
                          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00600874(8,0x88);
                          }
                          FUN_016dd1aa(iVar2,&local_d0,0x88);
                          *(int *)(*piVar4 + 4) = iVar2;
                          return;
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
                    /* WARNING: Subroutine does not return */
  FUN_00600874(4,8);
}

