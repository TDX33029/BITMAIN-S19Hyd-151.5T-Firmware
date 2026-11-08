// FUN_007028c4 @ 007028c4 size=196 calls_out=3 calls_in=10
// strings: 

void FUN_007028c4(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint local_48 [3];
  int local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [2];
  int local_1c;
  
  iVar4 = *param_1;
  if (iVar4 == 0) {
    local_28 = 0;
  }
  else {
    local_3c = param_1[1];
    local_28 = param_1[2];
    local_34 = 0;
    local_48[1] = 0;
    local_48[2] = iVar4;
    local_30 = iVar4;
    local_2c = local_3c;
  }
  local_48[0] = (uint)(iVar4 != 0);
  local_38 = local_48[0];
  while (FUN_00702640(local_24,local_48), local_24[0] != 0) {
    iVar4 = local_24[0] + local_1c * 8;
    puVar2 = (undefined4 *)(iVar4 + 0x210);
    piVar5 = (int *)*puVar2;
    iVar6 = local_24[0] + local_1c * 0x30;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*puVar2,*(undefined4 *)(iVar4 + 0x214));
    }
    FUN_00702180(iVar6);
  }
  return;
}

