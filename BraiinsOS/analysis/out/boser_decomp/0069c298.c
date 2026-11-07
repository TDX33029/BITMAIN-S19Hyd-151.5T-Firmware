// FUN_0069c298 @ 0069c298 size=268 calls_out=8 calls_in=3
// strings: 

void FUN_0069c298(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  uint local_20;
  int iStack_1c;
  undefined1 uStack_11;
  
  FUN_00677900(&local_30);
  if ((char)local_30 != '\x01') {
    if (local_30._1_1_ == '\x01') {
      if (local_30._2_1_ == '\"') {
        FUN_0157653c(param_2 + 0xc);
        *(undefined4 *)(param_2 + 8) = 0;
        FUN_0069e49c(&local_30,param_2 + 0xc,param_2);
        if (local_30 == 2) goto LAB_0069c310;
        FUN_0128ee18(&local_24,local_2c,local_28);
        if (local_24 != 0) {
          *param_1 = local_24;
          param_1[1] = local_20;
          param_1[2] = iStack_1c;
          return;
        }
        uVar1 = FUN_00699c4c(local_20 & 0xff);
      }
      else {
        uVar1 = FUN_00678df8(param_2,&uStack_11,&DAT_01c04794);
      }
      local_2c = FUN_012c6694(uVar1,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20))
      ;
    }
    else {
      local_24 = 5;
      local_2c = FUN_01966fbc(&local_24,*(undefined4 *)(param_2 + 0x1c),
                              *(undefined4 *)(param_2 + 0x20));
    }
  }
LAB_0069c310:
  *param_1 = 0;
  param_1[1] = local_2c;
  return;
}

