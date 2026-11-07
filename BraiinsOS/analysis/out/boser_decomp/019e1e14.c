// FUN_019e1e14 @ 019e1e14 size=108 calls_out=1 calls_in=1
// strings: 

void FUN_019e1e14(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint local_28;
  uint uStack_24;
  uint *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 *local_14;
  
  puStack_18 = (undefined1 *)&local_28;
  uVar1 = param_1[1];
  if (param_4 <= uVar1 && (uint)(*param_1 <= param_3) <= param_4 - uVar1) {
    puStack_1c = &LAB_01aaa164;
    local_14 = &LAB_01aaa164;
    local_28 = param_3;
    uStack_24 = param_4;
    puStack_20 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0058ba8d,&puStack_20,&DAT_01d2906c);
  }
  if (uVar1 <= param_4 && (uint)(param_3 <= *param_1) <= uVar1 - param_4) {
    *param_1 = param_3;
    param_1[1] = param_4;
  }
  return;
}

