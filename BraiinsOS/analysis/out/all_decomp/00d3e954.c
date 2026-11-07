// FUN_00d3e954 @ 00d3e954 size=180 calls_out=2 calls_in=2
// strings: 

void FUN_00d3e954(int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int local_870;
  int iStack_86c;
  
  if (param_1 == 0) {
    return;
  }
  puVar2 = (uint *)(param_1 + 0x870);
  do {
    uVar3 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar3 | 4;
  DataMemoryBarrier(0xb);
  if ((uVar3 & 10) == 8) {
    (**(code **)(*(int *)(param_1 + 0x860) + 8))(*(undefined4 *)(param_1 + 0x864));
  }
  if ((uVar3 & 2) == 0) {
    return;
  }
  FUN_016dd1aa(&local_870,(undefined4 *)(param_1 + 8),0x858);
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (local_870 != 2 || iStack_86c != 0) {
    FUN_00d054d0(&local_870);
  }
  return;
}

