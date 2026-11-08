// FUN_01584230 @ 01584230 size=932 calls_out=13 calls_in=1
// strings: 

undefined8 FUN_01584230(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined4 *local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  int *local_88;
  undefined4 local_84;
  undefined8 local_80;
  int local_74;
  undefined4 *local_70;
  int local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  int local_60;
  undefined4 *local_5c;
  int *local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 != '\x05') {
    puVar3 = (undefined4 *)&DAT_00000001;
    puVar10 = &UNK_01cfc1a4;
    goto LAB_015845a4;
  }
  iVar13 = 0;
  puVar3 = (undefined4 *)0x0;
  if (param_4 != 0) {
    iVar11 = *(int *)(param_1 + 0x18);
    uVar14 = *(uint *)(param_1 + 0x1c);
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar8 = *(int **)(param_4 + 0xc);
    do {
      iVar4 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_015845c0;
    uVar5 = *(undefined4 *)(param_4 + 0x10);
    iVar11 = iVar11 + 8;
    uVar7 = (*(int **)(param_4 + 4))[1];
    if (uVar14 < uVar7) {
      uVar7 = 0;
    }
    else {
      iVar4 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,iVar11,uVar7);
      if (iVar4 != 0) {
        uVar7 = 0;
      }
      iVar11 = iVar11 + uVar7;
    }
    local_80 = FUN_016bc0ec(iVar11,uVar14 - uVar7);
    local_8c = 3;
    puVar3 = (undefined4 *)0x2;
    local_88 = piVar8;
    local_84 = uVar5;
  }
  uVar15 = *(undefined4 *)(param_2 + 8);
  uVar12 = *(undefined4 *)(param_1 + 4);
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_2 + 4);
  local_6c = 0;
  local_70 = (undefined4 *)&SUB_00000004;
  local_74 = 0;
  local_98 = puVar3;
  iVar11 = FUN_0196b2cc(uVar5,uVar15,uVar12,uVar9);
  puVar3 = (undefined4 *)&SUB_00000004;
  if (iVar11 == 0) {
    piVar8 = *(int **)(param_1 + 0x18);
    do {
      iVar13 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar13 + 1;
    if (iVar13 < 0) goto LAB_015845c0;
    uVar5 = *(undefined4 *)(param_1 + 0x1c);
    FUN_01538d58(&local_68,&local_98);
    uVar16 = FUN_01531840(param_3);
    FUN_006666fc(&local_30,uVar12,uVar9);
    puVar3 = (undefined4 *)((uint)local_48 | 4);
    *puVar3 = local_30;
    puVar3[1] = uStack_2c;
    puVar3[2] = uStack_28;
    local_48[0] = 3;
    puVar3 = (undefined4 *)
             FUN_015963e0(piVar8,uVar5,&local_68,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20),
                          param_2,local_48);
    local_68 = puVar3;
    FUN_0155a420(&local_74);
    iVar13 = 1;
    local_6c = 1;
    *local_70 = puVar3;
    uVar5 = *(undefined4 *)(param_2 + 4);
    uVar15 = *(undefined4 *)(param_2 + 8);
    puVar3 = local_70;
  }
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  uVar12 = *(undefined4 *)(param_1 + 0x14);
  iVar11 = FUN_0196b2cc(uVar5,uVar15,uVar9,uVar12);
  if (iVar11 == 0) {
    piVar8 = *(int **)(param_1 + 0x18);
    do {
      iVar4 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_015845c0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15845c0);
      (*pcVar1)();
    }
    uVar5 = *(undefined4 *)(param_1 + 0x1c);
    local_68 = local_98;
    local_64 = (undefined4 *)uStack_94;
    local_60 = uStack_90;
    local_5c = (undefined4 *)local_8c;
    local_58 = local_88;
    uStack_54 = local_84;
    uStack_50 = local_80;
    uVar16 = FUN_01531840(param_3);
    FUN_006666fc(&local_30,uVar9,uVar12);
    puVar6 = (undefined4 *)((uint)local_48 | 4);
    *puVar6 = local_30;
    puVar6[1] = uStack_2c;
    puVar6[2] = uStack_28;
    local_48[0] = 3;
    puVar6 = (undefined4 *)
             FUN_015963e0(piVar8,uVar5,&local_98,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20),
                          param_2,local_48);
    if (iVar13 == local_74) {
      local_68 = puVar6;
      FUN_0155a420(&local_74);
      puVar3 = local_70;
    }
    puVar3[iVar13] = puVar6;
    iVar13 = iVar13 + 1;
    local_6c = iVar13;
LAB_0158454c:
    local_60 = local_74;
    local_5c = local_70 + iVar13;
    local_68 = local_70;
    local_64 = local_70;
    puVar3 = (undefined4 *)thunk_FUN_01be5118(0x10);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    puVar10 = &UNK_01cfc168;
    *puVar3 = local_68;
    puVar3[1] = local_64;
    puVar3[2] = local_60;
    puVar3[3] = local_5c;
    if (iVar11 == 0) goto LAB_015845a4;
  }
  else {
    if (iVar13 != 0) goto LAB_0158454c;
    FUN_01501840(&local_74);
    puVar3 = (undefined4 *)&DAT_00000001;
    puVar10 = &UNK_01cfc1a4;
  }
  FUN_0126e254(&local_98);
LAB_015845a4:
  return CONCAT44(puVar10,puVar3);
}

