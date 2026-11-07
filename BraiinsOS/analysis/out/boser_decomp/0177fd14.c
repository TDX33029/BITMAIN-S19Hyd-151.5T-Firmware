// FUN_0177fd14 @ 0177fd14 size=356 calls_out=7 calls_in=2
// strings: 

void FUN_0177fd14(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  char local_38 [4];
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  byte local_28 [4];
  undefined4 local_24;
  
  local_50 = param_2;
  uStack_4c = param_4;
  FUN_018c2f80(&local_48,param_3,&local_50,FUN_01780104);
  uVar1 = local_44;
  uVar2 = local_48 & 0xff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    uVar1 = FUN_016f6c0c(local_44);
    uVar1 = uVar1 & 0xff;
    break;
  case 1:
    uVar1 = local_48 >> 8 & 0xff;
    break;
  case 2:
  case 3:
    uVar1 = (uint)*(byte *)(local_44 + 8);
    break;
  default:
    FUN_018bf918(local_38,param_3);
    if (local_38[0] == '\x14') {
      local_48 = local_34;
      local_44 = uStack_30;
      local_40 = uStack_2c;
      uVar2 = local_40;
      local_40._0_1_ = (char)uStack_2c;
      if ((char)local_40 != '\x02') {
        if (((uStack_2c & 1) == 0) ||
           ((*(char *)(param_3 + 0xae) == '\x01' && ((*(byte *)(param_3 + 0xaf) & 1) != 0)))) {
          param_1[1] = uVar1;
          *(undefined1 *)param_1 = 4;
          return;
        }
        local_40 = uVar2;
        FUN_019a18a8(&local_48,0x25,&DAT_0050927b,0x13);
      }
    }
    else {
      FUN_0177fea8(local_28,param_2,param_3,param_4);
      if ((local_28[0] & 6) != 4) {
        FUN_0069263c(local_28[0],local_24);
      }
      FUN_017d0f94(&local_48,0x15,local_38);
    }
    goto LAB_0177fe74;
  }
  if (uVar1 == 0xd) {
    *(undefined1 *)param_1 = 5;
    FUN_0069263c(uVar2,local_44);
  }
  else {
LAB_0177fe74:
    *param_1 = local_48;
    param_1[1] = local_44;
  }
  return;
}

