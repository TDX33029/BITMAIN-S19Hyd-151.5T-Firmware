// FUN_00873188 @ 00873188 size=272 calls_out=2 calls_in=11
// strings: 

void FUN_00873188(undefined4 param_1,int param_2,char param_3)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  byte local_3a;
  undefined1 local_39;
  int local_38;
  byte *local_34;
  uint local_30;
  byte *local_2c;
  uint local_28;
  short *local_24;
  undefined4 local_20;
  short local_1a;
  
  local_39 = *(undefined1 *)(param_2 + 0x10);
  local_24 = *(short **)(param_2 + 4);
  local_20 = *(undefined4 *)(param_2 + 8);
  local_28 = 2;
  local_2c = &local_3a;
  local_3a = (byte)*(undefined4 *)(param_2 + 0xc);
  FUN_008adc98(&local_38,&local_2c,2);
  if (param_3 == '\x01') {
    local_1a = 0;
    if (local_30 != 0) {
      pbVar1 = local_34;
      uVar2 = local_30;
      local_1a = 0;
      do {
        uVar4 = uVar2;
        if (1 < uVar2) {
          uVar4 = 2;
        }
        uVar3 = 0;
        if (uVar2 != 1) {
          uVar3 = (ushort)pbVar1[1];
        }
        uVar2 = uVar2 - uVar4;
        local_1a = local_1a + (ushort)*pbVar1 + uVar3 * 0x100;
        pbVar1 = pbVar1 + uVar4;
      } while (uVar2 != 0);
    }
  }
  else {
    local_1a = 0;
    if (local_30 != 0) {
      uVar2 = local_30;
      pbVar1 = local_34;
      do {
        uVar2 = uVar2 - 1;
        local_1a = local_1a + (ushort)*pbVar1;
        pbVar1 = pbVar1 + 1;
      } while (uVar2 != 0);
    }
  }
  local_28 = local_30;
  local_20 = 2;
  local_24 = &local_1a;
  local_2c = local_34;
  FUN_008adc98(param_1,&local_2c,2);
  if (local_38 != 0) {
    thunk_FUN_016d3fb4(local_34);
  }
  return;
}

