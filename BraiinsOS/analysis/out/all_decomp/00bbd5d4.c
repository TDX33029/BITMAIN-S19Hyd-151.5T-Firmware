// FUN_00bbd5d4 @ 00bbd5d4 size=380 calls_out=7 calls_in=1
// strings: 

void FUN_00bbd5d4(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  
  switch(*(undefined1 *)(param_1 + 0xa0)) {
  case 0:
    if ((-0x7ffffffe < *(int *)(param_1 + 0x28)) && (*(int *)(param_1 + 0x28) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c));
    }
    puVar6 = (undefined4 *)(param_1 + 0x38);
    FUN_016af0b0(puVar6);
    piVar4 = (int *)*puVar6;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar3 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar3);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*puVar6);
      return;
    }
    return;
  default:
    goto switchD_00bbd5f0_caseD_1;
  case 3:
    FUN_00bcc828(param_1 + 0xa8);
    cVar1 = *(char *)(param_1 + 0xa2);
    goto joined_r0x00bbd6f8;
  case 4:
    FUN_00bd066c(param_1 + 0xa8);
    goto LAB_00bbd6e8;
  case 5:
    FUN_00bd10c0(param_1 + 0xa8);
    break;
  case 6:
    FUN_00bd25d8(param_1 + 0xb8);
  }
  puVar6 = (undefined4 *)(param_1 + 0x80);
  *(undefined1 *)(param_1 + 0xa1) = 0;
  FUN_016af0b0(puVar6);
  piVar4 = (int *)*puVar6;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar3 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar3);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*puVar6);
  }
LAB_00bbd6e8:
  *(undefined1 *)(param_1 + 0xa4) = 0;
  cVar1 = *(char *)(param_1 + 0xa2);
joined_r0x00bbd6f8:
  if (cVar1 != '\0') {
    puVar6 = (undefined4 *)(param_1 + 0x78);
    FUN_016af0b0(puVar6);
    piVar4 = (int *)*puVar6;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar3 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar3);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*puVar6);
    }
  }
  iVar5 = *(int *)(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0xa2) = 0;
  if (-1 < iVar5) {
    bVar2 = 0;
    if (iVar5 != 0) {
      bVar2 = *(byte *)(param_1 + 0xa3);
    }
    if (iVar5 != 0 && (bVar2 & 1) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x6c));
    }
  }
  *(undefined1 *)(param_1 + 0xa3) = 0;
switchD_00bbd5f0_caseD_1:
  return;
}

