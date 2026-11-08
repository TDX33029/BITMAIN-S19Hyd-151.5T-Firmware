// FUN_015077b4 @ 015077b4 size=1312 calls_out=13 calls_in=0
// strings: 

int FUN_015077b4(int *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  int *piVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  undefined4 uVar24;
  int *piVar25;
  undefined4 uVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  uint local_90 [3];
  undefined4 local_84;
  uint local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  int *local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 != '\x05') {
    return 0;
  }
  local_90[2] = *(uint *)(param_2 + 4);
  local_84 = *(undefined4 *)(param_2 + 8);
  local_70 = *(undefined4 *)(param_2 + 0xc);
  if (local_90[2] == 0) {
    local_70 = 0;
  }
  uVar12 = param_1[0x13];
  local_90[0] = (uint)(local_90[2] != 0);
  iVar14 = param_1[0x12];
  iVar27 = uVar12 * 100 + iVar14;
  uVar3 = param_1[1];
  iVar13 = *param_1;
  iVar4 = param_1[3];
  local_7c = 0;
  local_90[1] = 0;
  iVar15 = param_1[0x10];
  iVar5 = param_1[0xf];
  local_80 = local_90[0];
  local_78 = local_90[2];
  local_74 = local_84;
LAB_01507874:
  do {
    uVar30 = FUN_01a41998(local_90);
    uVar29 = (undefined4)((ulonglong)uVar30 >> 0x20);
    iVar28 = (int)uVar30;
    if (iVar28 == 0) {
      return 0;
    }
    uVar26 = *(undefined4 *)(iVar28 + 4);
    iVar21 = *(int *)(iVar28 + 8);
    if (iVar15 != 0) {
      iVar16 = iVar5;
      iVar22 = iVar15 << 5;
      do {
        if (*(int *)(iVar16 + 8) == iVar21) {
          uVar24 = *(undefined4 *)(iVar16 + 4);
          iVar6 = thunk_FUN_01bed842(uVar24,uVar26,iVar21);
          if (iVar6 == 0) {
            local_5c = 0x80000000;
            local_58 = uVar24;
            local_54 = iVar21;
            local_50 = param_3;
            iVar21 = FUN_015776f4(iVar16 + 0xc,uVar29,&local_5c,param_4,param_5);
            if (iVar21 != 0) {
              return iVar21;
            }
            if (iVar4 == 0) goto LAB_01507874;
            uVar26 = *(undefined4 *)(iVar28 + 4);
            iVar28 = *(int *)(iVar28 + 8);
            uVar7 = FUN_01676700(param_1 + 4,uVar26,iVar28);
            uVar10 = uVar7 >> 0x19;
            iVar21 = 0;
            goto LAB_01507a0c;
          }
        }
        iVar16 = iVar16 + 0x20;
        iVar22 = iVar22 + -0x20;
      } while (iVar22 != 0);
    }
    local_6c = 0x80000000;
    local_68 = uVar26;
    local_64 = iVar21;
    local_60 = param_3;
    if (uVar12 == 0) goto LAB_01507b30;
    bVar20 = false;
    iVar21 = iVar14;
    do {
      iVar16 = iVar21;
      while( true ) {
        cVar2 = FUN_01501468(iVar16,*(undefined4 *)(iVar28 + 4),*(undefined4 *)(iVar28 + 8));
        iVar21 = iVar16 + 100;
        if (cVar2 != '\0') break;
        iVar16 = iVar21;
        if (iVar21 == iVar27) {
          if (!bVar20) goto LAB_01507b30;
          goto LAB_01507874;
        }
      }
      iVar16 = FUN_015776f4(iVar16 + 0x50,uVar29,&local_6c,param_4,param_5);
      if (iVar16 != 0) {
        return iVar16;
      }
      bVar20 = true;
    } while (iVar21 != iVar27);
  } while( true );
LAB_01507a0c:
  uVar7 = uVar3 & uVar7;
  uVar17 = *(uint *)(iVar13 + uVar7);
  uVar8 = uVar17 ^ uVar10 * 0x1010101;
  uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
  while( true ) {
    if (uVar8 == 0) goto LAB_01507aa8;
    uVar9 = uVar7 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                   (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar3;
    iVar16 = iVar13 + -0x14 + uVar9 * -0x14;
    if ((iVar28 == *(int *)(iVar16 + 8)) &&
       (iVar16 = thunk_FUN_01bed842(uVar26,*(undefined4 *)(iVar16 + 4),iVar28), iVar16 == 0)) break;
    uVar8 = uVar8 - 1 & uVar8;
  }
  iVar28 = iVar13 + uVar9 * -0x14;
  puVar18 = *(uint **)(iVar28 + -8);
  iVar28 = *(int *)(iVar28 + -4) << 2;
  while (iVar28 != 0) {
    uVar10 = *puVar18;
    if (uVar12 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar10,uVar12,&DAT_01cfa9d8);
    }
    iVar21 = FUN_015776f4(uVar10 * 100 + iVar14 + 0x50,uVar29,&local_5c,param_4,param_5);
    iVar28 = iVar28 + -4;
    puVar18 = puVar18 + 1;
    if (iVar21 != 0) {
      return iVar21;
    }
  }
  goto LAB_01507874;
LAB_01507aa8:
  if ((uVar17 & 0x80808080 & uVar17 << 1) != 0) goto LAB_01507874;
  iVar21 = iVar21 + 4;
  uVar7 = uVar7 + iVar21;
  goto LAB_01507a0c;
LAB_01507b30:
  piVar19 = (int *)param_1[0xc];
  do {
    iVar4 = *piVar19;
    bVar20 = (bool)hasExclusiveAccess(piVar19);
  } while (!bVar20);
  *piVar19 = iVar4 + 1;
  if (iVar4 < 0) {
LAB_01507cb0:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1507cb0);
    (*pcVar1)();
  }
  uVar3 = param_1[0xd];
  if (param_4 == 0) {
    local_5c = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar25 = *(int **)(param_4 + 0xc);
    do {
      iVar4 = *piVar25;
      bVar20 = (bool)hasExclusiveAccess(piVar25);
    } while (!bVar20);
    *piVar25 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_01507cb0;
    uVar29 = *(undefined4 *)(param_4 + 0x10);
    piVar23 = piVar19 + 2;
    uVar12 = (*(int **)(param_4 + 4))[1];
    if (uVar3 < uVar12) {
      uVar12 = 0;
    }
    else {
      iVar4 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar23,uVar12);
      if (iVar4 != 0) {
        uVar12 = 0;
      }
      piVar23 = (int *)((int)piVar23 + uVar12);
    }
    local_44 = FUN_016bc0ec(piVar23,uVar3 - uVar12);
    local_50 = 3;
    local_5c = 2;
    local_4c = piVar25;
    local_48 = uVar29;
  }
  uVar30 = FUN_01531840(param_3);
  puVar11 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  FUN_006666fc(&local_30,*(undefined4 *)(iVar28 + 4),*(undefined4 *)(iVar28 + 8));
  *puVar11 = local_30;
  puVar11[1] = uStack_2c;
  puVar11[2] = uStack_28;
  local_34 = 1;
  local_3c = 1;
  local_38 = puVar11;
  iVar4 = FUN_01595b0c(piVar19,uVar3,&local_5c,(int)uVar30,(int)((ulonglong)uVar30 >> 0x20),param_2,
                       &local_3c);
  return iVar4;
}

