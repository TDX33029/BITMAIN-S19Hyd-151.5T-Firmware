// FUN_014ffe4c @ 014ffe4c size=1152 calls_out=9 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_014ffe4c(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

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
  int iVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 uVar23;
  int iVar24;
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
    local_60 = 4;
    uVar18 = param_1[0x16];
    local_44 = 0;
    local_38 = *(undefined4 *)(param_2 + 0xc);
    local_54 = 0;
    if (local_50 == 0) {
      local_38 = 0;
    }
    local_5c = 0;
    local_64 = 0;
    iVar16 = param_1[0x15];
    iVar24 = uVar18 * 100 + iVar16;
    local_58 = (uint)(local_50 != 0);
    iVar20 = param_1[0x13];
    uVar9 = param_1[1];
    iVar13 = *param_1;
    iVar10 = param_1[3];
    iVar2 = param_1[0x12];
    local_48 = local_58;
    iStack_40 = local_50;
    uStack_3c = local_4c;
LAB_014fff1c:
    uVar26 = FUN_01a41998(&local_58);
    uVar11 = (undefined4)((ulonglong)uVar26 >> 0x20);
    iVar25 = (int)uVar26;
    if (iVar25 != 0) {
      uVar23 = *(undefined4 *)(iVar25 + 4);
      iVar17 = *(int *)(iVar25 + 8);
      if (iVar20 != 0) {
        iVar14 = iVar20 << 5;
        iVar19 = iVar2;
        do {
          if (*(int *)(iVar19 + 8) == iVar17) {
            uVar21 = *(undefined4 *)(iVar19 + 4);
            iVar3 = thunk_FUN_01bed842(uVar21,uVar23,iVar17);
            if (iVar3 == 0) {
              local_34 = 0x80000000;
              local_30 = uVar21;
              local_2c = iVar17;
              local_28 = param_3;
              uVar26 = FUN_01576990(iVar19 + 0xc,uVar11,&local_34,param_4,param_5);
              FUN_014fb9d0(&local_64,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
              if (iVar10 == 0) goto LAB_014fff1c;
              iVar17 = *(int *)(iVar25 + 8);
              uVar23 = *(undefined4 *)(iVar25 + 4);
              uVar4 = FUN_01676700(param_1 + 4,uVar23,iVar17);
              uVar7 = uVar4 >> 0x19;
              iVar25 = 0;
              goto LAB_01500118;
            }
          }
          iVar19 = iVar19 + 0x20;
          iVar14 = iVar14 + -0x20;
        } while (iVar14 != 0);
      }
      if (uVar18 == 0) {
LAB_01500040:
        local_34 = 0x80000000;
        local_30 = uVar23;
        local_2c = iVar17;
        local_28 = param_3;
        uVar26 = FUN_01576990(param_1 + 0xc,uVar11,&local_34,param_4,param_5);
        FUN_014fb9d0(&local_64,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
      }
      else {
        bVar15 = false;
        iVar17 = iVar16;
        do {
          iVar14 = iVar17;
          while( true ) {
            cVar1 = FUN_01501468(iVar14,*(undefined4 *)(iVar25 + 4),*(undefined4 *)(iVar25 + 8));
            iVar17 = iVar14 + 100;
            if (cVar1 != '\0') break;
            iVar14 = iVar17;
            if (iVar17 == iVar24) {
              if (bVar15) goto LAB_014fff1c;
              uVar23 = *(undefined4 *)(iVar25 + 4);
              iVar17 = *(int *)(iVar25 + 8);
              goto LAB_01500040;
            }
          }
          local_30 = *(undefined4 *)(iVar25 + 4);
          local_2c = *(int *)(iVar25 + 8);
          local_34 = 0x80000000;
          local_28 = param_3;
          uVar26 = FUN_01576990(iVar14 + 0x50,uVar11,&local_34,param_4,param_5);
          FUN_014fb9d0(&local_64,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
          bVar15 = true;
        } while (iVar17 != iVar24);
      }
      goto LAB_014fff1c;
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
LAB_01500118:
  uVar4 = uVar9 & uVar4;
  uVar22 = *(uint *)(iVar13 + uVar4);
  uVar5 = uVar22 ^ uVar7 * 0x1010101;
  uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
  while( true ) {
    if (uVar5 == 0) goto LAB_015001b4;
    uVar6 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                   (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar9;
    iVar14 = iVar13 + -0x14 + uVar6 * -0x14;
    if ((iVar17 == *(int *)(iVar14 + 8)) &&
       (iVar14 = thunk_FUN_01bed842(uVar23,*(undefined4 *)(iVar14 + 4),iVar17), iVar14 == 0)) break;
    uVar5 = uVar5 - 1 & uVar5;
  }
  iVar17 = iVar13 + uVar6 * -0x14;
  puVar8 = *(uint **)(iVar17 + -8);
  for (iVar25 = *(int *)(iVar17 + -4) << 2; iVar25 != 0; iVar25 = iVar25 + -4) {
    uVar7 = *puVar8;
    if (uVar18 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar7,uVar18,&DAT_01cfa968);
    }
    uVar26 = FUN_01576990(uVar7 * 100 + iVar16 + 0x50,uVar11,&local_34,param_4,param_5);
    FUN_014fb9d0(&local_64,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
    puVar8 = puVar8 + 1;
  }
  goto LAB_014fff1c;
LAB_015001b4:
  if ((uVar22 & 0x80808080 & uVar22 << 1) != 0) goto LAB_014fff1c;
  iVar25 = iVar25 + 4;
  uVar4 = uVar4 + iVar25;
  goto LAB_01500118;
}

