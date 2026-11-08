// FUN_00f2a3b4 @ 00f2a3b4 size=136 calls_out=2 calls_in=0
// strings: 

void FUN_00f2a3b4(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_3 == param_2) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    return;
  }
  uVar1 = (uint)(param_3 - param_2) / 0x108;
  uVar2 = thunk_FUN_016d4a50(uVar1 << 2);
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,uVar1 << 2);
  }
  uVar3 = 0;
  puVar4 = (undefined4 *)(param_2 + 0xf8);
  do {
    *(undefined4 *)(uVar2 + uVar3 * 4) = *puVar4;
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 0x42;
  } while (uVar1 != uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}

