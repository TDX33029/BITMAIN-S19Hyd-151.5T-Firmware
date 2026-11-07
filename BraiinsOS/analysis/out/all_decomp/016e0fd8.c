// FUN_016e0fd8 @ 016e0fd8 size=100 calls_out=2 calls_in=6
// strings: aws_lc_0_39_0_CBB_cleanup | /aws-lc/crypto/bytestring/cbb.c | !cbb->is_child

void FUN_016e0fd8(int param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("!cbb->is_child","/aws-lc/crypto/bytestring/cbb.c",0x33,"aws_lc_0_39_0_CBB_cleanup"
                );
  }
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    return;
  }
  FUN_0177aafc(*(undefined4 *)(param_1 + 8),0,0,0);
  return;
}

