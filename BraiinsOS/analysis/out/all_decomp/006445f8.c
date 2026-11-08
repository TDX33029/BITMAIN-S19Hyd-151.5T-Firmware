// FUN_006445f8 @ 006445f8 size=116 calls_out=1 calls_in=4
// strings: 

void FUN_006445f8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x35)) {
  case 3:
  case 4:
  case 5:
    cVar1 = *(char *)(param_1 + 0xa4);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x94);
    }
    if (!bVar4 || cVar1 != '\x03') {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x80);
    iVar2 = 0x84;
    break;
  case 6:
    if (*(char *)(param_1 + 0x7c) != '\x03') {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x68);
    iVar2 = 0x6c;
    break;
  default:
    goto switchD_00644610_default;
  }
  if (iVar3 != 0) {
    FUN_006f5d1c(iVar3,*(undefined4 *)(param_1 + iVar2),1);
    return;
  }
switchD_00644610_default:
  return;
}

