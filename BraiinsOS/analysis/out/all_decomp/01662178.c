// FUN_01662178 @ 01662178 size=96 calls_out=1 calls_in=0
// strings: 

void FUN_01662178(byte *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 *local_10;
  undefined4 *local_c;
  
  local_10 = (undefined1 *)&local_18;
  uVar1 = *param_1 - 1 & 0xff;
  uStack_14 = *(undefined4 *)(&DAT_00424408 + uVar1 * 4);
  local_18 = *(undefined4 *)(&DAT_018b5664 + uVar1 * 4);
  local_c = &DAT_0157d360;
  FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_10);
  return;
}

