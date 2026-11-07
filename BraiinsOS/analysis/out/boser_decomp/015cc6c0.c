// FUN_015cc6c0 @ 015cc6c0 size=180 calls_out=6 calls_in=1
// strings: 

void FUN_015cc6c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 local_44;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  iVar1 = FUN_015db564(param_1 + 0x180,uVar2,uVar3);
  if (iVar1 == 0) {
    lVar4 = FUN_015fbb98();
    FUN_006666fc(&local_30,uVar2,uVar3);
    local_50 = local_30;
    uStack_4c = uStack_2c;
    uStack_48 = uStack_28;
    local_54 = 0;
    local_58 = 10;
    local_44 = 1;
    FUN_015cdb38(param_1,&local_50,(int)(lVar4 + 500),(int)((ulonglong)(lVar4 + 500) >> 0x20),
                 &local_58);
    FUN_015dcc90(param_1 + 0x180,param_2);
    return;
  }
  FUN_0134bd64(*param_2,uVar2);
  return;
}

