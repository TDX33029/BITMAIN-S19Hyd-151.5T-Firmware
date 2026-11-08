// FUN_01317a54 @ 01317a54 size=2020 calls_out=7 calls_in=0
// strings: options

void FUN_01317a54(undefined4 *param_1)

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
  undefined4 *local_28;
  undefined4 **local_24;
  
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
    *puVar1 = &LAB_01324b40;
    puVar1[1] = &LAB_013185a0;
    local_d0 = (undefined4 **)0x6;
    local_c8 = &DAT_0188e4ac;
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
    local_44[3] = &DAT_0188dcc4;
    *local_44 = &DAT_00568d68;
    local_44[1] = 4;
    local_44[2] = puVar1;
    local_40 = 1;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &DAT_0130f7f4;
      puVar1[1] = &DAT_013185a8;
      local_d0 = (undefined4 **)0x6;
      local_c8 = &DAT_0188dcb0;
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
      puVar3[5] = 6;
      puVar3[4] = &DAT_003e873a;
      puVar3[6] = puVar1;
      local_40 = 2;
      puVar3[7] = &DAT_0188dcc4;
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &LAB_013185ac;
        puVar1[1] = &LAB_013185b4;
        local_c8 = &DAT_0188ddf4;
        local_d0 = (undefined4 **)0x6;
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
        puVar3[0xb] = &DAT_0188dcc4;
        puVar3[8] = &DAT_003b7cf4;
        puVar3[9] = 5;
        puVar3[10] = puVar1;
        local_40 = 3;
        puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = &LAB_013185bc;
          puVar1[1] = &LAB_013185c4;
          local_d0 = (undefined4 **)0x6;
          local_c8 = &DAT_0188dde0;
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
          puVar3[0xf] = &DAT_0188dcc4;
          local_40 = 4;
          puVar3[0xc] = &DAT_005680b8;
          puVar3[0xd] = 4;
          puVar3[0xe] = puVar1;
          puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = &LAB_012f64c0;
            puVar1[1] = &LAB_013185cc;
            local_d0 = (undefined4 **)0x6;
            local_c8 = &DAT_0188e4ac;
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
            puVar3[0x13] = &DAT_0188dcc4;
            puVar3[0x10] = &DAT_003b7cf9;
            puVar3[0x11] = 9;
            puVar3[0x12] = puVar1;
            local_40 = 5;
            puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = &LAB_012fec30;
              puVar1[1] = &LAB_013185d4;
              local_d0 = (undefined4 **)0x6;
              local_c8 = &DAT_0188e4ac;
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
              puVar3[0x17] = &DAT_0188dcc4;
              puVar3[0x14] = &DAT_0056a858;
              puVar3[0x15] = 8;
              puVar3[0x16] = puVar1;
              local_40 = 6;
              puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
              if (puVar1 != (undefined4 *)0x0) {
                *puVar1 = &LAB_012fec40;
                puVar1[1] = &LAB_013185dc;
                local_c8 = &DAT_0188e4ac;
                local_d0 = (undefined4 **)0x6;
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
                puVar3[0x1b] = &DAT_0188dcc4;
                puVar3[0x18] = &DAT_003b7d02;
                puVar3[0x19] = 0xd;
                puVar3[0x1a] = puVar1;
                local_40 = 7;
                puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                if (puVar1 != (undefined4 *)0x0) {
                  *puVar1 = &LAB_013233d8;
                  puVar1[1] = &LAB_013185e4;
                  local_d0 = (undefined4 **)0x6;
                  local_c8 = &DAT_0188dcb0;
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
                  puVar3[0x1f] = &DAT_0188dcc4;
                  puVar3[0x1c] = &DAT_003b7d0f;
                  puVar3[0x1d] = 0xb;
                  puVar3[0x1e] = puVar1;
                  local_40 = 8;
                  puVar1 = (undefined4 *)thunk_FUN_016d4a50();
                  if (puVar1 != (undefined4 *)0x0) {
                    *puVar1 = &LAB_013185ec;
                    puVar1[1] = &LAB_013185f4;
                    local_d0 = (undefined4 **)0x6;
                    local_c8 = &DAT_0188e4ac;
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
                    puVar3[0x23] = &DAT_0188dcc4;
                    local_40 = 9;
                    puVar3[0x20] = &DAT_003b7d1a;
                    puVar3[0x21] = 9;
                    puVar3[0x22] = puVar1;
                    puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                    if (puVar1 != (undefined4 *)0x0) {
                      *puVar1 = &LAB_012fec58;
                      puVar1[1] = &LAB_013185fc;
                      local_d0 = (undefined4 **)0x6;
                      local_c8 = &DAT_0188e680;
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
                      puVar3[0x27] = &DAT_0188dcc4;
                      puVar3[0x24] = "options";
                      puVar3[0x25] = 7;
                      puVar3[0x26] = puVar1;
                      local_40 = 10;
                      puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                      if (puVar1 != (undefined4 *)0x0) {
                        *puVar1 = &LAB_01318604;
                        puVar1[1] = &LAB_0131860c;
                        local_d0 = (undefined4 **)&DAT_00000006;
                        local_c8 = &DAT_0188e0ac;
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
                        puVar3[0x28] = &DAT_003b7d23;
                        puVar3[0x29] = 0xf;
                        puVar3[0x2a] = puVar1;
                        puVar3[0x2b] = &DAT_0188dcc4;
                        local_40 = 0xb;
                        local_30 = 0xb;
                        local_34 = local_44;
                        local_38 = local_48;
                        local_28 = &DAT_018d88d4;
                        DataMemoryBarrier(0xb);
                        if (DAT_018d88d4 != 0) {
                          local_24 = &local_28;
                          local_d0 = &local_24;
                          FUN_015eedc4(&DAT_018d88d4,0,&local_d0,&DAT_0188f000,&DAT_0188e9dc);
                        }
                        FUN_0133b670(&local_d0,&DAT_003b7d32,0x14,&local_38,DAT_018d88d8,
                                     &DAT_0188f928);
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
                    /* WARNING: Subroutine does not return */
  FUN_00600874(4,8);
}

