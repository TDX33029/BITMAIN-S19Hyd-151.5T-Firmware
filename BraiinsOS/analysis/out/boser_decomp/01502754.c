// FUN_01502754 @ 01502754 size=1200 calls_out=7 calls_in=0
// strings: 

int FUN_01502754(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                )

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  undefined4 uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  uint uVar24;
  undefined8 uVar25;
  int local_9c;
  uint local_58 [3];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar2 = 0;
  if (*param_2 == '\x05') {
    local_58[2] = *(uint *)(param_2 + 4);
    local_4c = *(undefined4 *)(param_2 + 8);
    uVar21 = param_1[0x1f];
    local_38 = *(undefined4 *)(param_2 + 0xc);
    if (local_58[2] == 0) {
      local_38 = 0;
    }
    uVar15 = param_1[0xd];
    local_58[0] = (uint)(local_58[2] != 0);
    iVar16 = param_1[0x1e];
    iVar17 = uVar21 * 100 + iVar16;
    iVar3 = param_1[0xf];
    uVar4 = param_1[1];
    iVar5 = param_1[3];
    iVar6 = param_1[0xc];
    iVar11 = *param_1;
    local_44 = 0;
    local_58[1] = 0;
    local_48 = local_58[0];
    local_40 = local_58[2];
    local_3c = local_4c;
LAB_01502838:
    do {
      uVar25 = FUN_01a41998(local_58);
      uVar12 = (undefined4)((ulonglong)uVar25 >> 0x20);
      iVar2 = (int)uVar25;
      if (iVar2 == 0) {
        return 0;
      }
      uVar13 = *(undefined4 *)(iVar2 + 4);
      iVar20 = *(int *)(iVar2 + 8);
      if (iVar5 != 0) {
        uVar7 = FUN_0155d010(param_1 + 4,uVar13,iVar20);
        uVar10 = uVar7 >> 0x19;
        local_9c = 0;
        while( true ) {
          uVar7 = uVar4 & uVar7;
          uVar8 = *(uint *)(iVar11 + uVar7);
          uVar9 = uVar8 ^ uVar10 * 0x1010101;
          uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff;
          while (uVar9 != 0) {
            uVar22 = uVar9 - 1 & uVar9;
            uVar24 = uVar7 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                            (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) &
                     uVar4;
            iVar14 = iVar11 + -0x20 + uVar24 * -0x20;
            uVar9 = uVar22;
            if (iVar20 == *(int *)(iVar14 + 8)) {
              uVar19 = *(undefined4 *)(iVar14 + 4);
              iVar14 = thunk_FUN_01bed842(uVar13,uVar19,iVar20);
              if (iVar14 == 0) {
                local_34 = 0x80000000;
                local_30 = uVar19;
                local_2c = iVar20;
                local_28 = param_3;
                iVar20 = FUN_015776f4(iVar11 + -0x14 + uVar24 * -0x20,uVar12,&local_34,param_4,
                                      param_5);
                if (iVar20 != 0) {
                  return iVar20;
                }
                if (iVar3 == 0) goto LAB_01502838;
                uVar13 = *(undefined4 *)(iVar2 + 4);
                iVar2 = *(int *)(iVar2 + 8);
                uVar7 = FUN_01676700(param_1 + 0x10,uVar13,iVar2);
                uVar10 = uVar7 >> 0x19;
                iVar20 = 0;
                goto LAB_01502a00;
              }
            }
          }
          if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
          local_9c = local_9c + 4;
          uVar7 = uVar7 + local_9c;
        }
      }
      local_34 = 0x80000000;
      local_30 = uVar13;
      local_2c = iVar20;
      local_28 = param_3;
      if (uVar21 != 0) {
        bVar23 = false;
        iVar14 = iVar16;
        do {
          iVar20 = iVar14;
          while( true ) {
            cVar1 = FUN_01501468(iVar20,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
            iVar14 = iVar20 + 100;
            if (cVar1 != '\0') break;
            iVar20 = iVar14;
            if (iVar14 == iVar17) {
              if (!bVar23) goto LAB_01502bc4;
              goto LAB_01502838;
            }
          }
          iVar20 = FUN_015776f4(iVar20 + 0x50,uVar12,&local_34,param_4,param_5);
          if (iVar20 != 0) {
            return iVar20;
          }
          bVar23 = true;
        } while (iVar14 != iVar17);
        goto LAB_01502838;
      }
LAB_01502bc4:
      iVar2 = FUN_015776f4(param_1 + 0x18,uVar12,&local_34,param_4,param_5);
    } while (iVar2 == 0);
  }
  return iVar2;
LAB_01502a00:
  uVar7 = uVar15 & uVar7;
  uVar8 = *(uint *)(iVar6 + uVar7);
  uVar9 = uVar8 ^ uVar10 * 0x1010101;
  uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff;
  while( true ) {
    if (uVar9 == 0) goto LAB_01502a84;
    uVar22 = uVar7 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                    (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) & uVar15;
    iVar14 = iVar6 + -0x14 + uVar22 * -0x14;
    if ((iVar2 == *(int *)(iVar14 + 8)) &&
       (iVar14 = thunk_FUN_01bed842(uVar13,*(undefined4 *)(iVar14 + 4),iVar2), iVar14 == 0)) break;
    uVar9 = uVar9 - 1 & uVar9;
  }
  iVar2 = iVar6 + uVar22 * -0x14;
  puVar18 = *(uint **)(iVar2 + -8);
  iVar2 = *(int *)(iVar2 + -4) << 2;
  while (iVar2 != 0) {
    uVar10 = *puVar18;
    if (uVar21 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar10,uVar21,&DAT_01cfa998);
    }
    iVar20 = FUN_015776f4(uVar10 * 100 + iVar16 + 0x50,uVar12,&local_34,param_4,param_5);
    iVar2 = iVar2 + -4;
    puVar18 = puVar18 + 1;
    if (iVar20 != 0) {
      return iVar20;
    }
  }
  goto LAB_01502838;
LAB_01502a84:
  if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) goto LAB_01502838;
  iVar20 = iVar20 + 4;
  uVar7 = uVar7 + iVar20;
  goto LAB_01502a00;
}

