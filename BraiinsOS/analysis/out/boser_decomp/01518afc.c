// FUN_01518afc @ 01518afc size=1340 calls_out=12 calls_in=0
// strings: 

int FUN_01518afc(int *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined8 uVar23;
  int local_b0;
  int *local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  int *local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar3 = 0;
  if (*param_2 == '\x05') {
    local_7c = *(int *)(param_2 + 4);
    local_78 = *(undefined4 *)(param_2 + 8);
    local_64 = *(undefined4 *)(param_2 + 0xc);
    uVar8 = param_1[1];
    if (local_7c == 0) {
      local_64 = 0;
    }
    iVar3 = param_1[3];
    iVar9 = param_1[0x11];
    iVar16 = *param_1;
    bVar2 = false;
    iVar10 = param_1[0x12];
    local_84 = (int *)(uint)(local_7c != 0);
    local_70 = 0;
    local_80 = 0;
    local_74 = local_84;
    local_6c._0_4_ = local_7c;
    local_6c._4_4_ = local_78;
LAB_01518bb0:
    uVar23 = FUN_01a41998(&local_84);
    iVar6 = (int)uVar23;
    if (iVar6 != 0) {
      if (iVar3 != 0) {
        uVar12 = *(undefined4 *)(iVar6 + 4);
        iVar14 = *(int *)(iVar6 + 8);
        uVar4 = FUN_0155d010(param_1 + 4,uVar12,iVar14);
        uVar13 = uVar4 >> 0x19;
        local_b0 = 0;
        while( true ) {
          uVar4 = uVar8 & uVar4;
          uVar17 = *(uint *)(iVar16 + uVar4);
          uVar5 = uVar17 ^ uVar13 * 0x1010101;
          uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
          while (uVar5 != 0) {
            uVar20 = uVar5 - 1 & uVar5;
            uVar22 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                            (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                     uVar8;
            iVar11 = iVar16 + -0x20 + uVar22 * -0x20;
            uVar5 = uVar20;
            if (iVar14 == *(int *)(iVar11 + 8)) {
              uVar21 = *(undefined4 *)(iVar11 + 4);
              iVar11 = thunk_FUN_01bed842(uVar12,uVar21,iVar14);
              if (iVar11 == 0) {
                local_60 = 0x80000000;
                local_5c = uVar21;
                local_58 = iVar14;
                local_54 = param_3;
                iVar14 = FUN_015776f4(iVar16 + -0x14 + uVar22 * -0x20,
                                      (int)((ulonglong)uVar23 >> 0x20),&local_60,param_4,param_5);
                if (iVar14 != 0) {
                  return iVar14;
                }
                if (*(int *)(iVar6 + 8) == iVar10) {
                  iVar6 = thunk_FUN_01bed842(*(undefined4 *)(iVar6 + 4),iVar9,iVar10);
                  bVar2 = (bool)(iVar6 == 0 | bVar2);
                }
                goto LAB_01518bb0;
              }
            }
          }
          if ((uVar17 & 0x80808080 & uVar17 << 1) != 0) break;
          local_b0 = local_b0 + 4;
          uVar4 = uVar4 + local_b0;
        }
      }
      piVar18 = (int *)param_1[0xc];
      do {
        iVar3 = *piVar18;
        bVar2 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar2);
      *piVar18 = iVar3 + 1;
      if (-1 < iVar3) {
        uVar8 = param_1[0xd];
        if (param_4 == 0) {
          local_60 = 0;
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
          if (iVar3 < 0) goto LAB_01519014;
          piVar19 = piVar18 + 2;
          uVar12 = *(undefined4 *)(param_4 + 0x10);
          uVar13 = (*(int **)(param_4 + 4))[1];
          if (uVar8 < uVar13) {
            uVar13 = 0;
          }
          else {
            iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar19,uVar13);
            if (iVar3 != 0) {
              uVar13 = 0;
            }
            piVar19 = (int *)((int)piVar19 + uVar13);
          }
          local_48 = FUN_016bc0ec(piVar19,uVar8 - uVar13);
          local_54 = 3;
          local_60 = 2;
          local_50 = piVar15;
          local_4c = uVar12;
        }
        uVar23 = FUN_01531840(param_3);
        puVar7 = (undefined4 *)thunk_FUN_01be5118(0xc);
        if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0xc);
        }
        FUN_006666fc(&local_30,*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8));
        *puVar7 = local_30;
        puVar7[1] = uStack_2c;
        puVar7[2] = uStack_28;
        local_34 = 1;
        local_3c = 1;
        local_38 = puVar7;
        iVar3 = FUN_01595b0c(piVar18,uVar8,&local_60,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20),
                             param_2,&local_3c);
        return iVar3;
      }
      goto LAB_01519014;
    }
    iVar3 = 0;
    if (!bVar2) {
      piVar18 = (int *)param_1[0xe];
      do {
        iVar3 = *piVar18;
        bVar2 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar2);
      *piVar18 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_01519014:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1519014);
        (*pcVar1)();
      }
      uVar8 = param_1[0xf];
      if (param_4 == 0) {
        local_84 = (int *)0x0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((uint *)(param_4 + 0xc),param_4);
        }
        piVar15 = *(int **)(param_4 + 0xc);
        do {
          iVar3 = *piVar15;
          bVar2 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar2);
        *piVar15 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_01519014;
        piVar19 = piVar18 + 2;
        uVar12 = *(undefined4 *)(param_4 + 0x10);
        uVar13 = (*(int **)(param_4 + 4))[1];
        if (uVar8 < uVar13) {
          uVar13 = 0;
        }
        else {
          iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar19,uVar13);
          if (iVar3 != 0) {
            uVar13 = 0;
          }
          piVar19 = (int *)((int)piVar19 + uVar13);
        }
        local_6c = FUN_016bc0ec(piVar19,uVar8 - uVar13);
        local_78 = 3;
        local_84 = (int *)0x2;
        local_74 = piVar15;
        local_70 = uVar12;
      }
      uVar23 = FUN_01531840(param_3);
      FUN_006666fc(&local_30,param_1[0x11],param_1[0x12]);
      puVar7 = (undefined4 *)((uint)&local_60 | 4);
      *puVar7 = local_30;
      puVar7[1] = uStack_2c;
      puVar7[2] = uStack_28;
      local_60 = CONCAT31(local_60._1_3_,3);
      iVar3 = FUN_015963e0(piVar18,uVar8,&local_84,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20),
                           param_2,&local_60);
    }
  }
  return iVar3;
}

