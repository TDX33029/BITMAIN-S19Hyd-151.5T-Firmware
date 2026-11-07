// FUN_0177aafc @ 0177aafc size=496 calls_out=2 calls_in=101
// strings: aws_lc_0_39_0_OPENSSL_free | /aws-lc/crypto/mem.c | malloc_impl != NULL | aws_lc_0_39_0_OPENSSL_free | /aws-lc/crypto/mem.c | OPENSSL_memory_get_size == NULL

/* WARNING: Removing unreachable block (ram,0x0177ac4c) */
/* WARNING: Removing unreachable block (ram,0x0177accc) */
/* WARNING: Removing unreachable block (ram,0x0177acac) */
/* WARNING: Removing unreachable block (ram,0x0177abcc) */
/* WARNING: Removing unreachable block (ram,0x0177ac8c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff8 : 0x0177ac18 */
/* WARNING: Removing unreachable block (ram,0x0177ac0c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0177aafc(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 extraout_r1;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_018dfe4c != (code *)0x0) {
    if (DAT_018dfe54 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("malloc_impl != NULL","/aws-lc/crypto/mem.c",0xb4,"aws_lc_0_39_0_OPENSSL_free");
    }
    if (DAT_018dfe50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("realloc_impl != NULL","/aws-lc/crypto/mem.c",0xb5,"aws_lc_0_39_0_OPENSSL_free");
    }
                    /* WARNING: Could not recover jumptable at 0x0177abb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_018dfe4c)(param_1,&DAT_0059e494);
    return;
  }
  iVar6 = param_1 + -8;
  FUN_0177aaa0();
  if (iVar6 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8(iVar6,extraout_r1,0x1a4);
  uVar14 = *(byte *)(param_1 + -0xb) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(param_1 + -0xb) >> 5);
  iVar13 = *(int *)(iVar4 + 8) + 0x10;
  iVar11 = iVar7 * uVar14 + iVar7 + -4;
  iVar7 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar7 - iVar6) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar10 = 1 << uVar14;
  *(undefined1 *)(param_1 + -0xb) = 0xff;
  *(undefined2 *)(param_1 + -10) = 0;
  do {
    uVar12 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar8 = *puVar15;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

