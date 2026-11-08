// FUN_01403584 @ 01403584 size=44 calls_out=2 calls_in=2
// strings: 

void FUN_01403584(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,8);
  }
  uVar2 = param_1[1];
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  return;
}

