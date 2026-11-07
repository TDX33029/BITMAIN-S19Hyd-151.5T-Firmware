// FUN_0156f6f0 @ 0156f6f0 size=360 calls_out=4 calls_in=2
// strings: 

void FUN_0156f6f0(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int local_30;
  
  if (0x7ffffffe < *(uint *)(param_2 + 8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01cfbcf0);
  }
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) + 1;
  if (*(int *)(param_2 + 0x1c) == 0) {
    iVar8 = 0;
  }
  else {
    uVar2 = FUN_0155d0d0(param_2 + 0x20,param_3);
    uVar1 = uVar2 >> 0x19;
    iVar8 = *(int *)(param_2 + 0x10);
    uVar9 = *(uint *)(param_2 + 0x14);
    local_30 = 0;
    while( true ) {
      uVar7 = 0xfefefeff;
      uVar2 = uVar9 & uVar2;
      uVar3 = *(uint *)(iVar8 + uVar2);
      uVar4 = uVar3 ^ uVar1 * 0x1010101;
      uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
      while (uVar6 = uVar4, uVar6 != 0) {
        uVar7 = uVar2 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                       (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar9;
        iVar5 = FUN_0156ff14(param_3,iVar8 + -0x1c + uVar7 * -0x1c);
        uVar4 = uVar6 - 1 & uVar6;
        if (iVar5 != 0) goto LAB_0156f80c;
      }
      if ((uVar3 & 0x80808080 & uVar3 << 1) != 0) break;
      local_30 = local_30 + 4;
      uVar2 = uVar2 + local_30;
    }
LAB_0156f80c:
    iVar8 = iVar8 + uVar7 * -0x1c + -0x14;
    if (uVar6 == 0) {
      iVar8 = 0;
    }
  }
  FUN_0156636c(param_1,iVar8);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  return;
}

