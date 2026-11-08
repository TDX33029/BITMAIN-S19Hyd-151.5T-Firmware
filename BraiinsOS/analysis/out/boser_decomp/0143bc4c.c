// FUN_0143bc4c @ 0143bc4c size=204 calls_out=4 calls_in=2
// strings: 

void FUN_0143bc4c(uint *param_1)

{
  uint local_30;
  uint local_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  if ((char)*param_1 != '\x04') {
    FUN_0143b8e8(0xb);
    local_30 = *param_1;
    local_2c = param_1[1];
    local_28 = param_1[2];
    uStack_24 = param_1[3];
    uStack_20 = param_1[4];
    uStack_1c = param_1[5];
    FUN_0143bbdc();
    return;
  }
  local_30 = *param_1;
  local_2c = param_1[1];
  local_28 = param_1[2];
  uStack_24 = param_1[3];
  uStack_20 = param_1[4];
  uStack_1c = param_1[5];
  if ((local_30 & 0xff) == 4) {
    if ((local_2c & 0xff) != 4) {
      local_30 = local_2c;
      local_2c = local_28;
      FUN_0143bd38(&local_30);
      return;
    }
  }
  else if ((local_30 & 0xff) == 1) {
    (**(code **)(local_28 + 0x10))(&uStack_1c,uStack_24,uStack_20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c(&DAT_00568e28,0x10,&DAT_01cf77e8);
}

