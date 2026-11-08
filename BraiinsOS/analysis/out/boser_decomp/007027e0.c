// FUN_007027e0 @ 007027e0 size=124 calls_out=3 calls_in=0
// strings: 

void FUN_007027e0(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_24 [2];
  int local_1c;
  
  while (FUN_00702640(local_24,param_1), local_24[0] != 0) {
    iVar2 = local_24[0] + local_1c * 8;
    puVar3 = (undefined4 *)(iVar2 + 0x210);
    piVar5 = (int *)*puVar3;
    iVar6 = local_24[0] + local_1c * 0x30;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*puVar3,*(undefined4 *)(iVar2 + 0x214));
    }
    FUN_00702180(iVar6);
  }
  return;
}

