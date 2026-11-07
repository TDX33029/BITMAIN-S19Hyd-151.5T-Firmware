// FUN_00b70998 @ 00b70998 size=132 calls_out=5 calls_in=0
// strings: 

void FUN_00b70998(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x84);
  if (cVar1 == '\x03') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  }
  else {
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0xac) == '\x03') {
        FUN_00b71be0(param_1 + 0x98);
      }
    }
    else {
      if (cVar1 != '\x05') {
        return;
      }
      cVar1 = *(char *)(param_1 + 0xb8);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0xb4);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_00b71be0(param_1 + 0xa0);
      }
    }
    FUN_00b71c78(param_1 + 0x44);
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  FUN_007390c4(param_1 + 4);
  return;
}

