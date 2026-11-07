// FUN_00ddf86c @ 00ddf86c size=764 calls_out=4 calls_in=1
// strings: 

void FUN_00ddf86c(undefined4 *param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  switch(*(undefined1 *)((int)param_1 + 0x1e)) {
  case 0:
    param_1 = param_1 + 6;
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    goto LAB_00ddfbe0;
  default:
    goto switchD_00ddf888_caseD_1;
  case 3:
    FUN_005c19d4(param_1 + 8);
    goto LAB_00ddfbc4;
  case 4:
    if ((*(char *)(param_1 + 0xb) == '\x03') && (param_1[9] != 0)) {
      FUN_00e44660(param_1[9],param_1[10],1);
    }
    goto LAB_00ddfbbc;
  case 5:
    FUN_005c19d4(param_1 + 8);
    if (*(char *)((int)param_1 + 0x1d) == '\0') goto LAB_00ddfbbc;
    goto LAB_00ddfb90;
  case 6:
    uVar6 = param_1[8];
    puVar7 = (undefined4 *)param_1[9];
    pcVar5 = (code *)*puVar7;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar6);
    }
    if (puVar7[1] != 0) goto LAB_00ddfb74;
    goto LAB_00ddfb7c;
  case 7:
    FUN_005c19d4(param_1 + 8);
    break;
  case 8:
    FUN_005c19d4(param_1 + 8);
    break;
  case 9:
    FUN_005c19d4(param_1 + 8);
    break;
  case 10:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0xb:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0xc:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0xd:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0xe:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0xf:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x10:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x11:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x12:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x13:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x14:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x15:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x16:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x17:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x18:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x19:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x1a:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x1b:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x1c:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x1d:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x1e:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x1f:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x20:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x21:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x22:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x23:
    FUN_005c19d4(param_1 + 8);
    break;
  case 0x24:
    FUN_005c19d4(param_1 + 8);
  }
  if (*(char *)(param_1 + 7) != '\0') {
    puVar2 = (undefined1 *)param_1[4];
    iVar4 = param_1[5];
    if (iVar4 != 0) {
      do {
        *puVar2 = 0;
        iVar4 = iVar4 + -1;
        puVar2 = puVar2 + 1;
      } while (iVar4 != 0);
      puVar2 = (undefined1 *)param_1[4];
    }
    iVar4 = param_1[3];
    param_1[5] = 0;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    if (param_1[3] != 0) {
      uVar6 = param_1[4];
LAB_00ddfb74:
      thunk_FUN_016d3fb4(uVar6);
    }
  }
LAB_00ddfb7c:
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)((int)param_1 + 0x1d) != '\0') {
LAB_00ddfb90:
    uVar6 = *param_1;
    puVar7 = (undefined4 *)param_1[1];
    pcVar5 = (code *)*puVar7;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar6);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(uVar6);
    }
  }
LAB_00ddfbbc:
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
LAB_00ddfbc4:
  param_1 = param_1 + 2;
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
LAB_00ddfbe0:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00f36d34(*param_1);
    return;
  }
switchD_00ddf888_caseD_1:
  return;
}

