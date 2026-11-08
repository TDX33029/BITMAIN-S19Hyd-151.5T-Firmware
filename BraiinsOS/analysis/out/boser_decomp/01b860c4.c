// FUN_01b860c4 @ 01b860c4 size=316 calls_out=4 calls_in=1
// strings: 

void FUN_01b860c4(int param_1,byte *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined4 local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  local_30 = param_4;
  FUN_01b82fe4(param_9,&local_30,param_2,param_3,param_9,0x22d8);
  if (param_1 == 0) {
    uVar4 = FUN_01b8d670(param_7,param_8,param_9,local_30);
LAB_01b86154:
    uVar1 = (uint)uVar4;
    if (0xffffff88 < uVar1) {
      uVar1 = param_3 * 10;
      param_2 = (byte *)((ulonglong)uVar4 >> 0x20);
      goto LAB_01b8617c;
    }
  }
  else {
    if (param_1 - 2U < 2) {
      uVar4 = FUN_01b8d5ac(param_5,param_9,local_30);
      goto LAB_01b86154;
    }
    uVar1 = 0;
  }
  pbVar3 = param_2 + param_3;
  while (param_2 < pbVar3) {
    uVar2 = (uint)*param_2;
    param_2 = param_2 + 1;
    if (param_6 != 0) {
      uVar2 = (uint)*(byte *)(param_6 + uVar2);
    }
    uVar1 = uVar1 + uVar2;
  }
  uVar1 = uVar1 >> 3;
LAB_01b8617c:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,param_2,local_2c ^ DAT_01d53560,0);
  }
  return;
}

