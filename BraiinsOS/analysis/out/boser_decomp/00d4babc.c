// FUN_00d4babc @ 00d4babc size=460 calls_out=11 calls_in=0
// strings: 

void FUN_00d4babc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0x208)) {
  case 0:
    FUN_00b9621c(param_1);
    FUN_00b96170(param_1 + 0x18);
    piVar2 = *(int **)(param_1 + 0x180);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_006c8c18(*(undefined4 *)(param_1 + 0x180));
    }
    piVar2 = *(int **)(param_1 + 0x184);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_006c8cac(*(undefined4 *)(param_1 + 0x184));
    }
    piVar2 = *(int **)(param_1 + 0x188);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    goto LAB_00d4bc98;
  default:
    return;
  case 3:
    FUN_00b965c4(param_1 + 0x210);
    goto LAB_00d4bc4c;
  case 4:
    FUN_00d48638(param_1 + 0x210);
    goto LAB_00d4bc4c;
  case 5:
    if (*(char *)(param_1 + 0x2d1) == '\x03') {
      FUN_00d4f404(param_1 + 0x21c);
      *(undefined1 *)(param_1 + 0x2d0) = 0;
    }
    break;
  case 6:
    FUN_00d48638(param_1 + 0x210);
    break;
  case 7:
    FUN_00d48638(param_1 + 0x210);
    *(undefined1 *)(param_1 + 0x20a) = 0;
    goto LAB_00d4bbc8;
  case 9:
    FUN_00d48638(param_1 + 0x210);
  case 8:
    FUN_00d4f424(param_1 + 0x1fc);
LAB_00d4bbc8:
    if (*(char *)(param_1 + 0x209) != '\0') {
      FUN_00d4f4a4(param_1 + 0x1b4);
    }
    *(undefined1 *)(param_1 + 0x209) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x18c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011827d4(*(undefined4 *)(param_1 + 0x18c));
  }
LAB_00d4bc4c:
  piVar2 = *(int **)(param_1 + 0x184);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_006c8cac(*(undefined4 *)(param_1 + 0x184));
  }
  piVar2 = *(int **)(param_1 + 0x188);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
LAB_00d4bc98:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182bec(*(undefined4 *)(param_1 + 0x188));
    return;
  }
  return;
}

