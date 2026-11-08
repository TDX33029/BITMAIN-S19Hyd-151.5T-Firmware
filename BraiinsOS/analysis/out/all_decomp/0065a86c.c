// FUN_0065a86c @ 0065a86c size=648 calls_out=10 calls_in=2
// strings: 

void FUN_0065a86c(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  switch(*(undefined1 *)((int)param_1 + 0x11)) {
  case 0:
    param_1 = param_1 + 3;
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar3 + -1;
    goto LAB_0065ab08;
  default:
    goto switchD_0065a888_caseD_1;
  case 3:
    if (param_1[5] != 0) {
      FUN_006f5fbc(param_1[5],param_1[6],1);
    }
    goto LAB_0065aaec;
  case 4:
    FUN_0065ac74(param_1 + 8);
    if (*(char *)(param_1 + 0x37a) == '\x03') {
      if (*(char *)(param_1 + 0x377) == '\x04') {
        FUN_006f625c(param_1[0x376]);
      }
      else if ((*(char *)(param_1 + 0x377) == '\x03') && (param_1[0x378] != 0)) {
        FUN_006f5fbc(param_1[0x378],param_1[0x379],1);
      }
    }
    break;
  case 5:
    uVar4 = param_1[5];
    puVar5 = (undefined4 *)param_1[6];
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(uVar4);
    }
LAB_0065aa28:
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(uVar4);
    }
    break;
  case 6:
    if (param_1[5] != 0) {
      FUN_006f5fbc(param_1[5],param_1[6],1);
    }
    break;
  case 7:
    cVar1 = *(char *)(param_1 + 0x39);
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = *(char *)(param_1 + 0x38);
    }
    if (bVar6 && cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0x2b);
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 0x2a);
      }
      if (bVar6 && cVar1 == '\x03') {
        FUN_0163c790(param_1 + 0x22);
        if (param_1[0x23] != 0) {
          (**(code **)(param_1[0x23] + 0xc))(param_1[0x24]);
        }
      }
    }
    piVar2 = (int *)param_1[0xe];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fb60(param_1[0xe]);
    }
    FUN_006f625c(param_1[2]);
    break;
  case 8:
    if (param_1[5] != 0) {
      FUN_006f5fbc(param_1[5],param_1[6],1);
    }
    break;
  case 9:
    if (param_1[5] != 0) {
      FUN_006f5fbc(param_1[5],param_1[6],1);
    }
    break;
  case 10:
    if (param_1[5] != 0) {
      FUN_006f5fbc(param_1[5],param_1[6],1);
    }
    break;
  case 0xb:
    if (*(char *)(param_1 + 0x14) == '\x03') {
      FUN_00656120(param_1 + 8);
    }
    else if (*(char *)(param_1 + 0x14) == '\0') {
      uVar4 = param_1[6];
      puVar5 = (undefined4 *)param_1[7];
      if ((code *)*puVar5 != (code *)0x0) {
        (*(code *)*puVar5)(uVar4);
      }
      goto LAB_0065aa28;
    }
  }
  puVar5 = param_1 + 1;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_01663cc4(*puVar5);
  piVar2 = (int *)*puVar5;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar5);
  }
LAB_0065aaec:
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar3 + -1;
LAB_0065ab08:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078fcec(*param_1);
    return;
  }
switchD_0065a888_caseD_1:
  return;
}

