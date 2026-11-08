// FUN_01b2a224 @ 01b2a224 size=300 calls_out=2 calls_in=2
// strings: 

ulonglong FUN_01b2a224(uint *param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int extraout_r2;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  
  uVar1 = param_4;
  if (param_2 <= param_4) {
    uVar1 = param_2;
  }
  puVar8 = (uint *)(param_3 + -4);
  uVar7 = 0;
  uVar3 = param_2;
  for (puVar6 = param_1; puVar6 != param_1 + uVar1; puVar6 = puVar6 + 1) {
    uVar3 = *puVar6;
    puVar8 = puVar8 + 1;
    uVar5 = *puVar8;
    uVar9 = FUN_01b0c688(uVar3 ^ uVar5);
    uVar4 = (uint)((ulonglong)uVar9 >> 0x20);
    uVar2 = FUN_01b0c6a4((int)((uVar4 - extraout_r2 ^ uVar4 | uVar3 ^ uVar5) ^ uVar4) >> 0x1f,
                         0xffffffff,1);
    uVar9 = FUN_01b0c6a4((int)uVar9,uVar7,uVar2);
    uVar3 = (uint)((ulonglong)uVar9 >> 0x20);
    uVar7 = (uint)uVar9;
  }
  if (param_2 < param_4) {
    uVar1 = 0;
    for (puVar6 = (uint *)(param_3 + param_2 * 4); puVar6 != (uint *)(param_3 + param_4 * 4);
        puVar6 = puVar6 + 1) {
      uVar1 = uVar1 | *puVar6;
    }
    uVar2 = FUN_01b0c688(uVar1,uVar3,0xffffffff);
  }
  else {
    if (param_2 <= param_4) {
      return (ulonglong)uVar7;
    }
    uVar1 = 0;
    for (puVar6 = param_1 + param_4; puVar6 != param_1 + param_2; puVar6 = puVar6 + 1) {
      uVar1 = uVar1 | *puVar6;
    }
    uVar2 = FUN_01b0c688(uVar1,uVar3,1);
  }
  uVar10 = FUN_01b0c6a4(uVar2,uVar7);
  return uVar10;
}

