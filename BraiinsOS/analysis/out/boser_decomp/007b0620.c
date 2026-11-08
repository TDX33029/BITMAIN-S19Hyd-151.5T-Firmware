// FUN_007b0620 @ 007b0620 size=60 calls_out=1 calls_in=2
// strings: Should have switched to stored and unencrypted beforehand

void FUN_007b0620(undefined1 *param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *param_2 ^ 3 | param_2[1];
  bVar2 = uVar1 == 0;
  if (bVar2) {
    uVar1 = param_2[2];
  }
  if (bVar2 && uVar1 == 0) {
    *param_1 = 4;
    *(uint **)(param_1 + 4) = param_2 + 4;
    return;
  }
  FUN_01af9864(param_1,"Should have switched to stored and unencrypted beforehand",0x39);
  return;
}

