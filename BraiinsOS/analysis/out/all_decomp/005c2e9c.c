// FUN_005c2e9c @ 005c2e9c size=116 calls_out=2 calls_in=4
// strings: 

void FUN_005c2e9c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x164) == '\0') {
    FUN_005becd4(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x164) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x15c);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x138);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_0163c790(param_1 + 0x13c);
    if (*(int *)(param_1 + 0x140) != 0) {
      (**(code **)(*(int *)(param_1 + 0x140) + 0xc))(*(undefined4 *)(param_1 + 0x144));
    }
  }
  FUN_005becd4(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0x165) = 0;
  return;
}

