// FUN_015140e8 @ 015140e8 size=928 calls_out=15 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_015140e8(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int local_88;
  int local_84;
  int local_78;
  int *local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int *local_60;
  int *local_5c;
  int local_58;
  int *local_54;
  int *local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_2 == '\x05') {
    local_58 = *(int *)(param_2 + 4);
    local_54 = *(int **)(param_2 + 8);
    local_74 = (int *)0x4;
    local_68 = 4;
    iVar12 = *(int *)(param_1 + 8);
    iVar16 = *(int *)(param_1 + 4);
    local_40 = *(undefined4 *)(param_2 + 0xc);
    local_4c = 0;
    if (local_58 == 0) {
      local_40 = 0;
    }
    local_60 = (int *)(uint)(local_58 != 0);
    iVar8 = iVar16 + iVar12 * 0x28;
    local_88 = 4;
    local_70 = 0;
    local_78 = 0;
    local_64 = 0;
    local_6c = 0;
    local_84 = 0;
    local_5c = (int *)0x0;
    local_50 = local_60;
    local_48._0_4_ = local_58;
    local_48._4_4_ = local_54;
LAB_01514188:
    uVar18 = FUN_01a41998(&local_60);
    iVar3 = (int)uVar18;
    if (iVar3 != 0) {
      if (iVar12 == 0) {
LAB_0151424c:
        FUN_006666fc(&local_38,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
        if (local_84 == local_6c) {
          FUN_019abd3c(&local_6c);
          local_88 = local_68;
        }
        local_64 = local_84 + 1;
        puVar4 = (undefined4 *)(local_88 + local_84 * 0xc);
        *puVar4 = local_38;
        puVar4[1] = local_34;
        puVar4[2] = uStack_30;
        local_84 = local_64;
      }
      else {
        bVar17 = false;
        iVar10 = iVar16;
        do {
          iVar6 = iVar10;
          while( true ) {
            cVar2 = FUN_015050f0(iVar6,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
            iVar10 = iVar6 + 0x28;
            if (cVar2 != '\0') break;
            iVar6 = iVar10;
            if (iVar10 == iVar8) {
              if (bVar17) goto LAB_01514188;
              goto LAB_0151424c;
            }
          }
          local_34 = *(undefined4 *)(iVar3 + 4);
          uStack_30 = *(undefined4 *)(iVar3 + 8);
          local_38 = 0x80000000;
          uStack_2c = param_3;
          uVar19 = FUN_01576990(iVar6 + 0x14,(int)((ulonglong)uVar18 >> 0x20),&local_38,param_4,
                                param_5);
          FUN_014fb9d0(&local_78,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
          bVar17 = true;
        } while (iVar10 != iVar8);
      }
      goto LAB_01514188;
    }
    if (local_84 != 0) {
      piVar9 = *(int **)(param_1 + 0xc);
      do {
        iVar12 = *piVar9;
        bVar17 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar17);
      *piVar9 = iVar12 + 1;
      if (iVar12 < 0) {
LAB_01514474:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1514474);
        (*pcVar1)();
      }
      uVar15 = *(uint *)(param_1 + 0x10);
      if (param_4 == 0) {
        local_60 = (int *)0x0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar7 = *(int **)(param_4 + 0xc);
        do {
          iVar12 = *piVar7;
          bVar17 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar17);
        *piVar7 = iVar12 + 1;
        if (iVar12 < 0) goto LAB_01514474;
        uVar14 = *(undefined4 *)(param_4 + 0x10);
        piVar11 = piVar9 + 2;
        uVar13 = (*(int **)(param_4 + 4))[1];
        if (uVar15 < uVar13) {
          uVar13 = 0;
        }
        else {
          iVar12 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar11,uVar13);
          if (iVar12 != 0) {
            uVar13 = 0;
          }
          piVar11 = (int *)((int)piVar11 + uVar13);
        }
        local_48 = FUN_016bc0ec(piVar11,uVar15 - uVar13);
        local_54 = (int *)0x3;
        local_60 = (int *)0x2;
        local_50 = piVar7;
        local_4c = uVar14;
      }
      uVar18 = FUN_01531840(param_3);
      piVar9 = (int *)FUN_01595b0c(piVar9,uVar15,&local_60,(int)uVar18,
                                   (int)((ulonglong)uVar18 >> 0x20),param_2,&local_6c);
      iVar12 = local_70;
      if (local_70 == local_78) {
        local_60 = piVar9;
        FUN_0155a420(&local_78);
      }
      local_70 = iVar12 + 1;
      local_74[iVar12] = (int)piVar9;
    }
    local_54 = local_74 + local_70;
    local_58 = local_78;
    local_60 = local_74;
    local_5c = local_74;
    piVar9 = (int *)thunk_FUN_01be5118(0x10);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    *piVar9 = (int)local_60;
    piVar9[1] = (int)local_5c;
    piVar9[2] = local_58;
    piVar9[3] = (int)local_54;
    if (local_84 == 0) {
      FUN_006a41c0(&local_6c);
    }
    puVar5 = &UNK_01cfa84c;
  }
  else {
    piVar9 = (int *)&DAT_00000001;
    puVar5 = &UNK_01cfc1a4;
  }
  return CONCAT44(puVar5,piVar9);
}

