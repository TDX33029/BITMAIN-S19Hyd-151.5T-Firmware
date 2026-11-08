// FUN_00e38310 @ 00e38310 size=208 calls_out=5 calls_in=2
// strings: 

void FUN_00e38310(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0x10;
  switch(*(undefined1 *)(param_1 + 0x39)) {
  case 0:
    break;
  default:
    return;
  case 3:
    iVar2 = 0x2c;
    if (*(char *)(param_1 + 0x90) == '\x03') {
      FUN_00e1003c(param_1 + 0x3c);
    }
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x104);
    iVar2 = 0x2c;
    bVar3 = cVar1 == '\x03';
    if (bVar3) {
      cVar1 = *(char *)(param_1 + 0x100);
    }
    if (bVar3 && cVar1 == '\x03') {
      FUN_00df984c(param_1 + 0x44);
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x5fc) == '\x03') {
      if (*(char *)(param_1 + 0x5f0) == '\x03') {
        iVar2 = param_1 + 0x328;
      }
      else {
        if (*(char *)(param_1 + 0x5f0) != '\0') goto LAB_00e383e0;
        iVar2 = param_1 + 0x60;
      }
      FUN_00df9ef8(iVar2);
    }
LAB_00e383e0:
    iVar2 = 0x2c;
    FUN_0084ec48(param_1 + 0x3c);
    break;
  case 6:
    iVar2 = 0x2c;
    if (*(char *)(param_1 + 0x90) == '\x03') {
      FUN_00e1003c(param_1 + 0x3c);
    }
  }
  FUN_019f8c54(*(undefined4 *)(param_1 + iVar2),((undefined4 *)(param_1 + iVar2))[1]);
  return;
}

