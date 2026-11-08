// FUN_00c7fc3c @ 00c7fc3c size=152 calls_out=3 calls_in=0
// strings: 

void FUN_00c7fc3c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x34) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x30);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x2c);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_00fe4378(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
      return;
    }
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xb4);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0xa0);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_00c423b8(param_1 + 0x48);
    }
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 != -0x80000000) {
      iVar3 = 0x10;
      if (iVar2 == -0x7fffffff) {
        iVar3 = 0x14;
        iVar2 = *(int *)(param_1 + 0x14);
      }
      FUN_019bb7e0(iVar2,*(undefined4 *)(param_1 + iVar3 + 4));
      return;
    }
  }
  return;
}

