// FUN_014272c8 @ 014272c8 size=72 calls_out=3 calls_in=1
// strings: 

void FUN_014272c8(undefined4 param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)thunk_FUN_01be5118(1);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,1);
  }
  *puVar1 = param_2;
  FUN_019a6b0c(param_1,0x14,puVar1,&DAT_01cf4870);
  return;
}

