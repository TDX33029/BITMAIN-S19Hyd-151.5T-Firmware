// FUN_01bd5320 @ 01bd5320 size=212 calls_out=2 calls_in=3
// strings: 

void FUN_01bd5320(uint *param_1,int param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_01bd4e8c(*(uint *)(param_2 + (param_4 + 0x3fffffff) * 4) & 0x80000000);
  uVar2 = 0;
  for (uVar3 = 0; uVar3 != param_4; uVar3 = uVar3 + 1) {
    uVar4 = *(uint *)((int)((ulonglong)uVar7 >> 0x20) + uVar3 * 4);
    param_1[uVar3] = uVar2 | uVar4 << 1;
    uVar2 = uVar4 >> 0x1f;
  }
  uVar2 = FUN_01bd4ff4(param_1,param_3,param_4);
  uVar2 = uVar2 & (uint)uVar7;
  uVar4 = *param_3 & ~uVar2;
  uVar3 = (uint)(*param_1 < uVar4);
  *param_1 = *param_1 - uVar4;
  for (uVar4 = 1; uVar4 < param_4; uVar4 = uVar4 + 1) {
    param_1 = param_1 + 1;
    uVar5 = *param_1;
    uVar1 = param_3[uVar4] & ~uVar2;
    uVar6 = uVar5 - uVar1;
    *param_1 = uVar6 - uVar3;
    uVar3 = -(uint)(uVar6 < uVar3) - (uint)(uVar5 < uVar1) & 1;
  }
  return;
}

