// FUN_00e7b0b0 @ 00e7b0b0 size=120 calls_out=2 calls_in=3
// strings: 

void FUN_00e7b0b0(undefined1 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *puVar1 = param_2;
  piVar2 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(piVar2 + 2) = 0x15;
  *(int **)(param_1 + 4) = piVar2;
  *param_1 = 3;
  *piVar2 = (int)puVar1;
  piVar2[1] = (int)&DAT_0187b44c;
  return;
}

