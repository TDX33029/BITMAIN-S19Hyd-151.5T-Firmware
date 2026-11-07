// FUN_009dddc8 @ 009dddc8 size=136 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_009dddc8(undefined4 param_1)

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
  uVar6 = *puVar1;
  uVar8 = *(uint *)(iVar2 + 0x118);
  uVar3 = *(uint *)(iVar2 + 0x11c);
  uVar5 = puVar1[1];
  uVar4 = 0xffffffff;
  if ((uVar6 & uVar8) == 0 && (uVar5 & uVar3) == 0) {
    uVar7 = 0xffffffff;
    if (uVar8 != 0xffffffff || uVar3 != 0xffffffff) {
      uVar4 = ~uVar8;
      uVar7 = ~uVar3;
    }
    *puVar1 = uVar4 & uVar6;
    puVar1[1] = uVar7 & uVar5;
    return 1;
  }
  if (uVar8 != 0xffffffff || uVar3 != 0xffffffff) {
    uVar5 = uVar5 | uVar3;
    uVar6 = uVar6 | uVar8;
  }
  *puVar1 = uVar6;
  puVar1[1] = uVar5;
  return 1;
}

