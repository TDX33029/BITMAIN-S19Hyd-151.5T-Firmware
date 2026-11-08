// FUN_010ea218 @ 010ea218 size=256 calls_out=4 calls_in=1
// strings: 

void FUN_010ea218(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 == '\0') {
    piVar3 = *(int **)(param_1 + 8);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    goto LAB_010ea300;
  }
  if (cVar1 == '\x03') {
    FUN_01431b40(param_1 + 0x10);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    puVar5 = *(undefined4 **)(param_1 + 0x10);
    if (*(char *)(puVar5 + 0x23) == '\0') {
      piVar3 = (int *)*puVar5;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
LAB_010ea2c8:
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01177340(*puVar5);
      }
    }
    else if (*(char *)(puVar5 + 0x23) == '\x03') {
      FUN_010ea3a4(puVar5 + 1);
      piVar3 = (int *)*puVar5;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      goto LAB_010ea2c8;
    }
    thunk_FUN_01be4678(puVar5);
  }
  piVar3 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
LAB_010ea300:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(*(undefined4 *)(param_1 + 8));
    return;
  }
  return;
}

