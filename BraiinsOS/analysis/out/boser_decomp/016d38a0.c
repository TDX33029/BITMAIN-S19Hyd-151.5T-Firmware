// FUN_016d38a0 @ 016d38a0 size=304 calls_out=7 calls_in=1
// strings: 

void FUN_016d38a0(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_2[3] == 0) {
    local_24 = 0;
    local_28 = 1;
    local_2c = 0;
    FUN_016f6888((uint)&local_40 | 4,&local_2c);
    local_40 = 1;
    uVar1 = FUN_016deccc(&local_40);
    param_1[1] = local_40;
    param_1[2] = uStack_3c;
    param_1[3] = uStack_38;
    param_1[4] = uStack_34;
    param_1[5] = uStack_30;
    param_1[6] = uVar1;
    *param_1 = 2;
  }
  else {
    FUN_016e1f8c(&local_40,param_2);
    if (local_40 == -0x80000000) {
      uVar1 = FUN_016deccc(param_2);
      iVar3 = param_2[1];
      iVar4 = param_2[2];
      iVar5 = param_2[3];
      iVar6 = param_2[4];
      param_1[1] = *param_2;
      param_1[2] = iVar3;
      param_1[3] = iVar4;
      param_1[4] = iVar5;
      param_1[5] = iVar6;
      param_1[6] = uVar1;
      *param_1 = 2;
      return;
    }
    uVar7 = FUN_016571c0();
    iVar3 = (int)((ulonglong)uVar7 >> 0x20);
    if (iVar3 == 0) {
      uVar1 = FUN_016dee1c();
      *param_1 = 0;
    }
    else {
      uVar1 = FUN_016df13c((int)uVar7,iVar3);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 1) = uVar7;
    }
    param_1[6] = uVar1;
  }
  if (*param_2 == 0) {
    uVar1 = 4;
    uVar2 = 8;
  }
  else {
    uVar1 = 1;
    uVar2 = 2;
  }
  FUN_0134aee0(param_2[1],param_2[2],uVar1,uVar2);
  return;
}

