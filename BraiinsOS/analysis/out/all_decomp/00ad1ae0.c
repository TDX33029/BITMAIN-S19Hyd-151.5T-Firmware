// FUN_00ad1ae0 @ 00ad1ae0 size=400 calls_out=8 calls_in=2
// strings: 

void FUN_00ad1ae0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  switch(*(undefined1 *)(param_1 + 0x306)) {
  case 3:
    if (*(char *)(param_1 + 0x344) == '\x03') {
      FUN_00ad2230(param_1 + 0x314);
      return;
    }
    return;
  case 4:
    FUN_00ad0e94(param_1 + 0x310);
    return;
  case 5:
    if (*(char *)(param_1 + 0x374) == '\x03') {
      FUN_00ad235c(param_1 + 0x318);
    }
    break;
  case 6:
  case 9:
  case 0xf:
    break;
  case 7:
    if (*(char *)(param_1 + 0x408) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x3f4);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x3ec);
      }
      if ((bVar5 && cVar1 == '\x03') && (*(int *)(param_1 + 0x3e0) != 0)) {
        FUN_00c81a4c(*(int *)(param_1 + 0x3e0),*(undefined4 *)(param_1 + 0x3e4),1);
      }
    }
    break;
  case 8:
    if (*(char *)(param_1 + 0x374) == '\x03') {
      FUN_00ad235c(param_1 + 0x318);
    }
    break;
  case 0xc:
    FUN_00ad2458(param_1 + 800);
    FUN_00c48cbc(param_1 + 0x310);
  case 10:
  case 0xb:
    if (*(int *)(param_1 + 0x2a0) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2a4));
    }
    iVar2 = *(int *)(param_1 + 0x2b0);
    puVar4 = (undefined4 *)(iVar2 + 4);
    for (iVar3 = *(int *)(param_1 + 0x2b4); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar4[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar4);
      }
      puVar4 = puVar4 + 6;
    }
    if (*(int *)(param_1 + 0x2ac) != 0) {
      thunk_FUN_016d3fb4(iVar2);
    }
    FUN_00ac8e24(param_1 + 0x198);
    break;
  case 0xd:
    if (*(char *)(param_1 + 0x408) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x3f4);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x3ec);
      }
      if ((bVar5 && cVar1 == '\x03') && (*(int *)(param_1 + 0x3e0) != 0)) {
        FUN_00c81a4c(*(int *)(param_1 + 0x3e0),*(undefined4 *)(param_1 + 0x3e4),1);
      }
    }
    break;
  case 0xe:
    if (*(char *)(param_1 + 0x374) == '\x03') {
      FUN_00ad235c(param_1 + 0x318);
    }
    break;
  default:
    return;
  }
  FUN_00ac8e24(param_1 + 0x48);
  return;
}

