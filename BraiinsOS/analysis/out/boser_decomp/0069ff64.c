// FUN_0069ff64 @ 0069ff64 size=356 calls_out=6 calls_in=3
// strings: 

void FUN_0069ff64(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint6 uVar5;
  undefined1 auStack_240 [260];
  int local_13c;
  undefined4 local_138;
  undefined4 local_130 [64];
  int local_30 [3];
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  if (uVar4 < 0x100) {
    FUN_01bed4e2(auStack_240,uVar3,uVar4);
    auStack_240[uVar4] = 0;
    FUN_012fbc58(&local_13c,auStack_240,uVar4 + 1);
    if (local_13c == 0) {
      if (0xff < param_4) {
        uVar5 = FUN_019d1b84(param_3,param_4,local_138);
        goto LAB_006a00bc;
      }
      FUN_01bed4e2(local_130,param_3,param_4);
      *(undefined1 *)((int)local_130 + param_4) = 0;
      FUN_012fbc58(local_30,local_130,param_4 + 1);
      if (local_30[0] == 0) {
        sVar1 = -100;
        software_interrupt(0);
        goto LAB_006a0008;
      }
    }
    sVar1 = -0x16;
  }
  else {
    uVar5 = FUN_019d1c10(uVar3,uVar4,param_3,param_4);
LAB_006a00bc:
    sVar1 = (short)(uVar5 >> 0x20);
    if ((uVar5 & 1) == 0) {
      local_130[2] = 0;
      local_130[1] = 1;
      local_130[0] = 0;
      FUN_019abeb4(local_130,1,(int)uVar5);
      if (uVar4 != 0) {
        thunk_FUN_01be4678(uVar3);
      }
      *(undefined1 *)(param_1 + 4) = 2;
      return;
    }
  }
LAB_006a0008:
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  param_1[2] = *param_2;
  param_1[3] = uVar3;
  param_1[4] = uVar2;
  *param_1 = 0;
  param_1[1] = -(int)sVar1;
  return;
}

