// FUN_01016480 @ 01016480 size=48 calls_out=2 calls_in=0
// strings: 

void FUN_01016480(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  return;
}

