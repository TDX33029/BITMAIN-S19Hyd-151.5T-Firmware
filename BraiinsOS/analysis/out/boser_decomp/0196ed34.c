// FUN_0196ed34 @ 0196ed34 size=200 calls_out=0 calls_in=2
// strings: 

void FUN_0196ed34(int *param_1,uint *param_2,uint *param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar4 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = *param_3;
  uVar9 = param_3[1];
  uVar3 = *param_2;
  uVar6 = param_2[2];
  iVar1 = ((uVar4 >> 6 | uVar4 << 0x1a) ^ (uVar4 >> 0xb | uVar4 << 0x15) ^
          (uVar4 >> 0x19 | uVar4 << 7)) + param_5 + param_2[3] + (uVar7 & uVar4 | uVar6 & ~uVar4);
  uVar5 = iVar1 + param_2[1];
  param_1[3] = uVar5;
  uVar2 = ((uVar3 ^ uVar9) & uVar8 ^ uVar3 & uVar9) +
          ((uVar8 >> 2 | uVar8 << 0x1e) ^ (uVar8 >> 0xd | uVar8 << 0x13) ^
          (uVar8 >> 0x16 | uVar8 << 10)) + iVar1;
  param_1[1] = uVar2;
  iVar1 = uVar6 + param_4 + (uVar4 & uVar5 | uVar7 & ~uVar5) +
          ((uVar5 >> 6 | uVar5 * 0x4000000) ^ (uVar5 >> 0xb | uVar5 * 0x200000) ^
          (uVar5 >> 0x19 | uVar5 * 0x80));
  param_1[2] = iVar1 + uVar3;
  *param_1 = ((uVar2 >> 2 | uVar2 * 0x40000000) ^ (uVar2 >> 0xd | uVar2 * 0x80000) ^
             (uVar2 >> 0x16 | uVar2 * 0x400)) + (uVar2 & (uVar9 ^ uVar8) ^ uVar9 & uVar8) + iVar1;
  return;
}

