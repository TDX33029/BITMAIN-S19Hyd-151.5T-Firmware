// FUN_00dd1194 @ 00dd1194 size=132 calls_out=3 calls_in=1
// strings: 

void FUN_00dd1194(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x3c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x38);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x34);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_00fe4378(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xac);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x98);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00db1dcc(param_1 + 0x40);
    }
    if (*(int *)(param_1 + 0x10) == -0x80000000) {
      return;
    }
    FUN_019bb7e0(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}

