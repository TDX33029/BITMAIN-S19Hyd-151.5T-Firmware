// FUN_017dcbd8 @ 017dcbd8 size=464 calls_out=10 calls_in=2
// strings: 

void FUN_017dcbd8(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x16e)) {
  case 0:
    FUN_0179791c(param_1 + 0x28);
    FUN_01706d0c(param_1 + 0xf0);
    FUN_0177a594(param_1);
    return;
  default:
    goto switchD_017dcbf4_caseD_1;
  case 3:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184));
    goto LAB_017dccbc;
  case 4:
    FUN_017dcfd4(param_1 + 0x198);
    break;
  case 5:
    FUN_017db4ac(param_1 + 0x188);
    piVar2 = *(int **)(param_1 + 0x180);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018bcb30(*(undefined4 *)(param_1 + 0x180));
    }
    *(undefined1 *)(param_1 + 0x176) = 0;
    break;
  case 6:
    FUN_017dd0f4(param_1 + 0x180);
    if (*(char *)(param_1 + 0x158) != '\x02') {
      (**(code **)(*(int *)(param_1 + 0x148) + 0x10))
                (param_1 + 0x154,*(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x150));
    }
    *(undefined1 *)(param_1 + 0x173) = 0;
    goto LAB_017dcd8c;
  }
  *(undefined1 *)(param_1 + 0x16f) = 0;
  if ((*(char *)(param_1 + 0x170) != '\0') && (*(char *)(param_1 + 0x180) == '\0')) {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x184),*(undefined4 *)(param_1 + 0x188));
  }
  *(undefined1 *)(param_1 + 0x170) = 0;
LAB_017dccbc:
  *(undefined1 *)(param_1 + 0x177) = 0;
  if (*(char *)(param_1 + 0x171) != '\0') {
    piVar2 = *(int **)(param_1 + 0x168);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018bcb30(*(undefined4 *)(param_1 + 0x168));
    }
  }
  *(undefined1 *)(param_1 + 0x171) = 0;
  FUN_01799830(param_1 + 0xd0);
  if (*(char *)(param_1 + 0x172) != '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(param_1 + 0x160));
  }
  *(undefined1 *)(param_1 + 0x172) = 0;
  bVar4 = *(char *)(param_1 + 0x173) != '\0';
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x158);
  }
  if (bVar4 && cVar1 != '\x02') {
    (**(code **)(*(int *)(param_1 + 0x148) + 0x10))
              (param_1 + 0x154,*(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x150));
  }
  *(undefined1 *)(param_1 + 0x173) = 0;
LAB_017dcd8c:
  *(undefined4 *)(param_1 + 0x179) = 0;
  *(undefined1 *)(param_1 + 0x174) = 0;
  *(undefined1 *)(param_1 + 0x178) = 0;
  FUN_01706d0c(param_1 + 0x11c);
  if (*(char *)(param_1 + 0x175) != '\0') {
    FUN_0179791c(param_1 + 0x68);
  }
  *(undefined1 *)(param_1 + 0x175) = 0;
switchD_017dcbf4_caseD_1:
  return;
}

