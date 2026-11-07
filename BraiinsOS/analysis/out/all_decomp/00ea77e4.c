// FUN_00ea77e4 @ 00ea77e4 size=96 calls_out=1 calls_in=0
// strings: 

void FUN_00ea77e4(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x50);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x4c);
  }
  if (bVar2 && cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0x48);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x25);
    }
    if (bVar2 && cVar1 == '\x04') {
      FUN_0163bdc0(param_1 + 0x28);
      if (*(int *)(param_1 + 0x38) != 0) {
        (**(code **)(*(int *)(param_1 + 0x38) + 0xc))(*(undefined4 *)(param_1 + 0x3c));
      }
      *(undefined1 *)(param_1 + 0x24) = 0;
      return;
    }
  }
  return;
}

