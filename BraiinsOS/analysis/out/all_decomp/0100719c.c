// FUN_0100719c @ 0100719c size=116 calls_out=2 calls_in=3
// strings: 

void FUN_0100719c(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  piVar2 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(piVar2 + 2) = 0x28;
  *(int **)(param_1 + 4) = piVar2;
  *param_1 = 3;
  *piVar2 = (int)puVar1;
  piVar2[1] = (int)&DAT_01881f18;
  return;
}

