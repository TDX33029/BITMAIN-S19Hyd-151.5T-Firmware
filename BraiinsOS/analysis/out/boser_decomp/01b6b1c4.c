// FUN_01b6b1c4 @ 01b6b1c4 size=480 calls_out=3 calls_in=97
// strings: aws_lc_0_39_0_OPENSSL_free | /aws-lc/crypto/mem.c | OPENSSL_memory_alloc == NULL | aws_lc_0_39_0_OPENSSL_free | /aws-lc/crypto/mem.c | OPENSSL_memory_realloc == NULL

/* WARNING: Removing unreachable block (ram,0x01b6b274) */
/* WARNING: Removing unreachable block (ram,0x01b6b21c) */
/* WARNING: Removing unreachable block (ram,0x01b6b24c) */
/* WARNING: Removing unreachable block (ram,0x01b6b2a4) */
/* WARNING: Removing unreachable block (ram,0x01b6b34c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff0 : 0x01b6b38c */
/* WARNING: Removing unreachable block (ram,0x01b6b37c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01b6b1c4(int param_1)

{
  char *pcVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_01d532f4 == (code *)0x0) {
    FUN_01b6b174(param_1 + -8,*(int *)(param_1 + -8) + 8);
    thunk_FUN_01be4678(param_1 + -8,extraout_r1);
    return;
  }
  if (DAT_01d532fc == 0) {
    uVar2 = 0xb4;
    pcVar1 = "malloc_impl != NULL";
  }
  else {
    if (DAT_01d532f8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01b6b340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_01d532f4)(param_1,&DAT_005a7ea4);
      return;
    }
    uVar2 = 0xb5;
    pcVar1 = "realloc_impl != NULL";
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(pcVar1,"/aws-lc/crypto/mem.c",uVar2,"aws_lc_0_39_0_OPENSSL_free");
}

