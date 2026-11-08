// FUN_00e3bf2c @ 00e3bf2c size=208 calls_out=5 calls_in=2
// strings: 

void FUN_00e3bf2c(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0x28;
  switch(*(undefined1 *)(param_1 + 0x49)) {
  case 0:
    break;
  default:
    return;
  case 3:
    iVar2 = 0x3c;
    if (*(char *)(param_1 + 0xa4) == '\x03') {
      FUN_00e1003c(param_1 + 0x50);
    }
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x118);
    iVar2 = 0x3c;
    bVar3 = cVar1 == '\x03';
    if (bVar3) {
      cVar1 = *(char *)(param_1 + 0x114);
    }
    if (bVar3 && cVar1 == '\x03') {
      FUN_00df984c(param_1 + 0x58);
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x614) == '\x03') {
      if (*(char *)(param_1 + 0x608) == '\x03') {
        iVar2 = param_1 + 0x340;
      }
      else {
        if (*(char *)(param_1 + 0x608) != '\0') goto LAB_00e3bffc;
        iVar2 = param_1 + 0x78;
      }
      FUN_00df9ef8(iVar2);
    }
LAB_00e3bffc:
    iVar2 = 0x3c;
    FUN_0084ec48(param_1 + 0x50);
    break;
  case 6:
    iVar2 = 0x3c;
    if (*(char *)(param_1 + 0xa4) == '\x03') {
      FUN_00e1003c(param_1 + 0x50);
    }
  }
  FUN_019f8c54(*(undefined4 *)(param_1 + iVar2),((undefined4 *)(param_1 + iVar2))[1]);
  return;
}

