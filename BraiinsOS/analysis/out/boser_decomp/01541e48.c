// FUN_01541e48 @ 01541e48 size=340 calls_out=2 calls_in=2
// strings: 

int FUN_01541e48(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint unaff_r8;
  uint uVar9;
  int local_30;
  
  if (param_1[3] == 0) {
    iVar7 = 0;
  }
  else {
    uVar2 = FUN_0155d010(param_1 + 4);
    uVar1 = uVar2 >> 0x19;
    iVar7 = *param_1;
    uVar8 = param_1[1];
    local_30 = 0;
    while( true ) {
      uVar2 = uVar8 & uVar2;
      uVar3 = *(uint *)(iVar7 + uVar2);
      uVar4 = uVar3 ^ uVar1 * 0x1010101;
      uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
      while (uVar9 = uVar4, uVar9 != 0) {
        uVar4 = uVar9 - 1 & uVar9;
        unaff_r8 = uVar2 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                          (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) & uVar8
        ;
        piVar5 = (int *)(iVar7 + -0x18 + unaff_r8 * -0x18);
        if ((param_3 == piVar5[1]) &&
           (iVar6 = thunk_FUN_01bed842(param_2,*piVar5 + 8,param_3), iVar6 == 0)) goto LAB_01541f70;
      }
      if ((uVar3 & 0x80808080 & uVar3 << 1) != 0) break;
      local_30 = local_30 + 4;
      uVar2 = uVar2 + local_30;
    }
LAB_01541f70:
    iVar7 = iVar7 + unaff_r8 * -0x18 + -0x10;
    if (uVar9 == 0) {
      iVar7 = 0;
    }
  }
  return iVar7;
}

