// FUN_018726a8 @ 018726a8 size=100 calls_out=2 calls_in=0
// strings: 

void FUN_018726a8(uint *param_1,int param_2)

{
  uint uVar1;
  uint local_28;
  uint uStack_24;
  
  FUN_01876ee8(&local_28,param_2 + 0x100);
  uVar1 = local_28 & 0xff;
  if (uVar1 == 5) {
    *(undefined1 *)param_1 = 5;
  }
  else {
    if ((local_28 & 0xff) != 4) {
      FUN_01421814(param_2);
      uVar1 = local_28 >> 8;
    }
    *param_1 = local_28 & 0xff | uVar1 << 8;
    param_1[1] = uStack_24;
  }
  return;
}

