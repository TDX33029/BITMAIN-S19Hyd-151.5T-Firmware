// FUN_018c4600 @ 018c4600 size=296 calls_out=2 calls_in=2
// strings: 

int FUN_018c4600(int param_1,undefined4 param_2)

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
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar6 = 0;
  }
  else {
    uVar2 = FUN_018bef28(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                         *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),param_2);
    uVar1 = uVar2 >> 0x19;
    iVar6 = *(int *)(param_1 + 0x10);
    uVar7 = *(uint *)(param_1 + 0x14);
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
        iVar4 = FUN_018cd540(param_2,iVar6 + -0x90 + unaff_r8 * -0x90);
        uVar3 = uVar5 - 1 & uVar5;
        if (iVar4 != 0) goto LAB_018c46fc;
      }
      if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
      local_28 = local_28 + 4;
      uVar2 = uVar2 + local_28;
    }
LAB_018c46fc:
    iVar6 = iVar6 + unaff_r8 * -0x90 + -0x78;
    if (uVar5 == 0) {
      iVar6 = 0;
    }
  }
  return iVar6;
}

