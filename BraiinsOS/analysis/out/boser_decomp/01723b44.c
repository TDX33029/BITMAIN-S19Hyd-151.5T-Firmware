// FUN_01723b44 @ 01723b44 size=132 calls_out=4 calls_in=2
// strings: 

void FUN_01723b44(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xac) == '\0') {
    FUN_01723c14(param_1);
    return;
  }
  if (*(char *)(param_1 + 0xac) != '\x03') {
    return;
  }
  bVar2 = *(int *)(param_1 + 0x88) != 0;
  iVar1 = 0;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0x8c);
  }
  if (bVar2 && iVar1 != 0) {
    (**(code **)(iVar1 + 0x10))
              (param_1 + 0x98,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  }
  if (*(char *)(param_1 + 0xa8) != '\x03') {
    FUN_01723a4c(param_1 + 0xa0);
  }
  FUN_01443048(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
  FUN_012840cc(param_1 + 0x68);
  *(undefined2 *)(param_1 + 0xad) = 0;
  return;
}

