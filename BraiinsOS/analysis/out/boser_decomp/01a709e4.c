// FUN_01a709e4 @ 01a709e4 size=480 calls_out=4 calls_in=2
// strings: 

void FUN_01a709e4(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar3 = param_2[0x19];
  FUN_006666fc(&local_80,param_2[0x17],param_2[0x18]);
  (**(code **)param_2[0x10])(&local_70,param_2 + 0x13,param_2[0x11],param_2[0x12]);
  iVar4 = param_2[0xe];
  uVar8 = FUN_01ac635c(param_2[6],param_2[7]);
  iVar6 = (int)uVar8;
  FUN_0187b658(&local_40,param_2[9],param_2[10]);
  FUN_017260a4(&local_30,param_2[0xc],param_2[0xd]);
  if (*param_2 == 0) {
    uVar7 = 0;
  }
  else if (*param_2 == 1) {
    uVar7 = 1;
  }
  else {
    uVar7 = 2;
    local_98 = param_2[2];
    local_9c = param_2[3];
    local_a0 = param_2[4];
    local_a4 = param_2[5];
  }
  local_50 = local_40;
  uStack_4c = uStack_3c;
  uStack_48 = uStack_38;
  local_60 = local_30;
  uStack_5c = uStack_2c;
  uStack_58 = uStack_28;
  piVar5 = (int *)param_2[0x14];
  if (piVar5 != (int *)0x0) {
    do {
      iVar6 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar6 + 1;
    if (iVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1a70bc0);
      (*pcVar1)();
    }
    iVar6 = param_2[0x15];
  }
  *(char *)(param_1 + 0x19) = (char)iVar3;
  param_1[0x16] = local_80;
  param_1[0x17] = uStack_7c;
  param_1[0x18] = uStack_78;
  param_1[0x10] = local_70;
  param_1[0x11] = uStack_6c;
  param_1[0x12] = uStack_68;
  param_1[0x13] = uStack_64;
  param_1[2] = local_98;
  param_1[3] = local_9c;
  param_1[4] = local_a0;
  param_1[5] = local_a4;
  *param_1 = uVar7;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 6) = uVar8;
  param_1[8] = local_40;
  param_1[9] = uStack_3c;
  param_1[10] = uStack_38;
  param_1[0xb] = local_30;
  param_1[0xc] = uStack_2c;
  param_1[0xd] = uStack_28;
  param_1[0x14] = piVar5;
  param_1[0x15] = iVar6;
  *(short *)(param_1 + 0xe) = (short)iVar4;
  return;
}

