// FUN_019e2844 @ 019e2844 size=200 calls_out=3 calls_in=4
// strings: 

void FUN_019e2844(undefined4 *param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  uVar3 = FUN_019e9e08();
  *(undefined1 *)(param_1 + 0x1f) = param_2;
  param_1[0x1c] = 0x400;
  param_1[0x1d] = 0x200;
  param_1[8] = &DAT_3b9aca00;
  uVar2 = 1;
  if (1 < (uint)uVar3) {
    uVar2 = (uint)uVar3;
  }
  *(undefined1 *)((int)param_1 + 0x7d) = 0;
  *(undefined2 *)((int)param_1 + 0x7e) = 0;
  *param_1 = 0;
  param_1[10] = puVar1;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x1e] = 0x3d;
  param_1[4] = 0;
  param_1[0xb] = &DAT_01d290bc;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  param_1[0x1b] = uVar2;
  param_1[0x1a] = (int)((ulonglong)uVar3 >> 0x20);
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x18] = 0;
  return;
}

