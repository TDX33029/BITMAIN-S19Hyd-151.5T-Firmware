// FUN_01a6049c @ 01a6049c size=184 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01a6049c(int param_1,int param_2,undefined4 *param_3)

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
    param_2 = param_2 * 0x48;
    ppuVar2 = &local_24;
    do {
      local_1c = param_1;
      ppuVar2 = (undefined4 **)FUN_01303170(ppuVar2,&local_1c,FUN_01a60140);
      param_1 = param_1 + 0x48;
      param_2 = param_2 + -0x48;
    } while (param_2 != 0);
    uVar1 = (uint)local_20;
  }
  uVar3 = 1;
  if (uVar1 == 0) {
    uVar3 = (**(code **)(local_24[1] + 0xc))(*local_24,"]",1);
  }
  return uVar3;
}

