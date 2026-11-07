// FUN_01b8dedc @ 01b8dedc size=328 calls_out=4 calls_in=1
// strings: 

void FUN_01b8dedc(int param_1,byte *param_2,uint param_3,int param_4,undefined4 param_5,int param_6,
                 undefined4 param_7,undefined4 param_8,uint param_9,undefined4 param_10)

{
  uint uVar1;
  byte *extraout_r1;
  uint uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  uint local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  local_30 = param_3;
  FUN_01b82fe4(param_10,&local_30,param_2,param_4,param_10,0x22d8);
  if (param_1 == 0) {
    pbVar3 = extraout_r1;
    if (local_30 <= param_9) {
      uVar4 = FUN_01b8d670(param_7,param_8,param_10);
LAB_01b8df74:
      uVar1 = (uint)uVar4;
      pbVar3 = (byte *)((ulonglong)uVar4 >> 0x20);
      if (uVar1 < 0xffffff89) goto LAB_01b8df7c;
    }
    param_2 = pbVar3;
    uVar1 = param_4 * 10;
  }
  else {
    if (param_1 - 2U < 2) {
      uVar4 = FUN_01b8d5ac(param_5,param_10,local_30);
      goto LAB_01b8df74;
    }
    uVar1 = 0;
LAB_01b8df7c:
    pbVar3 = param_2 + param_4;
    while (param_2 < pbVar3) {
      uVar2 = (uint)*param_2;
      param_2 = param_2 + 1;
      if (param_6 != 0) {
        uVar2 = (uint)*(byte *)(param_6 + uVar2);
      }
      uVar1 = uVar1 + uVar2;
    }
    uVar1 = uVar1 >> 3;
  }
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,param_2,local_2c ^ DAT_01d53560,0);
  }
  return;
}

