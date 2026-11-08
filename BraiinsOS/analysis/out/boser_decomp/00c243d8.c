// FUN_00c243d8 @ 00c243d8 size=216 calls_out=4 calls_in=0
// strings: 

void FUN_00c243d8(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x34) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x30);
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = *(char *)(param_1 + 0x2c);
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
      return;
    }
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xb4);
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = *(char *)(param_1 + 0xa0);
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_00ba638c(param_1 + 0x48);
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
      return;
    }
    iVar4 = *(int *)(param_1 + 0x3c);
    iVar5 = *(int *)(param_1 + 0x40);
    for (iVar3 = 0; iVar5 != iVar3; iVar3 = iVar3 + 1) {
      puVar2 = (undefined4 *)(iVar4 + iVar3 * 0x10);
      FUN_019bb7e0(*puVar2,puVar2[1]);
    }
    FUN_0132b958(*(undefined4 *)(param_1 + 0x38),iVar4,4,0x10);
    return;
  }
  return;
}

