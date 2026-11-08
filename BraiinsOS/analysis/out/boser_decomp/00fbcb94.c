// FUN_00fbcb94 @ 00fbcb94 size=516 calls_out=7 calls_in=1
// strings: 

void FUN_00fbcb94(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  switch(*(undefined1 *)(param_1 + 0xd2)) {
  case 0:
    piVar3 = (int *)param_1[0xca];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(param_1[0xca]);
    }
    FUN_019bb7e0(*param_1,param_1[1]);
    piVar3 = (int *)param_1[0xcb];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0160ea2c(param_1[0xcb]);
      return;
    }
  default:
    return;
  case 3:
    goto switchD_00fbcbb0_caseD_3;
  case 4:
    FUN_005f1a58(param_1 + 0xd4);
    goto LAB_00fbccec;
  case 5:
    break;
  case 6:
    if (*(char *)(param_1 + 0xe1) == '\x03') {
      iVar6 = 0x20;
      iVar4 = 0x1c;
      iVar7 = 0x24;
      iVar5 = 0x368;
LAB_00fbccb4:
      (**(code **)(*(int *)((int)param_1 + iVar5) + 0x10))
                ((int)param_1 + iVar7 + 0x350,*(undefined4 *)((int)param_1 + iVar4 + 0x350),
                 *(undefined4 *)((int)param_1 + iVar6 + 0x350));
    }
    else if (*(char *)(param_1 + 0xe1) == '\0') {
      iVar6 = 0xc;
      iVar4 = 8;
      iVar7 = 0x10;
      iVar5 = 0x354;
      goto LAB_00fbccb4;
    }
    *(undefined1 *)((int)param_1 + 0x34b) = 0;
    break;
  case 7:
    if (*(char *)(param_1 + 0x169) == '\0') {
      puVar2 = param_1 + 0x11e;
    }
    else {
      if (*(char *)(param_1 + 0x169) != '\x03') break;
      puVar2 = param_1 + 0xd4;
    }
    FUN_005f79fc(puVar2);
  }
  if (*(char *)((int)param_1 + 0x349) != '\0') {
    FUN_005f79fc(param_1 + 0x7a);
  }
LAB_00fbccec:
  *(undefined1 *)((int)param_1 + 0x349) = 0;
  FUN_00fbbf54(param_1 + 0x54);
switchD_00fbcbb0_caseD_3:
  if (param_1[0xcf] != -0x80000000) {
    FUN_019bb7e0(param_1[0xcf],param_1[0xd0]);
  }
  piVar3 = (int *)param_1[0xce];
  *(undefined1 *)((int)param_1 + 0x34a) = 0;
  DataMemoryBarrier(0xb);
  *(undefined1 *)(piVar3 + 2) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0xce]);
  }
  piVar3 = (int *)param_1[0xcd];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0160ea2c(param_1[0xcd]);
  }
  FUN_019bb7e0(param_1[4],param_1[5]);
  piVar3 = (int *)param_1[0xcc];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(param_1[0xcc]);
    return;
  }
  return;
}

