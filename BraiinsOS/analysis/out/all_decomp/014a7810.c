// FUN_014a7810 @ 014a7810 size=152 calls_out=2 calls_in=0
// strings: 

void FUN_014a7810(undefined4 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)thunk_FUN_016d4a50(0x34);
  if (puVar1 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(2,0x34);
  }
  puVar1[0x18] = 0xc;
  puVar1[0x16] = 0xb;
  puVar1[0x14] = 10;
  puVar1[0x12] = 9;
  puVar1[0x10] = 8;
  puVar1[0xe] = 7;
  puVar1[0xc] = 6;
  puVar1[10] = 5;
  puVar1[8] = 4;
  puVar1[6] = 3;
  puVar1[4] = 2;
  puVar1[2] = 1;
  *puVar1 = 0;
  *param_1 = 0xd;
  param_1[1] = puVar1;
  param_1[2] = 0xd;
  return;
}

