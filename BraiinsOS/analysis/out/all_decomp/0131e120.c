// FUN_0131e120 @ 0131e120 size=764 calls_out=7 calls_in=0
// strings: method | options | ServiceDescriptorProto

void FUN_0131e120(undefined4 *param_1)

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
    puVar1[1] = &DAT_0131e558;
    local_d0 = (undefined4 **)0x6;
    local_c8 = &DAT_0188e560;
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
    local_44[3] = &DAT_0188e30c;
    *local_44 = &DAT_00568d68;
    local_44[1] = 4;
    local_44[2] = puVar1;
    local_40 = 1;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &LAB_01324b40;
      puVar1[1] = &LAB_0131e55c;
      local_d0 = (undefined4 **)0x7;
      local_c8 = &DAT_0188e2f8;
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
      puVar3[4] = "method";
      puVar3[6] = puVar1;
      local_40 = 2;
      puVar3[7] = &DAT_0188e30c;
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &LAB_012f64c0;
        puVar1[1] = &LAB_0131e564;
        local_c8 = &DAT_0188e608;
        local_d0 = (undefined4 **)&DAT_00000006;
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
        puVar3[8] = "options";
        puVar3[9] = 7;
        puVar3[10] = puVar1;
        puVar3[0xb] = &DAT_0188e30c;
        local_40 = 3;
        local_30 = 3;
        local_34 = local_44;
        local_38 = local_48;
        local_28 = &DAT_018d88d4;
        DataMemoryBarrier(0xb);
        if (DAT_018d88d4 != 0) {
          local_24 = &local_28;
          local_d0 = &local_24;
          FUN_015eedc4(&DAT_018d88d4,0,&local_d0,&DAT_0188f000,&DAT_0188e9dc);
        }
        FUN_0133b670(&local_d0,"ServiceDescriptorProto",0x16,&local_38,DAT_018d88d8,&DAT_0188f988);
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
                    /* WARNING: Subroutine does not return */
  FUN_00600874(4,8);
}

