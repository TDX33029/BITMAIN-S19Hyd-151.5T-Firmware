// FUN_01b38880 @ 01b38880 size=984 calls_out=11 calls_in=1
// strings: 

void FUN_01b38880(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_164 [40];
  undefined1 auStack_13c [40];
  undefined1 auStack_114 [40];
  undefined1 auStack_ec [40];
  undefined1 auStack_c4 [40];
  undefined1 auStack_9c [40];
  undefined1 auStack_74 [40];
  byte local_4c [32];
  uint local_2c;
  
  iVar3 = 4;
  local_2c = DAT_01d53560;
  FUN_01b284d8(param_1 + 0x28);
  FUN_01b26570(param_1 + 0x50);
  FUN_01b213a4(auStack_114,param_1 + 0x28);
  FUN_01b20ba0(auStack_ec,auStack_114,&DAT_0055e050);
  FUN_01b21d60(auStack_13c,auStack_114,param_1 + 0x50);
  FUN_01b2233c(auStack_164,auStack_13c);
  FUN_01b21f9c(auStack_13c,auStack_ec,param_1 + 0x50);
  FUN_01b20ba0(auStack_114,auStack_164,auStack_13c);
  FUN_01b213a4(auStack_c4,auStack_114);
  FUN_01b213a4(auStack_9c,auStack_c4);
  FUN_01b213a4(auStack_9c,auStack_9c);
  FUN_01b20ba0(auStack_9c,auStack_114,auStack_9c);
  FUN_01b20ba0(auStack_c4,auStack_c4,auStack_9c);
  FUN_01b213a4(auStack_c4,auStack_c4);
  FUN_01b20ba0(auStack_c4,auStack_9c,auStack_c4);
  FUN_01b213a4(auStack_9c,auStack_c4);
  do {
    FUN_01b213a4(auStack_9c,auStack_9c);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 9;
  FUN_01b20ba0(auStack_c4,auStack_9c,auStack_c4);
  FUN_01b213a4(auStack_9c,auStack_c4);
  do {
    FUN_01b213a4(auStack_9c,auStack_9c);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_01b20ba0(auStack_9c,auStack_9c,auStack_c4);
  FUN_01b213a4(auStack_74,auStack_9c);
  iVar3 = 0x13;
  do {
    FUN_01b213a4(auStack_74,auStack_74);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 9;
  FUN_01b20ba0(auStack_9c,auStack_74,auStack_9c);
  FUN_01b213a4(auStack_9c,auStack_9c);
  do {
    FUN_01b213a4(auStack_9c,auStack_9c);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 0x31;
  FUN_01b20ba0(auStack_c4,auStack_9c,auStack_c4);
  FUN_01b213a4(auStack_9c,auStack_c4);
  do {
    FUN_01b213a4(auStack_9c,auStack_9c);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_01b20ba0(auStack_9c,auStack_9c,auStack_c4);
  FUN_01b213a4(auStack_74,auStack_9c);
  iVar3 = 99;
  do {
    FUN_01b213a4(auStack_74,auStack_74);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 0x31;
  FUN_01b20ba0(auStack_9c,auStack_74,auStack_9c);
  FUN_01b213a4(auStack_9c,auStack_9c);
  do {
    FUN_01b213a4(auStack_9c,auStack_9c);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_01b20ba0(auStack_c4,auStack_9c,auStack_c4);
  FUN_01b213a4(auStack_c4,auStack_c4);
  FUN_01b213a4(auStack_c4,auStack_c4);
  FUN_01b20ba0(param_1,auStack_c4,auStack_114);
  FUN_01b20ba0(param_1,param_1,auStack_164);
  FUN_01b213a4(auStack_ec,param_1);
  FUN_01b20ba0(auStack_ec,auStack_ec,auStack_13c);
  FUN_01b21d60(auStack_9c,auStack_ec,auStack_164);
  iVar3 = FUN_01b22780(auStack_9c);
  if (iVar3 != 0) {
    FUN_01b21f9c(auStack_9c,auStack_ec,auStack_164);
    uVar4 = FUN_01b22780(auStack_9c);
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      uVar1 = 0;
      goto LAB_01b38c14;
    }
    FUN_01b20ba0(param_1,param_1,&DAT_0055e028);
  }
  FUN_01b21754(local_4c,param_1);
  if ((local_4c[0] & 1) != *(byte *)(param_2 + 0x1f) >> 7) {
    FUN_01b221ac(auStack_74,param_1);
    FUN_01b2233c(param_1,auStack_74);
  }
  FUN_01b20ba0(param_1 + 0x78,param_1,param_1 + 0x28);
  uVar1 = 1;
  uVar2 = extraout_r1;
LAB_01b38c14:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar2,local_2c ^ DAT_01d53560,0);
  }
  return;
}

