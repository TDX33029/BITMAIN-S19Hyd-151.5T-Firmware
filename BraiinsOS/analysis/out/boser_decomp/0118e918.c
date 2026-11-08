// FUN_0118e918 @ 0118e918 size=80 calls_out=3 calls_in=1
// strings: 

void FUN_0118e918(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0xb8);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xb6);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_019deb7c(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x28) != -1) {
      FUN_01bf01d6();
    }
    FUN_0179995c(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xb4) = 0;
    return;
  }
  return;
}

