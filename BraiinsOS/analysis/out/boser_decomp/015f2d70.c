// FUN_015f2d70 @ 015f2d70 size=376 calls_out=4 calls_in=2
// strings: 

int FUN_015f2d70(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint unaff_r9;
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  FUN_00664bdc(&local_30);
  if (*(int *)(param_1 + 0x6c) == 0) {
    iVar7 = 0;
  }
  else {
    uVar2 = FUN_01adafd4(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
                         *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),local_2c,
                         local_28);
    uVar1 = uVar2 >> 0x19;
    iVar7 = *(int *)(param_1 + 0x60);
    uVar5 = *(uint *)(param_1 + 100);
    local_38 = 0;
    while( true ) {
      uVar2 = uVar5 & uVar2;
      uVar6 = *(uint *)(iVar7 + uVar2);
      uVar3 = uVar6 ^ uVar1 * 0x1010101;
      for (uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3)
      {
        unaff_r9 = uVar2 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                          (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar5
        ;
        iVar4 = iVar7 + -0x18 + unaff_r9 * -0x18;
        if ((local_28 == *(int *)(iVar4 + 8)) &&
           (iVar4 = thunk_FUN_01bed842(local_2c,*(undefined4 *)(iVar4 + 4)), iVar4 == 0))
        goto LAB_015f2ea8;
      }
      if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
      local_38 = local_38 + 4;
      uVar2 = uVar2 + local_38;
    }
LAB_015f2ea8:
    iVar7 = iVar7 + unaff_r9 * -0x18 + -0xc;
    if (uVar3 == 0) {
      iVar7 = 0;
    }
  }
  FUN_0134bd64(local_30,local_2c);
  return iVar7;
}

