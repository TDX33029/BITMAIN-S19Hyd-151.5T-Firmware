// FUN_0158f950 @ 0158f950 size=276 calls_out=8 calls_in=1
// strings: 

void FUN_0158f950(int *param_1,int param_2)

{
  int iVar1;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  iVar1 = FUN_0158d258(param_2);
  if (iVar1 == 0) {
    FUN_0158c2a4(&local_2c,param_2);
    if ((char)local_2c != '\x01') {
      if (local_2c._1_1_ == '\x01') {
        if (local_2c._2_1_ == '\"') {
          FUN_0157653c(param_2 + 0xc);
          *(undefined4 *)(param_2 + 8) = 0;
          FUN_01576784(&local_24,param_2 + 0xc,param_2);
          if (local_24 == 2) {
            *param_1 = 0;
            param_1[1] = local_20;
            return;
          }
          FUN_0196ad08(&local_2c,local_20,local_1c);
          if (local_2c != 0) goto LAB_0158f998;
        }
        else {
          local_28 = FUN_0158cf9c(param_2,&local_24);
        }
        iVar1 = FUN_012c6694(local_28,*(undefined4 *)(param_2 + 0x1c),
                             *(undefined4 *)(param_2 + 0x20));
      }
      else {
        local_24 = 5;
        iVar1 = FUN_01966fbc(&local_24,*(undefined4 *)(param_2 + 0x1c),
                             *(undefined4 *)(param_2 + 0x20));
      }
      goto LAB_0158f970;
    }
  }
  else {
LAB_0158f970:
    local_28 = iVar1;
  }
  local_2c = 0;
LAB_0158f998:
  *param_1 = local_2c;
  param_1[1] = local_28;
  return;
}

