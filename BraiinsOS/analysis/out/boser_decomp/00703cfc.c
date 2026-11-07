// FUN_00703cfc @ 00703cfc size=116 calls_out=3 calls_in=3
// strings: infallible AWS-LC function

/* WARNING: Control flow encountered bad instruction data */

int FUN_00703cfc(int param_1)

{
  int local_10;
  undefined1 uStack_9;
  
  local_10 = FUN_01b47088();
  if (local_10 != 1) {
    FUN_019abc1c(&DAT_0056ed00,&local_10,"infallible AWS-LC function",&DAT_01c065b0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_0056b6a8,0x20,&uStack_9,&DAT_01c06590);
  }
  return param_1;
}

