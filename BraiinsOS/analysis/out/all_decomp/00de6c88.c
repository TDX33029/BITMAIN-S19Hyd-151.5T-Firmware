// FUN_00de6c88 @ 00de6c88 size=148 calls_out=4 calls_in=2
// strings: 

void FUN_00de6c88(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x65);
  if (cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0x9c);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x98);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00e7c67c(param_1 + 0x80);
      if (*(int *)(param_1 + 0x84) != 0) {
        (**(code **)(*(int *)(param_1 + 0x84) + 0xc))(*(undefined4 *)(param_1 + 0x88));
      }
    }
  }
  else if (cVar1 == '\x04') {
    FUN_005bd080(param_1 + 0x68);
  }
  else {
    if (cVar1 != '\x05') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x94);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x91);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00de6d60(param_1 + 0x6c);
    }
  }
  FUN_00a07b4c(param_1);
  return;
}

