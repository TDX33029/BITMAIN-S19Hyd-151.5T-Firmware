// FUN_010ecb5c @ 010ecb5c size=232 calls_out=7 calls_in=1
// strings: 

void FUN_010ecb5c(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)((int)param_1 + 0xd)) {
  case 0:
    FUN_005faf6c(param_1 + 1);
    piVar2 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    goto LAB_010ecc40;
  default:
    return;
  case 3:
    FUN_019ede44(param_1 + 5);
    FUN_01431b40(param_1 + 0xe);
    break;
  case 4:
    if (*(char *)(param_1 + 0x12) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x11);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 8);
      }
      if (bVar4 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 9);
      }
    }
    break;
  case 5:
    if (*(char *)((int)param_1 + 0x7e) == '\x03') {
      FUN_00ba6dc4(param_1 + 5);
    }
    FUN_019f8c54(*param_1,1);
  }
  FUN_005faf6c(param_1 + 1);
  piVar2 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
LAB_010ecc40:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121d018(param_1[2]);
    return;
  }
  return;
}

