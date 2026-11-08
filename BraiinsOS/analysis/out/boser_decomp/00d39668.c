// FUN_00d39668 @ 00d39668 size=308 calls_out=5 calls_in=2
// strings: 

void FUN_00d39668(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
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
  cVar1 = (char)param_1[5];
  if (cVar1 == '\0') {
    piVar3 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    goto LAB_00d39784;
  }
  if (cVar1 == '\x03') {
    FUN_01431b40(param_1 + 6);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    puVar5 = (undefined4 *)param_1[6];
    if (*(char *)(puVar5 + 0x23) == '\0') {
      piVar3 = (int *)*puVar5;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
LAB_00d3974c:
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01177340(*puVar5);
      }
    }
    else if (*(char *)(puVar5 + 0x23) == '\x03') {
      FUN_00d354b8(puVar5 + 1);
      piVar3 = (int *)*puVar5;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      goto LAB_00d3974c;
    }
    thunk_FUN_01be4678(puVar5);
  }
  piVar3 = (int *)param_1[4];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
LAB_00d39784:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(param_1[4]);
    return;
  }
  return;
}

