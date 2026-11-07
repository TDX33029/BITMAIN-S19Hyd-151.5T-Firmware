// FUN_00d84a74 @ 00d84a74 size=120 calls_out=4 calls_in=0
// strings: 

void FUN_00d84a74(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 != -0x7ffffffb) {
    FUN_00d84954(param_1);
    return;
  }
  FUN_00f33e44(param_1 + 1);
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    iVar1 = param_1[1];
    iVar3 = 0;
    do {
      *(undefined1 *)(iVar1 + iVar3) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar2 != iVar3);
    iVar3 = 0;
    do {
      *(undefined1 *)(iVar1 + iVar3) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar2 != iVar3);
    thunk_FUN_016d3fb4();
  }
  FUN_00d84b0c(param_1[3],param_1[4]);
  return;
}

