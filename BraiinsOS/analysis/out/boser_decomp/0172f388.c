// FUN_0172f388 @ 0172f388 size=184 calls_out=1 calls_in=5
// strings: 

void FUN_0172f388(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    return;
  }
  DataMemoryBarrier(0xb);
  *(undefined4 *)(iVar2 + 8) = 4;
  puVar4 = (uint *)(iVar2 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *puVar4;
    bVar1 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar1);
  *puVar4 = uVar5 | 2;
  DataMemoryBarrier(0xb);
  if (uVar5 == 0) {
    iVar6 = *(int *)(iVar2 + 0x18);
    *(undefined4 *)(iVar2 + 0x18) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = *puVar4 & 0xfffffffd;
    if (iVar6 != 0) {
      (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar2 + 0x1c));
    }
  }
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013bba80(*param_1);
    return;
  }
  return;
}

