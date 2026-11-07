// FUN_00c37424 @ 00c37424 size=476 calls_out=2 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00c37424(int param_1)

{
  uint uVar1;
  int iVar2;
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
  
  if ((*(uint *)(param_1 + 0x4c) & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0x58);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x50));
    uVar1 = *(uint *)(param_1 + 0x58);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 100);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5c));
    uVar1 = *(uint *)(param_1 + 100);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0x70);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x68));
    uVar1 = *(uint *)(param_1 + 0x70);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0x7c);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x74));
    uVar1 = *(uint *)(param_1 + 0x7c);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    uVar1 = *(uint *)(param_1 + 0x88);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x80));
    uVar1 = *(uint *)(param_1 + 0x88);
  }
  if ((uVar1 & 0x7fffffff) == 0) {
    iVar2 = *(int *)(param_1 + 0x28);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8c));
    iVar2 = *(int *)(param_1 + 0x28);
  }
  if (iVar2 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x44));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(undefined4 *)(param_1 + 0x24);
      local_34 = *(undefined4 *)(param_1 + 0x20);
      local_2c = 0;
      local_3c = 0;
      local_38 = iVar2;
      local_28 = iVar2;
      local_24 = local_34;
    }
    local_40 = (uint)(iVar2 != 0);
    local_30 = local_40;
    while (FUN_00c4564c(local_1c,&local_40), local_1c[0] != 0) {
      iVar2 = local_1c[0] + local_14 * 0xc;
      if (*(int *)(iVar2 + 4) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 8));
      }
      if (*(int *)(iVar2 + 0x88) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 0x8c));
      }
    }
  }
  return;
}

