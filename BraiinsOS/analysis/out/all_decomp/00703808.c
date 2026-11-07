// FUN_00703808 @ 00703808 size=380 calls_out=10 calls_in=1
// strings: 

void FUN_00703808(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  switch(*(undefined1 *)(param_1 + 0x4c6)) {
  case 0:
    puVar4 = (undefined4 *)(param_1 + 0x4c0);
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    goto LAB_0070398c;
  default:
    return;
  case 3:
    if (*(int *)(param_1 + 0x4c8) != 0) {
      FUN_006f5fbc(*(int *)(param_1 + 0x4c8),*(undefined4 *)(param_1 + 0x4cc),1);
    }
    goto LAB_00703970;
  case 4:
    FUN_00703a78(param_1 + 0x4c8);
    goto LAB_00703938;
  case 5:
    FUN_007041b4(param_1 + 0x4d0);
    break;
  case 6:
    if (*(char *)(param_1 + 0x790) == '\x03') {
      if ((*(char *)(param_1 + 0x784) == '\x03') && (*(int *)(param_1 + 0x770) != 0)) {
        FUN_006f5d1c(*(int *)(param_1 + 0x770),*(undefined4 *)(param_1 + 0x774),1);
      }
      iVar3 = param_1 + 0x678;
LAB_0070391c:
      FUN_006ff914(iVar3);
    }
    else if (*(char *)(param_1 + 0x790) == '\0') {
      iVar3 = param_1 + 0x5a0;
      goto LAB_0070391c;
    }
    *(undefined1 *)(param_1 + 0x4c5) = 0;
    break;
  case 7:
    cVar1 = *(char *)(param_1 + 0x4e0);
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = *(char *)(param_1 + 0x4dc);
    }
    if ((bVar5 && cVar1 == '\x03') && (*(int *)(param_1 + 0x4d4) != 0)) {
      FUN_006f5d1c(*(int *)(param_1 + 0x4d4),*(undefined4 *)(param_1 + 0x4d8),1);
    }
  }
  FUN_00703e6c(param_1 + 0x70);
  FUN_0064a1f4(param_1);
LAB_00703938:
  piVar2 = *(int **)(param_1 + 0x4b8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaeec(*(undefined4 *)(param_1 + 0x4b8));
  }
  FUN_006f625c(*(undefined4 *)(param_1 + 0x4b4));
LAB_00703970:
  puVar4 = (undefined4 *)(param_1 + 0x4b0);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
LAB_0070398c:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00791350(*puVar4);
    return;
  }
  return;
}

