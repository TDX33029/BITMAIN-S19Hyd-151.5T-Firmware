// FUN_00bfc9e4 @ 00bfc9e4 size=148 calls_out=3 calls_in=1
// strings: 

void FUN_00bfc9e4(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x3dc) == '\0') {
    FUN_00bfca04(param_1 + 0x3d0);
    return;
  }
  if (*(char *)(param_1 + 0x3dc) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\x04') {
    FUN_00c00a24(param_1 + 0x18);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_00c009f0;
    }
    if (*(char *)(param_1 + 0x48) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x44);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x40);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x20);
      }
    }
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    return;
  }
LAB_00c009f0:
  FUN_00bfca04(param_1);
  return;
}

