// FUN_01718904 @ 01718904 size=136 calls_out=1 calls_in=40
// strings: BN_STACK_pop | /aws-lc/crypto/fipsmodule/bn/ctx.c | st->depth > 0

int FUN_01718904(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    return param_1;
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("st->depth > 0","/aws-lc/crypto/fipsmodule/bn/ctx.c",0xb3,"BN_STACK_pop");
  }
  iVar1 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar1;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 4) + iVar1 * 4);
  return 0;
}

