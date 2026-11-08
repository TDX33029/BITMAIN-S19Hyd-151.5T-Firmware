// FUN_00f85618 @ 00f85618 size=144 calls_out=6 calls_in=3
// strings: 

void FUN_00f85618(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    FUN_00cdce34();
    return;
  }
  if (*param_1 == 1) {
    iVar1 = param_1[1];
    FUN_00f859dc(iVar1);
    if (*(int *)(iVar1 + 0x28) != 0) {
      (**(code **)(*(int *)(iVar1 + 0x28) + 0x10))
                (iVar1 + 0x34,*(undefined4 *)(iVar1 + 0x2c),*(undefined4 *)(iVar1 + 0x30));
    }
    thunk_FUN_01be4678(*(undefined4 *)(iVar1 + 0x48));
    if (*(byte *)(iVar1 + 0x90) < 4) {
      FUN_0183a528();
    }
    FUN_012840cc(iVar1 + 0xa0);
  }
  else {
    iVar1 = param_1[1];
    FUN_00f859dc(iVar1);
  }
  thunk_FUN_01be4678(iVar1);
  return;
}

