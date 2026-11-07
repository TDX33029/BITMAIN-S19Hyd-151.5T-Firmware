// FUN_007aee1c @ 007aee1c size=252 calls_out=4 calls_in=2
// strings: 

void FUN_007aee1c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint local_2c;
  int local_28;
  
  if (param_2[0x412] != 0) {
    do {
      if ((*param_2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01ce6864);
      }
      FUN_007b0154(&local_38,param_2 + 2,param_2[0x411]);
      if (((char)local_38 != '\x04') && ((local_38 & 0xff) != 4)) {
LAB_007aeef0:
        *param_1 = local_38;
        param_1[1] = local_34;
        return;
      }
      if (local_34 == 0) {
        local_34 = 0;
        local_38 = 0x1701;
        goto LAB_007aeef0;
      }
      uVar1 = param_2[0x412];
      if (uVar1 < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_34,uVar1,&DAT_01d2fe30);
      }
      local_28 = uVar1 - local_34;
      local_38 = param_2[0x411];
      param_2[0x412] = 0;
      local_2c = local_34;
      local_34 = local_38 + local_34;
      local_30 = param_2 + 0x410;
      FUN_01445cc0(&local_38);
    } while (param_2[0x412] != 0);
  }
  *(undefined1 *)param_1 = 4;
  return;
}

