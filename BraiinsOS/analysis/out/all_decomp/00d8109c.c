// FUN_00d8109c @ 00d8109c size=300 calls_out=3 calls_in=1
// strings: 

void FUN_00d8109c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x308);
  if (2 < uVar1 - 4) {
    if (uVar1 == 0) {
      if (*(int *)(param_1 + 0x158) == -0x80000000 || *(int *)(param_1 + 0x158) == 0) {
        if (*(int *)(param_1 + 0x164) != -0x80000000 && *(int *)(param_1 + 0x164) != 0)
        goto LAB_00d811a4;
LAB_00d81170:
        uVar1 = *(uint *)(param_1 + 0x170);
      }
      else {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x15c));
        if (*(int *)(param_1 + 0x164) == -0x80000000 || *(int *)(param_1 + 0x164) == 0)
        goto LAB_00d81170;
LAB_00d811a4:
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x168));
        uVar1 = *(uint *)(param_1 + 0x170);
      }
      if ((uVar1 & 0x7fffffff) == 0) {
        FUN_00d81034(param_1);
        return;
      }
      iVar2 = 0x174;
      iVar3 = param_1;
      goto LAB_00d81118;
    }
    if (uVar1 != 3) {
      return;
    }
    FUN_00d7a194(param_1 + 0x318);
  }
  *(undefined1 *)(param_1 + 0x30a) = 0;
  if (*(int *)(param_1 + 0x2d8) == -0x80000000 || *(int *)(param_1 + 0x2d8) == 0) {
    if (*(int *)(param_1 + 0x2e4) != -0x80000000 && *(int *)(param_1 + 0x2e4) != 0) {
LAB_00d81144:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2e8));
    }
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2dc));
    if (*(int *)(param_1 + 0x2e4) != -0x80000000 && *(int *)(param_1 + 0x2e4) != 0)
    goto LAB_00d81144;
  }
  if ((*(uint *)(param_1 + 0x2f0) & 0x7fffffff) == 0) {
    FUN_00d81034(param_1 + 0x180);
    return;
  }
  iVar2 = 0x2f4;
  iVar3 = param_1 + 0x180;
LAB_00d81118:
  thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + iVar2));
  FUN_00d81034(iVar3);
  return;
}

