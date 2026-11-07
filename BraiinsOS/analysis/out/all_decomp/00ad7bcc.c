// FUN_00ad7bcc @ 00ad7bcc size=324 calls_out=5 calls_in=3
// strings: 

void FUN_00ad7bcc(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (*(char *)(param_1 + 0x21) != '\0') {
    if (*(char *)(param_1 + 0x21) == '\x03') {
      FUN_00887914(param_1 + 0x1a);
      return;
    }
    return;
  }
  switch(*(undefined1 *)((int)param_1 + 0x16)) {
  case 0:
    puVar6 = param_1 + 4;
    piVar3 = (int *)*puVar6;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 != 1) goto switchD_00ad7c08_caseD_1;
    goto LAB_00ad7d10;
  default:
    goto switchD_00ad7c08_caseD_1;
  case 3:
    uVar5 = param_1[6];
    puVar6 = (undefined4 *)param_1[7];
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    goto LAB_00ad7cc4;
  case 4:
    uVar5 = param_1[6];
    puVar6 = (undefined4 *)param_1[7];
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    break;
  case 5:
    FUN_00a07b4c(param_1 + 6);
  }
  *(undefined1 *)((int)param_1 + 0x15) = 0;
LAB_00ad7cc4:
  iVar2 = 0;
  if (*(char *)(param_1 + 5) != '\0') {
    iVar2 = param_1[1];
  }
  if (*(char *)(param_1 + 5) != '\0' && iVar2 != 0) {
    thunk_FUN_016d3fb4(param_1[2]);
  }
  piVar3 = (int *)*param_1;
  *(undefined1 *)(param_1 + 5) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  puVar6 = param_1;
  if (iVar2 == 1) {
LAB_00ad7d10:
    DataMemoryBarrier(0xb);
    FUN_008f3984(*puVar6);
  }
switchD_00ad7c08_caseD_1:
  FUN_00ac9c30(param_1 + 0x1e);
  return;
}

