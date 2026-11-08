// FUN_00cdcbec @ 00cdcbec size=72 calls_out=3 calls_in=2
// strings: 

void FUN_00cdcbec(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x130) == '\0') {
    FUN_0071227c();
    FUN_00cdccf4(param_1 + 0x48);
    iVar1 = *(int *)(param_1 + 0x60);
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
    thunk_FUN_01be4678(iVar1);
    return;
  }
  if (*(char *)(param_1 + 0x130) == '\x03') {
    FUN_00cdcc48(param_1 + 0xd0);
    iVar1 = *(int *)(param_1 + 200);
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
    thunk_FUN_01be4678(iVar1);
    return;
  }
  return;
}

