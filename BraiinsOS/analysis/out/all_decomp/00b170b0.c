// FUN_00b170b0 @ 00b170b0 size=420 calls_out=9 calls_in=1
// strings: 

void FUN_00b170b0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  switch(*(undefined1 *)(param_1 + 0x47c)) {
  case 3:
    if (*(char *)(param_1 + 0x578) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x564);
      bVar9 = cVar1 == '\x03';
      if (bVar9) {
        cVar1 = *(char *)(param_1 + 0x55c);
      }
      if ((bVar9 && cVar1 == '\x03') && (*(int *)(param_1 + 0x550) != 0)) {
        FUN_00c81a4c(*(int *)(param_1 + 0x550),*(undefined4 *)(param_1 + 0x554),1);
      }
    }
    goto LAB_00b17254;
  case 4:
    if (*(char *)(param_1 + 0xdc8) == '\x03') {
      FUN_00b172dc(param_1 + 0x528);
    }
    goto LAB_00b17214;
  case 5:
    FUN_00b13014(param_1 + 0x490);
    FUN_00c48cbc(param_1 + 0x480);
    break;
  case 6:
    FUN_00b1443c(param_1 + 0x480);
    break;
  default:
    return;
  }
  if (*(char *)(param_1 + 0x47d) != '\0') {
    iVar7 = *(int *)(param_1 + 0x474);
    iVar5 = 0;
    iVar4 = *(int *)(param_1 + 0x478);
    while (iVar5 != iVar4) {
      iVar2 = iVar7 + iVar5 * 0x38;
      iVar6 = *(int *)(iVar2 + 0xc);
      puVar3 = (undefined4 *)(iVar6 + 0x10);
      for (iVar8 = *(int *)(iVar2 + 0x10); iVar8 != 0; iVar8 = iVar8 + -1) {
        if (puVar3[-4] != 0) {
          thunk_FUN_016d3fb4(puVar3[-3]);
        }
        if (puVar3[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar3);
        }
        puVar3 = puVar3 + 6;
      }
      iVar5 = iVar5 + 1;
      if (*(int *)(iVar2 + 8) != 0) {
        thunk_FUN_016d3fb4(iVar6);
      }
    }
    if (*(int *)(param_1 + 0x470) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x474));
    }
  }
  *(undefined1 *)(param_1 + 0x47d) = 0;
LAB_00b17214:
  FUN_00c5b260(param_1 + 0x438);
  if (*(int *)(param_1 + 0x428) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x42c));
  }
  if (*(int *)(param_1 + 0x3d0) != 5 || *(int *)(param_1 + 0x3d4) != 0) {
    FUN_00c48708(param_1 + 0x414);
  }
LAB_00b17254:
  FUN_00b101b8(param_1 + 0xb0);
  return;
}

