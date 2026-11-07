// FUN_015160b8 @ 015160b8 size=1616 calls_out=16 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_015160b8(int *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int *piVar16;
  undefined4 uVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  undefined8 uVar25;
  int local_c0;
  int local_bc;
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
    iVar12 = *param_1;
    uVar22 = param_1[1];
    local_c0 = 4;
    iVar9 = param_1[3];
    local_70 = (int *)(uint)(local_68 != 0);
    iVar10 = param_1[0x12];
    local_bc = 0;
    iVar19 = param_1[0x11];
    local_80 = 0;
    local_84 = (int *)0x4;
    local_88 = 0;
    local_74 = 0;
    local_78 = 4;
    local_7c = 0;
    local_5c = 0;
    local_6c = (int *)0x0;
    bVar8 = false;
    local_60 = local_70;
    local_58._0_4_ = local_68;
    local_58._4_4_ = local_64;
LAB_01516198:
    uVar25 = FUN_01a41998(&local_70);
    iVar6 = (int)uVar25;
    if (iVar6 != 0) {
      uVar17 = *(undefined4 *)(iVar6 + 4);
      iVar15 = *(int *)(iVar6 + 8);
      if (iVar9 != 0) {
        uVar3 = FUN_0155d010(param_1 + 4,uVar17,iVar15);
        uVar20 = uVar3 >> 0x19;
        iVar24 = 0;
        while( true ) {
          uVar3 = uVar22 & uVar3;
          uVar13 = *(uint *)(iVar12 + uVar3);
          uVar4 = uVar13 ^ uVar20 * 0x1010101;
          for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0;
              uVar4 = uVar4 - 1 & uVar4) {
            uVar23 = uVar3 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                            (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                     uVar22;
            iVar5 = iVar12 + -0x20 + uVar23 * -0x20;
            if (iVar15 == *(int *)(iVar5 + 8)) {
              uVar14 = *(undefined4 *)(iVar5 + 4);
              iVar5 = thunk_FUN_01bed842(uVar17,uVar14,iVar15);
              if (iVar5 == 0) {
                local_48 = 0x80000000;
                local_44 = uVar14;
                local_40 = iVar15;
                local_3c = param_3;
                uVar25 = FUN_01576990(iVar12 + -0x14 + uVar23 * -0x20,
                                      (int)((ulonglong)uVar25 >> 0x20),&local_48,param_4,param_5);
                FUN_014fb9d0(&local_88,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
                if (*(int *)(iVar6 + 8) == iVar10) {
                  iVar6 = thunk_FUN_01bed842(*(undefined4 *)(iVar6 + 4),iVar19,iVar10);
                  bVar8 = (bool)(iVar6 == 0 | bVar8);
                }
                goto LAB_01516198;
              }
            }
          }
          if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
          iVar24 = iVar24 + 4;
          uVar3 = uVar3 + iVar24;
        }
      }
      FUN_006666fc(&local_48,uVar17,iVar15);
      if (local_bc == local_7c) {
        FUN_019abd3c(&local_7c);
        local_c0 = local_78;
      }
      local_74 = local_bc + 1;
      puVar7 = (undefined4 *)(local_c0 + local_bc * 0xc);
      *puVar7 = local_48;
      puVar7[1] = local_44;
      puVar7[2] = local_40;
      local_bc = local_74;
      goto LAB_01516198;
    }
    if (local_bc != 0) {
      piVar16 = (int *)param_1[0xc];
      do {
        iVar9 = *piVar16;
        bVar2 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar2);
      *piVar16 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_015166e4;
      uVar22 = param_1[0xd];
      if (param_4 == 0) {
        local_70 = (int *)0x0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((uint *)(param_4 + 0xc),param_4);
        }
        piVar18 = *(int **)(param_4 + 0xc);
        do {
          iVar9 = *piVar18;
          bVar2 = (bool)hasExclusiveAccess(piVar18);
        } while (!bVar2);
        *piVar18 = iVar9 + 1;
        if (iVar9 < 0) goto LAB_015166e4;
        piVar21 = piVar16 + 2;
        uVar17 = *(undefined4 *)(param_4 + 0x10);
        uVar20 = (*(int **)(param_4 + 4))[1];
        if (uVar22 < uVar20) {
          uVar20 = 0;
        }
        else {
          iVar9 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar21,uVar20);
          if (iVar9 != 0) {
            uVar20 = 0;
          }
          piVar21 = (int *)((int)piVar21 + uVar20);
        }
        local_58 = FUN_016bc0ec(piVar21,uVar22 - uVar20);
        local_64 = (int *)0x3;
        local_70 = (int *)0x2;
        local_60 = piVar18;
        local_5c = uVar17;
      }
      uVar25 = FUN_01531840(param_3);
      piVar16 = (int *)FUN_01595b0c(piVar16,uVar22,&local_70,(int)uVar25,
                                    (int)((ulonglong)uVar25 >> 0x20),param_2,&local_7c);
      iVar9 = local_80;
      local_70 = piVar16;
      if (local_80 == local_88) {
        FUN_0155a420(&local_88);
      }
      local_84[iVar9] = (int)piVar16;
      local_80 = iVar9 + 1;
    }
    if (!bVar8) {
      piVar16 = (int *)param_1[0xe];
      do {
        iVar9 = *piVar16;
        bVar8 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar8);
      *piVar16 = iVar9 + 1;
      if (iVar9 < 0) {
LAB_015166e4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x15166e4);
        (*pcVar1)();
      }
      uVar22 = param_1[0xf];
      if (param_4 == 0) {
        local_70 = (int *)0x0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((uint *)(param_4 + 0xc),param_4);
        }
        piVar18 = *(int **)(param_4 + 0xc);
        do {
          iVar9 = *piVar18;
          bVar8 = (bool)hasExclusiveAccess(piVar18);
        } while (!bVar8);
        *piVar18 = iVar9 + 1;
        if (iVar9 < 0) goto LAB_015166e4;
        piVar21 = piVar16 + 2;
        uVar17 = *(undefined4 *)(param_4 + 0x10);
        uVar20 = (*(int **)(param_4 + 4))[1];
        if (uVar22 < uVar20) {
          uVar20 = 0;
        }
        else {
          iVar9 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar21,uVar20);
          if (iVar9 != 0) {
            uVar20 = 0;
          }
          piVar21 = (int *)((int)piVar21 + uVar20);
        }
        uVar25 = FUN_016bc0ec(piVar21,uVar22 - uVar20);
        local_64 = (int *)0x3;
        local_70 = (int *)0x2;
        local_60 = piVar18;
        local_5c = uVar17;
        local_58 = uVar25;
      }
      uVar25 = FUN_01531840(param_3);
      FUN_006666fc(&local_30,param_1[0x11],param_1[0x12]);
      puVar7 = (undefined4 *)((uint)&local_48 | 4);
      *puVar7 = local_30;
      puVar7[1] = uStack_2c;
      puVar7[2] = uStack_28;
      local_48 = CONCAT31(local_48._1_3_,3);
      piVar16 = (int *)FUN_015963e0(piVar16,uVar22,&local_70,(int)uVar25,
                                    (int)((ulonglong)uVar25 >> 0x20),param_2,&local_48);
      iVar9 = local_80;
      if (local_80 == local_88) {
        local_70 = piVar16;
        FUN_0155a420(&local_88);
      }
      local_80 = iVar9 + 1;
      local_84[iVar9] = (int)piVar16;
    }
    local_64 = local_84 + local_80;
    local_68 = local_88;
    local_70 = local_84;
    local_6c = local_84;
    piVar16 = (int *)thunk_FUN_01be5118(0x10);
    if (piVar16 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    *piVar16 = (int)local_70;
    piVar16[1] = (int)local_6c;
    piVar16[2] = local_68;
    piVar16[3] = (int)local_64;
    if (local_bc == 0) {
      FUN_006a41c0(&local_7c);
    }
    puVar11 = &UNK_01cfa84c;
  }
  else {
    piVar16 = (int *)&DAT_00000001;
    puVar11 = &UNK_01cfc1a4;
  }
  return CONCAT44(puVar11,piVar16);
}

