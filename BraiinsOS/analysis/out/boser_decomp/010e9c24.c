// FUN_010e9c24 @ 010e9c24 size=300 calls_out=9 calls_in=1
// strings: 

void FUN_010e9c24(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0x4d);
  if (cVar1 == '\0') {
    FUN_005faf6c(param_1 + 0x40);
    piVar2 = *(int **)(param_1 + 0x44);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01177340(*(undefined4 *)(param_1 + 0x44));
    }
    goto LAB_010e9d44;
  }
  if (cVar1 == '\x03') {
    FUN_019ede44(param_1 + 0x68);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x61c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x54);
      if (cVar1 == '\x04') {
        if (*(char *)(param_1 + 0x604) == '\x03') {
          if (*(char *)(param_1 + 0x5f8) == '\x03') {
            iVar3 = param_1 + 0x330;
          }
          else {
            if (*(char *)(param_1 + 0x5f8) != '\0') goto LAB_010e9cf4;
            iVar3 = param_1 + 0x68;
          }
          FUN_00b9a8cc(iVar3);
        }
LAB_010e9cf4:
        FUN_010e7e10(param_1 + 0x58);
      }
      else {
        bVar4 = cVar1 == '\x03';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 0x118);
        }
        if (bVar4 && cVar1 == '\x03') {
          FUN_00b99500(param_1 + 0x5c);
        }
      }
    }
  }
  FUN_00d35a90(param_1 + 0x18);
  FUN_00668c84(*(undefined4 *)(param_1 + 0x10));
  FUN_005faf6c(param_1 + 0x40);
  piVar2 = *(int **)(param_1 + 0x44);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(*(undefined4 *)(param_1 + 0x44));
  }
LAB_010e9d44:
  FUN_00d35784(param_1 + 0x48);
  return;
}

