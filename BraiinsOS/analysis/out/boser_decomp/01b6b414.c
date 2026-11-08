// FUN_01b6b414 @ 01b6b414 size=684 calls_out=4 calls_in=4
// strings: aws_lc_0_39_0_OPENSSL_realloc | /aws-lc/crypto/mem.c | OPENSSL_memory_alloc == NULL | aws_lc_0_39_0_OPENSSL_realloc | /aws-lc/crypto/mem.c | OPENSSL_memory_realloc == NULL

/* WARNING: Removing unreachable block (ram,0x01b6b604) */
/* WARNING: Removing unreachable block (ram,0x01b6b60c) */
/* WARNING: Removing unreachable block (ram,0x01b6b62c) */
/* WARNING: Removing unreachable block (ram,0x01b6b5d4) */
/* WARNING: Removing unreachable block (ram,0x01b6b5e4) */
/* WARNING: Removing unreachable block (ram,0x01b6b648) */
/* WARNING: Removing unreachable block (ram,0x01b6b5a4) */
/* WARNING: Removing unreachable block (ram,0x01b6b5b4) */
/* WARNING: Removing unreachable block (ram,0x01b6b4d4) */
/* WARNING: Removing unreachable block (ram,0x01b6b4a4) */
/* WARNING: Removing unreachable block (ram,0x01b6b4fc) */
/* WARNING: Removing unreachable block (ram,0x01b6b47c) */

uint FUN_01b6b414(uint param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_1 == 0) {
    uVar2 = FUN_01b6ad8c(param_2);
    return uVar2;
  }
  if (DAT_01d532f8 != (code *)0x0) {
    if (DAT_01d532fc == 0) {
      uVar4 = 0xdc;
      pcVar3 = "malloc_impl != NULL";
    }
    else {
      if (DAT_01d532f4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01b6b598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*DAT_01d532f8)(param_1,param_2,&DAT_005a7ea4);
        return uVar2;
      }
      uVar4 = 0xdd;
      pcVar3 = "free_impl != NULL";
    }
                    /* WARNING: Subroutine does not return */
    FUN_01be3310(pcVar3,"/aws-lc/crypto/mem.c",uVar4,"aws_lc_0_39_0_OPENSSL_realloc");
  }
  uVar5 = *(uint *)(param_1 - 8);
  uVar2 = FUN_01b6ad8c(param_2);
  if (uVar2 == 0) {
    return 0;
  }
  if (uVar5 < param_2) {
    param_2 = uVar5;
  }
  if (uVar2 < param_1) {
    bVar6 = uVar2 + param_2 <= param_1;
  }
  else {
    if (uVar2 <= param_1) goto LAB_01b6b690;
    bVar6 = param_1 + param_2 <= uVar2;
  }
  if (!bVar6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1b6b67c);
    (*pcVar1)();
  }
LAB_01b6b690:
  FUN_01bed4e2(uVar2,param_1);
  FUN_01b6b1c4(param_1);
  return uVar2;
}

