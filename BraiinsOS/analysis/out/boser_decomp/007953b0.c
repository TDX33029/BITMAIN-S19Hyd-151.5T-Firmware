// FUN_007953b0 @ 007953b0 size=356 calls_out=4 calls_in=1
// strings: 

void FUN_007953b0(int param_1,int *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  short local_e8;
  undefined1 auStack_e6 [30];
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 auStack_c0 [128];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar6 = (int *)*param_2;
  do {
    piVar4 = piVar6;
    if (piVar4 == (int *)param_2[1]) {
      *(undefined1 **)(param_1 + 8) = &DAT_3b9aca00;
      return;
    }
    iVar5 = piVar4[0x16];
    *param_2 = (int)(piVar4 + 0x17);
    piVar6 = piVar4 + 0x17;
  } while ((char)iVar5 != '\x01');
  if (*piVar4 == -0x80000000) {
    local_40 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_40,piVar4[1],piVar4[2]);
  }
  if (piVar4[3] == -0x80000000) {
    local_30 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_30,piVar4[4],piVar4[5]);
  }
  iVar5 = piVar4[0xe];
  uVar2 = *(undefined1 *)((int)piVar4 + 0x59);
  if ((short)iVar5 != 2) {
    FUN_01bed4e2(auStack_c0,(int)piVar4 + 0x3a,0x1e);
  }
  local_108 = piVar4[6];
  iStack_104 = piVar4[7];
  iStack_100 = piVar4[8];
  iStack_fc = piVar4[9];
  local_f8 = piVar4[10];
  iStack_f4 = piVar4[0xb];
  iStack_f0 = piVar4[0xc];
  iStack_ec = piVar4[0xd];
  local_c8 = 1;
  uStack_120 = local_40;
  uStack_11c = uStack_3c;
  uStack_118 = uStack_38;
  uStack_114 = local_30;
  uStack_110 = uStack_2c;
  uStack_10c = uStack_28;
  local_e8 = (short)iVar5;
  local_c7 = uVar2;
  FUN_01bed4e2(auStack_e6,auStack_c0,0x1e);
  FUN_0074ad08(auStack_c0,param_2[2]);
  piVar6 = *(int **)param_2[3];
  do {
    iVar5 = *piVar6;
    bVar3 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar3);
  *piVar6 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x795510);
    (*pcVar1)();
  }
  FUN_00794dcc(param_1,&uStack_120,auStack_c0);
  return;
}

