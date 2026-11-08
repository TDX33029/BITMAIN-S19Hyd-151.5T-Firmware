// FUN_01516900 @ 01516900 size=1396 calls_out=15 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01516900(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  undefined8 uVar22;
  int local_90;
  int local_8c;
  int local_88;
  int *local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int *local_70;
  int *local_6c;
  int local_68;
  int *local_64;
  int *local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 == '\x05') {
    local_68 = *(int *)(param_2 + 4);
    local_64 = *(int **)(param_2 + 8);
    local_50 = *(undefined4 *)(param_2 + 0xc);
    if (local_68 == 0) {
      local_50 = 0;
    }
    iVar17 = *(int *)(param_1 + 8);
    local_90 = 4;
    iVar8 = *(int *)(param_1 + 4);
    uVar9 = *(undefined4 *)(param_1 + 0x10);
    iVar3 = *(int *)(param_1 + 0x14);
    local_70 = (int *)(uint)(local_68 != 0);
    local_80 = 0;
    local_84 = (int *)0x4;
    local_88 = 0;
    local_74 = 0;
    local_78 = 4;
    local_7c = 0;
    local_5c = 0;
    local_8c = 0;
    local_6c = (int *)0x0;
    bVar7 = false;
    local_60 = local_70;
    local_58._0_4_ = local_68;
    local_58._4_4_ = local_64;
LAB_015169c4:
    uVar22 = FUN_01a41998(&local_70);
    iVar6 = (int)uVar22;
    if (iVar6 != 0) {
      uVar11 = *(undefined4 *)(iVar6 + 4);
      iVar14 = *(int *)(iVar6 + 8);
      if (iVar17 != 0) {
        iVar16 = iVar8;
        iVar20 = iVar17 << 5;
        do {
          if (*(int *)(iVar16 + 8) == iVar14) {
            uVar18 = *(undefined4 *)(iVar16 + 4);
            iVar4 = thunk_FUN_01bed842(uVar18,uVar11,iVar14);
            if (iVar4 == 0) {
              local_48 = 0x80000000;
              local_44 = uVar18;
              local_40 = iVar14;
              local_3c = param_3;
              uVar22 = FUN_01576990(iVar16 + 0xc,(int)((ulonglong)uVar22 >> 0x20),&local_48,param_4,
                                    param_5);
              FUN_014fb9d0(&local_88,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
              if (*(int *)(iVar6 + 8) == iVar3) {
                iVar6 = thunk_FUN_01bed842(*(undefined4 *)(iVar6 + 4),uVar9,iVar3);
                bVar7 = (bool)(iVar6 == 0 | bVar7);
              }
              goto LAB_015169c4;
            }
          }
          iVar16 = iVar16 + 0x20;
          iVar20 = iVar20 + -0x20;
        } while (iVar20 != 0);
      }
      FUN_006666fc(&local_48,uVar11,iVar14);
      if (local_8c == local_7c) {
        FUN_019abd3c(&local_7c);
        local_90 = local_78;
      }
      local_74 = local_8c + 1;
      puVar5 = (undefined4 *)(local_90 + local_8c * 0xc);
      *puVar5 = local_48;
      puVar5[1] = local_44;
      puVar5[2] = local_40;
      local_8c = local_74;
      goto LAB_015169c4;
    }
    if (local_8c != 0) {
      piVar19 = *(int **)(param_1 + 0x18);
      do {
        iVar3 = *piVar19;
        bVar2 = (bool)hasExclusiveAccess(piVar19);
      } while (!bVar2);
      *piVar19 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_01516e50;
      uVar12 = *(uint *)(param_1 + 0x1c);
      if (param_4 == 0) {
        local_70 = (int *)0x0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar15 = *(int **)(param_4 + 0xc);
        do {
          iVar3 = *piVar15;
          bVar2 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar2);
        *piVar15 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_01516e50;
        piVar13 = piVar19 + 2;
        uVar9 = *(undefined4 *)(param_4 + 0x10);
        uVar21 = (*(int **)(param_4 + 4))[1];
        if (uVar12 < uVar21) {
          uVar21 = 0;
        }
        else {
          iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar13,uVar21);
          if (iVar3 != 0) {
            uVar21 = 0;
          }
          piVar13 = (int *)((int)piVar13 + uVar21);
        }
        local_58 = FUN_016bc0ec(piVar13,uVar12 - uVar21);
        local_64 = (int *)0x3;
        local_70 = (int *)0x2;
        local_60 = piVar15;
        local_5c = uVar9;
      }
      uVar22 = FUN_01531840(param_3);
      piVar19 = (int *)FUN_01595b0c(piVar19,uVar12,&local_70,(int)uVar22,
                                    (int)((ulonglong)uVar22 >> 0x20),param_2,&local_7c);
      iVar3 = local_80;
      local_70 = piVar19;
      if (local_80 == local_88) {
        FUN_0155a420(&local_88);
      }
      local_84[iVar3] = (int)piVar19;
      local_80 = iVar3 + 1;
    }
    if (!bVar7) {
      piVar19 = *(int **)(param_1 + 0x20);
      do {
        iVar3 = *piVar19;
        bVar7 = (bool)hasExclusiveAccess(piVar19);
      } while (!bVar7);
      *piVar19 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_01516e50:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1516e50);
        (*pcVar1)();
      }
      uVar12 = *(uint *)(param_1 + 0x24);
      if (param_4 == 0) {
        local_70 = (int *)0x0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar15 = *(int **)(param_4 + 0xc);
        do {
          iVar3 = *piVar15;
          bVar7 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar7);
        *piVar15 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_01516e50;
        piVar13 = piVar19 + 2;
        uVar9 = *(undefined4 *)(param_4 + 0x10);
        uVar21 = (*(int **)(param_4 + 4))[1];
        if (uVar12 < uVar21) {
          uVar21 = 0;
        }
        else {
          iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar13,uVar21);
          if (iVar3 != 0) {
            uVar21 = 0;
          }
          piVar13 = (int *)((int)piVar13 + uVar21);
        }
        uVar22 = FUN_016bc0ec(piVar13,uVar12 - uVar21);
        local_64 = (int *)0x3;
        local_70 = (int *)0x2;
        local_60 = piVar15;
        local_5c = uVar9;
        local_58 = uVar22;
      }
      uVar22 = FUN_01531840(param_3);
      FUN_006666fc(&local_30,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
      puVar5 = (undefined4 *)((uint)&local_48 | 4);
      *puVar5 = local_30;
      puVar5[1] = uStack_2c;
      puVar5[2] = uStack_28;
      local_48 = CONCAT31(local_48._1_3_,3);
      piVar19 = (int *)FUN_015963e0(piVar19,uVar12,&local_70,(int)uVar22,
                                    (int)((ulonglong)uVar22 >> 0x20),param_2,&local_48);
      iVar3 = local_80;
      if (local_80 == local_88) {
        local_70 = piVar19;
        FUN_0155a420(&local_88);
      }
      local_80 = iVar3 + 1;
      local_84[iVar3] = (int)piVar19;
    }
    local_64 = local_84 + local_80;
    local_68 = local_88;
    local_70 = local_84;
    local_6c = local_84;
    piVar19 = (int *)thunk_FUN_01be5118(0x10);
    if (piVar19 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    *piVar19 = (int)local_70;
    piVar19[1] = (int)local_6c;
    piVar19[2] = local_68;
    piVar19[3] = (int)local_64;
    if (local_8c == 0) {
      FUN_006a41c0(&local_7c);
    }
    puVar10 = &UNK_01cfa84c;
  }
  else {
    piVar19 = (int *)&DAT_00000001;
    puVar10 = &UNK_01cfc1a4;
  }
  return CONCAT44(puVar10,piVar19);
}

