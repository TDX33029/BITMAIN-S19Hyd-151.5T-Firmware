// FUN_01a20f44 @ 01a20f44 size=352 calls_out=9 calls_in=1
// strings: 

void FUN_01a20f44(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *extraout_r1;
  code *pcVar5;
  uint *extraout_r1_00;
  undefined4 uVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  puVar4 = &switchD_01a20f60::switchdataD_01a20f64;
  switch(*(undefined1 *)(param_1 + 0x5a)) {
  case 0:
    piVar3 = *(int **)(param_1 + 0x50);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar8 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar8);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(*(undefined4 *)(param_1 + 0x50));
    }
    FUN_019fba9c(param_1 + 0x20);
    FUN_019fb03c(param_1 + 0x54);
    return;
  default:
    goto switchD_01a20f60_caseD_1;
  case 3:
    FUN_019faf5c(param_1 + 0x60);
    goto LAB_01a21070;
  case 4:
    cVar1 = *(char *)(param_1 + 0x8c);
    bVar8 = cVar1 == '\x03';
    if (bVar8) {
      cVar1 = *(char *)(param_1 + 0x88);
    }
    if (bVar8 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x68);
      puVar4 = extraout_r1;
    }
    goto LAB_01a21044;
  case 5:
    uVar6 = *(undefined4 *)(param_1 + 100);
    puVar7 = *(undefined4 **)(param_1 + 0x68);
    pcVar5 = (code *)*puVar7;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar6);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_01be4678(uVar6);
    }
    FUN_0134c054(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x6c),4,4);
    break;
  case 6:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  }
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
  puVar4 = extraout_r1_00;
LAB_01a21044:
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 != -0x80000000) {
    puVar4 = (uint *)(uint)*(byte *)(param_1 + 0x58);
  }
  if (iVar2 != -0x80000000 && puVar4 != (uint *)0x0) {
    FUN_0134c054(iVar2,*(undefined4 *)(param_1 + 0x3c),4,4);
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
LAB_01a21070:
  *(undefined1 *)(param_1 + 0x59) = 0;
  FUN_019fb03c(param_1 + 0x34);
  FUN_019fba9c(param_1);
  piVar3 = *(int **)(param_1 + 0x30);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar8 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar8);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(*(undefined4 *)(param_1 + 0x30));
    return;
  }
switchD_01a20f60_caseD_1:
  return;
}

