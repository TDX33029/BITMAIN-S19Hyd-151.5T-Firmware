// FUN_00c32690 @ 00c32690 size=72 calls_out=3 calls_in=1
// strings: 

void FUN_00c32690(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x130) == '\0') {
    FUN_0071227c();
    FUN_00c32798(param_1 + 0x48);
    iVar1 = *(int *)(param_1 + 0x60);
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
    thunk_FUN_01be4678(iVar1);
    return;
  }
  if (*(char *)(param_1 + 0x130) == '\x03') {
    FUN_00c326ec(param_1 + 0xd0);
    iVar1 = *(int *)(param_1 + 200);
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
    thunk_FUN_01be4678(iVar1);
    return;
  }
  return;
}

