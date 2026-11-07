// FUN_01b4e0f4 @ 01b4e0f4 size=432 calls_out=7 calls_in=2
// strings: 

void FUN_01b4e0f4(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  undefined4 extraout_r1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int unaff_r7;
  code *pcVar5;
  uint unaff_r9;
  bool bVar6;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  int local_2c;
  
  pcVar5 = *(code **)(param_1 + 0x150);
  local_2c = DAT_01d53560;
  FUN_01b257dc(param_1,0,0x10,0);
  FUN_01b257dc(param_1 + 0x40,0,0x10);
  bVar6 = param_4 != 0xc;
  if (bVar6) {
    unaff_r9 = param_4;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (bVar6) {
    unaff_r7 = param_3 + param_4;
  }
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (bVar6) {
    for (; 0xf < unaff_r9; unaff_r9 = unaff_r9 - 0x10) {
      FUN_01b28748(param_1,param_1,unaff_r7 - unaff_r9);
      (*pcVar5)(param_1,param_1 + 0x50);
    }
    iVar4 = (param_4 >> 4) * -0x10 + param_4;
    if (iVar4 != 0) {
      pbVar2 = (byte *)(param_1 + -1);
      iVar3 = 0;
      do {
        pbVar1 = (byte *)(param_3 + (param_4 >> 4) * 0x10 + iVar3);
        iVar3 = iVar3 + 1;
        pbVar2 = pbVar2 + 1;
        *pbVar2 = *pbVar1 ^ *pbVar2;
      } while (iVar3 != iVar4);
      (*pcVar5)(param_1,param_1 + 0x50);
    }
    FUN_01b257dc(auStack_3c,0,8);
    FUN_01b26e08(auStack_34,extraout_r1,param_4 << 3,param_4 >> 0x1d);
    FUN_01b28748(param_1,param_1,auStack_3c);
    (*pcVar5)(param_1,param_1 + 0x50);
    iVar4 = FUN_01b27554(param_1 + 0xc);
  }
  else {
    iVar4 = 1;
    FUN_01b26974(param_1,param_3,0xc);
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  (**(code **)(param_1 + 0x158))(param_1,param_1 + 0x20,param_2);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  FUN_01b27488(param_1 + 0xc,iVar4 + 1,0,0);
  return;
}

