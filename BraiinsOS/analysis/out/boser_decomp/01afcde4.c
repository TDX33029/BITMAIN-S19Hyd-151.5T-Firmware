// FUN_01afcde4 @ 01afcde4 size=124 calls_out=1 calls_in=2
// strings: aws_lc_0_39_0_CBB_data | /aws-lc/crypto/bytestring/cbb.c | cbb->child == NULL

int * FUN_01afcde4(int *param_1)

{
  int *piVar1;
  
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("cbb->child == NULL","/aws-lc/crypto/bytestring/cbb.c",0x108,
                 "aws_lc_0_39_0_CBB_data");
  }
  piVar1 = (int *)param_1[2];
  if ((char)param_1[1] != '\0') {
    piVar1 = (int *)(*piVar1 + (uint)*(byte *)(param_1 + 4) + param_1[3]);
  }
  return piVar1;
}

