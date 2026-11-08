// FUN_014b3ad4 @ 014b3ad4 size=112 calls_out=2 calls_in=6
// strings: 

void FUN_014b3ad4(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  uVar3 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  piVar2 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(piVar2 + 2) = 0x28;
  *(int **)(param_1 + 4) = piVar2;
  *param_1 = 3;
  *piVar2 = (int)puVar1;
  piVar2[1] = (int)&DAT_018a500c;
  return;
}

