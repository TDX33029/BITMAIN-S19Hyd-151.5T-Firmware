// FUN_0178e5c0 @ 0178e5c0 size=296 calls_out=2 calls_in=2
// strings: 

int FUN_0178e5c0(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint unaff_r8;
  uint uVar8;
  int local_28;
  
  if (param_1[3] == 0) {
    iVar6 = 0;
  }
  else {
    uVar2 = FUN_017bdd10(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
    uVar1 = uVar2 >> 0x19;
    iVar6 = *param_1;
    uVar7 = param_1[1];
    local_28 = 0;
    while( true ) {
      uVar2 = uVar7 & uVar2;
      uVar8 = *(uint *)(iVar6 + uVar2);
      uVar3 = uVar8 ^ uVar1 * 0x1010101;
      uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
      while (uVar5 = uVar3, uVar5 != 0) {
        unaff_r8 = uVar2 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                          (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar7
        ;
        iVar4 = FUN_017be0f4(param_2,iVar6 + -0x28 + unaff_r8 * -0x28);
        uVar3 = uVar5 - 1 & uVar5;
        if (iVar4 != 0) goto LAB_0178e6bc;
      }
      if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
      local_28 = local_28 + 4;
      uVar2 = uVar2 + local_28;
    }
LAB_0178e6bc:
    iVar6 = iVar6 + unaff_r8 * -0x28 + -0x10;
    if (uVar5 == 0) {
      iVar6 = 0;
    }
  }
  return iVar6;
}

