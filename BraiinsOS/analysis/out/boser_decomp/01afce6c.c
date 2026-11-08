// FUN_01afce6c @ 01afce6c size=180 calls_out=1 calls_in=2
// strings: aws_lc_0_39_0_CBB_len | /aws-lc/crypto/bytestring/cbb.c | cbb->child == NULL | aws_lc_0_39_0_CBB_len | /aws-lc/crypto/bytestring/cbb.c | cbb->u.child.offset + cbb->u.child.pending_len_len <= cbb->u.child.base->len

int FUN_01afce6c(int *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*param_1 == 0) {
    iVar2 = param_1[3];
    if ((char)param_1[1] == '\0') {
      return iVar2;
    }
    if ((uint)*(byte *)(param_1 + 4) + iVar2 <= *(uint *)(param_1[2] + 4)) {
      return (*(uint *)(param_1[2] + 4) - iVar2) - (uint)*(byte *)(param_1 + 4);
    }
    uVar3 = 0x113;
    pcVar1 = "cbb->u.child.offset + cbb->u.child.pending_len_len <= cbb->u.child.base->len";
  }
  else {
    uVar3 = 0x111;
    pcVar1 = "cbb->child == NULL";
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(pcVar1,"/aws-lc/crypto/bytestring/cbb.c",uVar3,"aws_lc_0_39_0_CBB_len");
}

