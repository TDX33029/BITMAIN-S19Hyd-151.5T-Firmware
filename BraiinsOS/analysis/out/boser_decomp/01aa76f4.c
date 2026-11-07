// FUN_01aa76f4 @ 01aa76f4 size=92 calls_out=2 calls_in=1
// strings: internal error: entered unreachable code: this case should be handled by the caller

undefined4 FUN_01aa76f4(short *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    return 0xb;
  }
  if (param_2 != 1) {
    if (*param_1 == 0x2f2f) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: this case should be handled by the caller"
                   ,0xa7,&DAT_01d2e4f0);
    }
  }
  iVar1 = FUN_01aa98bc();
  uVar2 = 4;
  if (iVar1 != 0) {
    uVar2 = 0xb;
  }
  return uVar2;
}

