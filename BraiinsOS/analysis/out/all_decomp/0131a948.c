// FUN_0131a948 @ 0131a948 size=432 calls_out=7 calls_in=0
// strings: ExtensionRangeOptions

void FUN_0131a948(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 **local_c8;
  undefined4 *local_c4;
  undefined *local_c0;
  undefined4 uStack_bc;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 *local_20;
  undefined4 **local_1c;
  
  piVar3 = *(int **)*param_1;
  *(undefined4 *)*param_1 = 0;
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac42c);
  }
  local_38 = 0;
  local_40 = 0;
  local_3c = (undefined4 *)&DAT_00000004;
  local_c4 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (local_c4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *local_c4 = &DAT_0130f7f4;
  local_c4[1] = &DAT_01301e9c;
  local_c8 = (undefined4 **)&DAT_00000007;
  local_c0 = &DAT_0188e0e4;
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
  local_3c[3] = &DAT_0188e0f8;
  *local_3c = &DAT_003b79df;
  local_3c[1] = 0x14;
  local_3c[2] = puVar1;
  local_38 = 1;
  local_30 = local_40;
  puStack_2c = local_3c;
  uStack_28 = 1;
  local_20 = &DAT_018d88d4;
  DataMemoryBarrier(0xb);
  if (DAT_018d88d4 != 0) {
    local_1c = &local_20;
    local_c8 = &local_1c;
    FUN_015eedc4(&DAT_018d88d4,0,&local_c8,&DAT_0188f000,&DAT_0188e9dc);
  }
  FUN_0133b670(&local_c8,"ExtensionRangeOptions",0x15,&local_30,DAT_018d88d8,&DAT_0188f968);
  iVar2 = thunk_FUN_016d4a50(0x88);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x88);
  }
  FUN_016dd1aa(iVar2,&local_c8,0x88);
  *(int *)(*piVar3 + 4) = iVar2;
  return;
}

