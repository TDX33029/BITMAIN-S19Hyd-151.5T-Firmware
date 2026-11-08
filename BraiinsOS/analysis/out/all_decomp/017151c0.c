// FUN_017151c0 @ 017151c0 size=128 calls_out=1 calls_in=1
// strings: aws_lc_0_39_0_bn_assert_fits_in_bytes | /aws-lc/crypto/fipsmodule/bn/bytes.c | bytes[i] == 0

void FUN_017151c0(int *param_1,uint param_2)

{
  char *pcVar1;
  
  if ((uint)(param_1[1] * 4) <= param_2) {
    return;
  }
  pcVar1 = (char *)(param_2 + *param_1);
  do {
    if (*pcVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("bytes[i] == 0","/aws-lc/crypto/fipsmodule/bn/bytes.c",0xb9,
                   "aws_lc_0_39_0_bn_assert_fits_in_bytes");
    }
    pcVar1 = pcVar1 + 1;
  } while (pcVar1 != (char *)(param_1[1] * 4 + *param_1));
  return;
}

