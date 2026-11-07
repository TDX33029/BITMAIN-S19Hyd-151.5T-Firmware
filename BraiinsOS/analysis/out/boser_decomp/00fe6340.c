// FUN_00fe6340 @ 00fe6340 size=412 calls_out=9 calls_in=2
// strings: 

void FUN_00fe6340(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  char local_38;
  char local_37;
  char local_36;
  int local_34;
  char local_30;
  char local_2f;
  byte local_2e;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 uStack_1c;
  undefined1 uStack_11;
  
  FUN_012c3960(&local_38);
  if (local_38 != '\x01') {
    bVar2 = local_37 == '\x01';
    if (bVar2) {
      local_37 = local_36;
    }
    if (bVar2 && local_37 == 'n') {
      FUN_012c6160(param_2 + 0xc);
      local_34 = FUN_012c3a60(param_2,"ull",3);
      if (local_34 == 0) {
        uVar1 = 0;
        goto LAB_00fe6444;
      }
    }
    else {
      FUN_012c3960(&local_30,param_2);
      if (local_30 == '\x01') {
        local_34 = local_2c;
      }
      else if (local_2f == '\x01') {
        if (local_2e == 0x2d) {
          FUN_012c6160(param_2 + 0xc);
          uVar1 = 0;
        }
        else {
          if (9 < local_2e - 0x30) {
            uVar1 = FUN_012c4a28(param_2,&uStack_11,&DAT_01c2497c);
            local_34 = FUN_012c6694(uVar1,*(undefined4 *)(param_2 + 0x30),
                                    *(undefined4 *)(param_2 + 0x34));
            goto LAB_00fe6438;
          }
          uVar1 = 1;
        }
        FUN_012c46f4(&local_28,param_2,uVar1);
        if (local_28 != 3 || local_24 != 0) {
          if (local_28 == 0) {
            uVar3 = CONCAT44(uStack_1c,local_20);
          }
          else if (local_28 == 1) {
            uVar3 = FUN_01bf0e80(local_20,uStack_1c);
          }
          else {
            uVar3 = FUN_01bf0cac(local_20,uStack_1c);
          }
          *(undefined8 *)(param_1 + 2) = uVar3;
          uVar1 = 1;
          goto LAB_00fe6444;
        }
        local_34 = local_20;
      }
      else {
        local_28 = 5;
        local_34 = FUN_01966fbc(&local_28,*(undefined4 *)(param_2 + 0x30),
                                *(undefined4 *)(param_2 + 0x34));
      }
    }
  }
LAB_00fe6438:
  param_1[2] = local_34;
  uVar1 = 2;
LAB_00fe6444:
  *param_1 = uVar1;
  param_1[1] = 0;
  return;
}

