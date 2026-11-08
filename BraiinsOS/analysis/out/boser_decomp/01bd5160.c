// FUN_01bd5160 @ 01bd5160 size=236 calls_out=2 calls_in=5
// strings: 

void FUN_01bd5160(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *param_3;
  uVar5 = *param_2;
  *param_1 = uVar5 + uVar1;
  uVar1 = (uint)CARRY4(uVar5,uVar1);
  for (uVar5 = 1; uVar5 < param_5; uVar5 = uVar5 + 1) {
    uVar2 = param_3[uVar5];
    uVar6 = param_2[uVar5];
    uVar7 = uVar6 + uVar2;
    param_1[uVar5] = uVar7 + uVar1;
    uVar1 = (uint)CARRY4(uVar6,uVar2) + (uint)CARRY4(uVar7,uVar1);
  }
  uVar1 = FUN_01bd4e8c();
  uVar5 = FUN_01bd4ff4(param_1,param_4,param_5);
  uVar6 = *param_4 & ~(uVar5 & uVar1);
  uVar7 = (uint)(*param_1 < uVar6);
  *param_1 = *param_1 - uVar6;
  for (uVar6 = 1; uVar6 < param_5; uVar6 = uVar6 + 1) {
    param_1 = param_1 + 1;
    uVar3 = *param_1;
    uVar2 = param_4[uVar6] & ~(uVar5 & uVar1);
    uVar4 = uVar3 - uVar2;
    *param_1 = uVar4 - uVar7;
    uVar7 = -(uint)(uVar4 < uVar7) - (uint)(uVar3 < uVar2) & 1;
  }
  return;
}

