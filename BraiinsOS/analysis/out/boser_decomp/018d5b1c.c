// FUN_018d5b1c @ 018d5b1c size=180 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_018d5b1c(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 **ppuVar2;
  undefined4 uVar3;
  undefined4 *local_24;
  byte local_20;
  undefined1 local_1f;
  int local_1c;
  
  uVar1 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_0053340d,1);
  local_1f = 0;
  local_20 = (byte)uVar1;
  local_24 = param_3;
  if (param_2 != 0) {
    param_2 = param_2 << 1;
    ppuVar2 = &local_24;
    do {
      local_1c = param_1;
      ppuVar2 = (undefined4 **)FUN_01303170(ppuVar2,&local_1c,&LAB_018d2cc4);
      param_1 = param_1 + 2;
      param_2 = param_2 + -2;
    } while (param_2 != 0);
    uVar1 = (uint)local_20;
  }
  uVar3 = 1;
  if (uVar1 == 0) {
    uVar3 = (**(code **)(local_24[1] + 0xc))(*local_24,"]",1);
  }
  return uVar3;
}

