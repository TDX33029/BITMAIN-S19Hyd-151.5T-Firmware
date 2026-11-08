// FUN_0158e818 @ 0158e818 size=1084 calls_out=15 calls_in=0
// strings: 

undefined8 FUN_0158e818(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  int *local_78;
  undefined4 local_74;
  undefined8 local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int *local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 == '\x05') {
    iVar3 = 0;
    local_8c = 0;
    local_90 = 4;
    local_94 = 0;
    if (param_4 != 0) {
      iVar3 = *(int *)(param_1 + 0x24);
      uVar11 = *(uint *)(param_1 + 0x28);
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar10 = *(int **)(param_4 + 0xc);
      do {
        iVar4 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_0158ec50;
      iVar3 = iVar3 + 8;
      uVar13 = *(undefined4 *)(param_4 + 0x10);
      uVar8 = (*(int **)(param_4 + 4))[1];
      if (uVar11 < uVar8) {
        uVar8 = 0;
      }
      else {
        iVar4 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,iVar3,uVar8);
        if (iVar4 != 0) {
          uVar8 = 0;
        }
        iVar3 = iVar3 + uVar8;
      }
      local_70 = FUN_016bc0ec(iVar3,uVar11 - uVar8);
      local_7c = 3;
      iVar3 = 2;
      local_78 = piVar10;
      local_74 = uVar13;
    }
    uVar12 = *(undefined4 *)(param_1 + 0x10);
    uVar14 = *(undefined4 *)(param_1 + 0x14);
    uVar13 = *(undefined4 *)(param_2 + 4);
    uVar9 = *(undefined4 *)(param_2 + 8);
    local_88 = iVar3;
    iVar3 = FUN_0196b2cc(uVar13,uVar9,uVar12,uVar14);
    if (iVar3 == 0) {
      piVar10 = *(int **)(param_1 + 0x24);
      do {
        iVar3 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_0158ec50;
      uVar13 = *(undefined4 *)(param_1 + 0x28);
      FUN_01538d58(&local_68,&local_88);
      uVar15 = FUN_01531840(param_3);
      FUN_006666fc(&local_30,uVar12,uVar14);
      puVar6 = (undefined4 *)((uint)local_48 | 4);
      *puVar6 = local_30;
      puVar6[1] = uStack_2c;
      puVar6[2] = uStack_28;
      local_48[0] = 3;
      iVar4 = FUN_015963e0(piVar10,uVar13,&local_68,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                           param_2,local_48);
      iVar3 = local_8c;
      local_68 = iVar4;
      if (local_8c == local_94) {
        FUN_0155a420(&local_94);
      }
      *(int *)(local_90 + iVar3 * 4) = iVar4;
      local_8c = iVar3 + 1;
      uVar13 = *(undefined4 *)(param_2 + 4);
      uVar9 = *(undefined4 *)(param_2 + 8);
    }
    uVar14 = *(undefined4 *)(param_1 + 0x1c);
    uVar12 = *(undefined4 *)(param_1 + 0x20);
    iVar3 = FUN_0196b2cc(uVar13,uVar9,uVar14,uVar12);
    if (iVar3 == 0) {
      piVar10 = *(int **)(param_1 + 0x24);
      do {
        iVar4 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar4 + 1;
      if (iVar4 < 0) {
LAB_0158ec50:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x158ec50);
        (*pcVar1)();
      }
      uVar13 = *(undefined4 *)(param_1 + 0x28);
      local_68 = local_88;
      local_64 = uStack_84;
      local_60 = uStack_80;
      local_5c = local_7c;
      local_58 = local_78;
      uStack_54 = local_74;
      uStack_50 = local_70;
      uVar15 = FUN_01531840(param_3);
      FUN_006666fc(&local_30,uVar14,uVar12);
      puVar6 = (undefined4 *)((uint)local_48 | 4);
      *puVar6 = local_30;
      puVar6[1] = uStack_2c;
      puVar6[2] = uStack_28;
      local_48[0] = 3;
      iVar5 = FUN_015963e0(piVar10,uVar13,&local_88,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                           param_2,local_48);
      iVar4 = local_8c;
      local_68 = iVar5;
      if (local_8c == local_94) {
        FUN_0155a420(&local_94);
      }
      *(int *)(local_90 + iVar4 * 4) = iVar5;
      local_8c = iVar4 + 1;
    }
    if (*(int *)(param_1 + 8) != 0) {
      uVar13 = *(undefined4 *)(param_2 + 4);
      uVar9 = *(undefined4 *)(param_2 + 8);
      puVar6 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
      iVar4 = *(int *)(param_1 + 8) << 5;
      do {
        uVar12 = puVar6[-1];
        uVar14 = *puVar6;
        iVar5 = FUN_0196b2cc(uVar13,uVar9,uVar12,uVar14);
        if (iVar5 != 0) {
          local_68 = -0x80000000;
          local_64 = uVar12;
          local_60 = uVar14;
          local_5c = param_3;
          uVar15 = FUN_01576990(puVar6 + 1,iVar5,&local_68,param_4,param_5);
          FUN_014fb9d0(&local_94,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
        }
        puVar6 = puVar6 + 8;
        iVar4 = iVar4 + -0x20;
      } while (iVar4 != 0);
    }
    if (local_8c != 0) {
      local_5c = local_90 + local_8c * 4;
      local_60 = local_94;
      local_68 = local_90;
      local_64 = local_90;
      piVar10 = (int *)thunk_FUN_01be5118(0x10);
      if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x10);
      }
      *piVar10 = local_68;
      piVar10[1] = local_64;
      piVar10[2] = local_60;
      piVar10[3] = local_5c;
      if (iVar3 != 0) {
        FUN_0126e254(&local_88);
      }
      puVar7 = &UNK_01cfc168;
      goto LAB_0158ec28;
    }
    if (iVar3 != 0) {
      FUN_0126e254(&local_88);
    }
    FUN_01501840(&local_94);
  }
  piVar10 = (int *)&DAT_00000001;
  puVar7 = &UNK_01cfc1a4;
LAB_0158ec28:
  return CONCAT44(puVar7,piVar10);
}

