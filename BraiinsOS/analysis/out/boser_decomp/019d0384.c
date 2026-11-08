// FUN_019d0384 @ 019d0384 size=116 calls_out=1 calls_in=1
// strings: 

void FUN_019d0384(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint local_20;
  uint local_1c;
  uint *puStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  
  puStack_10 = (undefined1 *)&local_20;
  puStack_18 = (uint *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0xc);
  if (param_4 <= uVar1 && (uint)(*puStack_18 <= param_3) <= param_4 - uVar1) {
    puStack_14 = &LAB_01aaa164;
    local_c = &LAB_01aaa164;
    local_20 = param_3;
    local_1c = param_4;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0058ba8d,&puStack_18,&DAT_01d28684);
  }
  if (uVar1 <= param_4 && (uint)(param_3 <= *puStack_18) <= uVar1 - param_4) {
    *puStack_18 = param_3;
    *(uint *)(param_1 + 0xc) = param_4;
  }
  return;
}

