// FUN_00f6e7d0 @ 00f6e7d0 size=124 calls_out=3 calls_in=0
// strings: 

void FUN_00f6e7d0(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 4) == '\x03') {
    cVar1 = *(char *)(param_1 + 0xd0);
    bVar3 = cVar1 == '\x03';
    if (bVar3) {
      cVar1 = *(char *)(param_1 + 0xcc);
    }
    if (bVar3 && cVar1 == '\x03') {
      FUN_00b99500(param_1 + 0x10);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 4) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0x5b4) == '\x03') {
    if (*(char *)(param_1 + 0x5a8) == '\x03') {
      iVar2 = param_1 + 0x2e0;
    }
    else {
      if (*(char *)(param_1 + 0x5a8) != '\0') goto LAB_00f6e834;
      iVar2 = param_1 + 0x18;
    }
    FUN_00b9a8cc(iVar2);
  }
LAB_00f6e834:
  FUN_0084ec48(param_1 + 8);
  return;
}

