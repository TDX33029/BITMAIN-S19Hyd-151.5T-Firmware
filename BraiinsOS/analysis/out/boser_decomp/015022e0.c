// FUN_015022e0 @ 015022e0 size=1136 calls_out=7 calls_in=0
// strings: 

bool FUN_015022e0(int *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  uint *puVar22;
  uint uVar23;
  undefined8 uVar24;
  int local_84;
  int local_80;
  uint local_48 [3];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  bVar21 = true;
  if (*param_2 == '\x05') {
    local_48[2] = *(uint *)(param_2 + 4);
    local_3c = *(undefined4 *)(param_2 + 8);
    uVar17 = param_1[0x1f];
    local_28 = *(undefined4 *)(param_2 + 0xc);
    if (local_48[2] == 0) {
      local_28 = 0;
    }
    iVar19 = param_1[0x1e];
    iVar8 = uVar17 * 100 + iVar19;
    local_48[0] = (uint)(local_48[2] != 0);
    uVar9 = param_1[0xd];
    iVar14 = param_1[0xc];
    iVar10 = param_1[0xf];
    iVar15 = *param_1;
    uVar11 = param_1[1];
    iVar2 = param_1[3];
    local_34 = 0;
    local_48[1] = 0;
    local_38 = local_48[0];
    local_30 = local_48[2];
    local_2c = local_3c;
LAB_015023b8:
    do {
      uVar24 = FUN_01a41998(local_48);
      uVar12 = (undefined4)((ulonglong)uVar24 >> 0x20);
      iVar3 = (int)uVar24;
      if (iVar3 == 0) break;
      if (iVar2 != 0) {
        uVar18 = *(undefined4 *)(iVar3 + 4);
        iVar20 = *(int *)(iVar3 + 8);
        uVar4 = FUN_0155d010(param_1 + 4,uVar18,iVar20);
        uVar7 = uVar4 >> 0x19;
        local_84 = 0;
        while( true ) {
          uVar4 = uVar11 & uVar4;
          uVar5 = *(uint *)(iVar15 + uVar4);
          uVar6 = uVar5 ^ uVar7 * 0x1010101;
          uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
          while (uVar6 != 0) {
            uVar16 = uVar6 - 1 & uVar6;
            uVar23 = uVar4 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                            (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                     uVar11;
            iVar13 = iVar15 + -0x20 + uVar23 * -0x20;
            uVar6 = uVar16;
            if ((iVar20 == *(int *)(iVar13 + 8)) &&
               (iVar13 = thunk_FUN_01bed842(uVar18,*(undefined4 *)(iVar13 + 4),iVar20), iVar13 == 0)
               ) {
              iVar20 = FUN_01577618(iVar15 + -0x14 + uVar23 * -0x20,uVar12,param_3);
              if (iVar20 == 0) goto LAB_0150272c;
              if (iVar10 == 0) goto LAB_015023b8;
              uVar18 = *(undefined4 *)(iVar3 + 4);
              iVar20 = *(int *)(iVar3 + 8);
              uVar4 = FUN_01676700(param_1 + 0x10,uVar18,iVar20);
              uVar7 = uVar4 >> 0x19;
              local_80 = 0;
              goto LAB_0150255c;
            }
          }
          if ((uVar5 & 0x80808080 & uVar5 << 1) != 0) break;
          local_84 = local_84 + 4;
          uVar4 = uVar4 + local_84;
        }
      }
      if (uVar17 != 0) {
        bVar21 = false;
        iVar20 = iVar19;
        do {
          while( true ) {
            cVar1 = FUN_01501468(iVar20,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
            iVar13 = iVar20 + 100;
            if (cVar1 == '\0') break;
            iVar20 = FUN_01577618(iVar20 + 0x50,uVar12,param_3);
            if (iVar20 == 0) goto LAB_0150272c;
            bVar21 = true;
            iVar20 = iVar13;
            if (iVar13 == iVar8) goto LAB_015023b8;
          }
          iVar20 = iVar13;
        } while (iVar13 != iVar8);
        if (bVar21) goto LAB_015023b8;
      }
      iVar20 = FUN_01577618(param_1 + 0x18,uVar12,param_3);
    } while (iVar20 != 0);
LAB_0150272c:
    bVar21 = iVar3 == 0;
  }
  return bVar21;
LAB_0150255c:
  uVar4 = uVar9 & uVar4;
  uVar6 = *(uint *)(iVar14 + uVar4);
  uVar5 = uVar6 ^ uVar7 * 0x1010101;
  uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
  while (uVar5 != 0) {
    uVar16 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                    (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar9;
    uVar5 = uVar5 - 1 & uVar5;
    iVar13 = iVar14 + -0x14 + uVar16 * -0x14;
    if ((iVar20 == *(int *)(iVar13 + 8)) &&
       (iVar13 = thunk_FUN_01bed842(uVar18,*(undefined4 *)(iVar13 + 4),iVar20), iVar13 == 0)) {
      iVar20 = iVar14 + uVar16 * -0x14;
      puVar22 = *(uint **)(iVar20 + -8);
      iVar20 = *(int *)(iVar20 + -4) << 2;
      goto LAB_015026cc;
    }
  }
  if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) goto LAB_015023b8;
  local_80 = local_80 + 4;
  uVar4 = uVar4 + local_80;
  goto LAB_0150255c;
LAB_015026cc:
  if (iVar20 == 0) goto LAB_015023b8;
  uVar7 = *puVar22;
  if (uVar17 <= uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar7,uVar17,&DAT_01cfa988);
  }
  iVar13 = FUN_01577618(uVar7 * 100 + iVar19 + 0x50,uVar12,param_3);
  iVar20 = iVar20 + -4;
  puVar22 = puVar22 + 1;
  if (iVar13 == 0) goto LAB_0150272c;
  goto LAB_015026cc;
}

