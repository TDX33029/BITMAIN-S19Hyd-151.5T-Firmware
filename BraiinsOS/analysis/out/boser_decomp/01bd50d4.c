// FUN_01bd50d4 @ 01bd50d4 size=140 calls_out=1 calls_in=3
// strings: 

void FUN_01bd50d4(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = FUN_01bd4ff4();
  uVar6 = 1;
  uVar3 = *param_2;
  uVar2 = *param_1;
  *param_1 = uVar2 - (uVar3 & ~uVar1);
  if (uVar2 < (uVar3 & ~uVar1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  for (; uVar6 < param_3; uVar6 = uVar6 + 1) {
    uVar3 = param_2[uVar6];
    param_1 = param_1 + 1;
    uVar4 = *param_1;
    uVar5 = uVar4 - (uVar3 & ~uVar1);
    *param_1 = uVar5 - uVar2;
    uVar2 = -(uint)(uVar5 < uVar2) - (uint)(uVar4 < (uVar3 & ~uVar1)) & 1;
  }
  return;
}

