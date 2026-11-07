// FUN_00d3bedc @ 00d3bedc size=348 calls_out=10 calls_in=2
// strings: 

void FUN_00d3bedc(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
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
  cVar1 = *(char *)((int)param_1 + 0x55);
  if (cVar1 == '\0') {
    FUN_005faf6c(param_1 + 0x12);
    piVar3 = (int *)param_1[0x13];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01177340(param_1[0x13]);
    }
    goto LAB_00d3c02c;
  }
  if (cVar1 == '\x03') {
    FUN_019ede44(param_1 + 0x1c);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if ((char)param_1[0x189] == '\x03') {
      if ((char)param_1[0x17] == '\x04') {
        if ((char)param_1[0x183] == '\x03') {
          if ((char)param_1[0x180] == '\x03') {
            piVar3 = param_1 + 0xce;
          }
          else {
            if ((char)param_1[0x180] != '\0') goto LAB_00d3bfdc;
            piVar3 = param_1 + 0x1c;
          }
          FUN_00d35898(piVar3);
        }
LAB_00d3bfdc:
        FUN_0084ec48(param_1 + 0x18);
      }
      else if ((char)param_1[0x17] == '\x03') {
        FUN_00d35804(param_1 + 0x18);
      }
    }
  }
  FUN_00d35a90(param_1 + 8);
  FUN_00668c84(param_1[6]);
  FUN_005faf6c(param_1 + 0x12);
  piVar3 = (int *)param_1[0x13];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(param_1[0x13]);
  }
LAB_00d3c02c:
  FUN_00d35784(param_1 + 0x14);
  return;
}

