// FUN_0121c958 @ 0121c958 size=276 calls_out=4 calls_in=0
// strings: 

void FUN_0121c958(int param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xfc) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0x100));
  }
  if (*(int *)(param_1 + 0x108) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c));
  }
  FUN_0120d6d0(param_1 + 0x28);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),4,8);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),4,8);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),4,8);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),4,0x10);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),4,0x10);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),4,0x10);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88),4,8);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),4,8);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0),4,0xc);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),4,8);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb8),4,8);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4),4,8);
  FUN_0121cb64(param_1 + 0xcc);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),4,8);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8),4,0x10,unaff_r4,
               unaff_r5);
  uVar1 = *(undefined4 *)(param_1 + 0xf4);
  FUN_0129a3fc(uVar1,*(undefined4 *)(param_1 + 0xf8));
  FUN_0134aee0(*(undefined4 *)(param_1 + 0xf0),uVar1,4,0x18);
  return;
}

