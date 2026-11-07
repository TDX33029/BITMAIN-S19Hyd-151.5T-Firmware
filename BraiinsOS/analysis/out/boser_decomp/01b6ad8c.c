// FUN_01b6ad8c @ 01b6ad8c size=600 calls_out=3 calls_in=49
// strings: aws_lc_0_39_0_OPENSSL_malloc | /aws-lc/crypto/mem.c | OPENSSL_memory_alloc == NULL | aws_lc_0_39_0_OPENSSL_malloc | /aws-lc/crypto/mem.c | OPENSSL_memory_realloc == NULL

/* WARNING: Removing unreachable block (ram,0x01b6af38) */
/* WARNING: Removing unreachable block (ram,0x01b6af6c) */
/* WARNING: Removing unreachable block (ram,0x01b6af78) */
/* WARNING: Removing unreachable block (ram,0x01b6af7c) */
/* WARNING: Removing unreachable block (ram,0x01b6af48) */
/* WARNING: Removing unreachable block (ram,0x01b6af08) */
/* WARNING: Removing unreachable block (ram,0x01b6af18) */
/* WARNING: Removing unreachable block (ram,0x01b6ae2c) */
/* WARNING: Removing unreachable block (ram,0x01b6adfc) */
/* WARNING: Removing unreachable block (ram,0x01b6ae5c) */
/* WARNING: Removing unreachable block (ram,0x01b6adcc) */

ulonglong FUN_01b6ad8c(uint param_1)

{
  char *pcVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  if (DAT_01d532fc == (code *)0x0) {
    if ((param_1 < 0xfffffff8) &&
       (puVar3 = (uint *)thunk_FUN_01be5118(param_1 + 8), puVar3 != (uint *)0x0)) {
      puVar2 = puVar3 + 2;
      *puVar3 = param_1;
    }
    else {
      FUN_01b053d4(0xe,0,0x41,"/aws-lc/crypto/mem.c",0x96);
      puVar2 = (uint *)0x0;
    }
    return ZEXT48(puVar2);
  }
  if (DAT_01d532f8 == 0) {
    uVar4 = 0x78;
    pcVar1 = "realloc_impl != NULL";
  }
  else {
    if (DAT_01d532f4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01b6aef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*DAT_01d532fc)(param_1,&DAT_005a7ea4);
      return uVar5;
    }
    uVar4 = 0x79;
    pcVar1 = "free_impl != NULL";
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(pcVar1,"/aws-lc/crypto/mem.c",uVar4,"aws_lc_0_39_0_OPENSSL_malloc");
}

