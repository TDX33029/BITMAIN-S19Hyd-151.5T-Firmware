// FUN_009ddd44 @ 009ddd44 size=128 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_009ddd44(undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int extraout_r2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar9 = thunk_FUN_016de0ee(param_1,param_1,0x80);
  iVar2 = (int)((ulonglong)uVar9 >> 0x20);
  puVar1 = (uint *)((int)uVar9 + extraout_r2);
  uVar4 = *puVar1;
  uVar8 = *(uint *)(iVar2 + 0x28);
  uVar7 = *(uint *)(iVar2 + 0x2c);
  uVar5 = puVar1[1];
  uVar3 = 0xffffffff;
  if ((uVar4 & uVar8) == 0 && (uVar5 & uVar7) == 0) {
    uVar6 = 0xffffffff;
    if (uVar8 != 0xffffffff || uVar7 != 0xffffffff) {
      uVar3 = ~uVar8;
      uVar6 = ~uVar7;
    }
    *puVar1 = uVar3 & uVar4;
    puVar1[1] = uVar6 & uVar5;
    return 1;
  }
  if (uVar8 != 0xffffffff || uVar7 != 0xffffffff) {
    uVar5 = uVar5 | uVar7;
    uVar4 = uVar4 | uVar8;
  }
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  return 1;
}

