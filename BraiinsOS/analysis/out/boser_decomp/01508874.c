// FUN_01508874 @ 01508874 size=1800 calls_out=18 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_01508874(int *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int *piVar21;
  undefined4 uVar22;
  uint *puVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  bool bVar27;
  int iVar28;
  undefined4 uVar29;
  int *piVar30;
  int iVar31;
  undefined8 uVar32;
  int local_d0;
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
    local_d0 = 4;
    if (local_58 == 0) {
      local_40 = 0;
    }
    uVar8 = param_1[0x1c];
    iVar25 = param_1[0x1b];
    iVar26 = uVar8 * 100 + iVar25;
    uVar9 = param_1[0xd];
    iVar10 = param_1[0xf];
    uVar11 = param_1[1];
    iVar16 = *param_1;
    iVar12 = param_1[3];
    iVar13 = param_1[0xc];
    local_60 = (int *)(uint)(local_58 != 0);
    local_70 = 0;
    local_74 = (int *)0x4;
    local_78 = 0;
    local_64 = 0;
    local_68 = 4;
    local_6c = 0;
    local_4c = 0;
    local_5c = (int *)0x0;
    local_50 = local_60;
    local_48._0_4_ = local_58;
    local_48._4_4_ = local_54;
    iVar2 = local_64;
LAB_01508980:
    uVar32 = FUN_01a41998(&local_60);
    uVar29 = (undefined4)((ulonglong)uVar32 >> 0x20);
    iVar20 = (int)uVar32;
    if (iVar20 != 0) {
      uVar14 = *(undefined4 *)(iVar20 + 4);
      iVar28 = *(int *)(iVar20 + 8);
      if (iVar12 != 0) {
        uVar4 = FUN_0155d010(param_1 + 4,uVar14,iVar28);
        uVar6 = uVar4 >> 0x19;
        iVar31 = 0;
        while( true ) {
          uVar4 = uVar11 & uVar4;
          uVar19 = *(uint *)(iVar16 + uVar4);
          uVar5 = uVar19 ^ uVar6 * 0x1010101;
          for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0;
              uVar5 = uVar5 - 1 & uVar5) {
            uVar18 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                            (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                     uVar11;
            iVar17 = iVar16 + -0x20 + uVar18 * -0x20;
            if (iVar28 == *(int *)(iVar17 + 8)) {
              uVar22 = *(undefined4 *)(iVar17 + 4);
              iVar17 = thunk_FUN_01bed842(uVar14,uVar22,iVar28);
              if (iVar17 == 0) {
                local_38 = 0x80000000;
                local_34 = uVar22;
                local_30 = iVar28;
                local_2c = param_3;
                uVar32 = FUN_01576990(iVar16 + -0x14 + uVar18 * -0x20,uVar29,&local_38,param_4,
                                      param_5);
                FUN_014fb9d0(&local_78,(int)uVar32,(int)((ulonglong)uVar32 >> 0x20));
                if (iVar10 == 0) goto LAB_01508980;
                uVar14 = *(undefined4 *)(iVar20 + 4);
                iVar20 = *(int *)(iVar20 + 8);
                uVar4 = FUN_01676700(param_1 + 0x10,uVar14,iVar20);
                uVar6 = uVar4 >> 0x19;
                iVar28 = 0;
                goto LAB_01508b40;
              }
            }
          }
          if ((uVar19 & 0x80808080 & uVar19 << 1) != 0) break;
          iVar31 = iVar31 + 4;
          uVar4 = uVar4 + iVar31;
        }
      }
      if (uVar8 == 0) {
LAB_01508d34:
        FUN_006666fc(&local_38,uVar14,iVar28);
        if (iVar2 == local_6c) {
          FUN_019abd3c(&local_6c);
          local_d0 = local_68;
        }
        local_64 = iVar2 + 1;
        puVar7 = (undefined4 *)(local_d0 + iVar2 * 0xc);
        *puVar7 = local_38;
        puVar7[1] = local_34;
        puVar7[2] = local_30;
        iVar2 = local_64;
      }
      else {
        bVar27 = false;
        iVar28 = iVar25;
        do {
          iVar31 = iVar28;
          while( true ) {
            cVar3 = FUN_01501468(iVar31,*(undefined4 *)(iVar20 + 4),*(undefined4 *)(iVar20 + 8));
            iVar28 = iVar31 + 100;
            if (cVar3 != '\0') break;
            iVar31 = iVar28;
            if (iVar28 == iVar26) {
              if (bVar27) goto LAB_01508980;
              uVar14 = *(undefined4 *)(iVar20 + 4);
              iVar28 = *(int *)(iVar20 + 8);
              goto LAB_01508d34;
            }
          }
          local_34 = *(undefined4 *)(iVar20 + 4);
          local_30 = *(int *)(iVar20 + 8);
          local_38 = 0x80000000;
          local_2c = param_3;
          uVar32 = FUN_01576990(iVar31 + 0x50,uVar29,&local_38,param_4,param_5);
          FUN_014fb9d0(&local_78,(int)uVar32,(int)((ulonglong)uVar32 >> 0x20));
          bVar27 = true;
        } while (iVar28 != iVar26);
      }
      goto LAB_01508980;
    }
    if (iVar2 != 0) {
      piVar21 = (int *)param_1[0x18];
      do {
        iVar10 = *piVar21;
        bVar27 = (bool)hasExclusiveAccess(piVar21);
      } while (!bVar27);
      *piVar21 = iVar10 + 1;
      if (iVar10 < 0) {
LAB_01508f6c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1508f6c);
        (*pcVar1)();
      }
      uVar8 = param_1[0x19];
      if (param_4 == 0) {
        local_60 = (int *)0x0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar24 = *(int **)(param_4 + 0xc);
        do {
          iVar10 = *piVar24;
          bVar27 = (bool)hasExclusiveAccess(piVar24);
        } while (!bVar27);
        *piVar24 = iVar10 + 1;
        if (iVar10 < 0) goto LAB_01508f6c;
        piVar30 = piVar21 + 2;
        uVar29 = *(undefined4 *)(param_4 + 0x10);
        uVar9 = (*(int **)(param_4 + 4))[1];
        if (uVar8 < uVar9) {
          uVar9 = 0;
        }
        else {
          iVar10 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar30,uVar9);
          if (iVar10 != 0) {
            uVar9 = 0;
          }
          piVar30 = (int *)((int)piVar30 + uVar9);
        }
        local_48 = FUN_016bc0ec(piVar30,uVar8 - uVar9);
        local_54 = (int *)0x3;
        local_60 = (int *)0x2;
        local_50 = piVar24;
        local_4c = uVar29;
      }
      uVar32 = FUN_01531840(param_3);
      piVar21 = (int *)FUN_01595b0c(piVar21,uVar8,&local_60,(int)uVar32,
                                    (int)((ulonglong)uVar32 >> 0x20),param_2,&local_6c);
      iVar10 = local_70;
      if (local_70 == local_78) {
        local_60 = piVar21;
        FUN_0155a420(&local_78);
      }
      local_70 = iVar10 + 1;
      local_74[iVar10] = (int)piVar21;
    }
    local_54 = local_74 + local_70;
    local_58 = local_78;
    local_60 = local_74;
    local_5c = local_74;
    piVar21 = (int *)thunk_FUN_01be5118(0x10);
    if (piVar21 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    *piVar21 = (int)local_60;
    piVar21[1] = (int)local_5c;
    piVar21[2] = local_58;
    piVar21[3] = (int)local_54;
    if (iVar2 == 0) {
      FUN_006a41c0(&local_6c);
    }
    puVar15 = &UNK_01cfa84c;
  }
  else {
    piVar21 = (int *)&DAT_00000001;
    puVar15 = &UNK_01cfc1a4;
  }
  return CONCAT44(puVar15,piVar21);
