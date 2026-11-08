// FUN_012c658c @ 012c658c size=260 calls_out=7 calls_in=3
// strings: 

void FUN_012c658c(int *param_1,int param_2)

{
  undefined4 local_28;
  int local_24;
  int iStack_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  FUN_012c3960(&local_28);
  if ((char)local_28 == '\x01') {
    local_18 = local_24;
  }
  else if (local_28._1_1_ == '\x01') {
    if (local_28._2_1_ == '\"') {
      FUN_012c6160(param_2 + 0xc);
      *(undefined4 *)(param_2 + 8) = 0;
      FUN_012c6380(&local_1c,param_2 + 0xc,param_2);
      if (local_1c == 2) goto LAB_012c6604;
      FUN_012c1060(&local_28,local_18,local_14);
      if (local_28 != -0x80000000) {
        *param_1 = local_28;
        param_1[1] = local_24;
        param_1[2] = iStack_20;
        return;
      }
    }
    else {
      local_24 = FUN_012c4a28(param_2,&local_1c,&DAT_01ce2a98);
    }
    local_18 = FUN_012c6694(local_24,*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34)
                           );
  }
  else {
    local_1c = 5;
    local_18 = FUN_01966fbc(&local_1c,*(undefined4 *)(param_2 + 0x30),
                            *(undefined4 *)(param_2 + 0x34));
  }
LAB_012c6604:
  *param_1 = -0x80000000;
  param_1[1] = local_18;
  return;
}

