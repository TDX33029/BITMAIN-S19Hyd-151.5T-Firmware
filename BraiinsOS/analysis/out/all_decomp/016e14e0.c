// FUN_016e14e0 @ 016e14e0 size=180 calls_out=1 calls_in=2
// strings: aws_lc_0_39_0_CBB_len | /aws-lc/crypto/bytestring/cbb.c | cbb->child == NULL | aws_lc_0_39_0_CBB_len | /aws-lc/crypto/bytestring/cbb.c | cbb->u.child.offset + cbb->u.child.pending_len_len <= cbb->u.child.base->len

int FUN_016e14e0(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("cbb->child == NULL","/aws-lc/crypto/bytestring/cbb.c",0x111,
                 "aws_lc_0_39_0_CBB_len");
  }
  iVar1 = param_1[3];
  if ((char)param_1[1] == '\0') {
    return iVar1;
  }
  if (*(uint *)(param_1[2] + 4) < (uint)*(byte *)(param_1 + 4) + iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("cbb->u.child.offset + cbb->u.child.pending_len_len <= cbb->u.child.base->len",
                 "/aws-lc/crypto/bytestring/cbb.c",0x113,"aws_lc_0_39_0_CBB_len");
  }
  return (*(uint *)(param_1[2] + 4) - iVar1) - (uint)*(byte *)(param_1 + 4);
}

