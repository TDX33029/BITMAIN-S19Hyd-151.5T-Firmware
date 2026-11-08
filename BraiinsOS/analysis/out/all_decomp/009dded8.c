// FUN_009dded8 @ 009dded8 size=112 calls_out=1 calls_in=0
// strings: 

void FUN_009dded8(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  
  uVar1 = FUN_009f4428(param_5,param_6,param_7,param_2[1],*param_2,param_2[1],
                       *(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c));
  if ((uVar1 & 0xfd) != 0) {
    FUN_009f4428(param_5,param_6,param_7,*(undefined4 *)(param_1 + 0x11c),*param_3,param_3[1],
                 *(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c));
  }
  return;
}

