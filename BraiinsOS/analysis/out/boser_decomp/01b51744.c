// FUN_01b51744 @ 01b51744 size=104 calls_out=3 calls_in=0
// strings: 

void FUN_01b51744(undefined4 *param_1)

{
  char *pcVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_01b70810(&DAT_01d51bdc,FUN_01b517b4);
    pcVar1 = (char *)*param_1;
    if (pcVar1 == (char *)0x0) {
      return;
    }
    if (*pcVar1 != '\x01') {
      FUN_01b51668(pcVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be32a0();
}

