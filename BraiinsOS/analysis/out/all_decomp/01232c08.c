// FUN_01232c08 @ 01232c08 size=1176 calls_out=13 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01232c08(uint *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  code *pcVar11;
  int iVar12;
  code *pcVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint local_78;
  uint *local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_58;
  uint *local_54;
  uint local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_30;
  uint *local_2c;
  uint local_28;
  
  if (*param_3 != '\x03') {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar3 = FUN_01232a20(param_2,param_3,param_4,param_5);
  if (uVar3 == 0) {
    puVar4 = (uint *)&DAT_00000001;
    puVar15 = (undefined4 *)&DAT_0188a364;
  }
  else {
    local_78 = uVar3;
    puVar4 = (uint *)thunk_FUN_016d4a50(4);
    if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,4);
    }
    *puVar4 = uVar3;
    puVar15 = &DAT_0188a348;
  }
  pcVar11 = (code *)puVar15[3];
  uVar3 = (*pcVar11)(puVar4);
  if (uVar3 == 0) {
LAB_01232d0c:
    local_2c = (uint *)&DAT_00000004;
    local_28 = 0;
    local_30 = 0;
    if ((code *)*puVar15 != (code *)0x0) {
      (*(code *)*puVar15)(puVar4);
    }
    if (puVar15[1] != 0) {
      thunk_FUN_016d3fb4(puVar4);
    }
    bVar2 = true;
  }
  else {
    local_30 = uVar3;
    FUN_011578ec(&local_78,&local_30);
    FUN_01157d7c(uVar3);
    thunk_FUN_016d3fb4(uVar3);
    local_48 = (uint)local_74;
    uStack_44 = local_70;
    uStack_40 = local_6c;
    uStack_3c = local_68;
    uStack_38 = local_64;
    if (local_78 == 0x80000000) goto LAB_01232d0c;
    puVar7 = (uint *)((uint)&local_78 | 4);
    *puVar7 = (uint)local_74;
    puVar7[1] = local_70;
    puVar7[2] = local_6c;
    puVar7[3] = local_68;
    puVar7[4] = local_64;
    pcVar13 = (code *)puVar15[4];
    (*pcVar13)(&local_30,puVar4);
    puVar16 = (uint *)&DAT_00000004;
    uVar3 = local_30 + 1;
    if (local_30 == 0xffffffff) {
      uVar3 = 0xffffffff;
    }
    uVar10 = 4;
    if (4 < uVar3) {
      uVar10 = uVar3;
    }
    iVar5 = uVar10 * 0x18;
    uVar8 = 0;
    if (0x5555555 < uVar3) {
LAB_01232ed0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar8,iVar5);
    }
    if (iVar5 == 0) {
      uVar10 = 0;
    }
    else {
      puVar16 = (uint *)thunk_FUN_016d4a50(iVar5);
      if (puVar16 == (uint *)0x0) {
        uVar8 = 4;
        goto LAB_01232ed0;
      }
    }
    iVar5 = 0x18;
    *puVar16 = local_78;
    puVar16[1] = (uint)local_74;
    puVar16[2] = local_70;
    puVar16[3] = local_6c;
    puVar16[4] = local_68;
    puVar16[5] = local_64;
    local_50 = 1;
    local_58 = uVar10;
    local_54 = puVar16;
    while( true ) {
      uVar3 = local_50;
      uVar10 = (*pcVar11)(puVar4);
      if (uVar10 == 0) break;
      local_30 = uVar10;
      FUN_011578ec(&local_78,&local_30);
      FUN_01157d7c(uVar10);
      thunk_FUN_016d3fb4(uVar10);
      local_48 = (uint)local_74;
      uStack_44 = local_70;
      uStack_40 = local_6c;
      uStack_3c = local_68;
      uStack_38 = local_64;
      if (local_78 == 0x80000000) break;
      *puVar7 = (uint)local_74;
      puVar7[1] = local_70;
      puVar7[2] = local_6c;
      puVar7[3] = local_68;
      puVar7[4] = local_64;
      if (uVar3 == local_58) {
        (*pcVar13)(&local_30,puVar4);
        iVar12 = local_30 + 1;
        if (local_30 == 0xffffffff) {
          iVar12 = -1;
        }
        FUN_011cf828(&local_58,uVar3,iVar12,4,0x18);
        puVar16 = local_54;
      }
      puVar9 = (uint *)((int)puVar16 + iVar5);
      local_50 = uVar3 + 1;
      iVar5 = iVar5 + 0x18;
      *puVar9 = local_78;
      puVar9[1] = (uint)local_74;
      puVar9[2] = local_70;
      puVar9[3] = local_6c;
      puVar9[4] = local_68;
      puVar9[5] = local_64;
    }
    if ((code *)*puVar15 != (code *)0x0) {
      (*(code *)*puVar15)(puVar4);
    }
    if (puVar15[1] != 0) {
      thunk_FUN_016d3fb4(puVar4);
    }
    local_30 = local_58;
    local_2c = local_54;
    local_28 = local_50;
    bVar2 = local_50 == 0;
    if (local_50 != 0) {
      local_78 = local_58;
      local_74 = local_54;
      local_70 = local_50;
      local_60 = 0;
      local_64 = 0;
      local_68 = 4;
      goto LAB_01232d64;
    }
  }
  local_70 = 4;
  local_68 = 0;
  local_74 = (uint *)0x0;
  local_78 = 0x80000000;
LAB_01232d64:
  piVar14 = *(int **)(param_2 + 8);
  local_6c = 0;
  do {
    iVar5 = *piVar14;
    bVar1 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar1);
  *piVar14 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)software_udf(0xfdee,0x12330a0);
    (*pcVar11)();
  }
  iVar5 = 0x18;
  if (local_78 == 0x80000000) {
    iVar5 = 0x10;
  }
  piVar6 = *(int **)((int)&local_78 + iVar5);
  if (piVar6 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(*(undefined4 *)((int)&local_78 + iVar5));
    }
  }
  puVar4 = local_2c;
  *(int **)((int)&local_78 + iVar5) = piVar14;
  *param_1 = local_78;
  param_1[1] = (uint)local_74;
  param_1[2] = local_70;
  param_1[3] = local_6c;
  param_1[4] = local_68;
  param_1[5] = local_64;
  param_1[6] = local_60;
  if (bVar2) {
    puVar16 = local_2c + 4;
    for (uVar3 = local_28; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (puVar16[-4] != 0) {
        thunk_FUN_016d3fb4(puVar16[-3]);
      }
      if (puVar16[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar16);
      }
      puVar16 = puVar16 + 6;
    }
    if (local_30 != 0) {
      thunk_FUN_016d3fb4(puVar4);
      return;
    }
  }
  return;
}

