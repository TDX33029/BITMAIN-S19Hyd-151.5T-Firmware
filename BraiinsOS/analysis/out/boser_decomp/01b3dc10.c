// FUN_01b3dc10 @ 01b3dc10 size=1180 calls_out=5 calls_in=3
// strings: 

undefined8
FUN_01b3dc10(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint extraout_r2;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_4ec [76];
  undefined1 auStack_4a0 [76];
  undefined1 auStack_454 [76];
  undefined1 auStack_408 [76];
  undefined1 auStack_3bc [76];
  undefined1 auStack_370 [76];
  undefined1 auStack_324 [76];
  undefined1 auStack_2d8 [76];
  undefined1 auStack_28c [76];
  undefined1 auStack_240 [76];
  undefined1 auStack_1f4 [76];
  undefined1 auStack_1a8 [76];
  undefined1 auStack_15c [76];
  undefined1 auStack_110 [76];
  undefined1 auStack_c4 [76];
  undefined1 auStack_78 [76];
  int local_2c;
  
  local_2c = DAT_01d53560;
  uVar1 = (*(code *)param_1[7])(param_7);
  uVar2 = (*(code *)param_1[7])(param_11);
  (*(code *)param_1[5])(auStack_408,param_7);
  if (param_8 == 0) {
    (*(code *)param_1[5])(auStack_78,param_11);
    (*(code *)param_1[4])(auStack_3bc,param_5,auStack_78);
    (*(code *)param_1[2])(auStack_324,param_7,param_11);
    (*(code *)param_1[5])(auStack_324,auStack_324);
    (*(code *)param_1[3])(auStack_324,auStack_324,auStack_408);
    (*(code *)param_1[3])(auStack_324,auStack_324,auStack_78);
    (*(code *)param_1[4])(auStack_370,param_11,auStack_78);
    (*(code *)param_1[4])(auStack_370,auStack_370,param_6);
  }
  else {
    FUN_01b26974(auStack_3bc,param_5,*param_1 << 2);
    (*(code *)param_1[2])(auStack_324,param_7,param_7);
    FUN_01b26974(auStack_370,param_6,*param_1 << 2);
  }
  (*(code *)param_1[4])(auStack_2d8,param_9,auStack_408);
  (*(code *)param_1[3])(auStack_28c,auStack_2d8,auStack_3bc);
  uVar3 = (*(code *)param_1[7])(auStack_28c);
  (*(code *)param_1[4])(auStack_454,auStack_28c,auStack_324);
  (*(code *)param_1[4])(auStack_240,param_7,auStack_408);
  (*(code *)param_1[4])(auStack_1f4,param_10,auStack_240);
  (*(code *)param_1[3])(auStack_1a8,auStack_1f4,auStack_370);
  (*(code *)param_1[2])(auStack_1a8,auStack_1a8,auStack_1a8);
  uVar4 = (*(code *)param_1[7])(auStack_1a8);
  uVar7 = FUN_01b0c688(uVar3 | uVar4);
  uVar5 = FUN_01b0c688(uVar1,(int)((ulonglong)uVar7 >> 0x20),(int)uVar7);
  uVar7 = FUN_01b0c688(uVar2,uVar5);
  if ((extraout_r2 & ~((uint)((ulonglong)uVar7 >> 0x20) | (uint)uVar7)) == 0) {
    (*(code *)param_1[2])(auStack_15c,auStack_28c,auStack_28c);
    (*(code *)param_1[5])(auStack_15c,auStack_15c);
    (*(code *)param_1[4])(auStack_110,auStack_28c,auStack_15c);
    (*(code *)param_1[4])(auStack_c4,auStack_3bc,auStack_15c);
    (*(code *)param_1[5])(auStack_4ec,auStack_1a8);
    (*(code *)param_1[3])(auStack_4ec,auStack_4ec,auStack_110);
    (*(code *)param_1[3])(auStack_4ec,auStack_4ec,auStack_c4);
    (*(code *)param_1[3])(auStack_4ec,auStack_4ec,auStack_c4);
    (*(code *)param_1[3])(auStack_4a0,auStack_c4,auStack_4ec);
    (*(code *)param_1[4])(auStack_4a0,auStack_4a0,auStack_1a8);
    (*(code *)param_1[4])(auStack_78,auStack_370,auStack_110);
    (*(code *)param_1[3])(auStack_4a0,auStack_4a0,auStack_78);
    (*(code *)param_1[3])(auStack_4a0,auStack_4a0,auStack_78);
    iVar6 = *param_1;
    FUN_01b0d75c(auStack_4ec,iVar6,uVar1,param_9,auStack_4ec);
    FUN_01b0d75c(auStack_4a0,iVar6,uVar1,param_10,auStack_4a0);
    FUN_01b0d75c(auStack_454,iVar6,uVar1,param_11,auStack_454);
    FUN_01b0d75c(param_2,iVar6,uVar2,param_5,auStack_4ec);
    FUN_01b0d75c(param_3,*param_1,uVar2,param_6,auStack_4a0);
    FUN_01b0d75c(param_4,*param_1,uVar2,param_7,auStack_454);
  }
  else {
    FUN_01b3d994(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