LAB_01508b40:
  uVar4 = uVar9 & uVar4;
  uVar19 = *(uint *)(iVar13 + uVar4);
  uVar5 = uVar19 ^ uVar6 * 0x1010101;
  uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
  while( true ) {
    if (uVar5 == 0) goto LAB_01508bdc;
    uVar18 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                    (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar9;
    iVar31 = iVar13 + -0x14 + uVar18 * -0x14;
    if ((iVar20 == *(int *)(iVar31 + 8)) &&
       (iVar31 = thunk_FUN_01bed842(uVar14,*(undefined4 *)(iVar31 + 4),iVar20), iVar31 == 0)) break;
    uVar5 = uVar5 - 1 & uVar5;
  }
  iVar28 = iVar13 + uVar18 * -0x14;
  puVar23 = *(uint **)(iVar28 + -8);
  for (iVar20 = *(int *)(iVar28 + -4) << 2; iVar20 != 0; iVar20 = iVar20 + -4) {
    uVar6 = *puVar23;
    if (uVar8 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar6,uVar8,&DAT_01cfa9a8);
    }
    uVar32 = FUN_01576990(uVar6 * 100 + iVar25 + 0x50,uVar29,&local_38,param_4,param_5);
    FUN_014fb9d0(&local_78,(int)uVar32,(int)((ulonglong)uVar32 >> 0x20));
    puVar23 = puVar23 + 1;
  }
  goto LAB_01508980;
LAB_01508bdc:
  if ((uVar19 & 0x80808080 & uVar19 << 1) != 0) goto LAB_01508980;
  iVar28 = iVar28 + 4;
  uVar4 = uVar4 + iVar28;
  goto LAB_01508b40;
}

