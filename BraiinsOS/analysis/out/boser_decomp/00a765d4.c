// FUN_00a765d4 @ 00a765d4 size=164 calls_out=5 calls_in=0
// strings: 

void FUN_00a765d4(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0xf4);
    bVar3 = cVar1 == '\x03';
    if (bVar3) {
      cVar1 = *(char *)(param_1 + 0xf0);
    }
    if (bVar3 && cVar1 == '\x03') {
      FUN_00b99500(param_1 + 0x34);
      return;
    }
    return;
  }
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x5d4) == '\x03') {
      FUN_00a7389c(param_1 + 0x30);
    }
    goto LAB_00a76660;
  }
  if (cVar1 != '\x05') {
    return;
  }
  if (*(char *)(param_1 + 0x5e8) == '\x03') {
    if (*(char *)(param_1 + 0x5d0) == '\x03') {
      iVar2 = param_1 + 0x308;
    }
    else {
      if (*(char *)(param_1 + 0x5d0) != '\0') goto LAB_00a76658;
      iVar2 = param_1 + 0x40;
    }
    FUN_00df9ef8(iVar2);
  }
LAB_00a76658:
  FUN_00a573e8(param_1 + 0x2c);
LAB_00a76660:
  FUN_0084ec48(param_1 + 0x1c);
  return;
}

