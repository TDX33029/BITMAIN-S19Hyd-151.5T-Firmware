// FUN_008fb168 @ 008fb168 size=464 calls_out=6 calls_in=2
// strings: 

void FUN_008fb168(undefined2 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int local_40;
  int local_3c;
  uint local_38;
  uint uStack_34;
  undefined4 local_30 [2];
  uint local_28;
  uint local_24;
  undefined1 uStack_19;
  
  uVar2 = *(uint *)(param_2 + 0x14);
  if (*(uint *)(param_2 + 0x10) <= uVar2) {
LAB_008fb248:
    local_30[0] = 5;
    uVar1 = FUN_008f9984(param_2,local_30);
    *(undefined4 *)(param_1 + 2) = uVar1;
    *param_1 = 1;
    return;
  }
LAB_008fb188:
  uVar3 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar2);
  switch(uVar3) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    goto switchD_008fb1a0_caseD_9;
  default:
    if (uVar3 - 0x30 < 10) {
      FUN_008fa814(&local_40,param_2,1);
      if (local_40 == 3 && local_3c == 0) {
        *(uint *)(param_1 + 2) = local_38;
        *param_1 = 1;
        return;
      }
      goto LAB_008fb304;
    }
    uVar1 = FUN_005b8238(param_2,&uStack_19,&DAT_01867c58);
    break;
  case 0x2d:
    *(uint *)(param_2 + 0x14) = uVar2 + 1;
    FUN_008fa814(&local_40,param_2,0);
    if (local_40 == 3 && local_3c == 0) goto LAB_008fb2f0;
LAB_008fb304:
    if (local_40 == 1) {
      if (uStack_34 == 0 && (0xffff < local_38) <= uStack_34) {
LAB_008fb348:
        param_1[1] = (short)local_38;
        *param_1 = 0;
        return;
      }
    }
    else {
      if (local_40 != 2) {
        local_24 = uStack_34;
        local_28 = local_38;
        uVar1 = FUN_0157cc00(local_30,&uStack_19,&DAT_01867c58);
        break;
      }
      if (uStack_34 == 0 && (0xffff < local_38) <= uStack_34) goto LAB_008fb348;
    }
    local_28 = local_38;
    local_24 = uStack_34;
    uVar1 = FUN_0157cd6c(local_30,&uStack_19,&DAT_01867c58);
  }
  local_38 = FUN_00e959bc(uVar1,param_2);
LAB_008fb2f0:
  *(uint *)(param_1 + 2) = local_38;
  *param_1 = 1;
  return;
switchD_008fb1a0_caseD_9:
  uVar2 = uVar2 + 1;
  *(uint *)(param_2 + 0x14) = uVar2;
  if (*(uint *)(param_2 + 0x10) == uVar2) goto LAB_008fb248;
  goto LAB_008fb188;
}

