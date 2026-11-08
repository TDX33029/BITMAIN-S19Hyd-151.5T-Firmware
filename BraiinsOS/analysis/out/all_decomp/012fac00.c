// FUN_012fac00 @ 012fac00 size=756 calls_out=7 calls_in=0
// strings: 

void FUN_012fac00(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 **local_c8;
  undefined4 *local_c4;
  undefined *local_c0;
  undefined4 uStack_bc;
  int local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  int local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 *local_20;
  undefined4 **local_1c;
  
  piVar4 = *(int **)*param_1;
  *(undefined4 *)*param_1 = 0;
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac42c);
  }
  local_38 = 0;
  local_40 = 0;
  local_3c = (undefined4 *)&DAT_00000004;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &LAB_01300b1c;
    puVar1[1] = &LAB_0130f7ec;
    local_c8 = (undefined4 **)0x6;
    local_c0 = &DAT_0188decc;
    local_c4 = puVar1;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    *puVar1 = local_c8;
    puVar1[1] = local_c4;
    puVar1[2] = local_c0;
    puVar1[3] = uStack_bc;
    FUN_0132f244(&local_40);
    puVar3 = local_3c;
    local_3c[3] = &DAT_0188dee0;
    *local_3c = &DAT_003b79d4;
    local_3c[1] = 0xb;
    local_3c[2] = puVar1;
    local_38 = 1;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &LAB_01300b3c;
      puVar1[1] = &LAB_012fb02c;
      local_c8 = (undefined4 **)0x6;
      local_c0 = &DAT_0188decc;
      local_c4 = puVar1;
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x10);
      }
      *puVar1 = local_c8;
      puVar1[1] = local_c4;
      puVar1[2] = local_c0;
      puVar1[3] = uStack_bc;
      if (local_40 == 1) {
        FUN_0132f244(&local_40);
        puVar3 = local_3c;
      }
      puVar3[7] = &DAT_0188dee0;
      puVar3[4] = &DAT_003e7b22;
      puVar3[5] = 10;
      puVar3[6] = puVar1;
      local_38 = 2;
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &DAT_0130f7f4;
        puVar1[1] = &DAT_01303560;
        local_c8 = (undefined4 **)&DAT_00000007;
        local_c0 = &DAT_0188e1f8;
        local_c4 = puVar1;
        puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
        if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x10);
        }
        *puVar1 = local_c8;
        puVar1[1] = local_c4;
        puVar1[2] = local_c0;
        puVar1[3] = uStack_bc;
        if (local_40 == 2) {
          FUN_0132f244(&local_40);
          puVar3 = local_3c;
        }
        puVar3[8] = &DAT_003b79df;
        puVar3[9] = 0x14;
        puVar3[10] = puVar1;
        puVar3[0xb] = &DAT_0188dee0;
        local_38 = 3;
        local_28 = 3;
        local_2c = local_3c;
        local_30 = local_40;
        local_20 = &DAT_018d88d4;
        DataMemoryBarrier(0xb);
        if (DAT_018d88d4 != 0) {
          local_1c = &local_20;
          local_c8 = &local_1c;
          FUN_015eedc4(&DAT_018d88d4,0,&local_c8,&DAT_0188f000,&DAT_0188e9dc);
        }
        FUN_0133b670(&local_c8,&DAT_003b79f3,0xb,&local_30,DAT_018d88d8,&DAT_0188f858);
        iVar2 = thunk_FUN_016d4a50(0x88);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x88);
        }
        FUN_016dd1aa(iVar2,&local_c8,0x88);
        *(int *)(*piVar4 + 4) = iVar2;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600874(4,8);
}

