// FUN_00b140e4 @ 00b140e4 size=128 calls_out=3 calls_in=0
// strings: miner-01.local8.8.8.8

void FUN_00b140e4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = thunk_FUN_01be5118(0xe);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xe);
  }
  FUN_01bed4e2(iVar1,"miner-01.local8.8.8.8",0xe);
  *param_1 = 0xe;
  param_1[1] = iVar1;
  param_1[2] = 0xe;
  param_1[3] = 0x80000000;
  param_1[4] = uStack_44;
  param_1[5] = uStack_40;
  param_1[6] = uStack_3c;
  param_1[7] = uStack_38;
  param_1[8] = uStack_34;
  param_1[9] = local_30;
  param_1[10] = uStack_2c;
  param_1[0xb] = uStack_28;
  param_1[0xc] = uStack_24;
  param_1[0xd] = uStack_20;
  param_1[0xe] = uStack_1c;
  return;
}

