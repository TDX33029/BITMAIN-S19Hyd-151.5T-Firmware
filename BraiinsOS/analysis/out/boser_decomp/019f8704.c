// FUN_019f8704 @ 019f8704 size=96 calls_out=1 calls_in=0
// strings: 

void FUN_019f8704(byte *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 *local_10;
  undefined2 *local_c;
  
  local_10 = (undefined1 *)&local_18;
  uVar1 = *param_1 - 1 & 0xff;
  uStack_14 = *(undefined4 *)(&DAT_005393a8 + uVar1 * 4);
  local_18 = *(undefined4 *)(&DAT_01d34688 + uVar1 * 4);
  local_c = &DAT_0132b6a0;
  FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,&local_10);
  return;
}

