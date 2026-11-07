// FUN_015dd6a4 @ 015dd6a4 size=228 calls_out=1 calls_in=2
// strings: 

int FUN_015dd6a4(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if (param_1[3] == 0) {
    iVar6 = 0;
  }
  else {
    uVar2 = FUN_015f7180(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
    uVar1 = uVar2 >> 0x19;
    iVar6 = *param_1;
    iVar8 = 0;
    while( true ) {
      uVar2 = param_1[1] & uVar2;
      uVar7 = *(uint *)(iVar6 + uVar2);
      uVar3 = uVar7 ^ uVar1 * 0x1010101;
      uVar5 = uVar3 + 0xfefefeff;
      uVar3 = ~uVar3 & 0x80808080 & uVar5;
      while (uVar4 = uVar3, uVar4 != 0) {
        uVar5 = uVar2 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                       (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                param_1[1];
        uVar3 = uVar4 - 1 & uVar4;
        if (param_2 == *(int *)(iVar6 + -0x40 + uVar5 * -0x40)) goto LAB_015dd764;
      }
      if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
      iVar8 = iVar8 + 4;
      uVar2 = uVar2 + iVar8;
    }
LAB_015dd764:
    iVar6 = iVar6 + uVar5 * -0x40 + -0x38;
    if (uVar4 == 0) {
      iVar6 = 0;
    }
  }
  return iVar6;
}

