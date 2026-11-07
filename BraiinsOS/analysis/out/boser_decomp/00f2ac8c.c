// FUN_00f2ac8c @ 00f2ac8c size=288 calls_out=7 calls_in=2
// strings: 

void FUN_00f2ac8c(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    iVar3 = param_1[2];
    bVar4 = iVar3 == 0 && param_1[3] == 0;
    if (iVar3 != 0 || param_1[3] != 0) {
      iVar3 = param_1[4];
      bVar4 = iVar3 == 0;
    }
    if (bVar4) {
      return;
    }
    FUN_00f80320(iVar3,param_1[5]);
    return;
  }
  switch(*(undefined1 *)((int)param_1 + 0x15)) {
  case 0:
    FUN_005faf6c(param_1 + 3);
    piVar2 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    goto LAB_00f2991c;
  default:
    return;
  case 3:
    FUN_00f29a0c(param_1 + 6);
    break;
  case 4:
    if ((char)param_1[0x14] == '\x03') {
      cVar1 = (char)param_1[0x13];
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = (char)param_1[10];
      }
      if (bVar4 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0xb);
      }
    }
    break;
  case 5:
    if (*(char *)((int)param_1 + 0x86) == '\x03') {
      FUN_00ba6dc4(param_1 + 7);
    }
    FUN_019f8c54(param_1[2],1);
  }
  FUN_005faf6c(param_1 + 3);
  piVar2 = (int *)param_1[4];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
LAB_00f2991c:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121d018(param_1[4]);
    return;
  }
  return;
}

