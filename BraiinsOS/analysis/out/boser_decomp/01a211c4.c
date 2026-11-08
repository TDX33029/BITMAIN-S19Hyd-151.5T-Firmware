// FUN_01a211c4 @ 01a211c4 size=376 calls_out=10 calls_in=1
// strings: 

void FUN_01a211c4(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  switch(*(undefined1 *)(param_1 + 0xe5)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0xd8);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(*(undefined4 *)(param_1 + 0xd8));
    }
    FUN_019fcf58(param_1 + 0x20);
    FUN_0193c71c(param_1 + 0xdc);
    return;
  default:
    goto switchD_01a211e0_caseD_1;
  case 3:
    FUN_019faf5c(param_1 + 0xe8);
    goto LAB_01a21308;
  case 4:
    cVar1 = *(char *)(param_1 + 0x114);
    bVar7 = cVar1 == '\x03';
    if (bVar7) {
      cVar1 = *(char *)(param_1 + 0x110);
    }
    if (bVar7 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0xf0);
    }
    goto LAB_01a212d0;
  case 5:
    uVar5 = *(undefined4 *)(param_1 + 0xe8);
    puVar6 = *(undefined4 **)(param_1 + 0xec);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_01be4678(uVar5);
    }
    break;
  case 6:
    FUN_01139b38(*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec));
    *(undefined1 *)(param_1 + 0xe3) = 0;
    if (*(int *)(param_1 + 0x78) != 4 || *(int *)(param_1 + 0x7c) != 0) {
      *(undefined1 *)(param_1 + 0xe0) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0xe0) = 0;
  FUN_019f8c54(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0));
LAB_01a212d0:
  if (*(char *)(param_1 + 0xe2) != '\0') {
    FUN_0134c054(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),4,4);
  }
  if (*(char *)(param_1 + 0xe1) != '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
  }
  *(undefined2 *)(param_1 + 0xe1) = 0;
LAB_01a21308:
  *(undefined1 *)(param_1 + 0xe4) = 0;
  FUN_0193c71c(param_1 + 0xc4);
  FUN_019fcf58(param_1);
  piVar2 = *(int **)(param_1 + 0xc0);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar7 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar7);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(*(undefined4 *)(param_1 + 0xc0));
    return;
  }
switchD_01a211e0_caseD_1:
  return;
}

