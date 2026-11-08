// FUN_005c1b5c @ 005c1b5c size=100 calls_out=2 calls_in=4
// strings: 

void FUN_005c1b5c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x94) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x90);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x6d);
    }
    if (bVar2 && cVar1 == '\x04') {
      FUN_0163bdc0(param_1 + 0x70);
      if (*(int *)(param_1 + 0x80) != 0) {
        (**(code **)(*(int *)(param_1 + 0x80) + 0xc))(*(undefined4 *)(param_1 + 0x84));
      }
      *(undefined1 *)(param_1 + 0x6c) = 0;
      FUN_00a07b4c(param_1);
      return;
    }
  }
  FUN_00a07b4c();
  return;
}

