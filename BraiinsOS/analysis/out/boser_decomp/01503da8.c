// FUN_01503da8 @ 01503da8 size=1120 calls_out=9 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_01503da8(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined *puVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  undefined8 uVar26;
  uint local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  if (*param_2 == '\x05') {
    local_50 = *(uint *)(param_2 + 4);
    local_4c = *(uint *)(param_2 + 8);
    local_44 = 0;
    local_38 = *(undefined4 *)(param_2 + 0xc);
    if (local_50 == 0) {
      local_38 = 0;
    }
    local_5c = 0;
    local_60 = 4;
    local_54 = 0;
    iVar17 = param_1[0x15];
    uVar19 = param_1[0x16];
    local_64 = 0;
    local_58 = (uint)(local_50 != 0);
    iVar16 = param_1[0x13];
    uVar9 = param_1[1];
    iVar13 = *param_1;
    iVar10 = param_1[3];
    iVar2 = param_1[0x12];
    iVar18 = iVar17 + uVar19 * 0x28;
    local_48 = local_58;
    iStack_40 = local_50;
    uStack_3c = local_4c;
LAB_01503e70:
    uVar26 = FUN_01a41998(&local_58);
    uVar11 = (undefined4)((ulonglong)uVar26 >> 0x20);
    iVar21 = (int)uVar26;
    if (iVar21 != 0) {
      uVar22 = *(undefined4 *)(iVar21 + 4);
      iVar23 = *(int *)(iVar21 + 8);
      if (iVar16 != 0) {
        iVar15 = iVar2;
        iVar25 = iVar16 << 5;
        do {
          if (*(int *)(iVar15 + 8) == iVar23) {
            uVar20 = *(undefined4 *)(iVar15 + 4);
            iVar3 = thunk_FUN_01bed842(uVar20,uVar22,iVar23);
            if (iVar3 == 0) {
              local_34 = 0x80000000;
              local_30 = uVar20;
              local_2c = iVar23;
              local_28 = param_3;
              uVar26 = FUN_01576990(iVar15 + 0xc,uVar11,&local_34,param_4,param_5);
              FUN_014fb9d0(&local_64,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
              if (iVar10 == 0) goto LAB_01503e70;
              uVar22 = *(undefined4 *)(iVar21 + 4);
              iVar23 = *(int *)(iVar21 + 8);
              uVar4 = FUN_01676700(param_1 + 4,uVar22,iVar23);
              uVar7 = uVar4 >> 0x19;
              iVar21 = 0;
              goto LAB_01504060;
            }
          }
          iVar15 = iVar15 + 0x20;
          iVar25 = iVar25 + -0x20;
        } while (iVar25 != 0);
      }
      if (uVar19 == 0) {
LAB_01503f88:
        local_34 = 0x80000000;
        local_30 = uVar22;
        local_2c = iVar23;
        local_28 = param_3;
        uVar26 = FUN_01576990(param_1 + 0xc,uVar11,&local_34,param_4,param_5);
        FUN_014fb9d0(&local_64,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
      }
      else {
        bVar14 = false;
        iVar23 = iVar17;
        do {
          iVar15 = iVar23;
          while( true ) {
            cVar1 = FUN_015050f0(iVar15,*(undefined4 *)(iVar21 + 4),*(undefined4 *)(iVar21 + 8));
            iVar23 = iVar15 + 0x28;
            if (cVar1 != '\0') break;
            iVar15 = iVar23;
            if (iVar23 == iVar18) {
              if (bVar14) goto LAB_01503e70;
              uVar22 = *(undefined4 *)(iVar21 + 4);
              iVar23 = *(int *)(iVar21 + 8);
              goto LAB_01503f88;
            }
          }
          local_30 = *(undefined4 *)(iVar21 + 4);
          local_2c = *(int *)(iVar21 + 8);
          local_34 = 0x80000000;
          local_28 = param_3;
          uVar26 = FUN_01576990(iVar15 + 0x14,uVar11,&local_34,param_4,param_5);
          FUN_014fb9d0(&local_64,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
          bVar14 = true;
        } while (iVar23 != iVar18);
      }
      goto LAB_01503e70;
    }
    local_50 = local_64;
    local_4c = local_60 + local_5c * 4;
    local_58 = local_60;
    local_54 = local_60;
    puVar8 = (uint *)thunk_FUN_01be5118(0x10);
    if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    puVar12 = &UNK_01cfa84c;
    *puVar8 = local_58;
    puVar8[1] = local_54;
    puVar8[2] = local_50;
    puVar8[3] = local_4c;
  }
  else {
    puVar8 = (uint *)&DAT_00000001;
    puVar12 = &UNK_01cfc1a4;
  }
  return CONCAT44(puVar12,puVar8);
LAB_01504060:
  uVar4 = uVar9 & uVar4;
  uVar24 = *(uint *)(iVar13 + uVar4);
  uVar5 = uVar24 ^ uVar7 * 0x1010101;
  uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
  while( true ) {
    if (uVar5 == 0) goto LAB_015040f4;
    uVar6 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                   (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar9;
    iVar15 = iVar13 + -0x14 + uVar6 * -0x14;
    if ((iVar23 == *(int *)(iVar15 + 8)) &&
       (iVar15 = thunk_FUN_01bed842(uVar22,*(undefined4 *)(iVar15 + 4),iVar23), iVar15 == 0)) break;
    uVar5 = uVar5 - 1 & uVar5;
  }
  iVar23 = iVar13 + uVar6 * -0x14;
  puVar8 = *(uint **)(iVar23 + -8);
  for (iVar21 = *(int *)(iVar23 + -4) << 2; iVar21 != 0; iVar21 = iVar21 + -4) {
    uVar7 = *puVar8;
    if (uVar19 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar7,uVar19,&DAT_01cfa968);
    }
    uVar26 = FUN_01576990(iVar17 + uVar7 * 0x28 + 0x14,uVar11,&local_34,param_4,param_5);
    FUN_014fb9d0(&local_64,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
    puVar8 = puVar8 + 1;
  }
  goto LAB_01503e70;
LAB_015040f4:
  if ((uVar24 & 0x80808080 & uVar24 << 1) != 0) goto LAB_01503e70;
  iVar21 = iVar21 + 4;
  uVar4 = uVar4 + iVar21;
  goto LAB_01504060;
}

