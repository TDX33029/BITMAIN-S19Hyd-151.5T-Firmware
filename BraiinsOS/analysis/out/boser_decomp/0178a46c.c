// FUN_0178a46c @ 0178a46c size=184 calls_out=4 calls_in=0
// strings: 

void FUN_0178a46c(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  
  puVar4 = param_1 + 1;
  if (*param_1 < 3) {
    FUN_0177a594(puVar4);
  }
  else if (*param_1 == 3) {
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01783f14(*puVar4);
    }
  }
  else {
    if ((char)param_1[7] != '\x02') {
      (**(code **)(param_1[3] + 0x10))(param_1 + 6,param_1[4],param_1[5]);
    }
    piVar2 = (int *)*puVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[1],param_1[2]);
    }
  }
  FUN_01783e7c(param_1 + 0xb);
  return;
}

