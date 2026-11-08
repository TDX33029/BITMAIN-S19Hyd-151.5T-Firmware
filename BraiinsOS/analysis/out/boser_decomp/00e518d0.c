// FUN_00e518d0 @ 00e518d0 size=284 calls_out=4 calls_in=1
// strings: 

void FUN_00e518d0(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)((int)param_1 + 0x31)) {
  case 3:
    if (*(char *)(param_1 + 0x1a) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x19);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x18);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x10);
      }
    }
    goto LAB_00e519d4;
  case 4:
    if (*(char *)(param_1 + 0x1a) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x19);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x18);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x10);
      }
    }
    goto LAB_00e519c8;
  case 5:
    if (*(char *)(param_1 + 0x1a) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x19);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x18);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x10);
      }
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x1f) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1e);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x1d);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x15);
      }
    }
    FUN_00b0db90(param_1 + 0xd);
    *(undefined1 *)(param_1 + 0xc) = 0;
    FUN_019f8c54(param_1[6],1);
    break;
  default:
    return;
  }
  FUN_019f8c54(param_1[4],1);
LAB_00e519c8:
  FUN_019f8c54(*param_1,1);
LAB_00e519d4:
  FUN_00d5f9a8(param_1 + 8);
  return;
}

