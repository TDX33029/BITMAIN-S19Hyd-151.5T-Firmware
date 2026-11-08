// FUN_00f1fd84 @ 00f1fd84 size=500 calls_out=2 calls_in=6
// strings: 

void FUN_00f1fd84(int param_1)

{
  int iVar1;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c [2];
  int local_14;
  
  if (*(int *)(param_1 + 0x4c) == -0x80000000 || *(int *)(param_1 + 0x4c) == 0) {
    if (*(int *)(param_1 + 0x58) == -0x80000000 || *(int *)(param_1 + 0x58) == 0) goto LAB_00f1fdb0;
LAB_00f1fe88:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
    if (*(int *)(param_1 + 100) != -0x80000000 && *(int *)(param_1 + 100) != 0) goto LAB_00f1fea0;
LAB_00f1fdc0:
    if (*(int *)(param_1 + 0x70) == -0x80000000 || *(int *)(param_1 + 0x70) == 0) goto LAB_00f1fdd0;
LAB_00f1feb8:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x74));
    if (*(int *)(param_1 + 0x7c) != -0x80000000 && *(int *)(param_1 + 0x7c) != 0) goto LAB_00f1fed0;
LAB_00f1fde0:
    if (*(int *)(param_1 + 0x88) != -0x80000000 && *(int *)(param_1 + 0x88) != 0) {
LAB_00f1fee8:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8c));
      iVar1 = *(int *)(param_1 + 0x28);
      goto joined_r0x00f1fdf8;
    }
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x50));
    if (*(int *)(param_1 + 0x58) != -0x80000000 && *(int *)(param_1 + 0x58) != 0) goto LAB_00f1fe88;
LAB_00f1fdb0:
    if (*(int *)(param_1 + 100) == -0x80000000 || *(int *)(param_1 + 100) == 0) goto LAB_00f1fdc0;
LAB_00f1fea0:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x68));
    if (*(int *)(param_1 + 0x70) != -0x80000000 && *(int *)(param_1 + 0x70) != 0) goto LAB_00f1feb8;
LAB_00f1fdd0:
    if (*(int *)(param_1 + 0x7c) == -0x80000000 || *(int *)(param_1 + 0x7c) == 0) goto LAB_00f1fde0;
LAB_00f1fed0:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x80));
    if (*(int *)(param_1 + 0x88) != -0x80000000 && *(int *)(param_1 + 0x88) != 0) goto LAB_00f1fee8;
  }
  iVar1 = *(int *)(param_1 + 0x28);
joined_r0x00f1fdf8:
  if (iVar1 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x44));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(undefined4 *)(param_1 + 0x24);
      local_34 = *(undefined4 *)(param_1 + 0x20);
      local_2c = 0;
      local_3c = 0;
      local_38 = iVar1;
      local_28 = iVar1;
      local_24 = local_34;
    }
    local_40 = (uint)(iVar1 != 0);
    local_30 = local_40;
    while (FUN_00ea8ae8(local_1c,&local_40), local_1c[0] != 0) {
      iVar1 = local_1c[0] + local_14 * 0xc;
      if (*(int *)(iVar1 + 4) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 8));
      }
      if (*(int *)(iVar1 + 0x88) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 0x8c));
      }
    }
  }
  return;
}

