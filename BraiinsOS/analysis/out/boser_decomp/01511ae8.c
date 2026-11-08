// FUN_01511ae8 @ 01511ae8 size=892 calls_out=14 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01511ae8(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  int local_7c;
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
  int local_30;
  undefined4 local_2c;
  
  if (*param_2 == '\x05') {
    local_58 = *(int *)(param_2 + 4);
    local_54 = *(int **)(param_2 + 8);
    local_40 = *(undefined4 *)(param_2 + 0xc);
    local_7c = 4;
    if (local_58 == 0) {
      local_40 = 0;
    }
    iVar3 = *(int *)(param_1 + 4);
    iVar6 = *(int *)(param_1 + 8);
    local_74 = (int *)0x4;
    local_68 = 4;
    local_60 = (int *)(uint)(local_58 != 0);
    local_70 = 0;
    local_78 = 0;
    local_64 = 0;
    local_6c = 0;
    local_4c = 0;
    local_5c = (int *)0x0;
    iVar15 = 0;
    local_50 = local_60;
    local_48._0_4_ = local_58;
    local_48._4_4_ = local_54;
LAB_01511b8c:
    uVar19 = FUN_01a41998(&local_60);
    iVar9 = (int)uVar19;
    if (iVar9 != 0) {
      uVar8 = *(undefined4 *)(iVar9 + 4);
      iVar9 = *(int *)(iVar9 + 8);
      if (iVar6 != 0) {
        iVar16 = iVar6 << 5;
        iVar17 = iVar3;
        do {
          if (*(int *)(iVar17 + 8) == iVar9) {
            uVar13 = *(undefined4 *)(iVar17 + 4);
            iVar4 = thunk_FUN_01bed842(uVar13,uVar8,iVar9);
            if (iVar4 == 0) {
              local_38 = 0x80000000;
              local_34 = uVar13;
              local_30 = iVar9;
              local_2c = param_3;
              uVar19 = FUN_01576990(iVar17 + 0xc,(int)((ulonglong)uVar19 >> 0x20),&local_38,param_4,
                                    param_5);
              FUN_014fb9d0(&local_78,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
              goto LAB_01511b8c;
            }
          }
          iVar17 = iVar17 + 0x20;
          iVar16 = iVar16 + -0x20;
        } while (iVar16 != 0);
      }
      FUN_006666fc(&local_38,uVar8,iVar9);
      if (iVar15 == local_6c) {
        FUN_019abd3c(&local_6c);
        local_7c = local_68;
      }
      local_64 = iVar15 + 1;
      puVar5 = (undefined4 *)(local_7c + iVar15 * 0xc);
      *puVar5 = local_38;
      puVar5[1] = local_34;
      puVar5[2] = local_30;
      iVar15 = local_64;
      goto LAB_01511b8c;
    }
    if (iVar15 != 0) {
      piVar10 = *(int **)(param_1 + 0xc);
      do {
        iVar3 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_01511e50:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1511e50);
        (*pcVar1)();
      }
      uVar14 = *(uint *)(param_1 + 0x10);
      if (param_4 == 0) {
        local_60 = (int *)0x0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar11 = *(int **)(param_4 + 0xc);
        do {
          iVar3 = *piVar11;
          bVar2 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar2);
        *piVar11 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_01511e50;
        piVar12 = piVar10 + 2;
        uVar8 = *(undefined4 *)(param_4 + 0x10);
        uVar18 = (*(int **)(param_4 + 4))[1];
        if (uVar14 < uVar18) {
          uVar18 = 0;
        }
        else {
          iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar12,uVar18);
          if (iVar3 != 0) {
            uVar18 = 0;
          }
          piVar12 = (int *)((int)piVar12 + uVar18);
        }
        local_48 = FUN_016bc0ec(piVar12,uVar14 - uVar18);
        local_54 = (int *)0x3;
        local_60 = (int *)0x2;
        local_50 = piVar11;
        local_4c = uVar8;
      }
      uVar19 = FUN_01531840(param_3);
      piVar10 = (int *)FUN_01595b0c(piVar10,uVar14,&local_60,(int)uVar19,
                                    (int)((ulonglong)uVar19 >> 0x20),param_2,&local_6c);
      iVar3 = local_70;
      if (local_70 == local_78) {
        local_60 = piVar10;
        FUN_0155a420(&local_78);
      }
      local_70 = iVar3 + 1;
      local_74[iVar3] = (int)piVar10;
    }
    local_54 = local_74 + local_70;
    local_58 = local_78;
    local_60 = local_74;
    local_5c = local_74;
    piVar10 = (int *)thunk_FUN_01be5118(0x10);
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    *piVar10 = (int)local_60;
    piVar10[1] = (int)local_5c;
    piVar10[2] = local_58;
    piVar10[3] = (int)local_54;
    if (iVar15 == 0) {
      FUN_006a41c0(&local_6c);
    }
    puVar7 = &UNK_01cfa84c;
  }
  else {
    piVar10 = (int *)&DAT_00000001;
    puVar7 = &UNK_01cfc1a4;
  }
  return CONCAT44(puVar7,piVar10);
}

