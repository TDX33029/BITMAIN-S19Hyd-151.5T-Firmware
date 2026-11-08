// FUN_00f4ecfc @ 00f4ecfc size=464 calls_out=6 calls_in=1
// strings: 

void FUN_00f4ecfc(undefined2 *param_1,int param_2)

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
LAB_00f4eddc:
    local_30[0] = 5;
    uVar1 = FUN_01143ab8(param_2,local_30);
    *(undefined4 *)(param_1 + 2) = uVar1;
    *param_1 = 1;
    return;
  }
LAB_00f4ed1c:
  uVar3 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar2);
  switch(uVar3) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    goto switchD_00f4ed34_caseD_9;
  default:
    if (uVar3 - 0x30 < 10) {
      FUN_00f4c958(&local_40,param_2,1);
      if (local_40 == 3 && local_3c == 0) {
        *(uint *)(param_1 + 2) = local_38;
        *param_1 = 1;
        return;
      }
      goto LAB_00f4ee98;
    }
    uVar1 = FUN_00f4db6c(param_2,&uStack_19,&DAT_0187f718);
    break;
  case 0x2d:
    *(uint *)(param_2 + 0x14) = uVar2 + 1;
    FUN_00f4c958(&local_40,param_2,0);
    if (local_40 == 3 && local_3c == 0) goto LAB_00f4ee84;
LAB_00f4ee98:
    if (local_40 == 1) {
      if (uStack_34 == 0 && (0xffff < local_38) <= uStack_34) {
LAB_00f4eedc:
        param_1[1] = (short)local_38;
        *param_1 = 0;
        return;
      }
    }
    else {
      if (local_40 != 2) {
        local_24 = uStack_34;
        local_28 = local_38;
        uVar1 = FUN_0157cc00(local_30,&uStack_19,&DAT_0187f718);
        break;
      }
      if (uStack_34 == 0 && (0xffff < local_38) <= uStack_34) goto LAB_00f4eedc;
    }
    local_28 = local_38;
    local_24 = uStack_34;
    uVar1 = FUN_0157cd6c(local_30,&uStack_19,&DAT_0187f718);
  }
  local_38 = FUN_011257e4(uVar1,param_2);
LAB_00f4ee84:
  *(uint *)(param_1 + 2) = local_38;
  *param_1 = 1;
  return;
switchD_00f4ed34_caseD_9:
  uVar2 = uVar2 + 1;
  *(uint *)(param_2 + 0x14) = uVar2;
  if (*(uint *)(param_2 + 0x10) == uVar2) goto LAB_00f4eddc;
  goto LAB_00f4ed1c;
}

