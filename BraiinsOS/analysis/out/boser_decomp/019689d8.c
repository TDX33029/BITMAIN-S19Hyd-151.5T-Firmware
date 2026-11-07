// FUN_019689d8 @ 019689d8 size=92 calls_out=1 calls_in=3
// strings: 

void FUN_019689d8(undefined4 param_1,uint param_2,uint *param_3)

{
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  local_28 = local_28 & 0xffffff00;
  if ((param_2 & 0x7fffffff) < 0x7ff00000) {
    *(ulonglong *)(param_3 + 4) = CONCAT44(param_2,param_1);
    param_3[2] = 2;
    param_3[3] = 0;
    *(undefined1 *)param_3 = 2;
    FUN_019642e8(&local_28);
  }
  else {
    *param_3 = local_28;
    param_3[1] = uStack_24;
    param_3[2] = uStack_20;
    param_3[3] = uStack_1c;
    param_3[4] = uStack_18;
    param_3[5] = uStack_14;
  }
  return;
}

