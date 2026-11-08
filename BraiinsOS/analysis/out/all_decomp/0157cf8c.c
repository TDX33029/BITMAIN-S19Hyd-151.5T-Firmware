// FUN_0157cf8c @ 0157cf8c size=92 calls_out=3 calls_in=3
// strings: raw value was not emitted

void FUN_0157cf8c(char *param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != 1) {
    FUN_0157cde0();
    return;
  }
  iVar1 = param_2[2];
  if ((char)iVar1 == '\x06') {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("raw value was not emitted",0x19,&DAT_018a942c);
  }
  FUN_016dd1aa(param_1 + 1,(int)param_2 + 9,0x17);
  *param_1 = (char)iVar1;
  return;
}

