// FUN_00c41f84 @ 00c41f84 size=92 calls_out=5 calls_in=1
// strings: 

void FUN_00c41f84(int param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0xc)) {
  case 3:
    FUN_00c41ff4(param_1 + 0x10);
    return;
  case 4:
    FUN_00c420a0(param_1 + 0x10);
    return;
  case 5:
    FUN_00c420f8(param_1 + 0x10);
    return;
  case 6:
    FUN_00c421d8(param_1 + 0x10);
    return;
  case 7:
    break;
  default:
    return;
  }
  cVar1 = *(char *)(param_1 + 0x1c);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x5f8);
  }
  if (bVar2 && cVar1 == '\x03') {
    FUN_00c42254(param_1 + 0x20);
    return;
  }
  return;
}

