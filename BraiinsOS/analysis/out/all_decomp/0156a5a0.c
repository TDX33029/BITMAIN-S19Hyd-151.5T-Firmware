// FUN_0156a5a0 @ 0156a5a0 size=112 calls_out=2 calls_in=3
// strings: 

void FUN_0156a5a0(undefined1 *param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  piVar2 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(piVar2 + 2) = param_2;
  *(int **)(param_1 + 4) = piVar2;
  *param_1 = 3;
  *piVar2 = (int)puVar1;
  piVar2[1] = (int)&DAT_018a8f4c;
  return;
}

