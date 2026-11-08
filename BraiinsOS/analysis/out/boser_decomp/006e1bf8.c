// FUN_006e1bf8 @ 006e1bf8 size=76 calls_out=3 calls_in=0
// strings: 

void FUN_006e1bf8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  FUN_019a6b0c(param_1,0x28,puVar1,&DAT_01c05eec);
  return;
}

