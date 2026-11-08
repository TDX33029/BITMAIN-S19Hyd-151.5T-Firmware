// FUN_01bcfa80 @ 01bcfa80 size=120 calls_out=0 calls_in=3
// strings: 

uint FUN_01bcfa80(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = 0;
  iVar7 = 0x40;
  uVar3 = 0;
  uVar4 = 1;
  uVar8 = 0;
  do {
    uVar2 = uVar2 >> 1 | uVar3 << 0x1f;
    uVar6 = param_1 * (uVar4 & 1);
    uVar5 = uVar4 & uVar6;
    uVar1 = (uVar4 & 1) * param_2;
    uVar9 = uVar1 ^ uVar8;
    uVar3 = uVar4 * -0x80000000 + (uVar3 >> 1);
    uVar6 = (uVar6 ^ uVar4) >> 1 | uVar9 << 0x1f;
    uVar4 = uVar6 + uVar5;
    uVar8 = (uVar1 & uVar8) + (uVar9 >> 1) + (uint)CARRY4(uVar6,uVar5);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return uVar2;
}

