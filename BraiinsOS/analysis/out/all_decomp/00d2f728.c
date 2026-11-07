// FUN_00d2f728 @ 00d2f728 size=116 calls_out=3 calls_in=0
// strings: 

void FUN_00d2f728(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined8 uVar8;
  
  uVar5 = *param_1;
  uVar6 = param_1[1];
  puVar7 = (uint *)param_1[2];
  while( true ) {
    uVar8 = FUN_00c740e8(uVar5,uVar6);
    piVar2 = (int *)uVar8;
    if (((uint)((ulonglong)uVar8 >> 0x20) & 0xfe) == 2) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar7;
      bVar1 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar1);
    *puVar7 = uVar3 - 2;
    if (uVar3 < 2) break;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_015bef44();
}

