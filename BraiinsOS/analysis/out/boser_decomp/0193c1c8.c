// FUN_0193c1c8 @ 0193c1c8 size=332 calls_out=8 calls_in=2
// strings: 

void FUN_0193c1c8(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  if (*param_1 == 1) {
    bVar4 = param_1[2] != 0 || param_1[3] != 0;
    iVar2 = 0;
    if (bVar4) {
      iVar2 = param_1[4];
    }
    if (bVar4 && iVar2 != 0) {
      FUN_01443048(iVar2,param_1[5]);
      return;
    }
switchD_0193c1fc_caseD_1:
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  switch(*(undefined1 *)((int)param_1 + 0x15d)) {
  case 0:
    piVar3 = (int *)param_1[0x56];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar4 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar4);
    *piVar3 = iVar2 + -1;
    goto LAB_0193c314;
  default:
    goto switchD_0193c1fc_caseD_1;
  case 3:
    cVar1 = (char)param_1[99];
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = (char)param_1[0x62];
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x5a);
    }
    goto LAB_0193c2f8;
  case 4:
    FUN_01139b38(param_1[0x58],param_1[0x59]);
    break;
  case 5:
    FUN_01139b38(param_1[0xfe],param_1[0xff]);
    if (((short)param_1[0x10f] == 0x255) && (3 < (uint)param_1[0x108])) {
      FUN_019bb7e0(param_1[0x109],param_1[0x10a]);
    }
    FUN_01a2affc(param_1 + 0xd0);
    FUN_0193c420(param_1 + 0x58);
    if (param_1[6] != 3 || param_1[7] != 0) {
      *(undefined1 *)(param_1 + 0x57) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x57) = 0;
  FUN_019f8c54(param_1[0x50],param_1[0x51]);
LAB_0193c2f8:
  piVar3 = (int *)param_1[0x56];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar4 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar4);
  *piVar3 = iVar2 + -1;
LAB_0193c314:
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0x56]);
    return;
  }
  return;
}

