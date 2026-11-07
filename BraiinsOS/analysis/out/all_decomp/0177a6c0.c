// FUN_0177a6c0 @ 0177a6c0 size=632 calls_out=3 calls_in=49
// strings: /aws-lc/crypto/mem.c | aws_lc_0_39_0_OPENSSL_malloc | /aws-lc/crypto/mem.c | OPENSSL_memory_alloc == NULL | aws_lc_0_39_0_OPENSSL_malloc | /aws-lc/crypto/mem.c

/* WARNING: Removing unreachable block (ram,0x0177a898) */
/* WARNING: Removing unreachable block (ram,0x0177a8d8) */
/* WARNING: Removing unreachable block (ram,0x0177a7a8) */
/* WARNING: Removing unreachable block (ram,0x0177a7c0) */
/* WARNING: Removing unreachable block (ram,0x0177a7c4) */
/* WARNING: Removing unreachable block (ram,0x0177a798) */
/* WARNING: Removing unreachable block (ram,0x0177a918) */
/* WARNING: Removing unreachable block (ram,0x0177a8b8) */
/* WARNING: Removing unreachable block (ram,0x0177a838) */
/* WARNING: Removing unreachable block (ram,0x0177a788) */

ulonglong FUN_0177a6c0(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  
  if (DAT_018dfe54 == (code *)0x0) {
    if ((param_1 < 0xfffffff8) &&
       (puVar2 = (uint *)thunk_FUN_016d4a50(param_1 + 8), puVar2 != (uint *)0x0)) {
      puVar1 = puVar2 + 2;
      *puVar2 = param_1;
    }
    else {
      FUN_016e9cd0(0xe,0,0x41,"/aws-lc/crypto/mem.c",0x96);
      puVar1 = (uint *)0x0;
    }
    return ZEXT48(puVar1);
  }
  if (DAT_018dfe50 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("realloc_impl != NULL","/aws-lc/crypto/mem.c",0x78,"aws_lc_0_39_0_OPENSSL_malloc");
  }
  if (DAT_018dfe4c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("free_impl != NULL","/aws-lc/crypto/mem.c",0x79,"aws_lc_0_39_0_OPENSSL_malloc");
  }
                    /* WARNING: Could not recover jumptable at 0x0177a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*DAT_018dfe54)(param_1,&DAT_0059e494);
  return uVar3;
}

