// FUN_019384b4 @ 019384b4 size=80 calls_out=3 calls_in=1
// strings: 

void FUN_019384b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar1 = param_3;
  puVar1[1] = param_4;
  FUN_019a6b0c(param_1,0x15,puVar1,&DAT_01d25a50);
  return;
}

