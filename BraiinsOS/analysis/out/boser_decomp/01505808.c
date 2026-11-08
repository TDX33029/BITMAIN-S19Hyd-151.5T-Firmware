// FUN_01505808 @ 01505808 size=1068 calls_out=7 calls_in=0
// strings: 

bool FUN_01505808(int *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  int local_80;
  uint local_48 [3];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  bVar20 = true;
  if (*param_2 == '\x05') {
    local_48[2] = *(uint *)(param_2 + 4);
    local_3c = *(undefined4 *)(param_2 + 8);
    uVar15 = param_1[0x1f];
    local_28 = *(undefined4 *)(param_2 + 0xc);
    if (local_48[2] == 0) {
      local_28 = 0;
    }
    local_34 = 0;
    local_48[1] = 0;
    iVar18 = param_1[0x1e];
    iVar22 = iVar18 + uVar15 * 0x28;
    uVar8 = param_1[0xd];
    local_48[0] = (uint)(local_48[2] != 0);
    iVar9 = param_1[0xf];
    iVar14 = param_1[0xc];
    iVar16 = *param_1;
    uVar10 = param_1[1];
    iVar2 = param_1[3];
    local_38 = local_48[0];
    local_30 = local_48[2];
    local_2c = local_3c;
LAB_015058d8:
    do {
      uVar24 = FUN_01a41998(local_48);
      uVar11 = (undefined4)((ulonglong)uVar24 >> 0x20);
      iVar3 = (int)uVar24;
      if (iVar3 == 0) break;
      if (iVar2 != 0) {
        iVar23 = *(int *)(iVar3 + 8);
        uVar12 = *(undefined4 *)(iVar3 + 4);
        uVar4 = FUN_0155d010(param_1 + 4,uVar12,iVar23);
        uVar7 = uVar4 >> 0x19;
        local_80 = 0;
        while( true ) {
          uVar4 = uVar10 & uVar4;
          uVar5 = *(uint *)(iVar16 + uVar4);
          uVar6 = uVar5 ^ uVar7 * 0x1010101;
          uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
          while (uVar6 != 0) {
            uVar17 = uVar6 - 1 & uVar6;
            uVar19 = uVar4 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                            (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                     uVar10;
            iVar13 = iVar16 + -0x20 + uVar19 * -0x20;
            uVar6 = uVar17;
            if ((iVar23 == *(int *)(iVar13 + 8)) &&
               (iVar13 = thunk_FUN_01bed842(uVar12,*(undefined4 *)(iVar13 + 4),iVar23), iVar13 == 0)
               ) {
              iVar23 = FUN_01577618(iVar16 + -0x14 + uVar19 * -0x20,uVar11,param_3);
              if (iVar23 == 0) goto LAB_01505c10;
              if (iVar9 == 0) goto LAB_015058d8;
              iVar23 = *(int *)(iVar3 + 8);
              uVar12 = *(undefined4 *)(iVar3 + 4);
              uVar4 = FUN_01676700(param_1 + 0x10,uVar12,iVar23);
              uVar7 = uVar4 >> 0x19;
              local_80 = 0;
              goto LAB_01505a60;
            }
          }
          if ((uVar5 & 0x80808080 & uVar5 << 1) != 0) break;
          local_80 = local_80 + 4;
          uVar4 = uVar4 + local_80;
        }
      }
      if (uVar15 != 0) {
        bVar20 = false;
        iVar23 = iVar18;
        do {
          while( true ) {
            cVar1 = FUN_015050f0(iVar23,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
            iVar13 = iVar23 + 0x28;
            if (cVar1 == '\0') break;
            iVar23 = FUN_01577618(iVar23 + 0x14,uVar11,param_3);
            if (iVar23 == 0) goto LAB_01505c10;
            bVar20 = true;
            iVar23 = iVar13;
            if (iVar13 == iVar22) goto LAB_015058d8;
          }
          iVar23 = iVar13;
        } while (iVar13 != iVar22);
        if (bVar20) goto LAB_015058d8;
      }
      iVar23 = FUN_01577618(param_1 + 0x18,uVar11,param_3);
    } while (iVar23 != 0);
LAB_01505c10:
    bVar20 = iVar3 == 0;
  }
  return bVar20;
LAB_01505a60:
  uVar4 = uVar8 & uVar4;
  uVar6 = *(uint *)(iVar14 + uVar4);
  uVar5 = uVar6 ^ uVar7 * 0x1010101;
  uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
  while (uVar5 != 0) {
    uVar17 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                    (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar8;
    uVar5 = uVar5 - 1 & uVar5;
    iVar13 = iVar14 + -0x14 + uVar17 * -0x14;
    if ((iVar23 == *(int *)(iVar13 + 8)) &&
       (iVar13 = thunk_FUN_01bed842(uVar12,*(undefined4 *)(iVar13 + 4),iVar23), iVar13 == 0)) {
      iVar23 = iVar14 + uVar17 * -0x14;
      puVar21 = *(uint **)(iVar23 + -8);
      iVar23 = *(int *)(iVar23 + -4) << 2;
      goto LAB_01505ba8;
    }
  }
  if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) goto LAB_015058d8;
  local_80 = local_80 + 4;
  uVar4 = uVar4 + local_80;
  goto LAB_01505a60;
LAB_01505ba8:
  if (iVar23 == 0) goto LAB_015058d8;
  uVar7 = *puVar21;
  if (uVar15 <= uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar7,uVar15,&DAT_01cfa988);
  }
  iVar13 = FUN_01577618(iVar18 + uVar7 * 0x28 + 0x14,uVar11,param_3);
  iVar23 = iVar23 + -4;
  puVar21 = puVar21 + 1;
  if (iVar13 == 0) goto LAB_01505c10;
  goto LAB_01505ba8;
}

