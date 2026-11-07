// FUN_01506d38 @ 01506d38 size=1576 calls_out=17 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_01506d38(int *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined *puVar13;
  int iVar14;
  undefined4 uVar15;
  uint *puVar16;
  int *piVar17;
  bool bVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  int *piVar29;
  int iVar30;
  undefined8 uVar31;
  int local_bc;
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
    local_bc = 4;
    if (local_58 == 0) {
      local_40 = 0;
    }
    uVar10 = param_1[0x13];
    iVar24 = param_1[0x12];
    iVar25 = uVar10 * 100 + iVar24;
    iVar11 = param_1[0xf];
    local_60 = (int *)(uint)(local_58 != 0);
    iVar14 = param_1[0x10];
    uVar12 = param_1[1];
    iVar21 = *param_1;
    iVar3 = param_1[3];
    local_a8 = 0;
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
LAB_01506e28:
    uVar31 = FUN_01a41998(&local_60);
    uVar28 = (undefined4)((ulonglong)uVar31 >> 0x20);
    iVar23 = (int)uVar31;
    if (iVar23 != 0) {
      uVar26 = *(undefined4 *)(iVar23 + 4);
      iVar22 = *(int *)(iVar23 + 8);
      if (iVar14 != 0) {
        iVar19 = iVar11;
        iVar30 = iVar14 << 5;
        do {
          if (*(int *)(iVar19 + 8) == iVar22) {
            uVar15 = *(undefined4 *)(iVar19 + 4);
            iVar4 = thunk_FUN_01bed842(uVar15,uVar26,iVar22);
            if (iVar4 == 0) {
              local_38 = 0x80000000;
              local_34 = uVar15;
              local_30 = iVar22;
              local_2c = param_3;
              uVar31 = FUN_01576990(iVar19 + 0xc,uVar28,&local_38,param_4,param_5);
              FUN_014fb9d0(&local_78,(int)uVar31,(int)((ulonglong)uVar31 >> 0x20));
              if (iVar3 == 0) goto LAB_01506e28;
              uVar26 = *(undefined4 *)(iVar23 + 4);
              iVar22 = *(int *)(iVar23 + 8);
              uVar6 = FUN_01676700(param_1 + 4,uVar26,iVar22);
              uVar9 = uVar6 >> 0x19;
              iVar23 = 0;
              goto LAB_01507040;
            }
          }
          iVar19 = iVar19 + 0x20;
          iVar30 = iVar30 + -0x20;
        } while (iVar30 != 0);
      }
      if (uVar10 == 0) {
LAB_01506f50:
        FUN_006666fc(&local_38,uVar26,iVar22);
        if (local_a8 == local_6c) {
          FUN_019abd3c(&local_6c);
          local_bc = local_68;
        }
        local_64 = local_a8 + 1;
        puVar5 = (undefined4 *)(local_bc + local_a8 * 0xc);
        *puVar5 = local_38;
        puVar5[1] = local_34;
        puVar5[2] = local_30;
        local_a8 = local_64;
      }
      else {
        bVar18 = false;
        iVar22 = iVar24;
        do {
          iVar19 = iVar22;
          while( true ) {
            cVar2 = FUN_01501468(iVar19,*(undefined4 *)(iVar23 + 4),*(undefined4 *)(iVar23 + 8));
            iVar22 = iVar19 + 100;
            if (cVar2 != '\0') break;
            iVar19 = iVar22;
            if (iVar22 == iVar25) {
              if (bVar18) goto LAB_01506e28;
              uVar26 = *(undefined4 *)(iVar23 + 4);
              iVar22 = *(int *)(iVar23 + 8);
              goto LAB_01506f50;
            }
          }
          local_34 = *(undefined4 *)(iVar23 + 4);
          local_30 = *(int *)(iVar23 + 8);
          local_38 = 0x80000000;
          local_2c = param_3;
          uVar31 = FUN_01576990(iVar19 + 0x50,uVar28,&local_38,param_4,param_5);
          FUN_014fb9d0(&local_78,(int)uVar31,(int)((ulonglong)uVar31 >> 0x20));
          bVar18 = true;
        } while (iVar22 != iVar25);
      }
      goto LAB_01506e28;
    }
    if (local_a8 != 0) {
      piVar20 = (int *)param_1[0xc];
      do {
        iVar3 = *piVar20;
        bVar18 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar18);
      *piVar20 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_01507360:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1507360);
        (*pcVar1)();
      }
      uVar10 = param_1[0xd];
      if (param_4 == 0) {
        local_60 = (int *)0x0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar17 = *(int **)(param_4 + 0xc);
        do {
          iVar3 = *piVar17;
          bVar18 = (bool)hasExclusiveAccess(piVar17);
        } while (!bVar18);
        *piVar17 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_01507360;
        piVar29 = piVar20 + 2;
        uVar28 = *(undefined4 *)(param_4 + 0x10);
        uVar12 = (*(int **)(param_4 + 4))[1];
        if (uVar10 < uVar12) {
          uVar12 = 0;
        }
        else {
          iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar29,uVar12);
          if (iVar3 != 0) {
            uVar12 = 0;
          }
          piVar29 = (int *)((int)piVar29 + uVar12);
        }
        local_48 = FUN_016bc0ec(piVar29,uVar10 - uVar12);
        local_54 = (int *)0x3;
        local_60 = (int *)0x2;
        local_50 = piVar17;
        local_4c = uVar28;
      }
      uVar31 = FUN_01531840(param_3);
      piVar20 = (int *)FUN_01595b0c(piVar20,uVar10,&local_60,(int)uVar31,
                                    (int)((ulonglong)uVar31 >> 0x20),param_2,&local_6c);
      iVar3 = local_70;
      if (local_70 == local_78) {
        local_60 = piVar20;
        FUN_0155a420(&local_78);
      }
      local_70 = iVar3 + 1;
      local_74[iVar3] = (int)piVar20;
    }
    local_54 = local_74 + local_70;
    local_58 = local_78;
    local_60 = local_74;
    local_5c = local_74;
    piVar20 = (int *)thunk_FUN_01be5118(0x10);
    if (piVar20 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    *piVar20 = (int)local_60;
    piVar20[1] = (int)local_5c;
    piVar20[2] = local_58;
    piVar20[3] = (int)local_54;
    if (local_a8 == 0) {
      FUN_006a41c0(&local_6c);
    }
    puVar13 = &UNK_01cfa84c;
  }
  else {
    piVar20 = (int *)&DAT_00000001;
    puVar13 = &UNK_01cfc1a4;
  }
  return CONCAT44(puVar13,piVar20);
