// FUN_01be1558 @ 01be1558 size=120 calls_out=3 calls_in=0
// strings: 

void FUN_01be1558(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_2c [8];
  int local_24;
  int local_20;
  uint local_1c;
  
  local_1c = DAT_01d53560;
  if (*(code **)(*param_1 + 0xc) == (code *)&DAT_01be1621) {
    iVar3 = param_1[0x11];
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0xc))(param_1,0xffffffff);
  }
  uVar4 = FUN_01be3dcc(iVar3,auStack_2c);
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar1 = 0;
  if (((int)uVar4 != 0) && (uVar1 = 0, local_24 != 0)) {
    FUN_01beb79e(param_2,param_3,&DAT_005bf5ec);
    uVar1 = 1;
    *param_4 = iVar3 - local_20;
    uVar2 = extraout_r1;
  }
  if ((DAT_01d53560 ^ local_1c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar2,DAT_01d53560 ^ local_1c,0);
  }
  return;
}

