// FUN_00fcc6b0 @ 00fcc6b0 size=660 calls_out=9 calls_in=0
// strings: 

void FUN_00fcc6b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  switch(*(undefined1 *)(param_1 + 0xe8)) {
  case 0:
    piVar3 = (int *)param_1[0xda];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar7 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar7);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(param_1[0xda]);
    }
    FUN_019bb7e0(*param_1,param_1[1]);
    piVar3 = (int *)param_1[0xdb];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar7 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar7);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0160ea2c(param_1[0xdb]);
      return;
    }
  default:
    return;
  case 3:
    goto switchD_00fcc6cc_caseD_3;
  case 4:
    FUN_00fcc390(param_1 + 0xea);
    goto LAB_00fcc860;
  case 5:
    FUN_00fcc390(param_1 + 0xea);
    goto LAB_00fcc860;
  case 6:
    FUN_005f1a58(param_1 + 0xea);
    goto LAB_00fcc858;
  case 7:
    break;
  case 8:
    if (*(char *)(param_1 + 0xf7) == '\x03') {
      iVar2 = 0x20;
      iVar4 = 0x1c;
      iVar6 = 0x24;
      iVar5 = 0x3c0;
LAB_00fcc814:
      (**(code **)(*(int *)((int)param_1 + iVar5) + 0x10))
                ((int)param_1 + iVar6 + 0x3a8,*(undefined4 *)((int)param_1 + iVar4 + 0x3a8),
                 *(undefined4 *)((int)param_1 + iVar2 + 0x3a8));
    }
    else if (*(char *)(param_1 + 0xf7) == '\0') {
      iVar2 = 0xc;
      iVar4 = 8;
      iVar6 = 0x10;
      iVar5 = 0x3ac;
      goto LAB_00fcc814;
    }
    *(undefined1 *)((int)param_1 + 0x3a7) = 0;
    break;
  case 9:
    if (*(char *)(param_1 + 0x17f) == '\0') {
      puVar1 = param_1 + 0x134;
    }
    else {
      if (*(char *)(param_1 + 0x17f) != '\x03') break;
      puVar1 = param_1 + 0xea;
    }
    FUN_005f79fc(puVar1);
    break;
  case 10:
    FUN_01139b38(param_1[0xea],param_1[0xeb]);
    goto LAB_00fcc7f4;
  case 0xb:
    FUN_01139b38(param_1[0xea],param_1[0xeb]);
LAB_00fcc7f4:
    FUN_019bb7e0(param_1[0xe5],param_1[0xe6]);
    goto switchD_00fcc6cc_caseD_3;
  }
  if (*(char *)((int)param_1 + 0x3a5) != '\0') {
    FUN_005f79fc(param_1 + 0x76);
  }
LAB_00fcc858:
  *(undefined1 *)((int)param_1 + 0x3a5) = 0;
LAB_00fcc860:
  if (*(char *)((int)param_1 + 0x3a2) != '\0') {
    FUN_00fbbf54(param_1 + 0x50);
  }
  *(undefined1 *)((int)param_1 + 0x3a2) = 0;
switchD_00fcc6cc_caseD_3:
  bVar7 = *(char *)((int)param_1 + 0x3a3) != '\0';
  iVar2 = 0;
  if (bVar7) {
    iVar2 = param_1[0xe2];
  }
  if (bVar7 && iVar2 != -0x80000000) {
    FUN_019bb7e0(iVar2,param_1[0xe3]);
  }
  *(undefined1 *)((int)param_1 + 0x3a3) = 0;
  bVar7 = *(char *)((int)param_1 + 0x3a6) != '\0';
  iVar2 = 0;
  if (bVar7) {
    iVar2 = param_1[0xdf];
  }
  if (bVar7 && iVar2 != -0x80000000) {
    FUN_019bb7e0(iVar2,param_1[0xe0]);
  }
  *(undefined1 *)((int)param_1 + 0x3a6) = 0;
  if (*(char *)(param_1 + 0xe9) != '\0') {
    piVar3 = (int *)param_1[0xde];
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar3 + 2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar7 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar7);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[0xde]);
    }
  }
  piVar3 = (int *)param_1[0xdd];
  *(undefined1 *)(param_1 + 0xe9) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0160ea2c(param_1[0xdd]);
  }
  piVar3 = (int *)param_1[0xdc];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(param_1[0xdc]);
    return;
  }
  return;
}

