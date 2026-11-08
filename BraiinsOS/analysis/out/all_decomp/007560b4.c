// FUN_007560b4 @ 007560b4 size=1620 calls_out=11 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_007560b4(int *param_1,int *param_2,code ***param_3)

{
  undefined4 ***pppuVar1;
  code ***pppcVar2;
  uint uVar3;
  code ***pppcVar4;
  code ***pppcVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 ***pppuVar10;
  code ***pppcVar11;
  int iVar12;
  bool bVar13;
  code ***local_80;
  int local_7c;
  int local_78;
  undefined4 ****local_74;
  code ***local_70;
  undefined4 ****local_6c;
  undefined4 ***local_68;
  uint local_64;
  code ***local_60;
  undefined4 ***local_5c;
  code ***local_58;
  uint local_54 [2];
  code *local_4c;
  int local_48;
  int local_44;
  code **local_40;
  uint local_3c;
  code ***local_38;
  undefined4 ***local_34;
  undefined4 ***local_30;
  uint local_2c [2];
  
  iVar12 = *param_2;
  if (iVar12 == 0) {
    pppcVar2 = (code ***)param_2[3];
  }
  else {
    pppcVar2 = (code ***)0x0;
    piVar6 = param_2;
    if (iVar12 == 1) {
      piVar6 = (int *)param_2[5];
    }
    if ((iVar12 == 1 && piVar6 == (int *)0x0) &&
       (pppcVar2 = (code ***)(param_2[3] - param_2[4]), (uint)param_2[3] < (uint)param_2[4])) {
      pppcVar2 = (code ***)0x0;
    }
  }
  pppcVar11 = (code ***)param_2[6];
  if (pppcVar11 < pppcVar2) {
    pppcVar2 = pppcVar11;
  }
  if (param_3 < pppcVar2) {
    pppcVar2 = param_3;
  }
  if (pppcVar2 == (code ***)0x0) {
    return;
  }
  if (param_1[2] != 0) {
    pppcVar2 = (code ***)0x0;
    if (iVar12 != 2) {
      if (iVar12 == 1) {
        if ((param_2[5] == 0) &&
           (pppcVar2 = (code ***)(param_2[3] - param_2[4]), (uint)param_2[3] < (uint)param_2[4])) {
          pppcVar2 = (code ***)0x0;
        }
      }
      else {
        pppcVar2 = (code ***)param_2[3];
      }
    }
    if (pppcVar11 < pppcVar2) {
      pppcVar2 = pppcVar11;
    }
    if (param_3 < pppcVar2) {
      pppcVar2 = param_3;
    }
    if ((code ***)(param_1[2] - param_1[1]) < pppcVar2) {
      FUN_00f5f538(param_1);
    }
    local_80 = (code ***)param_2[4];
    pppcVar2 = (code ***)param_2[3];
    local_7c = param_2[2];
    local_78 = param_2[5];
    while( true ) {
      pppcVar4 = (code ***)0x0;
      if ((((iVar12 != 2) && (pppcVar4 = pppcVar2, iVar12 == 1)) &&
          (pppcVar4 = (code ***)0x0, local_78 == 0)) &&
         (pppcVar4 = (code ***)((int)pppcVar2 - (int)local_80), pppcVar2 < local_80)) {
        pppcVar4 = (code ***)0x0;
      }
      if (pppcVar11 < pppcVar4) {
        pppcVar4 = pppcVar11;
      }
      if (param_3 < pppcVar4) {
        pppcVar4 = param_3;
      }
      if (pppcVar4 == (code ***)0x0) {
        return;
      }
      if (iVar12 == 2) {
        iVar9 = 1;
        pppcVar4 = (code ***)0x0;
      }
      else {
        iVar9 = local_7c;
        pppcVar4 = pppcVar2;
        if (iVar12 == 1) {
          pppcVar5 = local_80;
          if (pppcVar2 < local_80) {
            pppcVar5 = pppcVar2;
          }
          if (local_78 != 0) {
            pppcVar5 = pppcVar2;
          }
          pppcVar4 = (code ***)((int)pppcVar2 - (int)pppcVar5);
          iVar9 = local_7c + (int)pppcVar5;
        }
      }
      iVar8 = param_1[1];
      if (pppcVar11 < pppcVar4) {
        pppcVar4 = pppcVar11;
      }
      local_70 = (code ***)(param_1[2] - iVar8);
      if (param_3 < pppcVar4) {
        pppcVar4 = param_3;
      }
      if (local_70 < pppcVar4) {
        FUN_00f5f538(param_1,pppcVar4);
        iVar8 = param_1[1];
        local_70 = (code ***)(param_1[2] - iVar8);
      }
      FUN_016dd1aa(*param_1 + iVar8,iVar9,pppcVar4);
      local_74 = (undefined4 ****)pppcVar4;
      if (local_70 < pppcVar4) break;
      param_1[1] = (int)pppcVar4 + iVar8;
      if (iVar12 != 2) {
        if (iVar12 == 1) {
          local_70 = (code ***)0x0;
          if ((local_78 == 0) &&
             (local_70 = (code ***)((int)pppcVar2 - (int)local_80), pppcVar2 < local_80)) {
            local_70 = (code ***)0x0;
          }
          if (local_70 < pppcVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_74);
          }
          bVar13 = CARRY4((uint)local_80,(uint)pppcVar4);
          local_80 = (code ***)((int)local_80 + (int)pppcVar4);
          local_78 = local_78 + (uint)bVar13;
          param_2[4] = (int)local_80;
          param_2[5] = local_78;
        }
        else {
          local_60 = pppcVar4;
          if (pppcVar2 < pppcVar4) {
            local_6c = (undefined4 ****)&local_38;
            local_68 = (undefined4 ***)FUN_007883b8;
            local_70 = (code ***)FUN_007883b8;
            local_74 = (undefined4 ****)&local_60;
            local_38 = pppcVar2;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00584155,&local_74,&DAT_018a6700);
          }
          pppcVar2 = (code ***)((int)pppcVar2 - (int)pppcVar4);
          local_7c = local_7c + (int)pppcVar4;
          param_2[2] = local_7c;
          param_2[3] = (int)pppcVar2;
        }
      }
      pppcVar11 = (code ***)((int)pppcVar11 - (int)pppcVar4);
      param_2[6] = (int)pppcVar11;
      param_3 = (code ***)((int)param_3 - (int)pppcVar4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_74);
  }
  if (iVar12 == 0) {
    pppcVar2 = (code ***)param_2[3];
LAB_0075656c:
    pppcVar4 = pppcVar2;
    if (pppcVar11 < pppcVar2) {
      pppcVar4 = pppcVar11;
    }
    if (param_3 < pppcVar4) {
      pppcVar4 = param_3;
    }
    if (pppcVar11 < pppcVar2) {
      pppcVar2 = pppcVar11;
    }
    if (pppcVar2 < pppcVar4) {
      local_70 = (code ***)FUN_01474df0(param_2);
      local_74 = (undefined4 ****)pppcVar4;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_74);
    }
    if ((int)pppcVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0);
    }
    if (pppcVar4 == (code ***)0x0) {
      pppcVar4 = (code ***)0x0;
      local_60 = (code ***)0x1;
    }
    else {
      local_60 = (code ***)thunk_FUN_016d4a50(pppcVar4);
      if (local_60 == (code ***)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,pppcVar4);
      }
    }
  }
  else {
    iVar9 = 0;
    if (iVar12 == 1) {
      iVar9 = param_2[5];
    }
    if (iVar12 == 1 && iVar9 == 0) {
      pppcVar2 = (code ***)(param_2[3] - param_2[4]);
      if ((uint)param_2[3] < (uint)param_2[4]) {
        pppcVar2 = (code ***)0x0;
      }
      goto LAB_0075656c;
    }
    pppcVar4 = (code ***)0x0;
    local_60 = (code ***)0x1;
  }
  uVar3 = 0x20 - LZCOUNT((uint)pppcVar4 >> 10);
  local_5c = (undefined4 ***)0x0;
  if (6 < uVar3) {
    uVar3 = 7;
  }
  local_54[0] = uVar3 << 2 | 1;
  local_58 = pppcVar4;
  FUN_007560b4(&local_60,param_2);
  uVar3 = local_54[0];
  if ((local_54[0] & 1) == 0) {
    local_38 = (code ***)&DAT_018ad580;
  }
  else {
    local_44 = (int)local_5c + (local_54[0] >> 5);
    local_48 = (int)local_60 - (local_54[0] >> 5);
    local_4c = (code *)((int)local_58 + (local_54[0] >> 5));
    FUN_00f5ef18(&local_38,&local_4c);
    local_40 = (code **)(uVar3 >> 5);
    if (local_30 < uVar3 >> 5) {
      local_6c = (undefined4 ****)&local_3c;
      local_3c = (uint)local_30;
      local_68 = (undefined4 ***)FUN_007883b8;
      local_70 = (code ***)FUN_007883b8;
      local_74 = (undefined4 ****)&local_40;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00584155,&local_74,&DAT_018a6700);
    }
    local_5c = (undefined4 ***)((int)local_30 - (int)local_40);
    local_60 = (code ***)((int)local_40 + (int)local_34);
    local_54[0] = local_2c[0];
  }
  pppuVar1 = (undefined4 ***)local_60;
  local_60 = local_38;
  local_58 = (code ***)local_5c;
  local_5c = pppuVar1;
  iVar12 = (*(code *)local_38[3])(local_54);
  pppcVar2 = local_58;
  pppuVar1 = local_5c;
  if (iVar12 == 0) {
    iVar12 = param_1[1];
    pppuVar10 = (undefined4 ***)-iVar12;
    local_64 = local_54[0];
    local_68 = (undefined4 ***)local_58;
    local_6c = (undefined4 ****)local_5c;
    local_70 = local_60;
    local_2c[0] = local_54[0];
    local_30 = (undefined4 ***)local_58;
    local_34 = local_5c;
    local_38 = local_60;
    if (pppuVar10 < local_58) {
      FUN_00f5f538(param_1,local_58);
      iVar12 = param_1[1];
      pppuVar10 = (undefined4 ***)(param_1[2] - iVar12);
    }
    FUN_016dd1aa(*param_1 + iVar12,pppuVar1,pppcVar2);
    if (pppuVar10 < pppcVar2) {
      local_60 = pppcVar2;
      local_5c = pppuVar10;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_60);
    }
    param_1[1] = (int)pppcVar2 + iVar12;
    (*(code *)local_38[4])(local_2c,local_34,local_30);
    return;
  }
  local_2c[0] = local_54[0];
  local_30 = (undefined4 ***)local_58;
  local_38 = local_60;
  local_34 = local_5c;
  (*(code *)local_60[2])(&local_70,local_2c);
  local_74 = (undefined4 ****)0x0;
  piVar6 = (int *)param_1[3];
  if (((uint)piVar6 & 1) == 0) {
    piVar7 = piVar6 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar7;
      bVar13 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar13);
    *piVar7 = iVar12 + -1;
    if (iVar12 != 1) goto LAB_007565f4;
    DataMemoryBarrier(0xb);
    if (*piVar6 != 0) {
      thunk_FUN_016d3fb4(piVar6[1]);
    }
  }
  else {
    if (piVar6 < &DAT_00000020) goto LAB_007565f4;
    piVar6 = (int *)(*param_1 - ((uint)piVar6 >> 5));
  }
  thunk_FUN_016d3fb4(piVar6);
LAB_007565f4:
  *param_1 = (int)local_70;
  param_1[1] = (int)local_6c;
  param_1[2] = (int)local_68;
  param_1[3] = local_64;
  return;
}

