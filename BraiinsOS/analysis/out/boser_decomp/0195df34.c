// FUN_0195df34 @ 0195df34 size=168 calls_out=3 calls_in=4
// strings: 

void FUN_0195df34(uint *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint unaff_r8;
  uint local_20;
  uint uStack_1c;
  
  uVar1 = FUN_019ec670(*param_3);
  if ((uVar1 & 0xff) == 2) {
    uVar1 = 0;
  }
  else {
    FUN_019edbc4(0);
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)param_1 = 5;
      return;
    }
    unaff_r8 = (uVar1 & 0xffffff) >> 0x10;
    uVar1 = (uVar1 & 0xffffff) >> 8;
  }
  FUN_019eb864(&local_20,param_2,param_3);
  if (((local_20 & 0xff) != 5) && (uVar1 = 0, (local_20 & 0xff) == 4)) {
    *(undefined1 *)(param_2 + 0x2c) = 0;
  }
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  FUN_019edbc4(uVar1,unaff_r8);
  return;
}

