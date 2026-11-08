// FUN_0117c738 @ 0117c738 size=1164 calls_out=7 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_0117c738(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined8 uVar26;
  uint local_7c;
  uint local_78;
  int local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  
  if (*param_2 != '\x05') {
    return (uint *)&DAT_00000001;
  }
  local_68 = *(uint *)(param_2 + 4);
  local_64 = *(uint *)(param_2 + 8);
  local_78 = 4;
  iVar20 = *param_1;
  uVar21 = param_1[1];
  local_50 = *(undefined4 *)(param_2 + 0xc);
  if (local_68 == 0) {
    local_50 = 0;
  }
  local_5c = 0;
  local_6c = 0;
  local_70 = (uint)(local_68 != 0);
  local_74 = 0;
  local_7c = 0;
  local_60 = local_70;
  iStack_58 = local_68;
  uStack_54 = local_64;
  if (param_1[3] == 0) {
    while( true ) {
      uVar26 = FUN_00f45584(&local_70);
      iVar20 = (int)uVar26;
      if (iVar20 == 0) break;
      local_40 = *(int *)(iVar20 + 8);
      local_44 = *(undefined4 *)(iVar20 + 4);
      local_48 = -0x80000000;
      local_3c = param_3;
      uVar26 = FUN_011cf8a8(param_1 + 0xc,(int)((ulonglong)uVar26 >> 0x20),&local_48,param_4,param_5
                           );
      FUN_011590bc(&local_7c,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
    }
  }
  else {
    uVar9 = param_1[4];
    uVar10 = param_1[5];
    uVar11 = param_1[6];
    uVar12 = param_1[7];
    iVar13 = param_1[8];
    iVar14 = param_1[9];
    iVar15 = param_1[10];
    iVar3 = param_1[0xb];
LAB_0117c82c:
    uVar26 = FUN_00f45584(&local_70);
    uVar7 = (undefined4)((ulonglong)uVar26 >> 0x20);
    iVar19 = (int)uVar26;
    if (iVar19 != 0) {
      iVar16 = *(int *)(iVar19 + 8);
      uVar24 = *(undefined4 *)(iVar19 + 4);
      local_48 = iVar13;
      local_44 = iVar14;
      local_40 = iVar15;
      local_3c = iVar3;
      local_38 = uVar11;
      uStack_34 = uVar12;
      local_30 = uVar9;
      uStack_2c = uVar10;
      FUN_011df94c(&local_48,uVar24,iVar16);
      uVar4 = local_38 ^ 0xff;
      uVar22 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 | (uStack_34 >> 0x10 & 0xff) << 8
               | uStack_34 >> 0x18;
      lVar1 = (ulonglong)uVar22 * 0xb36a80d2;
      uVar17 = (uint)lVar1;
      uVar8 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
              uVar17 >> 0x18) ^
              uStack_34 * 0x2df45158 +
              uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20);
      uVar18 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
               uVar8 >> 0x18;
      lVar2 = (ulonglong)~local_30 * (ulonglong)uVar18;
      uVar25 = (uint)lVar2;
      uVar17 = (uVar4 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
               local_38 >> 0x18) * -0x4c957f2e +
               uVar22 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
      uVar22 = (uVar17 * 0x1000000 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
               uVar17 >> 0x18) ^ (uint)((ulonglong)uVar4 * 0x2df45158);
      uVar4 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
              uVar22 >> 0x18) * ~local_30 + uVar18 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
      uVar17 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 | (uStack_2c >> 0x10 & 0xff) << 8
               | uStack_2c >> 0x18;
      lVar1 = (ulonglong)uVar17 * (ulonglong)uVar22;
      uVar4 = (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
              uVar4 >> 0x18) ^ (uint)lVar1;
      uVar8 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
              uVar25 >> 0x18) ^
              uVar8 * uVar17 +
              uVar22 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                        (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar17 = uVar8;
      if ((uVar22 & 0x20) != 0) {
        uVar17 = uVar4;
        uVar4 = uVar8;
      }
      uVar17 = uVar4 << (uVar22 & 0x1f) | (uVar17 >> 1) >> (~uVar22 & 0x1f);
      uVar4 = uVar17 >> 0x19;
      iVar19 = 0;
      while( true ) {
        uVar17 = uVar21 & uVar17;
        uVar8 = *(uint *)(iVar20 + uVar17);
        uVar22 = uVar8 ^ uVar4 * 0x1010101;
        for (uVar22 = ~uVar22 & 0x80808080 & uVar22 + 0xfefefeff; uVar22 != 0;
            uVar22 = uVar22 - 1 & uVar22) {
          uVar18 = uVar17 + ((uint)LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                           (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3) &
                   uVar21;
          iVar5 = iVar20 + -0x20 + uVar18 * -0x20;
          if (iVar16 == *(int *)(iVar5 + 8)) {
            uVar23 = *(undefined4 *)(iVar5 + 4);
            iVar5 = thunk_FUN_016dd50a(uVar24,uVar23,iVar16);
            if (iVar5 == 0) {
              local_48 = -0x80000000;
              local_44 = uVar23;
              local_40 = iVar16;
              local_3c = param_3;
              uVar26 = FUN_011cf8a8(iVar20 + -0x14 + uVar18 * -0x20,uVar7,&local_48,param_4,param_5)
              ;
              FUN_011590bc(&local_7c,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
              goto LAB_0117c82c;
            }
          }
        }
        if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
        iVar19 = iVar19 + 4;
        uVar17 = uVar17 + iVar19;
      }
      local_48 = -0x80000000;
      local_44 = uVar24;
      local_40 = iVar16;
      local_3c = param_3;
      uVar26 = FUN_011cf8a8(param_1 + 0xc,uVar7,&local_48,param_4,param_5);
      FUN_011590bc(&local_7c,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
      goto LAB_0117c82c;
    }
  }
  local_68 = local_7c;
  local_64 = local_78 + local_74 * 4;
  local_70 = local_78;
  local_6c = local_78;
  puVar6 = (uint *)thunk_FUN_016d4a50(0x10);
  if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar6 = local_70;
  puVar6[1] = local_6c;
  puVar6[2] = local_68;
  puVar6[3] = local_64;
  return puVar6;
}

