// FUN_005c0c4c @ 005c0c4c size=164 calls_out=2 calls_in=3
// strings: 

void FUN_005c0c4c(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*param_1 != 0) {
    return;
  }
  if ((char)param_1[0x1f] != '\x03') {
    if ((char)param_1[0x1f] == '\0') {
      FUN_005c471c(param_1 + 1);
      return;
    }
    return;
  }
  cVar1 = (char)param_1[0x1e];
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = (char)param_1[0x1d];
  }
  if (bVar2 && cVar1 == '\x03') {
    cVar1 = (char)param_1[0x1c];
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)((int)param_1 + 0x4d);
    }
    if (bVar2 && cVar1 == '\x04') {
      FUN_0163bdc0(param_1 + 0x14);
      if (param_1[0x18] != 0) {
        (**(code **)(param_1[0x18] + 0xc))(param_1[0x19]);
      }
      *(undefined1 *)(param_1 + 0x13) = 0;
      FUN_005c471c(param_1 + 5);
      return;
    }
  }
  FUN_005c471c(param_1 + 5);
  return;
}

