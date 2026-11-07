// FUN_005c653c @ 005c653c size=164 calls_out=2 calls_in=5
// strings: 

void FUN_005c653c(int param_1,int param_2)

{
  int iVar1;
  int extraout_r1;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x40));
    param_2 = extraout_r1;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    param_2 = iVar1 * 9;
  }
  if (iVar1 != 0 && param_2 != -0xd) {
    thunk_FUN_016d3fb4(*(int *)(param_1 + 0x18) + iVar1 * -8 + -8);
    iVar1 = *(int *)(param_1 + 0x5c);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x5c);
  }
  if (iVar1 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x58));
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 != 0) {
    FUN_00a07b4c(iVar1);
    thunk_FUN_016d3fb4(iVar1);
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005c65b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x70) + 0xc))(*(undefined4 *)(param_1 + 0x74));
  return;
}

