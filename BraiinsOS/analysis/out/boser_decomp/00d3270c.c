// FUN_00d3270c @ 00d3270c size=564 calls_out=11 calls_in=2
// strings: 

void FUN_00d3270c(int *param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (*param_1 == 1) {
    iVar4 = 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      iVar4 = param_1[4];
    }
    if ((param_1[2] != 0 || param_1[3] != 0) && iVar4 != 0) {
      FUN_01443048(iVar4,param_1[5]);
      return;
    }
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if ((char)param_1[0x75] != '\x03') {
    if ((char)param_1[0x75] != '\0') {
      return;
    }
    iVar4 = param_1[10];
    puVar5 = (undefined4 *)param_1[0xb];
    pcVar3 = (code *)*puVar5;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(iVar4);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_01be4678(iVar4);
    }
    piVar2 = (int *)param_1[0x6c];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182080(param_1[0x6c]);
    }
    FUN_006763fc(param_1 + 0x6d);
    return;
  }
  switch((char)param_1[0x46]) {
  case '\0':
    FUN_00d32af4(param_1 + 0xc);
    FUN_006763fc(param_1 + 0x36);
  default:
    goto switchD_00d327dc_caseD_1;
  case '\x03':
    if (((char)param_1[0x58] == '\x03') && ((short)param_1[0x50] == 3)) {
      FUN_0185401c((char)param_1[0x51],param_1[0x52]);
    }
    goto LAB_00d32924;
  case '\x04':
    cVar1 = (char)param_1[0x5e];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_1[0x4f];
    }
    if (bVar6 && cVar1 == '\x03') {
      cVar1 = (char)param_1[0x5d];
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = (char)param_1[0x5c];
      }
      if (bVar6 && cVar1 == '\x03') {
        FUN_019e12b8(param_1 + 0x54);
        if (param_1[0x57] != 0) {
          (**(code **)(param_1[0x57] + 0xc))(param_1[0x58]);
        }
      }
    }
    break;
  case '\x05':
    *(undefined1 *)(param_1 + 0x47) = 0;
    FUN_006763fc(param_1 + 0x48);
    *(undefined1 *)((int)param_1 + 0x119) = 0;
    FUN_00b76614(param_1 + 0x54);
    *(undefined1 *)((int)param_1 + 0x11a) = 0;
    if (param_1[0x2a] == 2) {
      FUN_00d32b40();
    }
  }
  piVar2 = (int *)param_1[0x45];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0x45]);
  }
  piVar2 = (int *)param_1[0x44];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014afd70(param_1[0x44]);
  }
  FUN_00b76614(param_1 + 0x26);
LAB_00d32924:
  FUN_006763fc(param_1 + 0x3d);
  if (*(char *)((int)param_1 + 0x11b) != '\0') {
    FUN_00d32af4(param_1 + 0x5a);
  }
  *(undefined1 *)((int)param_1 + 0x11b) = 0;
switchD_00d327dc_caseD_1:
  *(undefined4 *)((int)param_1 + 0x1d5) = 0;
  *(undefined2 *)((int)param_1 + 0x1d9) = 0;
  return;
}

