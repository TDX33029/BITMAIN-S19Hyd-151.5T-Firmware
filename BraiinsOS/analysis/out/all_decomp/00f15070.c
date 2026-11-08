// FUN_00f15070 @ 00f15070 size=200 calls_out=2 calls_in=1
// strings: 

void FUN_00f15070(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  
  if (param_2[1] == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  puVar3 = (undefined4 *)*param_2;
  param_2[1] = param_2[1] + -1;
  if (puVar3[1] != 0) {
    puVar2 = (undefined1 *)*puVar3;
    puVar3[1] = puVar3[1] + -1;
    param_1[1] = 1;
    uVar1 = *puVar2;
    *puVar3 = puVar2 + 1;
    param_1[2] = uVar1;
    *param_1 = 0;
    return;
  }
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined4 **)(param_1 + 4) = puVar3;
  *puVar3 = 0x80000000;
  puVar3[1] = 0x2501;
  puVar3[2] = 1;
  *param_1 = 1;
  return;
}

