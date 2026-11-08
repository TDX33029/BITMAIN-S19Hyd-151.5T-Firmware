// FUN_0181ec8c @ 0181ec8c size=296 calls_out=0 calls_in=4
// strings: 

bool FUN_0181ec8c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar2 = (uint)param_1[9] >> 0x16;
  uVar1 = uVar2 * 0x3d1 + *param_1;
  uVar6 = uVar1 & 0x3ffffff;
  if (uVar6 == 0x3fffc2f || uVar6 == 0) {
    uVar3 = param_1[1] + uVar2 * 0x40 + (uVar1 >> 0x1a);
    uVar5 = param_1[2] + (uVar3 >> 0x1a);
    uVar9 = param_1[3] + (uVar5 >> 0x1a);
    uVar7 = param_1[4] + (uVar9 >> 0x1a);
    uVar10 = param_1[5] + (uVar7 >> 0x1a);
    uVar8 = param_1[6] + (uVar10 >> 0x1a);
    uVar11 = param_1[7] + (uVar8 >> 0x1a);
    uVar4 = param_1[8] + (uVar11 >> 0x1a);
    uVar2 = (param_1[9] & 0x3fffffU) + (uVar4 >> 0x1a);
    return uVar2 == 0 &&
           ((uVar1 | uVar3 | uVar5 | uVar9 | uVar7 | uVar10 | uVar8 | uVar11 | uVar4) & 0x3ffffff)
           == 0 || ((uVar3 & 0x3ffffff ^ 0x40) & uVar5 & (uVar6 ^ 0x3d0) & uVar9 & uVar7 & uVar10 &
                    uVar8 & uVar11 & uVar4 & (uVar2 ^ 0x3c00000)) == 0x3ffffff;
  }
  return false;
}

