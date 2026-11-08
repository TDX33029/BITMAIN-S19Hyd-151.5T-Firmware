// FUN_006fc8a0 @ 006fc8a0 size=252 calls_out=5 calls_in=2
// strings: 

void FUN_006fc8a0(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int local_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  undefined1 auStack_54 [20];
  undefined1 local_40 [28];
  
  uVar3 = *param_2;
  iVar4 = param_2[4];
  uVar7 = FUN_0070093c(param_3,uVar3,iVar4);
  uVar6 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar1 = FUN_006fb3b4(uVar3,iVar4);
  FUN_006fb414(local_40,uVar3,uVar6,uVar2,uVar5,iVar4 + 1,uVar1);
  FUN_006fa500(auStack_54,local_40);
  FUN_006fc9e8(&local_74,auStack_54,param_3);
  if (local_74 == 9) {
    param_1[3] = local_70;
    param_1[4] = iStack_6c;
    param_1[5] = iStack_68;
    param_1[6] = iStack_64;
    *(undefined8 *)(param_1 + 1) = uVar7;
  }
  else {
    param_1[5] = local_60;
    param_1[6] = iStack_5c;
    param_1[7] = iStack_58;
    param_1[1] = local_70;
    param_1[2] = iStack_6c;
    param_1[3] = iStack_68;
    param_1[4] = iStack_64;
  }
  *param_1 = local_74;
  return;
}

