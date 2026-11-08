// FUN_017c2238 @ 017c2238 size=212 calls_out=2 calls_in=2
// strings: 

void FUN_017c2238(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_017ea748(&local_24);
    if (local_24 != 2) {
      if ((local_24 & 1) == 0) {
        local_48 = local_34;
        uStack_44 = uStack_30;
        uStack_40 = uStack_2c;
        uStack_3c = uStack_28;
        *(undefined1 *)(param_2 + 0x10) = 1;
        uVar1 = 0;
      }
      else {
        if (local_20 == 0) {
          FUN_017d0fc8(&uStack_30);
          local_34 = 0;
        }
        else {
          local_34 = local_20;
          uStack_30 = local_1c;
          uStack_2c = local_18;
          uStack_28 = local_14;
        }
        local_48 = local_34;
        uStack_44 = uStack_30;
        uStack_40 = uStack_2c;
        uStack_3c = uStack_28;
        uVar1 = 1;
      }
      *param_1 = uVar1;
      param_1[1] = local_48;
      param_1[2] = uStack_44;
      param_1[3] = uStack_40;
      param_1[4] = uStack_3c;
      return;
    }
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}

