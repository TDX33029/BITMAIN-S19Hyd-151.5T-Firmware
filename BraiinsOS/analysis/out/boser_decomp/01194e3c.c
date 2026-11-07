// FUN_01194e3c @ 01194e3c size=204 calls_out=4 calls_in=2
// strings: 

void FUN_01194e3c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*param_1 == 0 && param_1[1] == 0) {
switchD_01194ed8_caseD_0:
    return;
  }
  if ((char)param_1[0x4f] == '\x03') {
    FUN_01194f1c(param_1 + 0xe);
    return;
  }
  if ((char)param_1[0x4f] != '\0') {
    return;
  }
  piVar2 = (int *)param_1[0xc];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_1[0xc],param_1[0xd]);
  }
  piVar2 = (int *)param_1[0x4e];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0x4e]);
  }
  iVar3 = 0x18;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[2]) {
  default:
    goto switchD_01194ed8_caseD_0;
  case '\x02':
    break;
  case '\x03':
    iVar3 = 0x10;
    break;
  case '\x04':
    iVar3 = 4;
  }
  puVar4 = (undefined4 *)((int)(param_1 + 2) + iVar3);
  FUN_019bb7e0(*puVar4,puVar4[1]);
  return;
}

