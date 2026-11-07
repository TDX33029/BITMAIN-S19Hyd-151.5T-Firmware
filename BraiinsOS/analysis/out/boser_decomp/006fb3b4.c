// FUN_006fb3b4 @ 006fb3b4 size=84 calls_out=2 calls_in=19
// strings: internal error: entered unreachable code

undefined4 FUN_006fb3b4(int param_1,uint param_2)

{
  char *pcVar1;
  
  if (*(uint *)(param_1 + 0x10) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_2,*(uint *)(param_1 + 0x10),&DAT_01c062e0);
  }
  pcVar1 = (char *)(*(int *)(param_1 + 0xc) + param_2 * 0x14);
  if (*pcVar1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c062f0);
  }
  return *(undefined4 *)(pcVar1 + 4);
}

