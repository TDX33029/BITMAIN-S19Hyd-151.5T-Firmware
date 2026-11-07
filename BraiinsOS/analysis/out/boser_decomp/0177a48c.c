// FUN_0177a48c @ 0177a48c size=284 calls_out=6 calls_in=1
// strings: 

void FUN_0177a48c(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 unaff_r6;
  uint uVar6;
  uint uVar7;
  
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
  if (param_1[0xb] == 0x80000000) {
    return;
  }
  FUN_0132b958(param_1[0xb],param_1[0xc],1,0x12,unaff_r4,unaff_r5,unaff_r6);
  uVar6 = param_1[0xf];
  puVar5 = (undefined4 *)(uVar6 + 4);
  for (uVar7 = param_1[0x10]; uVar7 != 0; uVar7 = uVar7 - 1) {
    FUN_0134bd64(puVar5[-1],*puVar5);
    puVar5 = puVar5 + 3;
  }
  FUN_0134aee0(param_1[0xe],uVar6,4,0xc);
  return;
}

