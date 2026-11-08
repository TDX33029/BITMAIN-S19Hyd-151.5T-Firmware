// FUN_017fec80 @ 017fec80 size=176 calls_out=6 calls_in=0
// strings: Map must not be polled after it returned `Poll::Ready` | not dropped

undefined4 FUN_017fec80(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0xf) == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
  }
  if (*(char *)((int)param_1 + 0x35) == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("not dropped",0xb,&DAT_01d1d9f0);
  }
  iVar1 = 0;
  if (*(char *)(param_1 + 9) != '\x02') {
    uVar3 = FUN_0177a174(param_1[7],*param_2);
    iVar1 = (int)(uVar3 >> 0x20);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  uVar2 = *param_1;
  FUN_017724dc(param_1 + 1);
  *(undefined1 *)(param_1 + 0xf) = 2;
  FUN_0178f29c(uVar2);
  if (iVar1 != 0) {
    FUN_0178e78c(iVar1);
  }
  return 0;
}

