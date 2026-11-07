// FUN_0170f5a0 @ 0170f5a0 size=192 calls_out=0 calls_in=1
// strings: 

void FUN_0170f5a0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_1 + 6) = 1;
  piVar3 = param_1 + 2;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *(char *)piVar3 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)iVar2 == '\0') {
    iVar2 = *param_1;
    *param_1 = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(param_1 + 2) = 0;
    DataMemoryBarrier(0xb);
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 0xc))(param_1[1]);
    }
  }
  piVar3 = param_1 + 5;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *(char *)piVar3 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)iVar2 != '\0') {
    return;
  }
  iVar2 = param_1[3];
  param_1[3] = 0;
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_1 + 5) = 0;
  DataMemoryBarrier(0xb);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0170f65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 4))(param_1[4]);
  return;
}

