// FUN_0181cdf4 @ 0181cdf4 size=336 calls_out=0 calls_in=3
// strings: 

int FUN_0181cdf4(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_lr;
  int local_30;
  
  if (param_1[3] == 0) {
    return 0;
  }
  uVar6 = param_2[2];
  local_30 = 0;
  iVar5 = *param_1;
  uVar7 = uVar6;
  while( true ) {
    uVar7 = param_1[1] & uVar7;
    uVar1 = *(uint *)(iVar5 + uVar7);
    uVar2 = uVar1 ^ (uVar6 >> 0x19) * 0x1010101;
    uVar2 = ~uVar2 & 0x80808080 & uVar2 + 0xfefefeff;
    while (uVar3 = uVar2, uVar3 != 0) {
      unaff_lr = uVar7 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                        (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) &
                 param_1[1];
      piVar4 = (int *)(iVar5 + -0x18 + unaff_lr * -0x18);
      uVar2 = uVar3 - 1 & uVar3;
      if ((*param_2 == *piVar4 && uVar6 == piVar4[2]) &&
          (param_2[1] == piVar4[1] && param_2[3] == piVar4[3])) goto LAB_0181cf20;
    }
    if ((uVar1 & 0x80808080 & uVar1 << 1) != 0) break;
    local_30 = local_30 + 4;
    uVar7 = uVar7 + local_30;
  }
LAB_0181cf20:
  iVar5 = iVar5 + unaff_lr * -0x18 + -8;
  if (uVar3 == 0) {
    iVar5 = 0;
  }
  return iVar5;
}

