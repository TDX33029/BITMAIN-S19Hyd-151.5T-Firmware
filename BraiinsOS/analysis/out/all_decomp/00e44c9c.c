// FUN_00e44c9c @ 00e44c9c size=144 calls_out=2 calls_in=1
// strings: 

void FUN_00e44c9c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x78) != '\x03') {
    if (*(char *)(param_1 + 0x78) == '\0') {
      FUN_005c471c();
      return;
    }
    return;
  }
  cVar1 = *(char *)(param_1 + 0x74);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x70);
  }
  if (bVar2 && cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0x6c);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x49);
    }
    if (bVar2 && cVar1 == '\x04') {
      FUN_0163bdc0(param_1 + 0x4c);
      if (*(int *)(param_1 + 0x5c) != 0) {
        (**(code **)(*(int *)(param_1 + 0x5c) + 0xc))(*(undefined4 *)(param_1 + 0x60));
      }
      *(undefined1 *)(param_1 + 0x48) = 0;
      FUN_005c471c(param_1 + 0x10);
      return;
    }
  }
  FUN_005c471c(param_1 + 0x10);
  return;
}

