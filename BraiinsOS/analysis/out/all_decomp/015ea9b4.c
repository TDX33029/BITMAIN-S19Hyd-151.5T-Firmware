// FUN_015ea9b4 @ 015ea9b4 size=52 calls_out=2 calls_in=0
// strings: 

void FUN_015ea9b4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  return;
}

