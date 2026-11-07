// FUN_01511f68 @ 01511f68 size=1144 calls_out=15 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_01511f68(int *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  int local_ac;
  int local_a8;
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
    if (local_58 == 0) {
      local_40 = 0;
    }
    iVar17 = *param_1;
    local_60 = (int *)(uint)(local_58 != 0);
    local_ac = 4;
    uVar7 = param_1[1];
    iVar8 = param_1[3];
    local_70 = 0;
    local_74 = (int *)0x4;
    local_78 = 0;
    local_64 = 0;
    local_68 = 4;
    local_6c = 0;
    local_4c = 0;
    local_a8 = 0;
    local_5c = (int *)0x0;
    local_50 = local_60;
    local_48._0_4_ = local_58;
    local_48._4_4_ = local_54;
LAB_01512030:
    uVar21 = FUN_01a41998(&local_60);
    iVar13 = (int)uVar21;
    if (iVar13 != 0) {
      uVar15 = *(undefined4 *)(iVar13 + 4);
      iVar13 = *(int *)(iVar13 + 8);
      if (iVar8 != 0) {
        uVar3 = FUN_0155d010(param_1 + 4,uVar15,iVar13);
        uVar19 = uVar3 >> 0x19;
        iVar10 = 0;
        while( true ) {
          uVar3 = uVar7 & uVar3;
          uVar18 = *(uint *)(iVar17 + uVar3);
          uVar4 = uVar18 ^ uVar19 * 0x1010101;
          for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0;
              uVar4 = uVar4 - 1 & uVar4) {
            uVar20 = uVar3 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                            (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                     uVar7;
            iVar5 = iVar17 + -0x20 + uVar20 * -0x20;
            if (iVar13 == *(int *)(iVar5 + 8)) {
              uVar11 = *(undefined4 *)(iVar5 + 4);
              iVar5 = thunk_FUN_01bed842(uVar15,uVar11,iVar13);
              if (iVar5 == 0) {
                local_38 = 0x80000000;
                local_34 = uVar11;
                local_30 = iVar13;
                local_2c = param_3;
                uVar21 = FUN_01576990(iVar17 + -0x14 + uVar20 * -0x20,
                                      (int)((ulonglong)uVar21 >> 0x20),&local_38,param_4,param_5);
                FUN_014fb9d0(&local_78,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
                goto LAB_01512030;
              }
            }
          }
          if ((uVar18 & 0x80808080 & uVar18 << 1) != 0) break;
          iVar10 = iVar10 + 4;
          uVar3 = uVar3 + iVar10;
        }
      }
      FUN_006666fc(&local_38,uVar15,iVar13);
      if (local_a8 == local_6c) {
        FUN_019abd3c(&local_6c);
        local_ac = local_68;
      }
      local_64 = local_a8 + 1;
      puVar6 = (undefined4 *)(local_ac + local_a8 * 0xc);
      *puVar6 = local_38;
      puVar6[1] = local_34;
      puVar6[2] = local_30;
      local_a8 = local_64;
      goto LAB_01512030;
    }
    if (local_a8 != 0) {
      piVar14 = (int *)param_1[0xc];
      do {
        iVar8 = *piVar14;
        bVar2 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar2);
      *piVar14 = iVar8 + 1;
      if (iVar8 < 0) {
LAB_015123cc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x15123cc);
        (*pcVar1)();
      }
      uVar7 = param_1[0xd];
      if (param_4 == 0) {
        local_60 = (int *)0x0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((uint *)(param_4 + 0xc),param_4);
        }
        piVar16 = *(int **)(param_4 + 0xc);
        do {
          iVar8 = *piVar16;
          bVar2 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar2);
        *piVar16 = iVar8 + 1;
        if (iVar8 < 0) goto LAB_015123cc;
        uVar15 = *(undefined4 *)(param_4 + 0x10);
        piVar12 = piVar14 + 2;
        uVar19 = (*(int **)(param_4 + 4))[1];
        if (uVar7 < uVar19) {
          uVar19 = 0;
        }
        else {
          iVar8 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar12,uVar19);
          if (iVar8 != 0) {
            uVar19 = 0;
          }
          piVar12 = (int *)((int)piVar12 + uVar19);
        }
        local_48 = FUN_016bc0ec(piVar12,uVar7 - uVar19);
        local_54 = (int *)0x3;
        local_60 = (int *)0x2;
        local_50 = piVar16;
        local_4c = uVar15;
      }
      uVar21 = FUN_01531840(param_3);
      piVar14 = (int *)FUN_01595b0c(piVar14,uVar7,&local_60,(int)uVar21,
                                    (int)((ulonglong)uVar21 >> 0x20),param_2,&local_6c);
      iVar8 = local_70;
      if (local_70 == local_78) {
        local_60 = piVar14;
        FUN_0155a420(&local_78);
      }
      local_70 = iVar8 + 1;
      local_74[iVar8] = (int)piVar14;
    }
    local_54 = local_74 + local_70;
    local_58 = local_78;
    local_60 = local_74;
    local_5c = local_74;
    piVar14 = (int *)thunk_FUN_01be5118(0x10);
    if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    *piVar14 = (int)local_60;
    piVar14[1] = (int)local_5c;
    piVar14[2] = local_58;
    piVar14[3] = (int)local_54;
    if (local_a8 == 0) {
      FUN_006a41c0(&local_6c);
    }
    puVar9 = &UNK_01cfa84c;
  }
  else {
    piVar14 = (int *)&DAT_00000001;
    puVar9 = &UNK_01cfc1a4;
  }
  return CONCAT44(puVar9,piVar14);
}

