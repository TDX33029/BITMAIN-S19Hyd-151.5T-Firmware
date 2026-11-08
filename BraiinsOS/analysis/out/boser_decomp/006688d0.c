// FUN_006688d0 @ 006688d0 size=380 calls_out=9 calls_in=2
// strings: 

void FUN_006688d0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 1) {
    FUN_00d332bc(param_1 + 2);
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if ((char)param_1[0xff] == '\0') {
    piVar2 = (int *)param_1[0xfc];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00687810(param_1[0xfc]);
    }
    FUN_00668c04(param_1 + 0xfd);
    goto switchD_00668914_caseD_1;
  }
  if ((char)param_1[0xff] != '\x03') {
    return;
  }
  switch(*(undefined1 *)((int)param_1 + 0x3b)) {
  case 0:
    piVar2 = (int *)param_1[0xb];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00687810(param_1[0xb]);
    }
    FUN_00668c04(param_1 + 0xc);
    FUN_005faf6c(param_1 + 0xd);
  default:
    goto switchD_00668914_caseD_1;
  case 3:
    FUN_019ede44(param_1 + 0x16);
    break;
  case 4:
    FUN_00668b80(param_1 + 0x7a);
    *(undefined1 *)((int)param_1 + 0x3a) = 0;
    FUN_00668cb0(param_1 + 0x36);
    FUN_006a0304(param_1 + 0xd0);
    break;
  case 5:
    FUN_00668b80(param_1 + 0x76);
    *(undefined1 *)((int)param_1 + 0x39) = 0;
    FUN_00668cb0(param_1 + 0x32);
    FUN_006a0304(param_1 + 0xcc);
  }
  FUN_00668c84(param_1[6]);
  FUN_005faf6c(param_1 + 10);
  FUN_00668c04(param_1 + 9);
  piVar2 = (int *)param_1[8];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00687810(param_1[8]);
  }
switchD_00668914_caseD_1:
  FUN_005faf6c(param_1 + 0xfe);
  return;
}

