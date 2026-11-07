// FUN_01655dc8 @ 01655dc8 size=124 calls_out=3 calls_in=5
// strings: 

undefined4 * FUN_01655dc8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 1) == '\0') {
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x14);
    }
    *(undefined1 *)(puVar1 + 4) = 0;
    *puVar1 = 1;
    puVar1[1] = 1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *param_1 = puVar1;
    *(undefined1 *)(param_1 + 1) = 1;
    FUN_015e8e6c(param_1,&LAB_01655e48);
    return param_1;
  }
  if (*(char *)(param_1 + 1) == '\x01') {
    return param_1;
  }
  return (undefined4 *)0x0;
}

