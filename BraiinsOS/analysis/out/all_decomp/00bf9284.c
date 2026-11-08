// FUN_00bf9284 @ 00bf9284 size=48 calls_out=2 calls_in=0
// strings: 

void FUN_00bf9284(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *puVar1 = uVar2;
  return;
}

