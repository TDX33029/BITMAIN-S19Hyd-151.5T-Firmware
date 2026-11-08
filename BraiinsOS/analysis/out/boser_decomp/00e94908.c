// FUN_00e94908 @ 00e94908 size=248 calls_out=9 calls_in=2
// strings: 

void FUN_00e94908(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x3a)) {
  case 0:
    goto switchD_00e94924_caseD_0;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0x4c) == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
    }
    goto LAB_00e94a0c;
  case 4:
    FUN_00bba254(param_1 + 0x40);
    goto LAB_00e949dc;
  case 5:
    if (*(char *)(param_1 + 0x74) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x70);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x6c);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x4c);
      }
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0xac) == '\x03') {
      FUN_00e7a724(param_1 + 0x58);
    }
    FUN_00b5f0e4(param_1 + 0x4c);
    *(undefined1 *)(param_1 + 0x3d) = 0;
    FUN_00d66698(param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x3e) = 0;
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  }
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x24),1);
LAB_00e949dc:
  piVar2 = *(int **)(param_1 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a967c0(*(undefined4 *)(param_1 + 0x20));
  }
LAB_00e94a0c:
  param_1 = param_1 + 0x14;
switchD_00e94924_caseD_0:
  FUN_006a41c0(param_1);
  return;
}

