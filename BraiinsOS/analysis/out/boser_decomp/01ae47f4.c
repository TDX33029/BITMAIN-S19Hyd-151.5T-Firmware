// FUN_01ae47f4 @ 01ae47f4 size=208 calls_out=2 calls_in=3
// strings: 

void FUN_01ae47f4(uint *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  FUN_019a6924(&local_38,param_3);
  if ((char)local_38 != '\x04') {
    FUN_019a66e4(&local_30,*(undefined4 *)(param_3[6] + 0xc),*(undefined4 *)(param_3[6] + 0x10),
                 *param_3,param_3[1] + -1);
    param_1[3] = local_2c;
    param_1[4] = local_28;
    param_1[5] = local_38;
    param_1[6] = local_34;
    param_1[1] = 0x80000000;
    param_1[2] = local_30;
    param_1[7] = param_2;
  }
  else {
    FUN_019a66e4(param_1 + 4,*(undefined4 *)(param_3[6] + 0xc),*(undefined4 *)(param_3[6] + 0x10),
                 *param_3,param_3[1] + -1);
    uVar1 = param_3[2];
    uVar2 = param_3[3];
    *(undefined1 *)(param_1 + 9) = 0;
    param_1[7] = local_34;
    param_1[8] = param_2;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
  }
  *param_1 = (uint)((char)local_38 != '\x04');
  return;
}

