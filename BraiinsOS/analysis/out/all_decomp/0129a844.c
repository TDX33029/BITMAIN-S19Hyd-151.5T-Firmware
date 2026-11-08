// FUN_0129a844 @ 0129a844 size=928 calls_out=7 calls_in=0
// strings: metric | MetricFamily

void FUN_0129a844(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 ***local_c8;
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
    *puVar1 = &DAT_0130f7f4;
    puVar1[1] = &DAT_0129ad64;
    local_c8 = (undefined4 ***)0x6;
    local_c0 = &DAT_0188c9e4;
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
    local_3c[3] = &DAT_0188c878;
    *local_3c = &DAT_00568d68;
    local_3c[1] = 4;
    local_3c[2] = puVar1;
    local_38 = 1;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &LAB_01324b40;
      puVar1[1] = &LAB_0129ad68;
      local_c8 = (undefined4 ***)0x6;
      local_c0 = &DAT_0188c9e4;
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
      puVar3[7] = &DAT_0188c878;
      puVar3[4] = &DAT_00567744;
      puVar3[5] = 4;
      puVar3[6] = puVar1;
      local_38 = 2;
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &LAB_0129ad70;
        puVar1[1] = &LAB_0129ad78;
        local_c8 = (undefined4 ***)0x6;
        local_c0 = &DAT_0188c864;
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
        puVar3[0xb] = &DAT_0188c878;
        puVar3[8] = &DAT_005680b8;
        puVar3[9] = 4;
        puVar3[10] = puVar1;
        local_38 = 3;
        puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = &LAB_012f64c0;
          puVar1[1] = &LAB_0129ad80;
          local_c8 = (undefined4 ***)&DAT_00000007;
          local_c0 = &DAT_0188c964;
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
          if (local_40 == 3) {
            FUN_0132f244(&local_40);
            puVar3 = local_3c;
          }
          puVar3[0xc] = "metric";
          puVar3[0xd] = 6;
          puVar3[0xe] = puVar1;
          puVar3[0xf] = &DAT_0188c878;
          local_38 = 4;
          local_28 = 4;
          local_2c = local_3c;
          local_30 = local_40;
          local_20 = &DAT_018d87ec;
          DataMemoryBarrier(0xb);
          if (DAT_018d87ec != 0) {
            local_1c = &local_20;
            local_c8 = &local_1c;
            FUN_015eedc4(&DAT_018d87ec,0,&local_c8,&DAT_0188bd74,&DAT_0188bca0);
          }
          FUN_0133c708(&local_c8,"MetricFamily",0xc,&local_30,local_20[1],&DAT_0188c490);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600874(4,8);
}

