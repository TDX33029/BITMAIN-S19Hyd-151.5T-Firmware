// FUN_00a75b30 @ 00a75b30 size=180 calls_out=6 calls_in=0
// strings: 

void FUN_00a75b30(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0xec);
    bVar3 = cVar1 == '\x03';
    if (bVar3) {
      cVar1 = *(char *)(param_1 + 0xe8);
    }
    if (bVar3 && cVar1 == '\x03') {
      FUN_00b99500(param_1 + 0x2c);
      return;
    }
    return;
  }
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x5cc) == '\x03') {
      FUN_00a7389c(param_1 + 0x28);
    }
    goto LAB_00a75bcc;
  }
  if (cVar1 != '\x05') {
    return;
  }
  if (*(char *)(param_1 + 0x5e4) == '\x03') {
    if (*(char *)(param_1 + 0x5d0) == '\x03') {
      iVar2 = param_1 + 0x308;
    }
    else {
      if (*(char *)(param_1 + 0x5d0) != '\0') goto LAB_00a75bb4;
      iVar2 = param_1 + 0x40;
    }
    FUN_00df9ef8(iVar2);
  }
LAB_00a75bb4:
  FUN_0132b958(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),4,8);
  FUN_00a573e8(param_1 + 0x24);
LAB_00a75bcc:
  FUN_0084ec48(param_1 + 0x14);
  return;
}

