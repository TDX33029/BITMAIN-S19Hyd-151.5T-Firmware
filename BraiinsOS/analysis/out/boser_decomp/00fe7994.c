// FUN_00fe7994 @ 00fe7994 size=444 calls_out=9 calls_in=2
// strings: 

void FUN_00fe7994(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  char local_30;
  char local_2f;
  char local_2e;
  int local_2c;
  char local_28;
  char local_27;
  byte local_26;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint uStack_14;
  
  FUN_012c3960(&local_30);
  if (local_30 != '\x01') {
    bVar2 = local_2f == '\x01';
    if (bVar2) {
      local_2f = local_2e;
    }
    if (!bVar2 || local_2f != 'n') {
      FUN_012c3960(&local_28,param_2);
      if (local_28 == '\x01') {
LAB_00fe7a94:
        uVar1 = 2;
      }
      else {
        if (local_27 != '\x01') {
          local_20 = 5;
          local_24 = FUN_01966fbc(&local_20,*(undefined4 *)(param_2 + 0x30),
                                  *(undefined4 *)(param_2 + 0x34));
          goto LAB_00fe7a94;
        }
        if (local_26 == 0x2d) {
          FUN_012c6160(param_2 + 0xc);
          uVar1 = 0;
        }
        else {
          if (9 < local_26 - 0x30) {
            uVar1 = FUN_012c4a28(param_2,&local_20,&DAT_01c2496c);
            local_24 = FUN_012c6694(uVar1,*(undefined4 *)(param_2 + 0x30),
                                    *(undefined4 *)(param_2 + 0x34));
            goto LAB_00fe7a94;
          }
          uVar1 = 1;
        }
        FUN_012c46f4(&local_20,param_2,uVar1);
        if (local_20 == 3 && local_1c == 0) {
          local_24 = local_18;
          goto LAB_00fe7a94;
        }
        if (local_20 == 0) {
          uVar3 = 0xbf800000;
          if (uStack_14 < 0x80000000) {
            uVar3 = 0;
          }
          local_24 = (uint)ABS((float)(double)CONCAT44(uStack_14,local_18)) | uVar3 & 0x80000000;
        }
        else if (local_20 == 1) {
          local_24 = FUN_01bf0958(local_18,uStack_14);
        }
        else {
          local_24 = FUN_01bf0f18(local_18,uStack_14);
        }
        uVar1 = 1;
      }
      param_1[1] = local_24;
      goto LAB_00fe7afc;
    }
    FUN_012c6160(param_2 + 0xc);
    local_2c = FUN_012c3a60(param_2,"ull",3);
    if (local_2c == 0) {
      uVar1 = 0;
      goto LAB_00fe7afc;
    }
  }
  param_1[1] = local_2c;
  uVar1 = 2;
LAB_00fe7afc:
  *param_1 = uVar1;
  return;
}

