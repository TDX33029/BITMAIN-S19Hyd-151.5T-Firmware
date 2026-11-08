// FUN_0177ad5c @ 0177ad5c size=748 calls_out=4 calls_in=5
// strings: aws_lc_0_39_0_OPENSSL_realloc | /aws-lc/crypto/mem.c | free_impl != NULL | aws_lc_0_39_0_OPENSSL_realloc | /aws-lc/crypto/mem.c | malloc_impl != NULL

/* WARNING: Removing unreachable block (ram,0x0177ae3c) */
/* WARNING: Removing unreachable block (ram,0x0177afe8) */
/* WARNING: Removing unreachable block (ram,0x0177ae4c) */
/* WARNING: Removing unreachable block (ram,0x0177b028) */
/* WARNING: Removing unreachable block (ram,0x0177ae5c) */
/* WARNING: Removing unreachable block (ram,0x0177ae2c) */
/* WARNING: Removing unreachable block (ram,0x0177b008) */
/* WARNING: Removing unreachable block (ram,0x0177af88) */
/* WARNING: Removing unreachable block (ram,0x0177afa8) */
/* WARNING: Removing unreachable block (ram,0x0177af68) */
/* WARNING: Removing unreachable block (ram,0x0177afc8) */
/* WARNING: Removing unreachable block (ram,0x0177ae7c) */

ulonglong FUN_0177ad5c(uint param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_1 == 0) {
    uVar5 = FUN_0177a6c0(param_2);
    return uVar5;
  }
  if (DAT_018dfe50 != (code *)0x0) {
    if (DAT_018dfe54 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("malloc_impl != NULL","/aws-lc/crypto/mem.c",0xdc,"aws_lc_0_39_0_OPENSSL_realloc"
                  );
    }
    if (DAT_018dfe4c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("free_impl != NULL","/aws-lc/crypto/mem.c",0xdd,"aws_lc_0_39_0_OPENSSL_realloc");
    }
                    /* WARNING: Could not recover jumptable at 0x0177ae18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*DAT_018dfe50)(param_1,param_2,&DAT_0059e494);
    return uVar5;
  }
  uVar3 = *(uint *)(param_1 - 8);
  uVar2 = FUN_0177a6c0(param_2);
  uVar4 = 0;
  if (uVar2 != 0) {
    if (uVar3 < param_2) {
      param_2 = uVar3;
    }
    if (uVar2 < param_1) {
      if (param_1 < uVar2 + param_2) goto LAB_0177af24;
    }
    else if ((param_1 < uVar2) && (uVar2 < param_1 + param_2)) {
LAB_0177af24:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x177af24);
      (*pcVar1)();
    }
    FUN_016dd1aa(uVar2,param_1);
    FUN_0177aafc(param_1);
    uVar4 = uVar2;
  }
  return (ulonglong)uVar4;
}

