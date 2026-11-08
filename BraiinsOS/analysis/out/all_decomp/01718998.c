// FUN_01718998 @ 01718998 size=420 calls_out=3 calls_in=3
// strings: mod_u16 | /aws-lc/crypto/fipsmodule/bn/div_extra.c | constant_time_declassify_int(n < d) | aws_lc_0_39_0_bn_mod_u16_consttime | /aws-lc/crypto/fipsmodule/bn/div_extra.c | p <= 16

uint FUN_01718998(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  bool bVar7;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar3 = param_2 - 1;
  uVar1 = FUN_0171429c(uVar3);
  if (0x10 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("p <= 16","/aws-lc/crypto/fipsmodule/bn/div_extra.c",0x3d,
                 "aws_lc_0_39_0_bn_mod_u16_consttime");
  }
  iVar5 = param_1[1];
  iVar4 = iVar5 + -1;
  if (iVar4 < 0) {
    return 0;
  }
  uVar2 = 1 << (uVar1 + 0x20 & 0xff);
  uVar3 = FUN_01846088(uVar2 + uVar3,
                       ((1 << (uVar1 & 0xff) | 1U >> (-uVar1 & 0xff)) - (uint)(param_2 == 0)) +
                       (uint)CARRY4(uVar2,uVar3),param_2,0);
  uVar2 = 0;
  puVar6 = (uint *)(*param_1 + iVar5 * 4);
  while( true ) {
    puVar6 = puVar6 + -1;
    uVar2 = *puVar6 >> 0x10 | uVar2 << 0x10;
    iVar5 = (int)((ulonglong)uVar2 * (ulonglong)uVar3 >> 0x20);
    uVar2 = uVar2 - param_2 * (iVar5 + (uVar2 - iVar5 >> 1) >> (uVar1 - 1 & 0xff));
    if (param_2 <= uVar2) break;
    uVar2 = *puVar6 & 0xffff | uVar2 * 0x10000;
    iVar5 = (int)((ulonglong)uVar2 * (ulonglong)uVar3 >> 0x20);
    uVar2 = uVar2 - param_2 * (iVar5 + (uVar2 - iVar5 >> 1) >> (uVar1 - 1 & 0xff));
    if (param_2 <= uVar2) break;
    uVar2 = uVar2 & 0xffff;
    bVar7 = iVar4 == 0;
    iVar4 = iVar4 + -1;
    if (bVar7) {
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_016d2c94("constant_time_declassify_int(n < d)","/aws-lc/crypto/fipsmodule/bn/div_extra.c",0x1f
               ,"mod_u16");
}

