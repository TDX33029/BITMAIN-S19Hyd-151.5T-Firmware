// FUN_0110f9a0 @ 0110f9a0 size=1104 calls_out=10 calls_in=2
// strings: 

void FUN_0110f9a0(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  code *pcVar14;
  int iVar15;
  uint **ppuVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  uint *puVar19;
  uint *puVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  uint *puVar24;
  int local_5c;
  int local_58;
  int local_54;
  uint *local_50;
  uint *local_4c;
  uint local_48;
  int *local_44;
  uint local_40;
  uint local_3c;
  uint *local_38;
  code *local_34;
  uint **local_30;
  code *local_2c;
  
  bVar1 = *(byte *)((int)param_2 + 0x6e);
  if (bVar1 == 2) {
    puVar20 = (uint *)*param_3;
    pcVar14 = (code *)param_3[1];
    ppuVar16 = (uint **)param_3[2];
    pcVar4 = (code *)param_3[3];
    goto joined_r0x0110fc3c;
  }
  puVar20 = (uint *)param_3[1];
  if ((uint *)0xffef < puVar20) {
    local_30 = &local_50;
    local_2c = (code *)&LAB_00fac484;
    local_38 = (uint *)&DAT_0056922c;
    local_34 = (code *)&LAB_00fac484;
    local_50 = puVar20;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_005834a4,&local_38,&DAT_01886ec0);
  }
  puVar19 = puVar20 + 4;
  bVar3 = true;
  local_30 = (uint **)0x0;
  local_34 = (code *)0x0;
  local_2c = (code *)&DAT_00000001;
  local_38 = (uint *)0x1;
  iVar6 = FUN_016d38c8(puVar19,1);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,puVar19);
  }
  iVar15 = *param_3;
  if (((bVar1 & 1) == 0) && (*(byte *)(param_2 + 0xd) < 3)) {
    puVar19 = (uint *)0x6;
LAB_0110faf4:
    uVar17 = 3;
    thunk_FUN_016d3fb4();
    piVar8 = (int *)param_3[3];
joined_r0x0110fb94:
    uVar18 = SUB41(puVar19,0);
    uVar5 = uVar18;
    if (((uint)piVar8 & 1) != 0) goto LAB_0110fb08;
LAB_0110fb98:
    uVar18 = uVar5;
    piVar11 = piVar8 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      if (*piVar8 != 0) {
        thunk_FUN_016d3fb4(piVar8[1]);
      }
      goto LAB_0110fbe4;
    }
  }
  else {
    puVar10 = param_2;
    if ((bVar1 & 1) == 0) {
      puVar10 = param_2 + 6;
    }
    if (*(char *)(puVar10 + 4) != '\x01') {
      puVar19 = (uint *)0x0;
      goto LAB_0110faf4;
    }
    uVar12 = puVar10[2];
    uVar13 = puVar10[3];
    if ((uVar12 & uVar13) != 0xffffffff) {
      uVar9 = 1;
      uVar21 = 0;
      iVar22 = iVar15;
      iVar23 = iVar6;
      puVar24 = puVar19;
      puVar7 = (uint *)(**(code **)(puVar10[1] + 0x14))(*puVar10);
      puVar10[2] = uVar12 + 1;
      puVar10[3] = uVar13 + (0xfffffffe < uVar12);
      if (puVar19 < puVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,puVar7,puVar19,&DAT_01886e30,uVar9,uVar21,iVar22,puVar20,iVar23,puVar24);
      }
      if (puVar7 == (uint *)0x0) {
        puVar20 = (uint *)0x1;
        ppuVar16 = (uint **)0x0;
        pcVar14 = (code *)0x0;
      }
      else {
        FUN_00f5f538(&local_38,puVar7);
        puVar20 = local_38;
        pcVar14 = local_34;
        ppuVar16 = local_30;
      }
      FUN_016dd1aa((int)puVar20 + (int)pcVar14,iVar6,puVar7);
      if ((uint *)((int)ppuVar16 - (int)pcVar14) < puVar7) {
        local_50 = puVar7;
        local_4c = (uint *)((int)ppuVar16 - (int)pcVar14);
                    /* WARNING: Subroutine does not return */
        FUN_00f600c0(&local_50);
      }
      local_34 = (code *)((int)pcVar14 + (int)puVar7);
      uVar17 = 7;
      bVar3 = false;
      thunk_FUN_016d3fb4(iVar6);
      piVar8 = (int *)param_3[3];
      goto joined_r0x0110fb94;
    }
    uVar17 = 3;
    uVar18 = 8;
    thunk_FUN_016d3fb4();
    piVar8 = (int *)param_3[3];
    uVar5 = 8;
    if (((uint)piVar8 & 1) == 0) goto LAB_0110fb98;
LAB_0110fb08:
    if (param_3[2] + ((uint)piVar8 >> 5) != 0) {
      piVar8 = (int *)(iVar15 - ((uint)piVar8 >> 5));
LAB_0110fbe4:
      thunk_FUN_016d3fb4(piVar8);
    }
  }
  pcVar4 = local_2c;
  puVar20 = local_38;
  pcVar14 = local_34;
  ppuVar16 = local_30;
  if (bVar3) {
    *(undefined1 *)((int)param_1 + 5) = uVar18;
    *(undefined1 *)(param_1 + 1) = uVar17;
    *param_1 = 0x80000001;
    if (((uint)local_2c & 1) == 0) {
      piVar8 = (int *)((int)local_2c + 0x10);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = iVar6 + -1;
      if (iVar6 != 1) {
        return;
      }
      DataMemoryBarrier(0xb);
      pcVar14 = local_2c;
      if (*(int *)local_2c != 0) {
        thunk_FUN_016d3fb4(*(int *)((int)local_2c + 4));
        thunk_FUN_016d3fb4(pcVar4);
        return;
      }
    }
    else {
      if ((int)local_30 + ((uint)local_2c >> 5) == 0) {
        return;
      }
      pcVar14 = (code *)((int)local_38 - ((uint)local_2c >> 5));
    }
    thunk_FUN_016d3fb4(pcVar14);
    return;
  }
joined_r0x0110fc3c:
  if (((uint)pcVar4 & 1) == 0) {
    local_38 = &DAT_018ad580;
    local_34 = (code *)puVar20;
    local_30 = (uint **)pcVar14;
    local_2c = pcVar4;
  }
  else {
    local_54 = (int)pcVar14 + ((uint)pcVar4 >> 5);
    local_58 = (int)puVar20 - ((uint)pcVar4 >> 5);
    local_5c = (int)ppuVar16 + ((uint)pcVar4 >> 5);
    FUN_00f5ef18(&local_50,&local_5c,ppuVar16,param_4);
    local_40 = (uint)pcVar4 >> 5;
    if (local_48 < (uint)pcVar4 >> 5) {
      local_30 = (uint **)&local_3c;
      local_3c = local_48;
      local_2c = FUN_007883b8;
      local_34 = FUN_007883b8;
      local_38 = &local_40;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00584155,&local_38,&DAT_018a6700);
    }
    local_2c = (code *)local_44;
    local_38 = local_50;
    local_30 = (uint **)(local_48 - local_40);
    local_34 = (code *)((int)local_4c + local_40);
  }
  FUN_01665a20(&local_50,param_2 + 0x1c,&local_38,param_4);
  uVar9 = 0x80000002;
  if (((uint)local_50 & 0xff) != 4) {
    param_1[1] = local_50;
    param_1[2] = local_4c;
    uVar9 = 0x80000000;
  }
  *param_1 = uVar9;
  return;
}

