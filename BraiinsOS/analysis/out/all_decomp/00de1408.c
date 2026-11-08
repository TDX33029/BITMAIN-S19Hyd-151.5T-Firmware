// FUN_00de1408 @ 00de1408 size=704 calls_out=4 calls_in=1
// strings: 

void FUN_00de1408(undefined4 *param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  switch(*(undefined1 *)((int)param_1 + 0x36)) {
  case 0:
    param_1 = param_1 + 0xc;
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    goto LAB_00de171c;
  default:
    goto switchD_00de1424_caseD_1;
  case 3:
    FUN_005c19d4(param_1 + 0xe);
    goto LAB_00de1700;
  case 4:
    if ((*(char *)(param_1 + 0x11) == '\x03') && (param_1[0xf] != 0)) {
      FUN_00e44660(param_1[0xf],param_1[0x10],1);
    }
    goto LAB_00de16f8;
  case 5:
    FUN_005c19d4(param_1 + 0xe);
    goto LAB_00de16c0;
  case 6:
    uVar7 = param_1[0xe];
    puVar8 = (undefined4 *)param_1[0xf];
    pcVar5 = (code *)*puVar8;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar7);
    }
    if (puVar8[1] == 0) goto LAB_00de16c0;
    goto LAB_00de16b8;
  case 7:
    FUN_005c19d4(param_1 + 0xe);
    break;
  case 8:
    FUN_005c19d4(param_1 + 0xe);
    break;
  case 9:
    FUN_005c19d4(param_1 + 0xe);
    break;
  case 10:
    FUN_005c19d4(param_1 + 0xe);
    break;
  case 0xb:
    FUN_005c19d4(param_1 + 0xe);
    break;
  case 0xc:
    FUN_005c19d4(param_1 + 0xe);
    break;
  case 0xd:
    FUN_005c19d4(param_1 + 0xe);
    break;
  case 0xe:
    FUN_005c19d4(param_1 + 0xe);
    break;
  case 0xf:
    FUN_005c19d4(param_1 + 0xe);
    break;
  case 0x10:
    FUN_005c19d4(param_1 + 0xe);
    break;
  case 0x11:
    FUN_005c19d4(param_1 + 0xe);
    goto LAB_00de1660;
  case 0x12:
    FUN_005c19d4(param_1 + 0xe);
    goto LAB_00de1660;
  case 0x13:
    FUN_005c19d4(param_1 + 0xe);
    goto LAB_00de1660;
  case 0x14:
    FUN_005c19d4(param_1 + 0xe);
    goto LAB_00de1660;
  case 0x15:
    FUN_005c19d4(param_1 + 0xe);
    goto LAB_00de1660;
  case 0x16:
    FUN_005c19d4(param_1 + 0xe);
    goto LAB_00de1660;
  case 0x17:
    FUN_005c19d4(param_1 + 0xe);
    goto LAB_00de1660;
  case 0x18:
    FUN_005c19d4(param_1 + 0xe);
    goto LAB_00de1660;
  case 0x19:
    FUN_005c19d4(param_1 + 0xe);
    goto LAB_00de1660;
  case 0x1a:
    FUN_005c19d4(param_1 + 0xe);
    goto LAB_00de1660;
  case 0x1b:
    FUN_005c19d4(param_1 + 0xe);
LAB_00de1660:
    *(undefined1 *)((int)param_1 + 0x35) = 0;
    break;
  case 0x1c:
    FUN_005c19d4(param_1 + 0xe);
    break;
  case 0x1d:
    FUN_005c19d4(param_1 + 0xe);
    break;
  case 0x1e:
    FUN_005c19d4(param_1 + 0xe);
    break;
  case 0x1f:
    FUN_005c19d4(param_1 + 0xe);
    break;
  case 0x20:
    FUN_005c19d4(param_1 + 0xe);
    break;
  case 0x21:
    FUN_005c19d4(param_1 + 0xe);
  }
  puVar2 = (undefined1 *)param_1[4];
  iVar4 = param_1[5];
  if (iVar4 != 0) {
    puVar6 = puVar2;
    do {
      *puVar6 = 0;
      iVar4 = iVar4 + -1;
      puVar6 = puVar6 + 1;
    } while (iVar4 != 0);
  }
  iVar4 = param_1[3];
  param_1[5] = 0;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (param_1[3] != 0) {
    uVar7 = param_1[4];
LAB_00de16b8:
    thunk_FUN_016d3fb4(uVar7);
  }
LAB_00de16c0:
  if (*(char *)(param_1 + 0xd) != '\0') {
    uVar7 = *param_1;
    puVar8 = (undefined4 *)param_1[1];
    pcVar5 = (code *)*puVar8;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar7);
    }
    if (puVar8[1] != 0) {
      thunk_FUN_016d3fb4(uVar7);
    }
  }
LAB_00de16f8:
  *(undefined1 *)(param_1 + 0xd) = 0;
LAB_00de1700:
  param_1 = param_1 + 2;
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
LAB_00de171c:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00f36d34(*param_1);
    return;
  }
switchD_00de1424_caseD_1:
  return;
}

