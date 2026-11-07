// FUN_00c00664 @ 00c00664 size=540 calls_out=8 calls_in=1
// strings: 

void FUN_00c00664(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0x7b9) == '\0') goto LAB_00c00118;
  if (*(char *)(param_1 + 0x7b9) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x1c1)) {
  case 0:
    goto switchD_00c003c4_caseD_0;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0x1fc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1f8);
      bVar8 = cVar1 == '\x03';
      if (bVar8) {
        cVar1 = *(char *)(param_1 + 500);
      }
      if (bVar8 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x1d4);
      }
    }
    goto LAB_00c00554;
  case 4:
    if (*(char *)(param_1 + 0x1fc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1f8);
      bVar8 = cVar1 == '\x03';
      if (bVar8) {
        cVar1 = *(char *)(param_1 + 500);
      }
      if (bVar8 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x1d4);
      }
    }
    goto LAB_00c00534;
  case 5:
    if (*(char *)(param_1 + 0x1fc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1f8);
      bVar8 = cVar1 == '\x03';
      if (bVar8) {
        cVar1 = *(char *)(param_1 + 500);
      }
      if (bVar8 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x1d4);
      }
    }
    goto LAB_00c00514;
  case 6:
    if (*(char *)(param_1 + 0x1fc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1f8);
      bVar8 = cVar1 == '\x03';
      if (bVar8) {
        cVar1 = *(char *)(param_1 + 500);
      }
      if (bVar8 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x1d4);
      }
    }
    goto LAB_00c004fc;
  case 7:
    if (*(char *)(param_1 + 0x1d4) == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x1cc),*(undefined4 *)(param_1 + 0x1d0));
    }
    break;
  case 8:
    FUN_00c0016c(param_1 + 0x1c8);
    piVar2 = *(int **)(param_1 + 0x1bc);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar8 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar8);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(*(undefined4 *)(param_1 + 0x1bc));
    }
  }
  FUN_00c00370(param_1 + 0x110);
  *(undefined1 *)(param_1 + 0x1c5) = 0;
LAB_00c004fc:
  if (*(char *)(param_1 + 0x1c2) != '\0') {
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x1b0));
  }
LAB_00c00514:
  *(undefined1 *)(param_1 + 0x1c2) = 0;
  if (*(char *)(param_1 + 0x1c3) != '\0') {
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a4));
  }
LAB_00c00534:
  *(undefined1 *)(param_1 + 0x1c3) = 0;
  if (*(char *)(param_1 + 0x1c4) != '\0') {
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x194),*(undefined4 *)(param_1 + 0x198));
  }
LAB_00c00554:
  *(undefined1 *)(param_1 + 0x1c4) = 0;
switchD_00c003c4_caseD_0:
  param_1 = param_1 + 0x78;
LAB_00c00118:
  iVar4 = *(int *)(param_1 + 0x68);
  if (iVar4 == -0x80000000) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x6c);
  iVar7 = *(int *)(param_1 + 0x70);
  for (iVar5 = 0; iVar7 != iVar5; iVar5 = iVar5 + 1) {
    puVar3 = (undefined4 *)(iVar6 + iVar5 * 0x10);
    FUN_019bb7e0(*puVar3,puVar3[1]);
  }
  FUN_0132b958(iVar4,iVar6,4,0x10);
  return;
}

