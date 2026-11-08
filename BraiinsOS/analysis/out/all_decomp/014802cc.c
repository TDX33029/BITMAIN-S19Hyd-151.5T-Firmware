// FUN_014802cc @ 014802cc size=168 calls_out=2 calls_in=0
// strings: 

void FUN_014802cc(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (((*(int *)(param_2 + 0x22c) == -0x80000000) || (*(int *)(param_2 + 0x234) != 2)) ||
     (**(short **)(param_2 + 0x230) != 0x3268)) {
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar1 + 2) = 0;
      *puVar1 = 1;
      puVar1[1] = 1;
      *(undefined2 *)(param_1 + 3) = 1;
      param_1[2] = puVar1;
      *param_1 = 0;
      return;
    }
  }
  else {
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar1 + 2) = 0;
      *puVar1 = 1;
      puVar1[1] = 1;
      *(undefined2 *)(param_1 + 3) = 0;
      param_1[2] = puVar1;
      *param_1 = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600874(4,0xc);
}

