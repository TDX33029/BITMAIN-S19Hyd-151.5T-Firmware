// FUN_01bd5bdc @ 01bd5bdc size=572 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_01bd5bdc(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int local_30;
  int local_2c;
  
  uVar7 = param_1 + 0x3fU & 0xffffffc0;
  local_2c = DAT_01d53560;
  if (*(int *)(uVar7 + 0x48) != 0) {
    FUN_01bd5660(uVar7,uVar7 + 0x38,*(int *)(uVar7 + 0x48),0);
  }
  uVar6 = *(int *)(uVar7 + 0x28) + (*(uint *)(uVar7 + 0x24) >> 0x1a);
  uVar12 = uVar6 & 0x3ffffff;
  uVar6 = *(int *)(uVar7 + 0x2c) + (uVar6 >> 0x1a);
  uVar10 = uVar6 & 0x3ffffff;
  uVar6 = *(int *)(uVar7 + 0x30) + (uVar6 >> 0x1a);
  uVar8 = uVar6 & 0x3ffffff;
  uVar1 = *(int *)(uVar7 + 0x34) + (uVar6 >> 0x1a);
  uVar13 = (uVar1 >> 0x1a) * 5 + (*(uint *)(uVar7 + 0x24) & 0x3ffffff);
  uVar5 = uVar13 + 5;
  uVar11 = uVar12 + (uVar5 >> 0x1a);
  uVar9 = uVar10 + (uVar11 >> 0x1a);
  uVar4 = uVar8 + (uVar9 >> 0x1a);
  uVar2 = (uVar1 | 0xfc000000) + (uVar4 >> 0x1a);
  uVar6 = (int)uVar2 >> 0x1f;
  uVar14 = 0xffffffff - uVar6;
  uVar11 = uVar11 & uVar14 & 0x3ffffff | uVar12 & uVar6;
  uVar5 = uVar5 & uVar14 & 0x3ffffff | uVar13 & uVar6;
  uVar9 = uVar9 & uVar14 & 0x3ffffff | uVar10 & uVar6;
  uVar13 = uVar4 & uVar14 & 0x3ffffff | uVar8 & uVar6;
  uVar8 = uVar1 & 0x3ffffff & uVar6 | uVar2 & uVar14;
  uVar10 = uVar5 | uVar11 << 0x1a;
  *(uint *)(uVar7 + 0x24) = uVar5;
  *(uint *)(uVar7 + 0x28) = uVar11;
  *(uint *)(uVar7 + 0x2c) = uVar9;
  *(uint *)(uVar7 + 0x30) = uVar13;
  *(uint *)(uVar7 + 0x34) = uVar8;
  uVar1 = FUN_01bd55c8(uVar7 + 0x4c);
  uVar11 = uVar9 << 0x14 | uVar11 >> 6;
  uVar6 = (uint)CARRY4(uVar10,uVar1);
  uVar2 = FUN_01bd55c8(uVar7 + 0x50);
  uVar12 = uVar11 + uVar2;
  uVar4 = FUN_01bd55c8(uVar7 + 0x54);
  uVar5 = uVar13 << 0xe | uVar9 >> 0xc;
  uVar9 = uVar5 + uVar4;
  iVar3 = FUN_01bd55c8(uVar7 + 0x58);
  local_30 = uVar10 + uVar1;
  FUN_01bd558c(param_2,&local_30,4);
  local_30 = uVar6 + uVar12;
  uVar7 = (uint)CARRY4(uVar11,uVar2) + (uint)CARRY4(uVar6,uVar12);
  FUN_01bd558c(param_2 + 4,&local_30);
  local_30 = uVar7 + uVar9;
  FUN_01bd558c(param_2 + 8,&local_30,4);
  local_30 = (uint)CARRY4(uVar5,uVar4) + (uint)CARRY4(uVar7,uVar9) +
             (uVar8 << 8 | uVar13 >> 0x12) + iVar3;
  FUN_01bd558c(param_2 + 0xc,&local_30,4);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

