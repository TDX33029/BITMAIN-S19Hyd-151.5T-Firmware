// FUN_00fe594c @ 00fe594c size=380 calls_out=8 calls_in=2
// strings: 

void FUN_00fe594c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  ulonglong uVar3;
  char local_30;
  char local_2f;
  char local_2e;
  int local_2c;
  char local_28;
  char local_27;
  byte local_26;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  
  FUN_012c3960(&local_30);
  if (local_30 != '\x01') {
    bVar2 = local_2f == '\x01';
    if (bVar2) {
      local_2f = local_2e;
    }
    if (!bVar2 || local_2f != 'n') {
      FUN_012c3960(&local_28,param_2);
      if (local_28 == '\x01') {
LAB_00fe5a48:
        uVar1 = 2;
      }
      else {
        if (local_27 != '\x01') {
          local_20 = 5;
          local_24 = FUN_01966fbc(&local_20,*(undefined4 *)(param_2 + 0x30),
                                  *(undefined4 *)(param_2 + 0x34));
          goto LAB_00fe5a48;
        }
        if (local_26 != 0x2d) {
          if (local_26 - 0x30 < 10) {
            uVar1 = 1;
            goto LAB_00fe5a2c;
          }
          local_24 = FUN_012c4a28(param_2,&local_20,&DAT_01c1ab20);
LAB_00fe5aac:
          local_24 = FUN_012c6694(local_24,*(undefined4 *)(param_2 + 0x30),
                                  *(undefined4 *)(param_2 + 0x34));
          goto LAB_00fe5a48;
        }
        FUN_012c6160(param_2 + 0xc);
        uVar1 = 0;
LAB_00fe5a2c:
        FUN_012c46f4(&local_20,param_2,uVar1);
        if (local_20 == 3 && local_1c == 0) {
          local_24 = local_18;
          goto LAB_00fe5a48;
        }
        uVar3 = FUN_00677a00(&local_20);
        local_24 = (undefined4)(uVar3 >> 0x20);
        uVar1 = 1;
        if ((uVar3 & 1) != 0) goto LAB_00fe5aac;
      }
      param_1[1] = local_24;
      goto LAB_00fe5a68;
    }
    FUN_012c6160(param_2 + 0xc);
    local_2c = FUN_012c3a60(param_2,"ull",3);
    if (local_2c == 0) {
      uVar1 = 0;
      goto LAB_00fe5a68;
    }
  }
  param_1[1] = local_2c;
  uVar1 = 2;
LAB_00fe5a68:
  *param_1 = uVar1;
  return;
}

