// FUN_01b2ec50 @ 01b2ec50 size=280 calls_out=4 calls_in=2
// strings: aws_lc_0_39_0_bn_mod_u16_consttime | /aws-lc/crypto/fipsmodule/bn/div_extra.c | p <= 16

int FUN_01b2ec50(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar5 = param_2 - 1;
  uVar2 = FUN_01b2aec4(uVar5);
  if (0x10 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("p <= 16","/aws-lc/crypto/fipsmodule/bn/div_extra.c",0x3d,
                 "aws_lc_0_39_0_bn_mod_u16_consttime");
  }
  uVar1 = 1 << (uVar2 + 0x20 & 0xff);
  uVar3 = FUN_01bf0ff0(uVar1 + uVar5,
                       ((1 << (uVar2 & 0xff) | 1U >> (-uVar2 & 0xff)) - (uint)(param_2 == 0)) +
                       (uint)CARRY4(uVar1,uVar5),param_2,0);
  iVar6 = param_1[1];
  iVar4 = 0;
  while (iVar6 = iVar6 + -1, -1 < iVar6) {
    uVar5 = *(uint *)(*param_1 + iVar6 * 4);
    iVar4 = FUN_01b20a00(uVar5 >> 0x10 | iVar4 << 0x10,param_2,uVar2,uVar3);
    iVar4 = FUN_01b20a00(uVar5 & 0xffff | iVar4 << 0x10,param_2,uVar2,uVar3);
  }
  return iVar4;
}

