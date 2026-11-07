// FUN_0196aafc @ 0196aafc size=132 calls_out=3 calls_in=3
// strings: internal error: entered unreachable code

void FUN_0196aafc(undefined1 *param_1,int *param_2)

{
  undefined1 auStack_20 [16];
  
  if (*param_2 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d273d8);
  }
  FUN_01bed4e2((uint)auStack_20 | 3,param_2 + 1,0xc);
  *param_1 = 5;
  FUN_01bed4e2(param_1 + 1,auStack_20,0xf);
  if (param_2[4] == -0x80000000) {
    return;
  }
  FUN_0134bd64(param_2[4],param_2[5]);
  return;
}

