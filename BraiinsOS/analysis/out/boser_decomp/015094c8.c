// FUN_015094c8 @ 015094c8 size=1540 calls_out=14 calls_in=0
// strings: 

int FUN_015094c8(int *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  bool bVar18;
  int iVar19;
  uint *puVar20;
  int *piVar21;
  undefined4 uVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  int iVar29;
  undefined8 uVar30;
  int local_d8;
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
  uVar24 = param_1[0x1c];
  if (local_90[2] == 0) {
    local_70 = 0;
  }
  local_90[0] = (uint)(local_90[2] != 0);
  uVar3 = param_1[0xd];
  iVar11 = param_1[0x1b];
  iVar29 = uVar24 * 100 + iVar11;
  iVar4 = param_1[0xf];
  iVar15 = *param_1;
  uVar5 = param_1[1];
  iVar12 = param_1[0xc];
  iVar6 = param_1[3];
  local_7c = 0;
  local_90[1] = 0;
  local_80 = local_90[0];
  local_78 = local_90[2];
  local_74 = local_84;
LAB_015095a8:
  do {
    uVar30 = FUN_01a41998(local_90);
    uVar28 = (undefined4)((ulonglong)uVar30 >> 0x20);
    iVar16 = (int)uVar30;
    if (iVar16 == 0) {
      return 0;
    }
    uVar27 = *(undefined4 *)(iVar16 + 4);
    iVar19 = *(int *)(iVar16 + 8);
    if (iVar6 != 0) {
      uVar7 = FUN_0155d010(param_1 + 4,uVar27,iVar19);
      uVar9 = uVar7 >> 0x19;
      local_d8 = 0;
      while( true ) {
        uVar7 = uVar5 & uVar7;
        uVar13 = *(uint *)(iVar15 + uVar7);
        uVar8 = uVar13 ^ uVar9 * 0x1010101;
        uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
        while (uVar8 != 0) {
          uVar25 = uVar8 - 1 & uVar8;
          uVar26 = uVar7 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                          (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar5
          ;
          iVar14 = iVar15 + -0x20 + uVar26 * -0x20;
          uVar8 = uVar25;
          if (iVar19 == *(int *)(iVar14 + 8)) {
            uVar22 = *(undefined4 *)(iVar14 + 4);
            iVar14 = thunk_FUN_01bed842(uVar27,uVar22,iVar19);
            if (iVar14 == 0) {
              local_5c = 0x80000000;
              local_58 = uVar22;
              local_54 = iVar19;
              local_50 = param_3;
              iVar19 = FUN_015776f4(iVar15 + -0x14 + uVar26 * -0x20,uVar28,&local_5c,param_4,param_5
                                   );
              if (iVar19 != 0) {
                return iVar19;
              }
              if (iVar4 == 0) goto LAB_015095a8;
              uVar27 = *(undefined4 *)(iVar16 + 4);
              iVar19 = *(int *)(iVar16 + 8);
              uVar7 = FUN_01676700(param_1 + 0x10,uVar27,iVar19);
              uVar9 = uVar7 >> 0x19;
              iVar16 = 0;
              goto LAB_01509768;
            }
          }
        }
        if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
        local_d8 = local_d8 + 4;
        uVar7 = uVar7 + local_d8;
      }
    }
    local_6c = 0x80000000;
    local_68 = uVar27;
    local_64 = iVar19;
    local_60 = param_3;
    if (uVar24 == 0) goto LAB_01509940;
    bVar18 = false;
    iVar19 = iVar11;
    do {
      iVar14 = iVar19;
      while( true ) {
        cVar2 = FUN_01501468(iVar14,*(undefined4 *)(iVar16 + 4),*(undefined4 *)(iVar16 + 8));
        iVar19 = iVar14 + 100;
        if (cVar2 != '\0') break;
        iVar14 = iVar19;
        if (iVar19 == iVar29) {
          if (bVar18) goto LAB_015095a8;
          goto LAB_01509940;
        }
      }
      iVar14 = FUN_015776f4(iVar14 + 0x50,uVar28,&local_6c,param_4,param_5);
      if (iVar14 != 0) {
        return iVar14;
      }
      bVar18 = true;
    } while (iVar19 != iVar29);
  } while( true );
LAB_01509768:
  uVar7 = uVar3 & uVar7;
  uVar13 = *(uint *)(iVar12 + uVar7);
  uVar8 = uVar13 ^ uVar9 * 0x1010101;
  uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
  while( true ) {
    if (uVar8 == 0) goto LAB_015097f8;
    uVar25 = uVar7 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                    (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar3;
    iVar14 = iVar12 + -0x14 + uVar25 * -0x14;
    if ((iVar19 == *(int *)(iVar14 + 8)) &&
       (iVar14 = thunk_FUN_01bed842(uVar27,*(undefined4 *)(iVar14 + 4),iVar19), iVar14 == 0)) break;
    uVar8 = uVar8 - 1 & uVar8;
  }
  iVar16 = iVar12 + uVar25 * -0x14;
  puVar20 = *(uint **)(iVar16 + -8);
  iVar16 = *(int *)(iVar16 + -4) << 2;
  while (iVar16 != 0) {
    uVar9 = *puVar20;
    if (uVar24 <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar9,uVar24,&DAT_01cfa9d8);
    }
    iVar19 = FUN_015776f4(uVar9 * 100 + iVar11 + 0x50,uVar28,&local_5c,param_4,param_5);
    iVar16 = iVar16 + -4;
    puVar20 = puVar20 + 1;
    if (iVar19 != 0) {
      return iVar19;
    }
  }
  goto LAB_015095a8;
LAB_015097f8:
  if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) goto LAB_015095a8;
  iVar16 = iVar16 + 4;
  uVar7 = uVar7 + iVar16;
  goto LAB_01509768;
LAB_01509940:
  piVar17 = (int *)param_1[0x18];
  do {
    iVar4 = *piVar17;
    bVar18 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar18);
  *piVar17 = iVar4 + 1;
  if (iVar4 < 0) {
LAB_01509aa8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1509aa8);
    (*pcVar1)();
  }
  uVar24 = param_1[0x19];
  if (param_4 == 0) {
    local_5c = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar23 = *(int **)(param_4 + 0xc);
    do {
      iVar4 = *piVar23;
      bVar18 = (bool)hasExclusiveAccess(piVar23);
    } while (!bVar18);
    *piVar23 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_01509aa8;
    piVar21 = piVar17 + 2;
    uVar28 = *(undefined4 *)(param_4 + 0x10);
    uVar3 = (*(int **)(param_4 + 4))[1];
    if (uVar24 < uVar3) {
      uVar3 = 0;
    }
    else {
      iVar4 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar21,uVar3);
      if (iVar4 != 0) {
        uVar3 = 0;
      }
      piVar21 = (int *)((int)piVar21 + uVar3);
    }
    local_44 = FUN_016bc0ec(piVar21,uVar24 - uVar3);
    local_50 = 3;
    local_5c = 2;
    local_4c = piVar23;
    local_48 = uVar28;
  }
  uVar30 = FUN_01531840(param_3);
  puVar10 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  FUN_006666fc(&local_30,*(undefined4 *)(iVar16 + 4),*(undefined4 *)(iVar16 + 8));
  *puVar10 = local_30;
  puVar10[1] = uStack_2c;
  puVar10[2] = uStack_28;
  local_34 = 1;
  local_3c = 1;
  local_38 = puVar10;
  iVar4 = FUN_01595b0c(piVar17,uVar24,&local_5c,(int)uVar30,(int)((ulonglong)uVar30 >> 0x20),param_2
                       ,&local_3c);
  return iVar4;
}

