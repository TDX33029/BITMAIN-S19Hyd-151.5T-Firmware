// FUN_00aa2410 @ 00aa2410 size=112 calls_out=2 calls_in=0
// strings: 

void FUN_00aa2410(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xd8);
    if (*(undefined1 **)(iVar1 + 8) != &DAT_3b9aca00) {
      FUN_00643a80(iVar1);
    }
    thunk_FUN_016d3fb4(iVar1);
    iVar1 = iVar2;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00aa2478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x18) + 0xc))(*(undefined4 *)(param_1 + 0x1c));
  return;
}

