// FUN_01bd524c @ 01bd524c size=212 calls_out=1 calls_in=2
// strings: 

void FUN_01bd524c(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *param_3;
  uVar4 = *param_2;
  *param_1 = uVar4 - uVar1;
  uVar1 = (uint)(uVar4 < uVar1);
  for (uVar4 = 1; uVar4 < param_5; uVar4 = uVar4 + 1) {
    uVar5 = param_2[uVar4];
    uVar3 = param_3[uVar4];
    uVar2 = uVar5 - uVar1;
    param_1[uVar4] = uVar2 - uVar3;
    uVar1 = -(uint)(uVar2 < uVar3) - (uint)(uVar5 < uVar1) & 1;
  }
  uVar1 = FUN_01bd4e8c();
  uVar4 = *param_4;
  uVar5 = *param_1;
  *param_1 = uVar5 + (uVar4 & ~uVar1);
  uVar4 = (uint)CARRY4(uVar5,uVar4 & ~uVar1);
  for (uVar5 = 1; uVar5 < param_5; uVar5 = uVar5 + 1) {
    uVar2 = param_4[uVar5];
    param_1 = param_1 + 1;
    uVar6 = *param_1;
    uVar3 = (uVar2 & ~uVar1) + uVar6;
    *param_1 = uVar3 + uVar4;
    uVar4 = (uint)CARRY4(uVar2 & ~uVar1,uVar6) + (uint)CARRY4(uVar3,uVar4);
  }
  return;
}

