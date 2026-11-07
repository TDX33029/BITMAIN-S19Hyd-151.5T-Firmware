// FUN_015dd788 @ 015dd788 size=372 calls_out=2 calls_in=1
// strings: 

int FUN_015dd788(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_r8;
  int local_30;
  
  if (param_1[3] == 0) {
    iVar6 = 0;
  }
  else {
    uVar2 = FUN_01adafd4(param_1[4],param_1[5],param_1[6],param_1[7],param_2,param_3);
    uVar1 = uVar2 >> 0x19;
    iVar6 = *param_1;
    uVar7 = param_1[1];
    local_30 = 0;
    while( true ) {
      uVar2 = uVar7 & uVar2;
      uVar3 = *(uint *)(iVar6 + uVar2);
      uVar4 = uVar3 ^ uVar1 * 0x1010101;
      uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
      while (uVar8 = uVar4, uVar8 != 0) {
        uVar4 = uVar8 - 1 & uVar8;
        unaff_r8 = uVar2 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                          (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar7
        ;
        iVar5 = unaff_r8 * -0xb0 + iVar6 + -0xb0;
        if ((param_3 == *(int *)(iVar5 + 8)) &&
           (iVar5 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar5 + 4),param_3), iVar5 == 0))
        goto LAB_015dd8d0;
      }
      if ((uVar3 & 0x80808080 & uVar3 << 1) != 0) break;
      local_30 = local_30 + 4;
      uVar2 = uVar2 + local_30;
    }
LAB_015dd8d0:
    iVar6 = unaff_r8 * -0xb0 + iVar6 + -0xa0;
    if (uVar8 == 0) {
      iVar6 = 0;
    }
  }
  return iVar6;
}

