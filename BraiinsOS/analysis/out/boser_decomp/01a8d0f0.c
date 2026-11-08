// FUN_01a8d0f0 @ 01a8d0f0 size=116 calls_out=2 calls_in=2
// strings: 

void FUN_01a8d0f0(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x114) == '\0') {
    FUN_01a8d230(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x114) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x10c);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xe8);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_019f9a9c(param_1 + 0xec);
    if (*(int *)(param_1 + 0xf0) != 0) {
      (**(code **)(*(int *)(param_1 + 0xf0) + 0xc))(*(undefined4 *)(param_1 + 0xf4));
    }
  }
  FUN_01a8d230(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x115) = 0;
  return;
}

