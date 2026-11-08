// FUN_01b2baf0 @ 01b2baf0 size=120 calls_out=1 calls_in=1
// strings: aws_lc_0_39_0_bn_assert_fits_in_bytes | /aws-lc/crypto/fipsmodule/bn/bytes.c | bytes[i] == 0

undefined4 FUN_01b2baf0(int *param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  
  if ((uint)(param_1[1] << 2) <= param_2) {
    return 0;
  }
  pcVar2 = (char *)(param_2 + *param_1);
  do {
    if (pcVar2 == (char *)(*param_1 + param_1[1] * 4)) {
      return 0;
    }
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 == '\0');
                    /* WARNING: Subroutine does not return */
  FUN_01be3310("bytes[i] == 0","/aws-lc/crypto/fipsmodule/bn/bytes.c",0xb9,
               "aws_lc_0_39_0_bn_assert_fits_in_bytes");
}

