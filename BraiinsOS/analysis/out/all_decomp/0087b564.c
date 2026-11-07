// FUN_0087b564 @ 0087b564 size=1052 calls_out=12 calls_in=1
// strings: 

void FUN_0087b564(undefined4 *param_1,int *param_2,int param_3,int *param_4,undefined4 param_5,
                 int param_6,int *param_7,undefined4 param_8,int *param_9)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint *puVar9;
  int local_6c;
  uint *local_68;
  uint local_64;
  int local_60;
  uint *local_5c;
  uint local_58;
  int *local_54;
  undefined4 local_50;
  int *local_4c;
  int *local_48;
  undefined4 local_44;
  undefined4 local_40;
  int **local_3c;
  int **local_38;
  undefined4 local_34;
  uint local_30;
  
  local_48 = *(int **)(param_6 + 0x40);
  local_54 = param_2;
  if (param_2 < local_48) {
    uVar3 = *(uint *)(param_6 + 0x3c);
LAB_0087b5f0:
    local_38 = &local_48;
    local_3c = &local_54;
    local_34 = *(undefined4 *)(param_6 + 0x38);
    local_30 = uVar3;
    uVar5 = FUN_008b4fd4(&local_3c);
  }
  else {
    uVar3 = *(uint *)(param_6 + 0x3c);
    if (uVar3 <= (uint)((int)param_2 - (int)local_48)) goto LAB_0087b5f0;
    piVar4 = (int *)(*(int *)(param_6 + 0x38) + ((int)param_2 - (int)local_48) * 0xc);
    iVar6 = *piVar4;
    puVar9 = (uint *)piVar4[1];
    if (iVar6 == 3) {
      do {
        uVar3 = *puVar9;
        bVar2 = (bool)hasExclusiveAccess(puVar9);
      } while (!bVar2);
      *puVar9 = uVar3 + 1;
      if (0x7fffffff < uVar3) goto LAB_0087b5ec;
    }
    else {
      uVar3 = piVar4[2];
    }
    local_6c = iVar6;
    local_68 = puVar9;
    local_64 = uVar3;
    FUN_010ec5f8(&local_54,&local_6c,0);
    uVar5 = local_50;
    piVar4 = local_54;
    if (local_54 != (int *)0x0) {
      if (iVar6 == 3) {
        DataMemoryBarrier(0xb);
        do {
          uVar3 = *puVar9;
          bVar2 = (bool)hasExclusiveAccess(puVar9);
        } while (!bVar2);
        *puVar9 = uVar3 - 1;
        if (uVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_010cf3d0(puVar9);
        }
      }
      local_48 = *(int **)(param_6 + 0x4c);
      local_4c = param_2;
      if (param_2 < local_48) {
        uVar3 = *(uint *)(param_6 + 0x48);
LAB_0087b858:
        local_38 = &local_48;
        local_3c = &local_4c;
        local_34 = *(undefined4 *)(param_6 + 0x44);
        local_30 = uVar3;
        uVar7 = FUN_008b4fd4(&local_3c);
      }
      else {
        uVar3 = *(uint *)(param_6 + 0x48);
        if (uVar3 <= (uint)((int)param_2 - (int)local_48)) goto LAB_0087b858;
        piVar8 = (int *)(*(int *)(param_6 + 0x44) + ((int)param_2 - (int)local_48) * 0xc);
        local_60 = *piVar8;
        local_5c = (uint *)piVar8[1];
        if (local_60 == 3) {
          do {
            local_58 = *local_5c;
            bVar2 = (bool)hasExclusiveAccess(local_5c);
          } while (!bVar2);
          *local_5c = local_58 + 1;
          if (0x7fffffff < local_58) {
LAB_0087b5ec:
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x87b5ec);
            (*pcVar1)();
          }
        }
        else {
          local_58 = piVar8[2];
        }
        FUN_008abc84(&local_54,&local_60);
        piVar8 = local_54;
        if (local_54 != (int *)0x0) {
          FUN_016dd1aa(param_1,param_3,0x148);
          FUN_016dd1aa(param_1 + 0x58,param_5,0x20);
          param_1[99] = param_2;
          param_1[0x60] = param_4;
          param_1[0x61] = param_9;
          param_1[0x62] = param_6;
          param_1[0x53] = local_50;
          param_1[0x55] = uVar5;
          param_1[0x52] = piVar8;
          param_1[0x54] = piVar4;
          param_1[0x56] = param_7;
          param_1[0x57] = param_8;
          return;
        }
        local_3c = (int **)0x3;
        local_40 = local_50;
        local_44 = 0x15;
        local_48 = (int *)&DAT_00344a69;
        uVar7 = FUN_0080807c(&local_48,&local_3c);
      }
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = uVar7;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010cf448(piVar4,uVar5);
      }
      goto LAB_0087b628;
    }
    local_3c = (int **)0x3;
    local_40 = local_50;
    local_44 = 9;
    local_48 = (int *)&DAT_00344f59;
    uVar5 = FUN_0080807c(&local_48,&local_3c);
    if (iVar6 == 3) {
      DataMemoryBarrier(0xb);
      do {
        uVar3 = *puVar9;
        bVar2 = (bool)hasExclusiveAccess(puVar9);
      } while (!bVar2);
      *puVar9 = uVar3 - 1;
      if (uVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010cf3d0(puVar9);
      }
    }
    local_3c = (int **)0x3;
    local_44 = 0x15;
    local_48 = (int *)&DAT_003446f2;
    local_40 = uVar5;
    uVar5 = FUN_0080807c(&local_48,&local_3c);
  }
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = uVar5;
LAB_0087b628:
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *param_9;
    bVar2 = (bool)hasExclusiveAccess(param_9);
  } while (!bVar2);
  *param_9 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00894304(param_9);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *param_7;
    bVar2 = (bool)hasExclusiveAccess(param_7);
  } while (!bVar2);
  *param_7 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(param_7,param_8);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *param_4;
    bVar2 = (bool)hasExclusiveAccess(param_4);
  } while (!bVar2);
  *param_4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008d559c(param_4);
  }
  FUN_007c94ec(param_3 + 0x38);
  if (*(int *)(param_3 + 0x130) == 0) {
    return;
  }
  thunk_FUN_016d3fb4(*(undefined4 *)(param_3 + 0x134));
  return;
}

