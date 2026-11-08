// FUN_00b17400 @ 00b17400 size=408 calls_out=9 calls_in=1
// strings: 

void FUN_00b17400(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar3 = 0x44;
  switch(*(undefined1 *)(param_1 + 0x480)) {
  default:
    return;
  case 3:
    iVar3 = 0xb4;
    FUN_00b10e24(param_1 + 0x488);
  case 0:
    FUN_00c48708(param_1 + iVar3);
    return;
  case 4:
    if (*(char *)(param_1 + 0x580) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x56c);
      bVar9 = cVar1 == '\x03';
      if (bVar9) {
        cVar1 = *(char *)(param_1 + 0x564);
      }
      if ((bVar9 && cVar1 == '\x03') && (*(int *)(param_1 + 0x558) != 0)) {
        FUN_00c81a4c(*(int *)(param_1 + 0x558),*(undefined4 *)(param_1 + 0x55c),1);
      }
    }
    goto LAB_00b17588;
  case 5:
    FUN_00b13014(param_1 + 0x488);
    break;
  case 6:
    FUN_00b1545c(param_1 + 0x488);
    break;
  case 7:
    FUN_00b13014(param_1 + 0x488);
    FUN_00ad1570(param_1 + 0xb60);
  }
  FUN_00c48cbc(param_1 + 0x46c);
  iVar7 = *(int *)(param_1 + 0x464);
  iVar5 = 0;
  iVar3 = *(int *)(param_1 + 0x468);
  while (iVar5 != iVar3) {
    iVar2 = iVar7 + iVar5 * 0x38;
    iVar6 = *(int *)(iVar2 + 0xc);
    puVar4 = (undefined4 *)(iVar6 + 0x10);
    for (iVar8 = *(int *)(iVar2 + 0x10); iVar8 != 0; iVar8 = iVar8 + -1) {
      if (puVar4[-4] != 0) {
        thunk_FUN_016d3fb4(puVar4[-3]);
      }
      if (puVar4[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar4);
      }
      puVar4 = puVar4 + 6;
    }
    iVar5 = iVar5 + 1;
    if (*(int *)(iVar2 + 8) != 0) {
      thunk_FUN_016d3fb4(iVar6);
    }
  }
  if (*(int *)(param_1 + 0x460) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x464));
  }
LAB_00b17588:
  if (*(char *)(param_1 + 0x481) != '\0') {
    FUN_00b101b8(param_1 + 0xe0);
  }
  *(undefined1 *)(param_1 + 0x481) = 0;
  FUN_00c48708(param_1 + 0xb4);
  return;
}

