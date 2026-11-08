// FUN_01b51818 @ 01b51818 size=480 calls_out=5 calls_in=2
// strings: 

void FUN_01b51818(int param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint extraout_r1;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_3c [16];
  uint local_2c;
  
  local_2c = DAT_01d53560;
  uVar2 = param_2;
  if ((param_3 < 0x10001) &&
     (uVar2 = *(uint *)(param_1 + 0x114),
     uVar2 < 0x10000 || 0x10000 - uVar2 < (uint)(*(int *)(param_1 + 0x110) == 0))) {
    if (param_5 != 0) {
      if (0x30 < param_5) goto LAB_01b519d8;
      FUN_01b4ff84(param_1,param_4,param_5);
    }
    for (; 0xf < param_3; param_3 = param_3 - uVar4) {
      uVar2 = param_3;
      if (0x1fff < param_3) {
        uVar2 = 0x2000;
      }
      uVar4 = uVar2 & 0xfffffff0;
      uVar5 = 0;
      if (*(int *)(param_1 + 0xf8) == 0) {
        do {
          FUN_01b275f0(param_1,1);
          iVar3 = param_2 + uVar5;
          uVar5 = uVar5 + 0x10;
          (**(code **)(param_1 + 0xf4))(param_1 + 0xfc,iVar3,param_1);
        } while (uVar5 < uVar4);
      }
      else {
        FUN_01b257dc(param_2,0,uVar4);
        FUN_01b275f0(param_1,1);
        (**(code **)(param_1 + 0xf8))(param_2,param_2,uVar2 >> 4,param_1,param_1 + 0xfc);
        FUN_01b275f0(param_1,(uVar2 >> 4) - 1);
      }
      param_2 = param_2 + uVar4;
    }
    if (param_3 != 0) {
      FUN_01b275f0(param_1,1);
      (**(code **)(param_1 + 0xf4))(param_1 + 0xfc,auStack_3c,param_1);
      FUN_01b26974(param_2,auStack_3c,param_3);
    }
    FUN_01b4ff84(param_1,param_4,param_5);
    uVar2 = *(uint *)(param_1 + 0x110);
    uVar1 = 1;
    *(uint *)(param_1 + 0x110) = uVar2 + 1;
    *(uint *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + (uint)(0xfffffffe < uVar2);
    uVar2 = extraout_r1;
  }
  else {
LAB_01b519d8:
    uVar1 = 0;
  }
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar2,local_2c ^ DAT_01d53560,0);
  }
  return;
}

