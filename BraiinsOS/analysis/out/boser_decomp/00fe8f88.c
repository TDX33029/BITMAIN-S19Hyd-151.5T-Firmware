// FUN_00fe8f88 @ 00fe8f88 size=360 calls_out=6 calls_in=2
// strings: 

void FUN_00fe8f88(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char local_30;
  char local_2f;
  char local_2e;
  int local_2c;
  char local_28;
  char local_27;
  char local_26;
  int local_24;
  undefined4 local_20 [3];
  undefined1 uStack_11;
  
  FUN_012c3960(&local_30);
  if (local_30 != '\x01') {
    bVar3 = local_2f == '\x01';
    if (bVar3) {
      local_2f = local_2e;
    }
    if (bVar3 && local_2f == 'n') {
      FUN_012c6160(param_2 + 0xc);
      local_2c = FUN_012c3a60(param_2,"ull",3);
      if (local_2c == 0) {
        uVar1 = 2;
        goto LAB_00fe9070;
      }
    }
    else {
      FUN_012c3960(&local_28,param_2);
      if (local_28 == '\x01') {
        local_2c = local_24;
      }
      else if (local_27 == '\x01') {
        if (local_26 == 'f') {
          FUN_012c6160(param_2 + 0xc);
          local_2c = FUN_012c3a60(param_2,&DAT_0056efac,4);
          if (local_2c == 0) {
            uVar1 = 0;
LAB_00fe9070:
            param_1[1] = uVar1;
            uVar1 = 0;
            goto LAB_00fe9014;
          }
        }
        else if (local_26 == 't') {
          FUN_012c6160(param_2 + 0xc);
          local_2c = FUN_012c3a60(param_2,"rue",3);
          if (local_2c == 0) {
            uVar1 = 1;
            goto LAB_00fe9070;
          }
        }
        else {
          uVar2 = FUN_012c4a28(param_2,&uStack_11,&DAT_01d064d8);
          local_2c = FUN_012c6694(uVar2,*(undefined4 *)(param_2 + 0x30),
                                  *(undefined4 *)(param_2 + 0x34));
        }
      }
      else {
        local_20[0] = 5;
        local_2c = FUN_01966fbc(local_20,*(undefined4 *)(param_2 + 0x30),
                                *(undefined4 *)(param_2 + 0x34));
      }
    }
  }
  *(int *)(param_1 + 4) = local_2c;
  uVar1 = 1;
LAB_00fe9014:
  *param_1 = uVar1;
  return;
}

