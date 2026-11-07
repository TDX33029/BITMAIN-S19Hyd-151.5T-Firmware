// FUN_0151b89c @ 0151b89c size=448 calls_out=6 calls_in=0
// strings: 

void FUN_0151b89c(int *param_1,undefined4 param_2,int param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  
  iVar3 = param_1[2];
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar3);
  }
  iVar5 = param_1[1];
  if (iVar3 == 0) {
    iVar2 = 1;
    local_58 = 0;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(iVar3);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar3);
    }
    local_58 = iVar3;
  }
  FUN_016dd1aa(iVar2,iVar5,iVar3);
  iVar1 = param_1[3];
  uVar7 = (**(code **)(param_3 + 0xc))(param_2);
  (**(code **)((int)((ulonglong)uVar7 >> 0x20) + 0x18))((int)uVar7,iVar2,iVar3);
  local_48 = param_2;
  local_44 = param_3;
  local_40 = uVar7;
  if ((char)iVar1 == '\0') {
    local_54 = -0x80000000;
    if (local_58 != 0) {
      thunk_FUN_016d3fb4(iVar2);
    }
  }
  else {
    local_54 = local_58;
    local_50 = iVar2;
    local_4c = iVar3;
  }
  FUN_0151ee9c(&local_38,&local_54);
  iVar3 = 1;
  if (0x80000000 < *param_4) {
    iVar3 = *param_4 + 0x7fffffff;
  }
  if (iVar3 == 2) {
    iVar3 = 0xc;
    iVar2 = 8;
  }
  else {
    if (iVar3 != 1) goto LAB_0151ba04;
    iVar3 = 8;
    iVar2 = 4;
  }
  uVar4 = *(uint *)((int)param_4 + iVar3);
  uVar6 = *(undefined4 *)((int)param_4 + iVar2);
  if ((uint)(local_38 - local_30) < uVar4) {
    FUN_0154e5f8(&local_38,local_30,uVar4,1,1);
  }
  FUN_016dd1aa(local_34 + local_30,uVar6,uVar4);
  local_30 = local_30 + uVar4;
LAB_0151ba04:
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = local_30;
  param_1[3] = iStack_2c;
  return;
}

