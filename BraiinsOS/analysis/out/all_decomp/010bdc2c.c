// FUN_010bdc2c @ 010bdc2c size=108 calls_out=2 calls_in=1
// strings: 

void FUN_010bdc2c(undefined1 *param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined1 *)thunk_FUN_016d4a50(1);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,1);
  }
  *puVar1 = param_2;
  piVar2 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(piVar2 + 2) = 0x14;
  *(int **)(param_1 + 4) = piVar2;
  *param_1 = 3;
  *piVar2 = (int)puVar1;
  piVar2[1] = (int)&DAT_01884954;
  return;
}

