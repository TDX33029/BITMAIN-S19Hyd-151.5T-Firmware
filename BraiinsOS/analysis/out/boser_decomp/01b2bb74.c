// FUN_01b2bb74 @ 01b2bb74 size=160 calls_out=3 calls_in=4
// strings: aws_lc_0_39_0_bn_words_to_big_endian | /aws-lc/crypto/fipsmodule/bn/bytes.c | constant_time_declassify_int(fits_in_bytes(in; in_len; out_len))

void FUN_01b2bb74(int param_1,uint param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  iVar1 = FUN_01b0ced4(param_3,param_4,param_2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("constant_time_declassify_int(fits_in_bytes(in, in_len, out_len))",
                 "/aws-lc/crypto/fipsmodule/bn/bytes.c",0xc4,"aws_lc_0_39_0_bn_words_to_big_endian")
    ;
  }
  puVar3 = (undefined1 *)(param_1 + param_2);
  uVar4 = param_4 << 2;
  if (param_2 <= (uint)(param_4 << 2)) {
    uVar4 = param_2;
  }
  puVar2 = param_3 + uVar4;
  for (; param_3 != puVar2; param_3 = param_3 + 1) {
    puVar3 = puVar3 + -1;
    *puVar3 = *param_3;
  }
  FUN_01b257dc(param_1,0,param_2 - uVar4);
  return;
}

