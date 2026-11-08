// FUN_012a1568 @ 012a1568 size=1424 calls_out=7 calls_in=0
// strings: gauge | counter | summary | untyped | histogram | timestamp_ms

void FUN_012a1568(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 ***local_d0;
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
    *puVar1 = &LAB_012a1d54;
    puVar1[1] = &LAB_012a1d5c;
    local_d0 = (undefined4 ***)0x7;
    local_c8 = &DAT_0188c950;
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
    local_44[3] = &DAT_0188c8d0;
    *local_44 = &DAT_003b7cf4;
    local_44[1] = 5;
    local_44[2] = puVar1;
    local_40 = 1;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &LAB_012a3be0;
      puVar1[1] = &LAB_012a1d64;
      local_d0 = (undefined4 ***)0x6;
      local_c8 = &DAT_0188c9f8;
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
      puVar3[7] = &DAT_0188c8d0;
      puVar3[4] = "gauge";
      puVar3[5] = 5;
      puVar3[6] = puVar1;
      local_40 = 2;
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &LAB_012a1d6c;
        puVar1[1] = &LAB_012a1d74;
        local_d0 = (undefined4 ***)0x6;
        local_c8 = &DAT_0188ca48;
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
        puVar3[0xb] = &DAT_0188c8d0;
        puVar3[8] = "counter";
        puVar3[9] = 7;
        puVar3[10] = puVar1;
        local_40 = 3;
        puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = &LAB_01316298;
          puVar1[1] = &LAB_012a1d7c;
          local_d0 = (undefined4 ***)0x6;
          local_c8 = &DAT_0188ca20;
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
          puVar3[0xf] = &DAT_0188c8d0;
          puVar3[0xc] = "summary";
          puVar3[0xd] = 7;
          puVar3[0xe] = puVar1;
          local_40 = 4;
          puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = &LAB_012a1d84;
            puVar1[1] = &LAB_012a1d8c;
            local_d0 = (undefined4 ***)0x6;
            local_c8 = &DAT_0188ca0c;
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
            puVar3[0x13] = &DAT_0188c8d0;
            puVar3[0x10] = "untyped";
            puVar3[0x11] = 7;
            puVar3[0x12] = puVar1;
            local_40 = 5;
            puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = &LAB_012a1d94;
              puVar1[1] = &LAB_012a1d9c;
              local_d0 = (undefined4 ***)0x6;
              local_c8 = &DAT_0188ca34;
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
              puVar3[0x17] = &DAT_0188c8d0;
              puVar3[0x14] = "histogram";
              puVar3[0x15] = 9;
              puVar3[0x16] = puVar1;
              local_40 = 6;
              puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
              if (puVar1 != (undefined4 *)0x0) {
                *puVar1 = &DAT_012a4340;
                puVar1[1] = &DAT_012a1da4;
                local_c8 = &DAT_0188c8bc;
                local_d0 = (undefined4 ***)&DAT_00000006;
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
                puVar3[0x18] = "timestamp_ms";
                puVar3[0x19] = 0xc;
                puVar3[0x1a] = puVar1;
                puVar3[0x1b] = &DAT_0188c8d0;
                local_40 = 7;
                local_30 = 7;
                local_34 = local_44;
                local_38 = local_48;
                local_28 = &DAT_018d87ec;
                DataMemoryBarrier(0xb);
                if (DAT_018d87ec != 0) {
                  local_24 = &local_28;
                  local_d0 = &local_24;
                  FUN_015eedc4(&DAT_018d87ec,0,&local_d0,&DAT_0188bd74,&DAT_0188bca0);
                }
                FUN_0133c708(&local_d0,"Metric",6,&local_38,local_28[1],&DAT_0188c420);
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
                    /* WARNING: Subroutine does not return */
  FUN_00600874(4,8);
}

