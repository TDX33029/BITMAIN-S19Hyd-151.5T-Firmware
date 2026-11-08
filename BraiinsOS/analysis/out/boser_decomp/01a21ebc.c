// FUN_01a21ebc @ 01a21ebc size=500 calls_out=8 calls_in=1
// strings: 

void FUN_01a21ebc(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  switch(*(undefined1 *)(param_1 + 0x5e)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x54);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(*(undefined4 *)(param_1 + 0x54));
    }
    FUN_019fc9e4(param_1 + 0x20);
    piVar2 = *(int **)(param_1 + 0x58);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar4 + -1;
    if (iVar4 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    uVar5 = *(undefined4 *)(param_1 + 0x58);
    goto LAB_01a220b8;
  default:
    goto switchD_01a21ed8_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x7c) == '\x03') {
      FUN_01a17e08(param_1 + 100);
      if (*(int *)(param_1 + 0x68) != 0) {
        (**(code **)(*(int *)(param_1 + 0x68) + 0xc))(*(undefined4 *)(param_1 + 0x6c));
      }
    }
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x8c);
    bVar7 = cVar1 == '\x03';
    if (bVar7) {
      cVar1 = *(char *)(param_1 + 0x88);
    }
    if (bVar7 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x68);
    }
    break;
  case 5:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    goto LAB_01a22044;
  case 6:
    cVar1 = *(char *)(param_1 + 0x98);
    bVar7 = cVar1 == '\x03';
    if (bVar7) {
      cVar1 = *(char *)(param_1 + 0x94);
    }
    if (bVar7 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x74);
    }
    goto LAB_01a22020;
  case 7:
    uVar5 = *(undefined4 *)(param_1 + 0x60);
    puVar6 = *(undefined4 **)(param_1 + 100);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_01be4678(uVar5);
    }
    FUN_0134c054(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x68),1,0x10);
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
LAB_01a22020:
    if (*(char *)(param_1 + 0x5c) != '\0') {
      FUN_0134c054(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),1,0x10);
    }
    *(undefined1 *)(param_1 + 0x5c) = 0;
LAB_01a22044:
    *(undefined1 *)(param_1 + 0x5d) = 0;
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
  }
  piVar2 = *(int **)(param_1 + 0x34);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar7 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar7);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(*(undefined4 *)(param_1 + 0x34));
  }
  FUN_019fc9e4(param_1);
  piVar2 = *(int **)(param_1 + 0x30);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar7 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar7);
  *piVar2 = iVar4 + -1;
  if (iVar4 != 1) {
switchD_01a21ed8_caseD_1:
    return;
  }
  DataMemoryBarrier(0xb);
  uVar5 = *(undefined4 *)(param_1 + 0x30);
LAB_01a220b8:
  FUN_01a38404(uVar5);
  return;
}

