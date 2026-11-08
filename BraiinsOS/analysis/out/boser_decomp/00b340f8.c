// FUN_00b340f8 @ 00b340f8 size=304 calls_out=5 calls_in=1
// strings: 

void FUN_00b340f8(int param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  FUN_00a981d4();
  uVar7 = *param_2;
  uVar8 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  iVar2 = FUN_009dd3a4((uint *)(param_1 + 0xa0));
  if (iVar2 == 0) {
    uVar6 = *(uint *)(param_1 + 0xa0);
    uVar5 = 3;
    if ((uint)(uVar6 < 3) <= (uint)-*(int *)(param_1 + 0xa4)) {
      uVar5 = uVar6 - 3;
    }
    if ((5 < uVar5) || (uVar5 == 2)) {
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
    }
    *(uint *)(param_1 + 0xa0) = uVar7;
    *(uint *)(param_1 + 0xa4) = uVar8;
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    uVar8 = param_2[6];
    *(uint *)(param_1 + 0xa8) = param_2[2];
    *(uint *)(param_1 + 0xac) = uVar5;
    *(uint *)(param_1 + 0xb0) = uVar6;
    *(uint *)(param_1 + 0xb4) = uVar7;
    *(uint *)(param_1 + 0xb8) = uVar8;
    uVar5 = param_2[8];
    uVar6 = param_2[9];
    uVar7 = param_2[10];
    uVar8 = param_2[0xb];
    *(uint *)(param_1 + 0xbc) = param_2[7];
    *(uint *)(param_1 + 0xc0) = uVar5;
    *(uint *)(param_1 + 0xc4) = uVar6;
    *(uint *)(param_1 + 200) = uVar7;
    *(uint *)(param_1 + 0xcc) = uVar8;
    piVar4 = (int *)(param_1 + 0xd0);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = *piVar4 + 2;
    FUN_009dd354(param_1 + 0x98);
    iVar2 = 0;
    do {
      FUN_019e03e8(param_1 + 8 + iVar2);
      iVar2 = iVar2 + 0x10;
    } while (iVar2 != 0x80);
  }
  else {
    uVar3 = 3;
    if ((uint)(uVar7 < 3) <= -uVar8) {
      uVar3 = uVar7 - 3;
    }
    if ((5 < uVar3) || (uVar3 == 2)) {
      FUN_019bb7e0(uVar5,uVar6,-(uVar8 + (uVar7 >= 3)),2 - uVar7);
    }
    FUN_009dd354(param_1 + 0x98);
  }
  return;
}

