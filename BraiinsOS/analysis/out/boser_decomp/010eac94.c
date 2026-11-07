// FUN_010eac94 @ 010eac94 size=160 calls_out=5 calls_in=1
// strings: 

void FUN_010eac94(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xa9) == '\0') {
    FUN_00d315e0(param_1 + 0x98);
    FUN_00d31680(param_1 + 0xa0);
  }
  else {
    if (*(char *)(param_1 + 0xa9) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x38);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x15);
    }
    if (bVar2 && cVar1 == '\x04') {
      FUN_019ede44(param_1 + 0x18);
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
    FUN_019ede44(param_1 + 0x40);
    if ((4 < *(uint *)(param_1 + 0x60)) || ((1 << (*(uint *)(param_1 + 0x60) & 0xff) & 0x16U) == 0))
    {
      FUN_00963164(param_1 + 100);
    }
    FUN_00d315e0(param_1 + 0x98);
    FUN_00d31680(param_1 + 0xa0);
  }
  FUN_005faf6c(param_1 + 0xa4);
  return;
}

