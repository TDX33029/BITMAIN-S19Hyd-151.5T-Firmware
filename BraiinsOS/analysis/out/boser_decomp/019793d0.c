// FUN_019793d0 @ 019793d0 size=180 calls_out=2 calls_in=1
// strings: 

void FUN_019793d0(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint local_40 [3];
  int local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c [2];
  int local_14;
  
  iVar4 = *param_1;
  if (iVar4 == 0) {
    local_20 = 0;
  }
  else {
    local_34 = param_1[1];
    local_20 = param_1[2];
    local_2c = 0;
    local_40[1] = 0;
    local_40[2] = iVar4;
    local_28 = iVar4;
    local_24 = local_34;
  }
  local_40[0] = (uint)(iVar4 != 0);
  local_30 = local_40[0];
  while (FUN_01979230(local_1c,local_40), local_1c[0] != 0) {
    iVar4 = local_1c[0] + local_14 * 8;
    puVar2 = (undefined4 *)(iVar4 + 0xb0);
    piVar3 = (int *)*puVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(*puVar2,*(undefined4 *)(iVar4 + 0xb4));
    }
  }
  return;
}

