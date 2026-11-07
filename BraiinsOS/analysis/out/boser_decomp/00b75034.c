// FUN_00b75034 @ 00b75034 size=232 calls_out=5 calls_in=1
// strings: 

void FUN_00b75034(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 3)) {
  case 0:
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    goto LAB_00b75120;
  default:
    return;
  case 3:
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
    goto LAB_00b75104;
  case 4:
    if (*(char *)((int)param_1 + 0x7e) == '\x03') {
      FUN_00ba6dc4(param_1 + 5);
    }
    break;
  case 5:
    FUN_00b75e40(param_1 + 4);
    break;
  case 6:
    if (*(char *)((int)param_1 + 0x7e) == '\x03') {
      FUN_00ba6dc4(param_1 + 5);
    }
  }
  FUN_019f8c54(param_1[2],1);
LAB_00b75104:
  param_1 = param_1 + 1;
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
LAB_00b75120:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121d018(*param_1);
    return;
  }
  return;
}

