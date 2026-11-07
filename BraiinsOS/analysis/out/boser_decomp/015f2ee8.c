// FUN_015f2ee8 @ 015f2ee8 size=368 calls_out=2 calls_in=1
// strings: 

int FUN_015f2ee8(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint unaff_r8;
  int local_30;
  
  if (param_1[3] == 0) {
    iVar7 = 0;
  }
  else {
    uVar2 = FUN_01a9c24c(param_1[4],param_1[5],param_1[6],param_1[7],param_2,param_3);
    uVar1 = uVar2 >> 0x19;
    iVar7 = *param_1;
    uVar8 = param_1[1];
    local_30 = 0;
    while( true ) {
      uVar2 = uVar8 & uVar2;
      uVar3 = *(uint *)(iVar7 + uVar2);
      uVar4 = uVar3 ^ uVar1 * 0x1010101;
      uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
      while (uVar6 = uVar4, uVar6 != 0) {
        uVar4 = uVar6 - 1 & uVar6;
        unaff_r8 = uVar2 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                          (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar8
        ;
        iVar5 = iVar7 + -0x18 + unaff_r8 * -0x18;
        if ((param_3 == *(int *)(iVar5 + 8)) &&
           (iVar5 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar5 + 4),param_3), iVar5 == 0))
        goto LAB_015f302c;
      }
      if ((uVar3 & 0x80808080 & uVar3 << 1) != 0) break;
      local_30 = local_30 + 4;
      uVar2 = uVar2 + local_30;
    }
LAB_015f302c:
    iVar7 = iVar7 + unaff_r8 * -0x18 + -0xc;
    if (uVar6 == 0) {
      iVar7 = 0;
    }
  }
  return iVar7;
}

