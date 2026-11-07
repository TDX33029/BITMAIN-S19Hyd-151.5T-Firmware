// FUN_01731558 @ 01731558 size=232 calls_out=3 calls_in=2
// strings: 

void FUN_01731558(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar4 = (uint)uVar1;
  uVar6 = FUN_01ac635c(param_2[6],param_2[7]);
  iVar3 = (int)((ulonglong)uVar6 >> 0x20);
  FUN_0187b658(&local_40,param_2[9],param_2[10]);
  iVar5 = 0x17315ac;
  FUN_017260a4(&local_30,param_2[0xc],param_2[0xd]);
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else if (*param_2 == 1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
    iVar5 = param_2[3];
    uVar4 = param_2[4];
    iVar3 = param_2[5];
    local_44 = param_2[2];
  }
  *(undefined8 *)(param_1 + 6) = uVar6;
  *(ushort *)(param_1 + 0xe) = uVar1;
  param_1[8] = local_40;
  param_1[9] = uStack_3c;
  param_1[10] = uStack_38;
  param_1[0xb] = local_30;
  param_1[0xc] = uStack_2c;
  param_1[0xd] = uStack_28;
  param_1[4] = uVar4;
  param_1[2] = local_44;
  param_1[3] = iVar5;
  param_1[5] = iVar3;
  *param_1 = uVar2;
  param_1[1] = 0;
  return;
}

