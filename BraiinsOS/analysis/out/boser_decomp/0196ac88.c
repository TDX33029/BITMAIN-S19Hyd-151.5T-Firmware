// FUN_0196ac88 @ 0196ac88 size=92 calls_out=3 calls_in=107
// strings: raw value was not emitted

void FUN_0196ac88(char *param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != 1) {
    FUN_0196aafc(param_1);
    return;
  }
  iVar1 = param_2[2];
  if ((char)iVar1 == '\x06') {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("raw value was not emitted",0x19,&DAT_01d273e8);
  }
  FUN_01bed4e2(param_1 + 1,(int)param_2 + 9,0x17);
  *param_1 = (char)iVar1;
  return;
}

