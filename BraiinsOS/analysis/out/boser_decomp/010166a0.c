// FUN_010166a0 @ 010166a0 size=264 calls_out=8 calls_in=2
// strings: 

void FUN_010166a0(undefined4 *param_1,int param_2)

{
  int local_68;
  undefined4 local_64;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_012c3960(&local_1c);
  if ((char)local_1c != '\x01') {
    if (local_1c._1_1_ == '\x01') {
      if (local_1c._2_1_ == '\"') {
        FUN_012c6160(param_2 + 0xc);
        *(undefined4 *)(param_2 + 8) = 0;
        FUN_012c6380(&local_1c,param_2 + 0xc,param_2);
        if (local_1c == 2) goto LAB_01016718;
        FUN_014de15c(&local_68,local_18,local_14);
        if (local_68 != 2) {
          FUN_01bed4e2(param_1,&local_68,0x48);
          return;
        }
      }
      else {
        local_64 = FUN_012c4a28(param_2,&local_1c,&DAT_01cfa0ac);
      }
      local_18 = FUN_012c6694(local_64,*(undefined4 *)(param_2 + 0x30),
                              *(undefined4 *)(param_2 + 0x34));
    }
    else {
      local_68 = 5;
      local_18 = FUN_01966fbc(&local_68,*(undefined4 *)(param_2 + 0x30),
                              *(undefined4 *)(param_2 + 0x34));
    }
  }
LAB_01016718:
  *param_1 = 2;
  param_1[1] = local_18;
  return;
}

