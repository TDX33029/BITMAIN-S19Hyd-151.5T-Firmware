// FUN_01b4ee24 @ 01b4ee24 size=320 calls_out=4 calls_in=1
// strings: 

void FUN_01b4ee24(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  uint local_2c;
  
  pcVar4 = *(code **)(param_1 + 0x150);
  local_2c = DAT_01d53560;
  if ((*(int *)(param_1 + 0x160) != 0) || (*(int *)(param_1 + 0x164) != 0)) {
    (*pcVar4)(param_1 + 0x40,param_1 + 0x50);
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  FUN_01b26e08(auStack_3c,uVar2,uVar2 << 3,*(int *)(param_1 + 0x34) << 3 | uVar2 >> 0x1d);
  uVar2 = *(uint *)(param_1 + 0x38);
  FUN_01b26e08(auStack_34,uVar2,uVar2 << 3,*(int *)(param_1 + 0x3c) << 3 | uVar2 >> 0x1d);
  FUN_01b28748(param_1 + 0x40,param_1 + 0x40,auStack_3c);
  (*pcVar4)(param_1 + 0x40,param_1 + 0x50);
  FUN_01b28748(param_1 + 0x40,param_1 + 0x40,param_1 + 0x20);
  bVar1 = false;
  uVar3 = extraout_r1;
  if (param_3 < 0x11 && param_2 != 0) {
    uVar5 = FUN_01b6b750(param_1 + 0x40,param_2,param_3);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    bVar1 = (int)uVar5 == 0;
  }
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(bVar1,uVar3,local_2c ^ DAT_01d53560,0);
  }
  return;
}

