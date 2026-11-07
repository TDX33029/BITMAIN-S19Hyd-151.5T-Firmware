// FUN_00b7a8b4 @ 00b7a8b4 size=72 calls_out=4 calls_in=3
// strings: 

void FUN_00b7a8b4(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x108) == '\0') {
    FUN_0154a95c(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x108) == '\x03') {
    FUN_00b7aa74(param_1 + 0xb0);
    iVar1 = *(int *)(param_1 + 0xa8);
    FUN_019bb7e0(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14));
    thunk_FUN_01be4678(iVar1);
    return;
  }
  return;
}

