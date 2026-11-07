// FUN_00a6e1d4 @ 00a6e1d4 size=440 calls_out=6 calls_in=2
// strings: 

undefined8 FUN_00a6e1d4(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  int local_40;
  int iStack_3c;
  undefined4 local_38;
  int iStack_34;
  undefined4 local_30 [2];
  undefined4 local_28;
  int local_24;
  undefined1 uStack_19;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
LAB_00a6e2b0:
    local_30[0] = 5;
    local_38 = FUN_01143ab8(param_1,local_30);
LAB_00a6e2c4:
    uVar2 = 1;
LAB_00a6e2cc:
    return CONCAT44(local_38,uVar2);
  }
LAB_00a6e1f0:
  uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + uVar1);
  switch(uVar3) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    goto switchD_00a6e208_caseD_9;
  default:
    if (uVar3 - 0x30 < 10) {
      uVar2 = 1;
      goto LAB_00a6e310;
    }
    local_38 = FUN_00a6c930(param_1,&uStack_19,&DAT_0186d378);
    break;
  case 0x2d:
    *(uint *)(param_1 + 0x14) = uVar1 + 1;
    uVar2 = 0;
LAB_00a6e310:
    FUN_00a6cf18(&local_40,param_1,uVar2);
    if (local_40 == 3 && iStack_3c == 0) {
      return CONCAT44(local_38,1);
    }
    if (local_40 == 1) {
      if (iStack_34 == 0) {
LAB_00a6e388:
        bVar4 = false;
      }
      else {
        bVar4 = true;
        local_28 = local_38;
        local_30[0] = CONCAT31(local_30[0]._1_3_,1);
        local_24 = iStack_34;
        local_38 = FUN_0157cd6c(local_30,&uStack_19,&DAT_0186d378);
      }
    }
    else {
      if (local_40 == 2) {
        if (iStack_34 == 0) goto LAB_00a6e388;
        local_30[0] = CONCAT31(local_30[0]._1_3_,2);
        local_28 = local_38;
        local_24 = iStack_34;
        local_38 = FUN_0157cd6c(local_30,&uStack_19,&DAT_0186d378);
      }
      else {
        local_30[0] = CONCAT31(local_30[0]._1_3_,3);
        local_24 = iStack_34;
        local_28 = local_38;
        local_38 = FUN_0157cc00(local_30,&uStack_19,&DAT_0186d378);
      }
      bVar4 = true;
    }
    uVar2 = 0;
    if (!bVar4) goto LAB_00a6e2cc;
  }
  local_38 = FUN_00a6cecc(local_38,param_1);
  goto LAB_00a6e2c4;
switchD_00a6e208_caseD_9:
  uVar1 = uVar1 + 1;
  *(uint *)(param_1 + 0x14) = uVar1;
  if (*(uint *)(param_1 + 0x10) == uVar1) goto LAB_00a6e2b0;
  goto LAB_00a6e1f0;
}

