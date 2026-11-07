// FUN_017c10bc @ 017c10bc size=144 calls_out=6 calls_in=1
// strings: 

void FUN_017c10bc(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    FUN_01771fbc();
    return;
  }
  if (*param_1 == 1) {
    iVar1 = param_1[1];
    FUN_017c11c8(iVar1);
    if (*(int *)(iVar1 + 0x28) != 0) {
      (**(code **)(*(int *)(iVar1 + 0x28) + 0x10))
                (iVar1 + 0x34,*(undefined4 *)(iVar1 + 0x2c),*(undefined4 *)(iVar1 + 0x30));
    }
    thunk_FUN_01be4678(*(undefined4 *)(iVar1 + 0x48));
    if (*(byte *)(iVar1 + 0x90) < 4) {
      FUN_018248cc();
    }
    FUN_012840cc(iVar1 + 0xa0);
  }
  else {
    iVar1 = param_1[1];
    FUN_017c11c8(iVar1);
  }
  thunk_FUN_01be4678(iVar1);
  return;
}

