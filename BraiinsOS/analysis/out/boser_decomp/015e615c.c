// FUN_015e615c @ 015e615c size=124 calls_out=2 calls_in=2
// strings: 

void FUN_015e615c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2[2] == *(int *)(param_1 + 0x30)) {
    iVar2 = param_2[1];
    iVar1 = thunk_FUN_01bed842(iVar2,*(undefined4 *)(param_1 + 0x2c));
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x1c) != -0x80000000) {
        FUN_0134bd64(*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
      }
      *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
      FUN_0134bd64(*param_2,iVar2);
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != -0x80000000) {
    FUN_0134bd64(iVar1,*(undefined4 *)(param_1 + 0x20));
  }
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  *(int *)(param_1 + 0x1c) = *param_2;
  *(int *)(param_1 + 0x20) = iVar1;
  *(int *)(param_1 + 0x24) = iVar2;
  return;
}

