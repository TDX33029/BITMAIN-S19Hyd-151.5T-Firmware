// FUN_00ad9e88 @ 00ad9e88 size=84 calls_out=3 calls_in=2
// strings: 

void FUN_00ad9e88(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,4);
  }
  *puVar1 = param_2;
  FUN_019a6b0c(param_1,0x15,puVar1,&DAT_01c10034);
  return;
}

