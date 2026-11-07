// FUN_00d35804 @ 00d35804 size=92 calls_out=3 calls_in=2
// strings: 

void FUN_00d35804(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc0) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xbc);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xba);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_019deb7c(param_1 + 0x20);
    if (*(int *)(param_1 + 0x2c) != -1) {
      FUN_01bf01d6();
    }
    FUN_0179995c(param_1 + 0x20);
    *(undefined2 *)(param_1 + 0xb8) = 0;
    return;
  }
  return;
}

