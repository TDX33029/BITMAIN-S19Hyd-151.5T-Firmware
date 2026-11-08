// FUN_00b40190 @ 00b40190 size=68 calls_out=1 calls_in=1
// strings: BUG: halt failed

void FUN_00b40190(int param_1)

{
  int iStack_c;
  
  if (param_1 != 0) {
    iStack_c = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: halt failed",0x10,&iStack_c,&DAT_01870358);
  }
  return;
}

