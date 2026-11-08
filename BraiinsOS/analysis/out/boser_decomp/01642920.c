// FUN_01642920 @ 01642920 size=220 calls_out=3 calls_in=1
// strings: 

void FUN_01642920(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  
  iVar4 = *param_3;
  iVar7 = param_3[2];
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_28 = 0xc;
  if (iVar4 == iVar7) {
    FUN_016092cc(param_3,iVar4,0x40,1,1);
    iVar4 = *param_3;
    iVar7 = param_3[2];
  }
  uVar6 = iVar4 - iVar7;
  uVar1 = FUN_01be8db2(param_2,param_3[1] + iVar7,uVar6,param_4,&local_38,&local_28);
  if ((int)uVar1 < 0) {
    puVar3 = (undefined4 *)FUN_01be3244();
    uVar5 = *puVar3;
    uVar2 = 1;
    param_1[1] = 0;
    param_1[2] = uVar5;
  }
  else {
    if (uVar1 < uVar6) {
      uVar6 = uVar1;
    }
    param_3[2] = iVar7 + uVar6;
    param_1[2] = local_38;
    param_1[3] = local_34;
    param_1[4] = local_30;
    param_1[1] = uVar1;
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return;
}

