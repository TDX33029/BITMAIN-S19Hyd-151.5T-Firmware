// FUN_018521d0 @ 018521d0 size=148 calls_out=1 calls_in=8
// strings: 

void FUN_018521d0(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *puVar6;
    bVar1 = (bool)hasExclusiveAccess(puVar6);
  } while (!bVar1);
  *puVar6 = 3;
  DataMemoryBarrier(0xb);
  cVar2 = FUN_01ae6348(uVar3);
  if (cVar2 != '\x02') {
    return;
  }
  pcVar4 = (char *)(param_1 + 0x14);
  do {
    DataMemoryBarrier(0xb);
    do {
      cVar2 = *pcVar4;
      bVar1 = (bool)hasExclusiveAccess(pcVar4);
    } while (!bVar1);
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  } while (cVar2 != '\0');
  iVar5 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_1 + 0x14) = 0;
  DataMemoryBarrier(0xb);
  if (iVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0185225c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar5 + 4))(*(undefined4 *)(param_1 + 0x10));
  return;
}

