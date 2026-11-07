// FUN_01505c38 @ 01505c38 size=1204 calls_out=7 calls_in=0
// strings: 

int FUN_01505c38(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  undefined4 uVar18;
  uint *puVar19;
  undefined4 uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
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
    uVar23 = param_1[0x1f];
    local_38 = *(undefined4 *)(param_2 + 0xc);
    if (local_58[2] == 0) {
      local_38 = 0;
    }
    uVar15 = param_1[0xd];
    local_58[0] = (uint)(local_58[2] != 0);
    iVar16 = param_1[0x1e];
    iVar3 = param_1[0xf];
    iVar10 = iVar16 + uVar23 * 0x28;
    uVar4 = param_1[1];
    iVar5 = param_1[3];
    iVar6 = param_1[0xc];
    iVar11 = *param_1;
    local_44 = 0;
    local_58[1] = 0;
    local_48 = local_58[0];
    local_40 = local_58[2];
    local_3c = local_4c;
LAB_01505d1c:
    do {
      uVar25 = FUN_01a41998(local_58);
      uVar12 = (undefined4)((ulonglong)uVar25 >> 0x20);
      iVar2 = (int)uVar25;
      if (iVar2 == 0) {
        return 0;
      }
      uVar18 = *(undefined4 *)(iVar2 + 4);
      iVar22 = *(int *)(iVar2 + 8);
      if (iVar5 != 0) {
        uVar7 = FUN_0155d010(param_1 + 4,uVar18,iVar22);
        uVar9 = uVar7 >> 0x19;
        local_9c = 0;
        while( true ) {
          uVar7 = uVar4 & uVar7;
          uVar13 = *(uint *)(iVar11 + uVar7);
          uVar8 = uVar13 ^ uVar9 * 0x1010101;
          uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
          while (uVar8 != 0) {
            uVar24 = uVar8 - 1 & uVar8;
            uVar21 = uVar7 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                            (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                     uVar4;
            iVar14 = iVar11 + -0x20 + uVar21 * -0x20;
            uVar8 = uVar24;
            if (iVar22 == *(int *)(iVar14 + 8)) {
              uVar20 = *(undefined4 *)(iVar14 + 4);
              iVar14 = thunk_FUN_01bed842(uVar18,uVar20,iVar22);
              if (iVar14 == 0) {
                local_34 = 0x80000000;
                local_30 = uVar20;
                local_2c = iVar22;
                local_28 = param_3;
                iVar22 = FUN_015776f4(iVar11 + -0x14 + uVar21 * -0x20,uVar12,&local_34,param_4,
                                      param_5);
                if (iVar22 != 0) {
                  return iVar22;
                }
                if (iVar3 == 0) goto LAB_01505d1c;
                uVar18 = *(undefined4 *)(iVar2 + 4);
                iVar22 = *(int *)(iVar2 + 8);
                uVar7 = FUN_01676700(param_1 + 0x10,uVar18,iVar22);
                uVar9 = uVar7 >> 0x19;
                iVar2 = 0;
                goto LAB_01505edc;
              }
            }
          }
          if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
          local_9c = local_9c + 4;
          uVar7 = uVar7 + local_9c;
        }
      }
      local_34 = 0x80000000;
      local_30 = uVar18;
      local_2c = iVar22;
      local_28 = param_3;
      if (uVar23 != 0) {
        bVar17 = false;
        iVar14 = iVar16;
        do {
          iVar22 = iVar14;
          while( true ) {
            cVar1 = FUN_015050f0(iVar22,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
            iVar14 = iVar22 + 0x28;
            if (cVar1 != '\0') break;
            iVar22 = iVar14;
            if (iVar14 == iVar10) {
              if (bVar17) goto LAB_01505d1c;
              goto LAB_015060ac;
            }
          }
          iVar22 = FUN_015776f4(iVar22 + 0x14,uVar12,&local_34,param_4,param_5);
          if (iVar22 != 0) {
            return iVar22;
          }
          bVar17 = true;
        } while (iVar14 != iVar10);
        goto LAB_01505d1c;
      }
LAB_015060ac:
      iVar2 = FUN_015776f4(param_1 + 0x18,uVar12,&local_34,param_4,param_5);
    } while (iVar2 == 0);
  }
  return iVar2;
LAB_01505edc:
  uVar7 = uVar15 & uVar7;
  uVar13 = *(uint *)(iVar6 + uVar7);
  uVar8 = uVar13 ^ uVar9 * 0x1010101;
  uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
  while( true ) {
    if (uVar8 == 0) goto LAB_01505f68;
    uVar21 = uVar7 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                    (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar15;
    iVar14 = iVar6 + -0x14 + uVar21 * -0x14;
    if ((iVar22 == *(int *)(iVar14 + 8)) &&
       (iVar14 = thunk_FUN_01bed842(uVar18,*(undefined4 *)(iVar14 + 4),iVar22), iVar14 == 0)) break;
    uVar8 = uVar8 - 1 & uVar8;
  }
  iVar2 = iVar6 + uVar21 * -0x14;
  puVar19 = *(uint **)(iVar2 + -8);
  iVar2 = *(int *)(iVar2 + -4) << 2;
  while (iVar2 != 0) {
    uVar9 = *puVar19;
    if (uVar23 <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar9,uVar23,&DAT_01cfa998);
    }
    iVar22 = FUN_015776f4(iVar16 + uVar9 * 0x28 + 0x14,uVar12,&local_34,param_4,param_5);
    iVar2 = iVar2 + -4;
    puVar19 = puVar19 + 1;
    if (iVar22 != 0) {
      return iVar22;
    }
  }
  goto LAB_01505d1c;
LAB_01505f68:
  if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) goto LAB_01505d1c;
  iVar2 = iVar2 + 4;
  uVar7 = uVar7 + iVar2;
  goto LAB_01505edc;
}

