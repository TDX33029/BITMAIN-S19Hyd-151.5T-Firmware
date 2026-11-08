// FUN_00783074 @ 00783074 size=612 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00783074(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  undefined2 *puVar5;
  int iVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  bool bVar11;
  ushort *local_84;
  int local_80;
  ushort *local_7c;
  int local_78;
  int *local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  byte local_41;
  int local_40;
  undefined1 auStack_3c [12];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_014056f8(&local_41);
  iVar6 = local_40;
  if (local_41 == 2) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    piVar4 = (int *)*param_2;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar11 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar11);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013cdd5c(*param_2,param_2[1]);
      return;
    }
  }
  else {
    uVar1 = *(ushort *)(param_2 + 3);
    bVar11 = (local_41 & 1) == 0;
    if (bVar11) {
      iVar8 = local_40;
      uVar7 = uVar1;
    }
    else {
      FUN_01bed4e2(&local_60,auStack_3c,0xc);
      iVar8 = iVar6 << 0x10;
      uVar7 = (ushort)((uint)iVar6 >> 0x10);
    }
    local_84 = (ushort *)thunk_FUN_01be5118(0x80);
    if (local_84 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x80);
    }
    local_84[3] = uVar7;
    *(int *)(local_84 + 1) = iVar8;
    *local_84 = (ushort)!bVar11;
    iVar6 = 0x3c;
    *(undefined4 *)(local_84 + 4) = local_60;
    *(undefined4 *)(local_84 + 6) = uStack_5c;
    *(undefined4 *)(local_84 + 8) = uStack_58;
    local_84[0xe] = uVar1;
    local_84[10] = 0;
    local_84[0xb] = 0;
    local_84[0xc] = 0;
    local_84[0xd] = 0;
    local_80 = 4;
    local_78 = 1;
    local_70 = (int *)*param_2;
    local_6c = param_2[1];
    uStack_68 = param_2[2];
    local_64 = param_2[3];
    local_7c = local_84;
    while (iVar8 = local_78, FUN_014056f8(&local_41,&local_70), iVar3 = local_40, local_41 != 2) {
      uVar2 = (undefined2)local_64;
      bVar11 = (local_41 & 1) == 0;
      if (bVar11) {
        iVar9 = local_40;
        uVar10 = (undefined2)local_64;
      }
      else {
        FUN_01bed4e2(&local_30,auStack_3c,0xc);
        iVar9 = iVar3 << 0x10;
        uVar10 = (short)((uint)iVar3 >> 0x10);
      }
      local_50 = local_30;
      uStack_4c = uStack_2c;
      uStack_48 = uStack_28;
      if (iVar8 == local_80) {
        FUN_0132b898(&local_80,iVar8,1,4,0x20);
        local_84 = local_7c;
      }
      puVar5 = (undefined2 *)((int)local_84 + iVar6);
      puVar5[-0xb] = uVar10;
      local_78 = iVar8 + 1;
      *(int *)(puVar5 + -0xd) = iVar9;
      iVar6 = iVar6 + 0x20;
      puVar5[-0xe] = (ushort)!bVar11;
      *(undefined4 *)(puVar5 + -10) = local_50;
      *(undefined4 *)(puVar5 + -8) = uStack_4c;
      *(undefined4 *)(puVar5 + -6) = uStack_48;
      *puVar5 = uVar2;
      *(undefined4 *)(puVar5 + -4) = 0;
      *(undefined4 *)(puVar5 + -2) = 0;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *local_70;
      bVar11 = (bool)hasExclusiveAccess(local_70);
    } while (!bVar11);
    *local_70 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013cdd5c(local_70,local_6c);
    }
    *param_1 = local_80;
    param_1[1] = (int)local_7c;
    param_1[2] = local_78;
  }
  return;
}

