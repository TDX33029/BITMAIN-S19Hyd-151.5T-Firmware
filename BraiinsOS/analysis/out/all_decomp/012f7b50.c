// FUN_012f7b50 @ 012f7b50 size=592 calls_out=7 calls_in=0
// strings: 

void FUN_012f7b50(undefined4 *param_1)

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
    *puVar1 = &DAT_0130f7f4;
    puVar1[1] = &DAT_01301e9c;
    local_c8 = (undefined4 **)0x6;
    local_c0 = &DAT_0188db50;
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
    local_3c[3] = &DAT_0188db64;
    *local_3c = &DAT_003cf220;
    local_3c[1] = 5;
    local_3c[2] = puVar1;
    local_38 = 1;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &LAB_013233d8;
      puVar1[1] = &LAB_013233e0;
      local_c8 = (undefined4 **)&DAT_00000006;
      local_c0 = &DAT_0188db50;
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
      puVar3[4] = &DAT_003cf225;
      puVar3[5] = 3;
      puVar3[6] = puVar1;
      puVar3[7] = &DAT_0188db64;
      local_38 = 2;
      local_28 = 2;
      local_2c = local_3c;
      local_30 = local_40;
      local_20 = &DAT_018d88d4;
      DataMemoryBarrier(0xb);
      if (DAT_018d88d4 != 0) {
        local_1c = &local_20;
        local_c8 = &local_1c;
        FUN_015eedc4(&DAT_018d88d4,0,&local_c8,&DAT_0188f000,&DAT_0188e9dc);
      }
      FUN_0133b670(&local_c8,&DAT_003b798a,0x25,&local_30,DAT_018d88d8,&DAT_0188ecf4);
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
                    /* WARNING: Subroutine does not return */
  FUN_00600874(4,8);
}

