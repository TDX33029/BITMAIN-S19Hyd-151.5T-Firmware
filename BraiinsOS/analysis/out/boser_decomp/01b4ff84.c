// FUN_01b4ff84 @ 01b4ff84 size=272 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_01b4ff84(int param_1,byte *param_2,int param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte local_54 [32];
  undefined1 auStack_34 [16];
  int local_24;
  
  iVar3 = 0;
  local_24 = DAT_01d53560;
  do {
    FUN_01b275f0(param_1,1);
    pbVar2 = local_54 + iVar3;
    iVar3 = iVar3 + 0x10;
    (**(code **)(param_1 + 0xf4))(param_1 + 0xfc,pbVar2,param_1);
  } while (iVar3 != 0x30);
  pbVar4 = param_2 + param_3;
  pbVar2 = local_54;
  for (; param_2 != pbVar4; param_2 = param_2 + 1) {
    *pbVar2 = *pbVar2 ^ *param_2;
    pbVar2 = pbVar2 + 1;
  }
  uVar1 = FUN_01b4fa58(param_1,0,param_1 + 0xf4,local_54,0x20);
  *(undefined4 *)(param_1 + 0xf8) = uVar1;
  FUN_01b26974(param_1 + 0xfc,auStack_34,0x10);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 1;
}

