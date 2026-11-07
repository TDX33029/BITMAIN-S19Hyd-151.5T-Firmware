// FUN_011ddc04 @ 011ddc04 size=180 calls_out=2 calls_in=3
// strings: 

void FUN_011ddc04(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  undefined4 unaff_r5;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined8 uVar2;
  uint local_2c;
  undefined2 local_28;
  undefined1 local_26;
  
  uVar2 = CONCAT44(unaff_r10,unaff_r5);
  bVar1 = *(byte *)(param_4 + 0x6c);
  if (8 < bVar1) {
    if (bVar1 == 9) {
      local_26 = *(undefined1 *)(param_4 + 0x6f);
      local_28 = *(undefined2 *)(param_4 + 0x6d);
      uVar2 = *(undefined8 *)(param_4 + 0x70);
      unaff_r11 = *(undefined4 *)(param_4 + 0x78);
      local_2c = (uint)*(byte *)(param_4 + 0x7c);
    }
    else {
      uVar2 = FUN_013d4df8(*(undefined4 *)(param_4 + 0x70),*(undefined4 *)(param_4 + 0x74));
    }
  }
  FUN_01bed4e2(param_1,param_4,0x90);
  *(undefined8 *)(param_1 + 0xac) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = unaff_r11;
  *(uint *)(param_1 + 0xb8) = local_2c;
  *(undefined1 *)(param_1 + 0xbc) = 1;
  *(byte *)(param_1 + 0xa8) = bVar1;
  *(undefined4 *)(param_1 + 0x90) = param_2;
  *(undefined4 *)(param_1 + 0x94) = param_3;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined2 *)(param_1 + 0xa9) = local_28;
  *(undefined1 *)(param_1 + 0xab) = local_26;
  return;
}

