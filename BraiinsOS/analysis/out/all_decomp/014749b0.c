// FUN_014749b0 @ 014749b0 size=1012 calls_out=6 calls_in=2
// strings: 

void FUN_014749b0(uint *param_1,int *param_2,uint param_3)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c [2];
  
  iVar8 = *param_2;
  if (iVar8 == 0) {
    uVar5 = param_2[3];
  }
  else {
    uVar5 = 0;
    puVar2 = param_1;
    if (iVar8 == 1) {
      puVar2 = (uint *)param_2[5];
    }
    if ((iVar8 == 1 && puVar2 == (uint *)0x0) &&
       (uVar5 = param_2[3] - param_2[4], (uint)param_2[3] < (uint)param_2[4])) {
      uVar5 = 0;
    }
  }
  uVar3 = param_2[6];
  if (uVar3 < uVar5) {
    uVar5 = uVar3;
  }
  if (param_3 < uVar5) {
    uVar5 = param_3;
  }
  if (uVar5 == 0) {
    return;
  }
  local_64 = param_2;
  local_60 = param_3;
  if (param_1[2] != 0) {
    uVar5 = 0;
    if (iVar8 != 2) {
      if (iVar8 == 1) {
        if ((param_2[5] == 0) &&
           (uVar5 = param_2[3] - param_2[4], (uint)param_2[3] < (uint)param_2[4])) {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = param_2[3];
      }
    }
    if (uVar3 < uVar5) {
      uVar5 = uVar3;
    }
    if (param_3 < uVar5) {
      uVar5 = param_3;
    }
    if (param_1[2] - param_1[1] < uVar5) {
      FUN_00f5f538(param_1);
    }
    iVar8 = *param_2;
    while( true ) {
      uVar5 = 0;
      if (iVar8 != 2) {
        uVar5 = 0;
        if (iVar8 == 1) {
          if ((param_2[5] == 0) &&
             (uVar3 = param_2[4], uVar5 = param_2[3] - uVar3, (uint)param_2[3] < uVar3)) {
            uVar5 = 0;
          }
        }
        else {
          uVar5 = param_2[3];
        }
      }
      uVar3 = param_2[6];
      if (uVar3 < uVar5) {
        uVar5 = uVar3;
      }
      if (param_3 < uVar5) {
        uVar5 = param_3;
      }
      if (uVar5 == 0) break;
      if (iVar8 == 2) {
        iVar8 = 1;
        uVar5 = 0;
      }
      else if (iVar8 == 1) {
        uVar7 = param_2[4];
        uVar5 = param_2[3];
        if (uVar5 < uVar7) {
          uVar7 = uVar5;
        }
        if (param_2[5] != 0) {
          uVar7 = uVar5;
        }
        iVar8 = param_2[2] + uVar7;
        uVar5 = uVar5 - uVar7;
      }
      else {
        iVar8 = param_2[2];
        uVar5 = param_2[3];
      }
      uVar7 = param_1[1];
      if (uVar3 < uVar5) {
        uVar5 = uVar3;
      }
      local_58 = param_1[2] - uVar7;
      if (param_3 < uVar5) {
        uVar5 = param_3;
      }
      if (local_58 < uVar5) {
        FUN_00f5f538(param_1,uVar5);
        uVar7 = param_1[1];
        local_58 = param_1[2] - uVar7;
      }
      FUN_016dd1aa(*param_1 + uVar7,iVar8,uVar5);
      if (local_58 < uVar5) {
        local_5c = uVar5;
                    /* WARNING: Subroutine does not return */
        FUN_00f600c0(&local_5c);
      }
      param_1[1] = uVar7 + uVar5;
      FUN_01474894(param_2,uVar5);
      param_3 = param_3 - uVar5;
      iVar8 = *param_2;
    }
    return;
  }
  if (iVar8 == 0) {
    uVar5 = param_2[3];
LAB_01474bf0:
    if (uVar3 < uVar5) {
      uVar5 = uVar3;
    }
    if (param_3 < uVar5) {
      uVar5 = param_3;
    }
  }
  else {
    uVar5 = 0;
    if ((iVar8 != 2) && (param_2[5] == 0)) {
      uVar5 = param_2[3] - param_2[4];
      if ((uint)param_2[3] < (uint)param_2[4]) {
        uVar5 = 0;
      }
      goto LAB_01474bf0;
    }
  }
  FUN_01474680(&local_48,&local_64,uVar5);
  iVar8 = (**(code **)(local_48 + 0xc))(&local_3c);
  if (iVar8 == 0) {
    uVar3 = param_1[1];
    uVar5 = -uVar3;
    local_4c = local_3c;
    local_50 = local_40;
    local_54 = local_44;
    local_58 = local_48;
    local_2c[0] = local_3c;
    local_30 = local_40;
    local_34 = local_44;
    local_38 = local_48;
    if (uVar5 < local_40) {
      FUN_00f5f538(param_1,local_40);
      uVar3 = param_1[1];
      uVar5 = param_1[2] - uVar3;
    }
    FUN_016dd1aa(*param_1 + uVar3,local_44,local_40);
    if (uVar5 < local_40) {
      local_48 = local_40;
      local_44 = uVar5;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_48);
    }
    param_1[1] = uVar3 + local_40;
    (**(code **)(local_38 + 0x10))(local_2c,local_34,local_30);
    return;
  }
  local_2c[0] = local_3c;
  local_30 = local_40;
  local_38 = local_48;
  local_34 = local_44;
  (**(code **)(local_48 + 8))(&local_58,local_2c);
  local_5c = 0;
  piVar4 = (int *)param_1[3];
  if (((uint)piVar4 & 1) == 0) {
    piVar6 = piVar4 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar8 + -1;
    if (iVar8 != 1) goto LAB_01474d74;
    DataMemoryBarrier(0xb);
    if (*piVar4 != 0) {
      thunk_FUN_016d3fb4(piVar4[1]);
    }
  }
  else {
    if (piVar4 < &DAT_00000020) goto LAB_01474d74;
    piVar4 = (int *)(*param_1 - ((uint)piVar4 >> 5));
  }
  thunk_FUN_016d3fb4(piVar4);
LAB_01474d74:
  *param_1 = local_58;
  param_1[1] = local_54;
  param_1[2] = local_50;
  param_1[3] = local_4c;
  return;
}

