// FUN_007abe98 @ 007abe98 size=212 calls_out=3 calls_in=2
// strings: Should have switched to stored and unencrypted beforehand

void FUN_007abe98(undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  FUN_007aa418(&local_28);
  if (local_28 == 0x80000007) {
    FUN_007aaf70(&local_28,param_2);
    if (local_28 != 1) {
      uVar2 = *param_2 ^ 3 | param_2[1];
      bVar3 = uVar2 == 0;
      if (bVar3) {
        uVar2 = param_2[2];
      }
      if (!bVar3 || uVar2 != 0) {
        FUN_01af9864(&local_28,"Should have switched to stored and unencrypted beforehand",0x39);
        if ((char)local_28 != '\x04') {
          uVar1 = 0;
          if ((local_28 & 0xff) != 4) {
            param_1[1] = 0x80000001;
            uVar1 = 1;
            local_20 = local_28;
            local_1c = local_24;
          }
          goto LAB_007abee8;
        }
      }
      uVar1 = 0;
      goto LAB_007abee8;
    }
    local_28 = local_24;
    uVar2 = local_20;
  }
  else {
    uVar2 = local_24;
    local_1c = local_20;
  }
  local_20 = uVar2;
  param_1[1] = local_28;
  uVar1 = 1;
LAB_007abee8:
  *param_1 = uVar1;
  param_1[2] = local_20;
  param_1[3] = local_1c;
  return;
}

