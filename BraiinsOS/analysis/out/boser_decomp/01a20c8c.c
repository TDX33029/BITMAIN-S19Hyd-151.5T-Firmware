// FUN_01a20c8c @ 01a20c8c size=392 calls_out=9 calls_in=1
// strings: 

void FUN_01a20c8c(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  switch(*(undefined1 *)(param_1 + 0xa5)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x9c);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38338(*(undefined4 *)(param_1 + 0x9c));
    }
    FUN_019fafc0(param_1 + 0x20);
    FUN_0193c71c(param_1 + 0xa0);
    FUN_005fb2fc(param_1 + 0x60);
    return;
  default:
    goto switchD_01a20ca8_caseD_1;
  case 3:
    FUN_019faf5c(param_1 + 0xa8);
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0xd4);
    bVar7 = cVar1 == '\x03';
    if (bVar7) {
      cVar1 = *(char *)(param_1 + 0xd0);
    }
    if (bVar7 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0xb0);
    }
    break;
  case 5:
    uVar5 = *(undefined4 *)(param_1 + 0xa8);
    puVar6 = *(undefined4 **)(param_1 + 0xac);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_01be4678(uVar5);
    }
    goto LAB_01a20dc4;
  case 6:
    cVar1 = *(char *)(param_1 + 0xd8);
    bVar7 = cVar1 == '\x03';
    if (bVar7) {
      cVar1 = *(char *)(param_1 + 0xd4);
    }
    if (bVar7 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0xb4);
    }
    piVar2 = *(int **)(param_1 + 0xa8);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(*(undefined4 *)(param_1 + 0xa8));
    }
    if (*(char *)(param_1 + 0x58) == '\0') {
      *(undefined1 *)(param_1 + 0xa4) = 0;
    }
LAB_01a20dc4:
    *(undefined1 *)(param_1 + 0xa4) = 0;
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  }
  FUN_005fb2fc(param_1 + 0x30);
  FUN_0193c71c(param_1 + 0x8c);
  FUN_019fafc0(param_1);
  piVar2 = *(int **)(param_1 + 0x88);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar7 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar7);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38338(*(undefined4 *)(param_1 + 0x88));
    return;
  }
switchD_01a20ca8_caseD_1:
  return;
}

