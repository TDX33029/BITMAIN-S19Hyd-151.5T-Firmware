// FUN_01534cac @ 01534cac size=128 calls_out=2 calls_in=1
// strings: 

void FUN_01534cac(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1[2];
  if (iVar4 != 0) {
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar4 + 0x14) != 0) {
      FUN_0154f894(iVar4 + 0xc,iVar4);
    }
    FUN_01534d2c(*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x10),*(int *)*param_1 + 8,
                 ((int *)*param_1)[1]);
    return;
  }
  puVar2 = *(uint **)*param_1;
  do {
    uVar3 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar3 + 1;
  if (uVar3 < 0x80000000) {
    return;
  }
  software_udf(0xfdee,0x1534d18);
  return;
}

