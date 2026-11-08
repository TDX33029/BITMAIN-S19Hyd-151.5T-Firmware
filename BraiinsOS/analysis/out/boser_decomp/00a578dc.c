// FUN_00a578dc @ 00a578dc size=148 calls_out=2 calls_in=1
// strings: 

void FUN_00a578dc(int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int local_2f8;
  int iStack_2f4;
  
  if (param_1 == 0) {
    return;
  }
  puVar2 = (uint *)(param_1 + 0x2f8);
  do {
    uVar3 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar3 | 4;
  DataMemoryBarrier(0xb);
  if ((uVar3 & 10) == 8) {
    (**(code **)(*(int *)(param_1 + 0x2e8) + 8))(*(undefined4 *)(param_1 + 0x2ec));
  }
  if ((uVar3 & 2) != 0) {
    FUN_01bed4e2(&local_2f8,(undefined4 *)(param_1 + 8),0x2e0);
    *(undefined4 *)(param_1 + 8) = 0x1e;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (local_2f8 != 0x1e || iStack_2f4 != 0) {
      FUN_00a57840(&local_2f8);
    }
  }
  return;
}

