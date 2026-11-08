// FUN_012fd780 @ 012fd780 size=3572 calls_out=7 calls_in=0
// strings: cc_enable_arenasIncorrectVersion | php_class_prefix

void FUN_012fd780(undefined4 *param_1)

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
    *puVar1 = &DAT_0130f7f4;
    puVar1[1] = &DAT_012feb7c;
    local_d0 = (undefined4 **)0x6;
    local_c8 = &DAT_0188e538;
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
    *local_44 = &DAT_003b79fe;
    local_44[1] = 0xc;
    local_44[2] = puVar1;
    local_44[3] = &DAT_0188db0c;
    local_40 = 1;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &LAB_01324b40;
      puVar1[1] = &LAB_012feb80;
      local_d0 = (undefined4 **)0x6;
      local_c8 = &DAT_0188e538;
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
      }
      puVar3 = local_44;
      local_44[7] = &DAT_0188db0c;
      local_44[4] = &DAT_003b7a0a;
      local_44[5] = 0x14;
      local_44[6] = puVar1;
      local_40 = 2;
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &LAB_012feb88;
        puVar1[1] = &LAB_012feb90;
        local_d0 = (undefined4 **)0x6;
        local_c8 = &DAT_0188daf8;
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
        puVar3[0xb] = &DAT_0188db0c;
        puVar3[8] = &DAT_003b7a1e;
        puVar3[9] = 0x13;
        puVar3[10] = puVar1;
        local_40 = 3;
        puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = &LAB_012feb98;
          puVar1[1] = &LAB_012feba0;
          local_d0 = (undefined4 **)0x6;
          local_c8 = &DAT_0188daf8;
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
          puVar3[0xf] = &DAT_0188db0c;
          puVar3[0xc] = &DAT_003b7a31;
          puVar3[0xd] = 0x1d;
          puVar3[0xe] = puVar1;
          local_40 = 4;
          puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = &LAB_012feba8;
            puVar1[1] = &LAB_012febb0;
            local_d0 = (undefined4 **)0x6;
            local_c8 = &DAT_0188daf8;
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
            puVar3[0x13] = &DAT_0188db0c;
            puVar3[0x10] = &DAT_003b7a4e;
            puVar3[0x11] = 0x16;
            puVar3[0x12] = puVar1;
            local_40 = 5;
            puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = &LAB_012febb8;
              puVar1[1] = &LAB_012febc0;
              local_d0 = (undefined4 **)0x6;
              local_c8 = &DAT_0188dfd4;
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
              puVar3[0x17] = &DAT_0188db0c;
              puVar3[0x14] = &DAT_003b7a64;
              puVar3[0x15] = 0xc;
              puVar3[0x16] = puVar1;
              local_40 = 6;
              puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
              if (puVar1 != (undefined4 *)0x0) {
                *puVar1 = &LAB_012f64c0;
                puVar1[1] = &LAB_012febc8;
                local_c8 = &DAT_0188e538;
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
                puVar3[0x1b] = &DAT_0188db0c;
                puVar3[0x18] = &DAT_003b7a70;
                puVar3[0x19] = 10;
                puVar3[0x1a] = puVar1;
                local_40 = 7;
                puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                if (puVar1 != (undefined4 *)0x0) {
                  *puVar1 = &LAB_012febd0;
                  puVar1[1] = &LAB_012febd8;
                  local_d0 = (undefined4 **)0x6;
                  local_c8 = &DAT_0188daf8;
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
                  puVar3[0x1f] = &DAT_0188db0c;
                  puVar3[0x1c] = &DAT_003b7a7a;
                  puVar3[0x1d] = 0x13;
                  puVar3[0x1e] = puVar1;
                  local_40 = 8;
                  puVar1 = (undefined4 *)thunk_FUN_016d4a50();
                  if (puVar1 != (undefined4 *)0x0) {
                    *puVar1 = &LAB_012febe0;
                    puVar1[1] = &LAB_012febe8;
                    local_d0 = (undefined4 **)0x6;
                    local_c8 = &DAT_0188daf8;
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
                    puVar3[0x23] = &DAT_0188db0c;
                    puVar3[0x20] = &DAT_003b7a8d;
                    puVar3[0x21] = 0x15;
                    puVar3[0x22] = puVar1;
                    local_40 = 9;
                    puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                    if (puVar1 != (undefined4 *)0x0) {
                      *puVar1 = &LAB_012febf0;
                      puVar1[1] = &LAB_012febf8;
                      local_d0 = (undefined4 **)0x6;
                      local_c8 = &DAT_0188daf8;
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
                      puVar3[0x27] = &DAT_0188db0c;
                      puVar3[0x24] = &DAT_003b7aa2;
                      puVar3[0x25] = 0x13;
                      puVar3[0x26] = puVar1;
                      local_40 = 10;
                      puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                      if (puVar1 != (undefined4 *)0x0) {
                        *puVar1 = &LAB_012fec00;
                        puVar1[1] = &LAB_012fec08;
                        local_d0 = (undefined4 **)0x6;
                        local_c8 = &DAT_0188daf8;
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
                        puVar3[0x2b] = &DAT_0188db0c;
                        puVar3[0x28] = &DAT_003b7ab5;
                        puVar3[0x29] = 0x14;
                        puVar3[0x2a] = puVar1;
                        local_40 = 0xb;
                        puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                        if (puVar1 != (undefined4 *)0x0) {
                          *puVar1 = &LAB_012fec10;
                          puVar1[1] = &LAB_012fec18;
                          local_d0 = (undefined4 **)0x6;
                          local_c8 = &DAT_0188daf8;
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
                          puVar3[0x2f] = &DAT_0188db0c;
                          puVar3[0x2c] = &DAT_003e7b22;
                          puVar3[0x2d] = 10;
                          puVar3[0x2e] = puVar1;
                          local_40 = 0xc;
                          puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                          if (puVar1 != (undefined4 *)0x0) {
                            *puVar1 = &LAB_012fec20;
                            puVar1[1] = &LAB_012fec28;
                            local_d0 = (undefined4 **)0x6;
                            local_c8 = &DAT_0188daf8;
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
                            if (local_48 == 0xc) {
                              FUN_0132f244(&local_48);
                              puVar3 = local_44;
                            }
                            puVar3[0x33] = &DAT_0188db0c;
                            puVar3[0x30] = "cc_enable_arenasIncorrectVersion";
                            puVar3[0x31] = 0x10;
                            puVar3[0x32] = puVar1;
                            local_40 = 0xd;
                            puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                            if (puVar1 != (undefined4 *)0x0) {
                              *puVar1 = &LAB_012fec30;
                              puVar1[1] = &LAB_012fec38;
                              local_d0 = (undefined4 **)0x6;
                              local_c8 = &DAT_0188e538;
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
                              if (local_48 == 0xd) {
                                FUN_0132f244(&local_48);
                                puVar3 = local_44;
                              }
                              puVar3[0x37] = &DAT_0188db0c;
                              puVar3[0x34] = &DAT_003b7ac9;
                              puVar3[0x35] = 0x11;
                              puVar3[0x36] = puVar1;
                              local_40 = 0xe;
                              puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                              if (puVar1 != (undefined4 *)0x0) {
                                *puVar1 = &LAB_012fec40;
                                puVar1[1] = &LAB_012fec48;
                                local_d0 = (undefined4 **)0x6;
                                local_c8 = &DAT_0188e538;
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
                                if (local_48 == 0xe) {
                                  FUN_0132f244(&local_48);
                                  puVar3 = local_44;
                                }
                                puVar3[0x3b] = &DAT_0188db0c;
                                puVar3[0x38] = &DAT_00564c10;
                                puVar3[0x39] = 0x10;
                                puVar3[0x3a] = puVar1;
                                local_40 = 0xf;
                                puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                                if (puVar1 != (undefined4 *)0x0) {
                                  *puVar1 = &LAB_013185ec;
                                  puVar1[1] = &LAB_012fec50;
                                  local_d0 = (undefined4 **)0x6;
                                  local_c8 = &DAT_0188e538;
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
                                  if (local_48 == 0xf) {
                                    FUN_0132f244(&local_48);
                                    puVar3 = local_44;
                                  }
                                  puVar3[0x3f] = &DAT_0188db0c;
                                  puVar3[0x3c] = &DAT_003b7ada;
                                  puVar3[0x3d] = 0xc;
                                  puVar3[0x3e] = puVar1;
                                  local_40 = 0x10;
                                  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                                  if (puVar1 != (undefined4 *)0x0) {
                                    *puVar1 = &LAB_012fec58;
                                    puVar1[1] = &LAB_012fec60;
                                    local_d0 = (undefined4 **)0x6;
                                    local_c8 = &DAT_0188e538;
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
                                    if (local_48 == 0x10) {
                                      FUN_0132f244(&local_48);
                                      puVar3 = local_44;
                                    }
                                    puVar3[0x43] = &DAT_0188db0c;
                                    puVar3[0x40] = "php_class_prefix";
                                    puVar3[0x41] = 0x10;
                                    puVar3[0x42] = puVar1;
                                    local_40 = 0x11;
                                    puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                                    if (puVar1 != (undefined4 *)0x0) {
                                      *puVar1 = &LAB_0130c050;
                                      puVar1[1] = &LAB_012fec68;
                                      local_d0 = (undefined4 **)0x6;
                                      local_c8 = &DAT_0188e538;
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
                                      if (local_48 == 0x11) {
                                        FUN_0132f244(&local_48);
                                        puVar3 = local_44;
                                      }
                                      puVar3[0x47] = &DAT_0188db0c;
                                      puVar3[0x44] = &DAT_003b7ae6;
                                      puVar3[0x45] = 0xd;
                                      puVar3[0x46] = puVar1;
                                      local_40 = 0x12;
                                      puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                                      if (puVar1 != (undefined4 *)0x0) {
                                        *puVar1 = &LAB_012fec70;
                                        puVar1[1] = &LAB_012fec78;
                                        local_d0 = (undefined4 **)0x6;
                                        local_c8 = &DAT_0188e538;
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
                                        if (local_48 == 0x12) {
                                          FUN_0132f244(&local_48);
                                          puVar3 = local_44;
                                        }
                                        puVar3[0x4b] = &DAT_0188db0c;
                                        puVar3[0x48] = &DAT_003b7af3;
                                        puVar3[0x49] = 0x16;
                                        puVar3[0x4a] = puVar1;
                                        local_40 = 0x13;
                                        puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                                        if (puVar1 != (undefined4 *)0x0) {
                                          *puVar1 = &LAB_012fec80;
                                          puVar1[1] = &LAB_012fec88;
                                          local_d0 = (undefined4 **)0x6;
                                          local_c8 = &DAT_0188e538;
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
                                          if (local_48 == 0x13) {
                                            FUN_0132f244(&local_48);
                                            puVar3 = local_44;
                                          }
                                          puVar3[0x4f] = &DAT_0188db0c;
                                          puVar3[0x4c] = &DAT_003b7b09;
                                          puVar3[0x4d] = 0xc;
                                          puVar3[0x4e] = puVar1;
                                          local_40 = 0x14;
                                          puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
                                          if (puVar1 != (undefined4 *)0x0) {
                                            *puVar1 = &LAB_012fec90;
                                            puVar1[1] = &LAB_012fec98;
                                            local_d0 = (undefined4 **)&DAT_00000007;
                                            local_c8 = &DAT_0188e13c;
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
                                            if (local_48 == 0x14) {
                                              FUN_0132f244(&local_48);
                                              puVar3 = local_44;
                                            }
                                            puVar3[0x50] = &DAT_003b79df;
                                            puVar3[0x51] = 0x14;
                                            puVar3[0x52] = puVar1;
                                            puVar3[0x53] = &DAT_0188db0c;
                                            local_40 = 0x15;
                                            local_30 = 0x15;
                                            local_34 = local_44;
                                            local_38 = local_48;
                                            local_28 = &DAT_018d88d4;
                                            DataMemoryBarrier(0xb);
                                            if (DAT_018d88d4 != 0) {
                                              local_24 = &local_28;
                                              local_d0 = &local_24;
                                              FUN_015eedc4(&DAT_018d88d4,0,&local_d0,&DAT_0188f000,
                                                           &DAT_0188e9dc);
                                            }
                                            FUN_0133b670(&local_d0,&DAT_003b7b15,0xb,&local_38,
                                                         DAT_018d88d8,&DAT_0188f868);
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

