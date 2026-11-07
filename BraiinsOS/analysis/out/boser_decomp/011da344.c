// FUN_011da344 @ 011da344 size=48 calls_out=2 calls_in=0
// strings: 

void FUN_011da344(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,4);
  }
  *puVar1 = uVar2;
  return;
}

