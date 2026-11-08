// FUN_018f8338 @ 018f8338 size=344 calls_out=10 calls_in=1
// strings: 

void FUN_018f8338(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  
  iVar3 = (*(int **)(param_2 + 0xc))[1];
  local_54 = 0x80000000;
  local_34 = *(uint *)(**(int **)(param_2 + 0xc) + 0xc);
  local_50 = param_3;
  local_4c = param_4;
  FUN_018a7af8(&local_30);
  iVar3 = FUN_01b47ffc(iVar3,0);
  uVar2 = local_2c;
  if (iVar3 == 0) {
LAB_018f843c:
    FUN_0134bd64(local_30,uVar2);
    FUN_018f822c(&local_54);
  }
  else {
    iVar1 = FUN_01b48b34(iVar3,local_2c,&local_34,param_3,param_4);
    if (iVar1 != 1) {
      FUN_01b47028(iVar3);
      goto LAB_018f843c;
    }
    if (local_34 < local_28) {
      local_28 = local_34;
    }
    local_48 = local_30;
    uStack_44 = local_2c;
    uStack_40 = local_28;
    uVar4 = FUN_00703dd4();
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    iVar1 = (int)uVar4;
    FUN_01b47028(iVar3);
    FUN_018f822c(&local_54);
    if (iVar1 != 0) {
      FUN_0190def0(&local_48,iVar1,uVar2);
      param_1[1] = local_48;
      param_1[2] = uStack_44;
      param_1[3] = uStack_40;
      param_1[4] = uStack_3c;
      *param_1 = 0x80000029;
      FUN_007047f8(iVar1,uVar2);
      goto LAB_018f8480;
    }
  }
  param_1[2] = 0;
  *param_1 = &DAT_8000001c;
  param_1[1] = 0x1a;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
LAB_018f8480:
  FUN_018f85c4(param_2);
  return;
}

