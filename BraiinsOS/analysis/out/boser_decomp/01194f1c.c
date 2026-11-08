// FUN_01194f1c @ 01194f1c size=216 calls_out=4 calls_in=2
// strings: 

void FUN_01194f1c(undefined1 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1[0xf1] == '\0') {
    piVar2 = *(int **)(param_1 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    }
    piVar2 = *(int **)(param_1 + 0x38);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_1 + 0x38));
    }
    iVar3 = 0x18;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*param_1) {
    default:
      return;
    case 2:
      break;
    case 3:
      iVar3 = 0x10;
      break;
    case 4:
      iVar3 = 4;
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + iVar3),*(undefined4 *)((int)(param_1 + iVar3) + 4));
    return;
  }
  if (param_1[0xf1] == '\x03') {
    FUN_00b9695c(param_1 + 0x48);
    param_1[0xf0] = 0;
    return;
  }
  return;
}

