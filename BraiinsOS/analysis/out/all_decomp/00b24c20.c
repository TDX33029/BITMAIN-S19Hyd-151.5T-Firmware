// FUN_00b24c20 @ 00b24c20 size=116 calls_out=2 calls_in=2
// strings: 

void FUN_00b24c20(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x50);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x11);
  }
  if (bVar2 && cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0x4c);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x29);
    }
    if (bVar2 && cVar1 == '\x04') {
      FUN_0163bdc0(param_1 + 0x2c);
      if (*(int *)(param_1 + 0x3c) != 0) {
        (**(code **)(*(int *)(param_1 + 0x3c) + 0xc))(*(undefined4 *)(param_1 + 0x40));
      }
      *(undefined1 *)(param_1 + 0x28) = 0;
      FUN_00ad4dd0(param_1 + 0x58);
      return;
    }
  }
  FUN_00ad4dd0(param_1 + 0x58);
  return;
}

