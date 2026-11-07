// FUN_01bca1d0 @ 01bca1d0 size=1108 calls_out=10 calls_in=1
// strings: 

void FUN_01bca1d0(int *param_1,int param_2)

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
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  byte local_4c [32];
  uint local_2c;
  
  iVar3 = 4;
  local_2c = DAT_01d53560;
  FUN_01bc98b4(param_1 + 10);
  FUN_01bc9984(param_1 + 0x14);
  FUN_01bc829c(auStack_114,param_1 + 10);
  FUN_01bc7bec(auStack_ec,auStack_114,&DAT_005641d8);
  FUN_01bc895c(auStack_13c,auStack_114,param_1 + 0x14);
  FUN_01bc87cc(auStack_164,auStack_13c);
  FUN_01bc88a0(auStack_13c,auStack_ec,param_1 + 0x14);
  FUN_01bc7bec(auStack_114,auStack_164,auStack_13c);
  FUN_01bc829c(auStack_c4,auStack_114);
  FUN_01bc829c(auStack_9c,auStack_c4);
  FUN_01bc829c(auStack_9c,auStack_9c);
  FUN_01bc7bec(auStack_9c,auStack_114,auStack_9c);
  FUN_01bc7bec(auStack_c4,auStack_c4,auStack_9c);
  FUN_01bc829c(auStack_c4,auStack_c4);
  FUN_01bc7bec(auStack_c4,auStack_9c,auStack_c4);
  FUN_01bc829c(auStack_9c,auStack_c4);
  do {
    FUN_01bc829c(auStack_9c,auStack_9c);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 9;
  FUN_01bc7bec(auStack_c4,auStack_9c,auStack_c4);
  FUN_01bc829c(auStack_9c,auStack_c4);
  do {
    FUN_01bc829c(auStack_9c,auStack_9c);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_01bc7bec(auStack_9c,auStack_9c,auStack_c4);
  FUN_01bc829c(&local_74,auStack_9c);
  iVar3 = 0x13;
  do {
    FUN_01bc829c(&local_74,&local_74);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 9;
  FUN_01bc7bec(auStack_9c,&local_74,auStack_9c);
  FUN_01bc829c(auStack_9c,auStack_9c);
  do {
    FUN_01bc829c(auStack_9c,auStack_9c);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 0x31;
  FUN_01bc7bec(auStack_c4,auStack_9c,auStack_c4);
  FUN_01bc829c(auStack_9c,auStack_c4);
  do {
    FUN_01bc829c(auStack_9c,auStack_9c);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_01bc7bec(auStack_9c,auStack_9c,auStack_c4);
  FUN_01bc829c(&local_74,auStack_9c);
  iVar3 = 99;
  do {
    FUN_01bc829c(&local_74,&local_74);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 0x31;
  FUN_01bc7bec(auStack_9c,&local_74,auStack_9c);
  FUN_01bc829c(auStack_9c,auStack_9c);
  do {
    FUN_01bc829c(auStack_9c,auStack_9c);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_01bc7bec(auStack_c4,auStack_9c,auStack_c4);
  FUN_01bc829c(auStack_c4,auStack_c4);
  FUN_01bc829c(auStack_c4,auStack_c4);
  FUN_01bc7bec(param_1,auStack_c4,auStack_114);
  FUN_01bc7bec(param_1,param_1,auStack_164);
  FUN_01bc829c(auStack_ec,param_1);
  FUN_01bc7bec(auStack_ec,auStack_ec,auStack_13c);
  FUN_01bc895c(auStack_9c,auStack_ec,auStack_164);
  iVar3 = FUN_01bc97a4(auStack_9c);
  if (iVar3 != 0) {
    FUN_01bc88a0(auStack_9c,auStack_ec,auStack_164);
    uVar4 = FUN_01bc97a4(auStack_9c);
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      uVar1 = 0;
      goto LAB_01bca5e0;
    }
    FUN_01bc7bec(param_1,param_1,&DAT_005641b0);
  }
  FUN_01bc94a0(local_4c,param_1);
  if ((local_4c[0] & 1) != *(byte *)(param_2 + 0x1f) >> 7) {
    local_6c = 0x7fffffe - param_1[2];
    local_64 = 0x7fffffe - param_1[4];
    local_5c = 0x7fffffe - param_1[6];
    local_54 = 0x7fffffe - param_1[8];
    local_70 = 0x3fffffe - param_1[1];
    local_68 = 0x3fffffe - param_1[3];
    local_60 = 0x3fffffe - param_1[5];
    iStack_58 = 0x3fffffe - param_1[7];
    iStack_50 = 0x3fffffe - param_1[9];
    local_74 = 0x7ffffda - *param_1;
    FUN_01bc87cc(param_1,&local_74);
  }
  FUN_01bc7bec(param_1 + 0x1e,param_1,param_1 + 10);
  uVar1 = 1;
  uVar2 = extraout_r1;
LAB_01bca5e0:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar2,local_2c ^ DAT_01d53560,0);
  }
  return;
}

