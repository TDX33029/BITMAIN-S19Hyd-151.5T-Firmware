// FUN_00b104cc @ 00b104cc size=652 calls_out=13 calls_in=1
// strings: 

void FUN_00b104cc(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  switch(*(undefined1 *)(param_1 + 0xb65)) {
  case 0:
    FUN_00c48708(param_1 + 0x304);
    FUN_00b10314(param_1);
    return;
  default:
    goto switchD_00b104e8_caseD_1;
  case 3:
    FUN_00b10e24(param_1 + 0xe28);
    goto LAB_00b10758;
  case 4:
    goto switchD_00b104e8_caseD_4;
  case 5:
    if (*(char *)(param_1 + 0xc88) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xc74);
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 0xc6c);
      }
      if ((bVar6 && cVar1 == '\x03') && (*(int *)(param_1 + 0xc60) != 0)) {
        FUN_00c81a4c(*(int *)(param_1 + 0xc60),*(undefined4 *)(param_1 + 0xc64),1);
      }
    }
    break;
  case 6:
    FUN_00b1443c(param_1 + 0xb78);
    break;
  case 7:
    if (*(char *)(param_1 + 0xc88) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xc74);
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 0xc6c);
      }
      if ((bVar6 && cVar1 == '\x03') && (*(int *)(param_1 + 0xc60) != 0)) {
        FUN_00c81a4c(*(int *)(param_1 + 0xc60),*(undefined4 *)(param_1 + 0xc64),1);
      }
    }
    break;
  case 8:
    FUN_00b1545c(param_1 + 0xb78);
    goto LAB_00b106dc;
  case 9:
  case 10:
  case 0xb:
    goto switchD_00b104e8_caseD_9;
  case 0xc:
    piVar2 = *(int **)(param_1 + 0xb78);
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar6 = (bool)hasExclusiveAccess(piVar2);
      if (bVar6) {
        *piVar2 = 0x84;
        goto switchD_00b104e8_caseD_9;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
    goto switchD_00b104e8_caseD_9;
  case 0xd:
    FUN_00b13014(param_1 + 0xb78);
switchD_00b104e8_caseD_9:
    if (*(char *)(param_1 + 0xb6c) != '\0') {
      if (*(int *)(param_1 + 0xae8) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xaec));
      }
      iVar3 = *(int *)(param_1 + 0xaf8);
      puVar5 = (undefined4 *)(iVar3 + 4);
      for (iVar4 = *(int *)(param_1 + 0xafc); iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar5[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar5);
        }
        puVar5 = puVar5 + 6;
      }
      if (*(int *)(param_1 + 0xaf4) != 0) {
        thunk_FUN_016d3fb4(iVar3);
      }
    }
    *(undefined1 *)(param_1 + 0xb6c) = 0;
    if (*(int *)(param_1 + 0xa40) == 2 && *(int *)(param_1 + 0xa44) == 0) {
      if (*(char *)(param_1 + 0xb6b) != '\0') {
        FUN_00ad20e4(param_1 + 0xa48);
      }
    }
    else {
      FUN_00ad1570();
    }
    *(undefined1 *)(param_1 + 0xb6d) = 0;
LAB_00b106dc:
    *(undefined1 *)(param_1 + 0xb6b) = 0;
    *(undefined1 *)(param_1 + 0xb6d) = 0;
  }
  FUN_00c541f4(param_1 + 0x9c0);
  if (*(int *)(param_1 + 0xa18) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa1c));
  }
  *(undefined1 *)(param_1 + 0xb72) = 0;
switchD_00b104e8_caseD_4:
  if (*(int *)(param_1 + 0xb54) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb58));
  }
  if (*(char *)(param_1 + 0xb6e) != '\0') {
    FUN_00c48cbc(param_1 + 0xb3c);
  }
  *(undefined1 *)(param_1 + 0xb6e) = 0;
  if (*(char *)(param_1 + 0xb6f) != '\0') {
    FUN_00b14394(param_1 + 0x380);
  }
  *(undefined1 *)(param_1 + 0xb6f) = 0;
LAB_00b10758:
  FUN_00c48cbc(param_1 + 0xb30);
  if (*(char *)(param_1 + 0xb70) != '\0') {
    FUN_00b10314(param_1 + 0xb78);
  }
  *(undefined1 *)(param_1 + 0xb70) = 0;
  FUN_00c48708(param_1 + 0x35c);
  *(undefined1 *)(param_1 + 0xb71) = 0;
switchD_00b104e8_caseD_1:
  return;
}

