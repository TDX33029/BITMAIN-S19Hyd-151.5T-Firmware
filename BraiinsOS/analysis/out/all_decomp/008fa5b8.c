// FUN_008fa5b8 @ 008fa5b8 size=440 calls_out=6 calls_in=6
// strings: 

undefined8 FUN_008fa5b8(int param_1)

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
LAB_008fa694:
    local_30[0] = 5;
    local_38 = FUN_008f9984(param_1,local_30);
LAB_008fa6a8:
    uVar2 = 1;
LAB_008fa6b0:
    return CONCAT44(local_38,uVar2);
  }
LAB_008fa5d4:
  uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + uVar1);
  switch(uVar3) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    goto switchD_008fa5ec_caseD_9;
  default:
    if (uVar3 - 0x30 < 10) {
      uVar2 = 1;
      goto LAB_008fa6f4;
    }
    local_38 = FUN_005b8238(param_1,&uStack_19,&DAT_01867c08);
    break;
  case 0x2d:
    *(uint *)(param_1 + 0x14) = uVar1 + 1;
    uVar2 = 0;
LAB_008fa6f4:
    FUN_008fa814(&local_40,param_1,uVar2);
    if (local_40 == 3 && iStack_3c == 0) {
      return CONCAT44(local_38,1);
    }
    if (local_40 == 1) {
      if (iStack_34 == 0) {
LAB_008fa76c:
        bVar4 = false;
      }
      else {
        bVar4 = true;
        local_28 = local_38;
        local_30[0] = CONCAT31(local_30[0]._1_3_,1);
        local_24 = iStack_34;
        local_38 = FUN_0157cd6c(local_30,&uStack_19,&DAT_01867c08);
      }
    }
    else {
      if (local_40 == 2) {
        if (iStack_34 == 0) goto LAB_008fa76c;
        local_30[0] = CONCAT31(local_30[0]._1_3_,2);
        local_28 = local_38;
        local_24 = iStack_34;
        local_38 = FUN_0157cd6c(local_30,&uStack_19,&DAT_01867c08);
      }
      else {
        local_30[0] = CONCAT31(local_30[0]._1_3_,3);
        local_24 = iStack_34;
        local_28 = local_38;
        local_38 = FUN_0157cc00(local_30,&uStack_19,&DAT_01867c08);
      }
      bVar4 = true;
    }
    uVar2 = 0;
    if (!bVar4) goto LAB_008fa6b0;
  }
  local_38 = FUN_00e959bc(local_38,param_1);
  goto LAB_008fa6a8;
switchD_008fa5ec_caseD_9:
  uVar1 = uVar1 + 1;
  *(uint *)(param_1 + 0x14) = uVar1;
  if (*(uint *)(param_1 + 0x10) == uVar1) goto LAB_008fa694;
  goto LAB_008fa5d4;
}

