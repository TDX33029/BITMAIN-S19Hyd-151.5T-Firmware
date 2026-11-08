// FUN_0150ca5c @ 0150ca5c size=1064 calls_out=7 calls_in=0
// strings: 

bool FUN_0150ca5c(int *param_1,char *param_2,undefined4 param_3)

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
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  undefined8 uVar24;
  int local_90;
  int local_80;
  uint local_48 [3];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (*param_2 != '\x05') {
    return true;
  }
  local_48[2] = *(uint *)(param_2 + 4);
  local_3c = *(undefined4 *)(param_2 + 8);
  local_34 = 0;
  local_48[1] = 0;
  uVar19 = param_1[0x1c];
  local_28 = *(undefined4 *)(param_2 + 0xc);
  if (local_48[2] == 0) {
    local_28 = 0;
  }
  iVar14 = param_1[0x1b];
  iVar22 = iVar14 + uVar19 * 0x28;
  uVar8 = param_1[0xd];
  local_48[0] = (uint)(local_48[2] != 0);
  iVar9 = param_1[0xf];
  iVar13 = param_1[0xc];
  iVar15 = *param_1;
  uVar10 = param_1[1];
  iVar2 = param_1[3];
  local_38 = local_48[0];
  local_30 = local_48[2];
  local_2c = local_3c;
LAB_0150cb28:
  do {
    uVar24 = FUN_01a41998(local_48);
    uVar11 = (undefined4)((ulonglong)uVar24 >> 0x20);
    iVar3 = (int)uVar24;
    if (iVar3 == 0) {
LAB_0150ce60:
      return iVar3 == 0;
    }
    if (iVar2 != 0) {
      uVar20 = *(undefined4 *)(iVar3 + 4);
      iVar18 = *(int *)(iVar3 + 8);
      uVar4 = FUN_0155d010(param_1 + 4,uVar20,iVar18);
      uVar7 = uVar4 >> 0x19;
      local_80 = 0;
      while( true ) {
        uVar4 = uVar10 & uVar4;
        uVar5 = *(uint *)(iVar15 + uVar4);
        uVar6 = uVar5 ^ uVar7 * 0x1010101;
        uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
        while (uVar6 != 0) {
          uVar16 = uVar6 - 1 & uVar6;
          uVar23 = uVar4 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                          (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                   uVar10;
          iVar12 = iVar15 + -0x20 + uVar23 * -0x20;
          uVar6 = uVar16;
          if ((iVar18 == *(int *)(iVar12 + 8)) &&
             (iVar12 = thunk_FUN_01bed842(uVar20,*(undefined4 *)(iVar12 + 4),iVar18), iVar12 == 0))
          {
            iVar18 = FUN_01577618(iVar15 + -0x14 + uVar23 * -0x20,uVar11,param_3);
            if (iVar18 == 0) goto LAB_0150ce60;
            if (iVar9 == 0) goto LAB_0150cb28;
            iVar18 = *(int *)(iVar3 + 8);
            uVar20 = *(undefined4 *)(iVar3 + 4);
            uVar4 = FUN_01676700(param_1 + 0x10,uVar20,iVar18);
            uVar7 = uVar4 >> 0x19;
            local_90 = 0;
            goto LAB_0150ccc8;
          }
        }
        if ((uVar5 & 0x80808080 & uVar5 << 1) != 0) break;
        local_80 = local_80 + 4;
        uVar4 = uVar4 + local_80;
      }
    }
    if (uVar19 == 0) goto LAB_0150ce60;
    bVar21 = false;
    iVar18 = iVar14;
    do {
      while( true ) {
        cVar1 = FUN_015050f0(iVar18,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
        iVar12 = iVar18 + 0x28;
        if (cVar1 == '\0') break;
        iVar18 = FUN_01577618(iVar18 + 0x14,uVar11,param_3);
        if (iVar18 == 0) goto LAB_0150ce60;
        bVar21 = true;
        iVar18 = iVar12;
        if (iVar12 == iVar22) goto LAB_0150cb28;
      }
      iVar18 = iVar12;
    } while (iVar12 != iVar22);
    if (!bVar21) goto LAB_0150ce60;
  } while( true );
LAB_0150ccc8:
  uVar4 = uVar8 & uVar4;
  uVar6 = *(uint *)(iVar13 + uVar4);
  uVar5 = uVar6 ^ uVar7 * 0x1010101;
  uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
  while (uVar5 != 0) {
    uVar16 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                    (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar8;
    iVar12 = iVar13 + -0x14 + uVar16 * -0x14;
    uVar5 = uVar5 - 1 & uVar5;
    if ((iVar18 == *(int *)(iVar12 + 8)) &&
       (iVar12 = thunk_FUN_01bed842(uVar20,*(undefined4 *)(iVar12 + 4),iVar18), iVar12 == 0)) {
      iVar18 = iVar13 + uVar16 * -0x14;
      puVar17 = *(uint **)(iVar18 + -8);
      iVar18 = *(int *)(iVar18 + -4) << 2;
      goto LAB_0150ce20;
    }
  }
  if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) goto LAB_0150cb28;
  local_90 = local_90 + 4;
  uVar4 = uVar4 + local_90;
  goto LAB_0150ccc8;
LAB_0150ce20:
  if (iVar18 == 0) goto LAB_0150cb28;
  uVar7 = *puVar17;
  if (uVar19 <= uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar7,uVar19,&DAT_01cfa9c8);
  }
  iVar12 = FUN_01577618(iVar14 + uVar7 * 0x28 + 0x14,uVar11,param_3);
  iVar18 = iVar18 + -4;
  puVar17 = puVar17 + 1;
  if (iVar12 == 0) goto LAB_0150ce60;
  goto LAB_0150ce20;
}

