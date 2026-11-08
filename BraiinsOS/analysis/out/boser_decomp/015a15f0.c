// FUN_015a15f0 @ 015a15f0 size=896 calls_out=11 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015a15f0(uint *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  code *pcVar8;
  int *piVar9;
  code *pcVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint *puVar14;
  int iVar15;
  undefined8 uVar16;
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
  iVar3 = FUN_015a13f4(param_2,param_3,param_4,param_5,param_6);
  if (iVar3 == 0) {
    uVar16 = 0x1cfc1a400000001;
  }
  else {
    uVar16 = FUN_01596948();
  }
  iVar3 = (int)((ulonglong)uVar16 >> 0x20);
  uVar13 = (undefined4)uVar16;
  pcVar8 = *(code **)(iVar3 + 0xc);
  local_30 = (*pcVar8)(uVar13);
  if (local_30 == 0) {
LAB_015a16cc:
    local_2c = (uint *)&SUB_00000004;
    local_28 = 0;
    local_30 = 0;
    FUN_01139b38(uVar13,iVar3);
    bVar2 = true;
  }
  else {
    FUN_014fb894(&local_78,&local_30);
    FUN_014fb3a0(&local_30);
    local_48 = (uint)local_74;
    uStack_44 = local_70;
    uStack_40 = local_6c;
    uStack_3c = local_68;
    uStack_38 = local_64;
    if (local_78 == 0x80000000) goto LAB_015a16cc;
    puVar4 = (uint *)((uint)&local_78 | 4);
    *puVar4 = (uint)local_74;
    puVar4[1] = local_70;
    puVar4[2] = local_6c;
    puVar4[3] = local_68;
    puVar4[4] = local_64;
    pcVar10 = *(code **)(iVar3 + 0x10);
    (*pcVar10)(&local_30,uVar13);
    puVar14 = (uint *)&SUB_00000004;
    uVar12 = 0;
    uVar5 = local_30 + 1;
    if (local_30 == 0xffffffff) {
      uVar5 = 0xffffffff;
    }
    uVar6 = 4;
    if (4 < uVar5) {
      uVar6 = uVar5;
    }
    iVar15 = uVar6 * 0x18;
    if (0x5555555 < uVar5) {
LAB_015a17d8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar12,iVar15);
    }
    if (iVar15 == 0) {
      uVar6 = 0;
    }
    else {
      uVar12 = 4;
      puVar14 = (uint *)FUN_01298504(iVar15,4);
      if (puVar14 == (uint *)0x0) goto LAB_015a17d8;
    }
    *puVar14 = local_78;
    puVar14[1] = (uint)local_74;
    puVar14[2] = local_70;
    puVar14[3] = local_6c;
    puVar14[4] = local_68;
    puVar14[5] = local_64;
    iVar15 = 0x18;
    local_50 = 1;
    local_58 = uVar6;
    local_54 = puVar14;
    while( true ) {
      uVar5 = local_50;
      uVar6 = (*pcVar8)(uVar13);
      if (uVar6 == 0) break;
      local_30 = uVar6;
      FUN_014fb894(&local_78,&local_30);
      FUN_014fb3a0(&local_30);
      local_48 = (uint)local_74;
      uStack_44 = local_70;
      uStack_40 = local_6c;
      uStack_3c = local_68;
      uStack_38 = local_64;
      if (local_78 == 0x80000000) break;
      *puVar4 = (uint)local_74;
      puVar4[1] = local_70;
      puVar4[2] = local_6c;
      puVar4[3] = local_68;
      puVar4[4] = local_64;
      if (uVar5 == local_58) {
        (*pcVar10)(&local_30,uVar13);
        iVar11 = local_30 + 1;
        if (local_30 == 0xffffffff) {
          iVar11 = -1;
        }
        FUN_01af7b44(&local_58,uVar5,iVar11,4,0x18);
        puVar14 = local_54;
      }
      puVar7 = (uint *)((int)puVar14 + iVar15);
      local_50 = uVar5 + 1;
      iVar15 = iVar15 + 0x18;
      *puVar7 = local_78;
      puVar7[1] = (uint)local_74;
      puVar7[2] = local_70;
      puVar7[3] = local_6c;
      puVar7[4] = local_68;
      puVar7[5] = local_64;
    }
    FUN_01139b38(uVar13,iVar3);
    local_78 = local_58;
    local_74 = local_54;
    local_70 = local_50;
    bVar2 = local_50 == 0;
    local_30 = local_78;
    local_2c = local_74;
    local_28 = local_70;
    if (local_50 != 0) {
      local_60 = 0;
      local_64 = 0;
      local_68 = 4;
      goto LAB_015a1708;
    }
  }
  local_70 = 4;
  local_68 = 0;
  local_74 = (uint *)0x0;
  local_78 = 0x80000000;
LAB_015a1708:
  local_6c = 0;
  piVar9 = *(int **)(param_2 + 8);
  do {
    iVar3 = *piVar9;
    bVar1 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar1);
  *piVar9 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)software_udf(0xfdee,0x15a17e4);
    (*pcVar8)();
  }
  FUN_0155ff10(&local_78);
  *param_1 = local_78;
  param_1[1] = (uint)local_74;
  param_1[2] = local_70;
  param_1[3] = local_6c;
  param_1[4] = local_68;
  param_1[5] = local_64;
  param_1[6] = local_60;
  if (bVar2) {
    FUN_0074dd34(&local_30);
  }
  return;
}