LAB_01507040:
  uVar6 = uVar12 & uVar6;
  uVar27 = *(uint *)(iVar21 + uVar6);
  uVar7 = uVar27 ^ uVar9 * 0x1010101;
  uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
  while( true ) {
    if (uVar7 == 0) goto LAB_015070d4;
    uVar8 = uVar6 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                   (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar12;
    iVar19 = iVar21 + -0x14 + uVar8 * -0x14;
    if ((iVar22 == *(int *)(iVar19 + 8)) &&
       (iVar19 = thunk_FUN_01bed842(uVar26,*(undefined4 *)(iVar19 + 4),iVar22), iVar19 == 0)) break;
    uVar7 = uVar7 - 1 & uVar7;
  }
  iVar22 = iVar21 + uVar8 * -0x14;
  puVar16 = *(uint **)(iVar22 + -8);
  for (iVar23 = *(int *)(iVar22 + -4) << 2; iVar23 != 0; iVar23 = iVar23 + -4) {
    uVar9 = *puVar16;
    if (uVar10 <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar9,uVar10,&DAT_01cfa9a8);
    }
    uVar31 = FUN_01576990(uVar9 * 100 + iVar24 + 0x50,uVar28,&local_38,param_4,param_5);
    FUN_014fb9d0(&local_78,(int)uVar31,(int)((ulonglong)uVar31 >> 0x20));
    puVar16 = puVar16 + 1;
  }
  goto LAB_01506e28;
LAB_015070d4:
  if ((uVar27 & 0x80808080 & uVar27 << 1) != 0) goto LAB_01506e28;
  iVar23 = iVar23 + 4;
  uVar6 = uVar6 + iVar23;
  goto LAB_01507040;
}

