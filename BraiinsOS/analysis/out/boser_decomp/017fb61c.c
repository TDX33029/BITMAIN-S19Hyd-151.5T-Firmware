// FUN_017fb61c @ 017fb61c size=164 calls_out=5 calls_in=0
// strings: Map must not be polled after it returned `Poll::Ready` | not dropped

undefined4 FUN_017fb61c(int param_1,undefined4 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0x38) == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
  }
  if (*(char *)(param_1 + 0x31) == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("not dropped",0xb,&DAT_01d1d9f0);
  }
  iVar1 = 0;
  if (*(char *)(param_1 + 0x20) != '\x02') {
    uVar2 = FUN_0177a174(*(undefined4 *)(param_1 + 0x18),*param_2);
    iVar1 = (int)(uVar2 >> 0x20);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  FUN_017724dc(param_1);
  *(undefined1 *)(param_1 + 0x38) = 2;
  if (iVar1 != 0) {
    FUN_0178e78c(iVar1);
  }
  return 0;
}

