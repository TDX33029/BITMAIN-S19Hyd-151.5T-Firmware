// FUN_00e391e8 @ 00e391e8 size=164 calls_out=6 calls_in=2
// strings: 

void FUN_00e391e8(int param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0xc1)) {
  case 3:
    FUN_00bba254(param_1 + 200);
    return;
  case 4:
    if (*(char *)(param_1 + 0xfc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xf8);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0xf4);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0xd4);
      }
    }
    goto LAB_00e39280;
  case 5:
    if (*(char *)(param_1 + 0x11c) == '\x03') {
      FUN_00e1003c(param_1 + 200);
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0xd4) == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0));
    }
    break;
  default:
    return;
  }
  FUN_019f8c54(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb8));
LAB_00e39280:
  FUN_005f87f4(param_1 + 0x60);
  return;
}

