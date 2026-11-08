// FUN_00a58280 @ 00a58280 size=180 calls_out=3 calls_in=2
// strings: 

void FUN_00a58280(undefined4 param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  uVar1 = (undefined1)param_2[8];
  FUN_00a57e90(&local_30,uVar1);
  iVar6 = *param_2;
  iVar5 = param_2[1];
  iVar4 = param_2[2];
  iVar7 = param_2[3];
  iVar2 = param_2[4];
  iVar3 = param_2[5];
  if (param_2[6] == 1) {
    uVar8 = CONCAT44(param_2[7],1);
  }
  else {
    uVar8 = FUN_00a58058(uVar1);
  }
  if (iVar2 != 0) {
    iStack_28 = iVar3;
  }
  if (iVar6 != 0) {
    local_30 = iVar5;
  }
  if (iVar4 != 0) {
    iStack_2c = iVar7;
  }
  FUN_00a580e8(param_1,uVar1,local_30,iStack_2c,iStack_28,uVar8);
  return;
}

