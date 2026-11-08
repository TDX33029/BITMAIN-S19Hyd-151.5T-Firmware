// FUN_00aca278 @ 00aca278 size=116 calls_out=2 calls_in=13
// strings: 

void FUN_00aca278(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x65) == '\0') {
    FUN_00aca43c(param_1 + 0x50);
    return;
  }
  if (*(char *)(param_1 + 0x65) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x3c);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x18);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_0163c790(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x20) != 0) {
      (**(code **)(*(int *)(param_1 + 0x20) + 0xc))(*(undefined4 *)(param_1 + 0x24));
    }
  }
  FUN_00aca43c(param_1 + 0x40);
  *(undefined1 *)(param_1 + 100) = 0;
  return;
}

