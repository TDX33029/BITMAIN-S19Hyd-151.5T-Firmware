// FUN_007b2ea8 @ 007b2ea8 size=1024 calls_out=7 calls_in=1
// strings: 

void FUN_007b2ea8(undefined4 *param_1,int param_2,int *param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int local_78;
  uint local_74;
  int local_70;
  int *local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_40;
  uint uStack_3c;
  int iStack_38;
  int *piStack_34;
  uint local_2c;
  uint local_28;
  
  iVar4 = *(int *)(param_2 + 0x20);
  piVar7 = (int *)(param_2 + 0x1c);
  if ((uint)(*(int *)(param_2 + 0x24) - iVar4) < 0x80) {
    FUN_00f5f538(piVar7,0x80);
    iVar4 = *(int *)(param_2 + 0x20);
  }
  FUN_00f5f8dc(&local_78,piVar7,iVar4);
  iVar4 = *param_3;
  if (iVar4 == 0) {
    (**(code **)(param_3[2] + 0xc))
              (&local_68,param_3[1] + (*(int *)(param_3[2] + 8) - 1U & 0xfffffff8) + 8,&local_78,
               &DAT_01887468);
    puVar2 = local_68;
    if (local_68 != &DAT_8000000c) {
      if (((uint)local_6c & 1) == 0) {
        piVar7 = local_6c + 4;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar7;
          bVar1 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar1);
        *piVar7 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          if (*local_6c != 0) {
            thunk_FUN_016d3fb4(local_6c[1]);
          }
          goto LAB_007b31b0;
        }
      }
      else if (local_70 + ((uint)local_6c >> 5) != 0) {
        local_6c = (int *)(local_78 - ((uint)local_6c >> 5));
LAB_007b31b0:
        thunk_FUN_016d3fb4(local_6c);
      }
      local_68 = local_64;
      local_64 = (undefined1 *)uStack_60;
      uStack_60 = uStack_5c;
      uStack_5c = local_58;
      local_58 = local_54;
      local_54 = uStack_50;
      uStack_50 = uStack_4c;
      uStack_4c = uStack_48;
      if (*param_3 == 0) {
        piVar7 = (int *)param_3[1];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar7;
          bVar1 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar1);
        *piVar7 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015614d8(param_3[1],param_3[2]);
        }
      }
      else {
        piVar7 = (int *)param_3[3];
        if (((uint)piVar7 & 1) == 0) {
          piVar3 = piVar7 + 4;
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar3;
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = iVar4 + -1;
          if (iVar4 != 1) goto LAB_007b3278;
          DataMemoryBarrier(0xb);
          if (*piVar7 != 0) {
            thunk_FUN_016d3fb4(piVar7[1]);
          }
        }
        else {
          if (param_3[2] + ((uint)piVar7 >> 5) == 0) goto LAB_007b3278;
          piVar7 = (int *)(*param_3 - ((uint)piVar7 >> 5));
        }
        thunk_FUN_016d3fb4(piVar7);
      }
LAB_007b3278:
      param_1[1] = local_68;
      param_1[2] = local_64;
      param_1[3] = uStack_60;
      param_1[4] = uStack_5c;
      param_1[5] = local_58;
      param_1[6] = local_54;
      param_1[7] = uStack_50;
      param_1[8] = uStack_4c;
      *param_1 = puVar2;
      return;
    }
  }
  else {
    local_28 = local_70 - local_74;
    uVar6 = local_74 ^ 0x7fffffff;
    if ((uint)param_3[1] < (local_74 ^ 0x7fffffff)) {
      uVar6 = param_3[1];
    }
    if (local_28 < uVar6) {
      FUN_00f5f538(&local_78,uVar6);
      local_28 = local_70 - local_74;
    }
    FUN_016dd1aa(local_78 + local_74,iVar4,uVar6);
    if (local_28 < uVar6) {
      local_2c = uVar6;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_2c);
    }
    local_74 = local_74 + uVar6;
  }
  local_40 = local_78;
  uStack_3c = local_74;
  iStack_38 = local_70;
  piStack_34 = local_6c;
  FUN_00f5fb8c(piVar7,&local_40);
  iVar4 = *(int *)(param_2 + 0x20);
  if (*(int *)(param_2 + 0x24) == iVar4) {
    FUN_00f5f538(piVar7,1);
    iVar4 = *(int *)(param_2 + 0x20);
    iVar5 = *(int *)(param_2 + 0x24);
    *(undefined1 *)(*(int *)(param_2 + 0x1c) + iVar4) = 10;
    if (iVar5 == iVar4) {
      local_64 = (undefined1 *)0x0;
      local_68 = (undefined1 *)0x1;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_68);
    }
  }
  else {
    *(undefined1 *)(*piVar7 + iVar4) = 10;
  }
  iVar5 = *param_3;
  *(int *)(param_2 + 0x20) = iVar4 + 1;
  if (iVar5 == 0) {
    piVar7 = (int *)param_3[1];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(param_3[1],param_3[2]);
      *param_1 = &DAT_8000000c;
      return;
    }
LAB_007b310c:
    *param_1 = &DAT_8000000c;
    return;
  }
  piVar7 = (int *)param_3[3];
  if (((uint)piVar7 & 1) == 0) {
    piVar3 = piVar7 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      if (*piVar7 != 0) {
        thunk_FUN_016d3fb4(piVar7[1]);
      }
      thunk_FUN_016d3fb4(piVar7);
      *param_1 = &DAT_8000000c;
      return;
    }
  }
  else {
    if (param_3[2] + ((uint)piVar7 >> 5) == 0) goto LAB_007b310c;
    thunk_FUN_016d3fb4(iVar5 - ((uint)piVar7 >> 5));
  }
  *param_1 = &DAT_8000000c;
  return;
}

