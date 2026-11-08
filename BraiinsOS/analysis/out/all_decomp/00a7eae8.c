// FUN_00a7eae8 @ 00a7eae8 size=88 calls_out=1 calls_in=0
// strings: 

void FUN_00a7eae8(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x44) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x40);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x1d);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_0163bdc0(param_1 + 0x20);
    if (*(int *)(param_1 + 0x30) != 0) {
      (**(code **)(*(int *)(param_1 + 0x30) + 0xc))(*(undefined4 *)(param_1 + 0x34));
    }
    *(undefined1 *)(param_1 + 0x1c) = 0;
    return;
  }
  return;
}

