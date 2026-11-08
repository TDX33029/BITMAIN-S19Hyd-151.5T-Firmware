// FUN_0163d570 @ 0163d570 size=124 calls_out=2 calls_in=2
// strings: 

void FUN_0163d570(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  param_1[0xf] = puVar1;
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = param_2;
  param_1[4] = 2;
  param_1[0xe] = 0x200000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[6] = 0;
  param_1[7] = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0x2a;
  return;
}

