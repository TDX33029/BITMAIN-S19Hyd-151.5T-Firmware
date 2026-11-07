// FUN_019d12ac @ 019d12ac size=152 calls_out=3 calls_in=2
// strings: 

void FUN_019d12ac(uint *param_1,int param_2)

{
  undefined4 extraout_r1;
  uint local_30;
  uint local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  FUN_019d0404(&local_30,param_2 + 0x58);
  if ((local_30 & 1) == 0) {
    local_28 = &DAT_3b9aca00;
  }
  else {
    FUN_01bf0ff0(local_28,local_24,1000,0);
    FUN_019fa158(&local_30,extraout_r1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                 *(undefined4 *)(param_2 + 0x10));
    *param_1 = local_30;
    param_1[1] = local_2c;
  }
  param_1[2] = (uint)local_28;
  return;
}

