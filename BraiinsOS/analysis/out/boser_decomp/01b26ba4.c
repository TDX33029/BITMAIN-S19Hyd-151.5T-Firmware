// FUN_01b26ba4 @ 01b26ba4 size=256 calls_out=3 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/curve25519/curve25519.c

bool FUN_01b26ba4(int param_1,int param_2,int *param_3,int param_4,uint param_5)

{
  undefined1 uVar1;
  
  if (param_1 == 1) {
    if (param_5 == 0) {
      return false;
    }
    uVar1 = 0;
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01be32a0(param_1);
      }
      return param_5 == 0;
    }
    uVar1 = 1;
  }
  FUN_01b26974(param_2,&DAT_0055e078,0x20);
  *(undefined1 *)(param_2 + 0x20) = uVar1;
  *(char *)(param_2 + 0x21) = (char)param_5;
  if (param_5 == 0) {
LAB_01b26c94:
    *param_3 = param_5 + 0x22;
    return true;
  }
  if (param_4 == 0) {
    FUN_01b053d4(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/curve25519/curve25519.c",0xdc);
  }
  else if (param_5 < 0x100) {
    FUN_01b26974(param_2 + 0x22,param_4,param_5);
    goto LAB_01b26c94;
  }
  return false;
}

