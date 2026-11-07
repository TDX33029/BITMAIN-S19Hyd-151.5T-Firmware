// FUN_005f49bc @ 005f49bc size=196 calls_out=6 calls_in=9
// strings: 

void FUN_005f49bc(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x32c);
  if (cVar1 == '\0') {
    FUN_005f0d40(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x338),*(undefined4 *)(param_1 + 0x33c));
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x370) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x36c);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x368);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_00b71be0(param_1 + 0x354);
      }
    }
  }
  if (*(char *)(param_1 + 0x32f) != '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 800),*(undefined4 *)(param_1 + 0x324));
  }
  *(undefined2 *)(param_1 + 0x32f) = 0;
  if (*(char *)(param_1 + 0x32e) != '\0') {
    FUN_005f87b4(param_1 + 0x2d8);
  }
  if (*(char *)(param_1 + 0x32d) != '\0') {
    FUN_0123bec8(param_1 + 0x188);
  }
  *(undefined2 *)(param_1 + 0x32d) = 0;
  return;
}

