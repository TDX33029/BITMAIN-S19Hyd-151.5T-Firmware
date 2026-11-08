// FUN_01afca0c @ 01afca0c size=100 calls_out=2 calls_in=6
// strings: aws_lc_0_39_0_CBB_cleanup | /aws-lc/crypto/bytestring/cbb.c | !cbb->is_child

void FUN_01afca0c(int param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("!cbb->is_child","/aws-lc/crypto/bytestring/cbb.c",0x33,"aws_lc_0_39_0_CBB_cleanup"
                );
  }
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    return;
  }
  FUN_01b6b1c4(*(undefined4 *)(param_1 + 8),0,0,0);
  return;
}

