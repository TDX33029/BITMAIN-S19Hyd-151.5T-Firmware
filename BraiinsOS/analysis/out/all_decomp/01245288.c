// FUN_01245288 @ 01245288 size=992 calls_out=7 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_01245288(int *param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  undefined8 uVar24;
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
  iVar17 = *param_1;
  uVar19 = param_1[1];
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
    do {
      iVar17 = FUN_00f45584(&local_70);
    } while (iVar17 != 0);
    local_70 = 4;
    iVar17 = 0;
    local_68 = 0;
  }
  else {
    uVar8 = param_1[4];
    uVar9 = param_1[5];
    uVar10 = param_1[6];
    uVar11 = param_1[7];
    iVar12 = param_1[8];
    iVar13 = param_1[9];
    iVar14 = param_1[10];
    iVar3 = param_1[0xb];
LAB_01245374:
    uVar24 = FUN_00f45584(&local_70);
    iVar22 = (int)uVar24;
    if (iVar22 != 0) {
      iVar21 = *(int *)(iVar22 + 4);
      iVar22 = *(int *)(iVar22 + 8);
      local_48 = iVar12;
      local_44 = iVar13;
      local_40 = iVar14;
      local_3c = iVar3;
      local_38 = uVar10;
      uStack_34 = uVar11;
      local_30 = uVar8;
      uStack_2c = uVar9;
      FUN_011df94c(&local_48,iVar21,iVar22);
      uVar4 = local_38 ^ 0xff;
      uVar20 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 | (uStack_34 >> 0x10 & 0xff) << 8
               | uStack_34 >> 0x18;
      lVar1 = (ulonglong)uVar20 * 0xb36a80d2;
      uVar15 = (uint)lVar1;
      uVar7 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
              uVar15 >> 0x18) ^
              uStack_34 * 0x2df45158 +
              uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20);
      uVar16 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
               uVar7 >> 0x18;
      lVar2 = (ulonglong)~local_30 * (ulonglong)uVar16;
      uVar23 = (uint)lVar2;
      uVar15 = (uVar4 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
               local_38 >> 0x18) * -0x4c957f2e +
               uVar20 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
      uVar20 = (uVar15 * 0x1000000 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
               uVar15 >> 0x18) ^ (uint)((ulonglong)uVar4 * 0x2df45158);
      uVar4 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
              uVar20 >> 0x18) * ~local_30 + uVar16 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
      uVar15 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 | (uStack_2c >> 0x10 & 0xff) << 8
               | uStack_2c >> 0x18;
      lVar1 = (ulonglong)uVar15 * (ulonglong)uVar20;
      uVar4 = (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
              uVar4 >> 0x18) ^ (uint)lVar1;
      uVar7 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
              uVar23 >> 0x18) ^
              uVar7 * uVar15 +
              uVar20 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                        (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar15 = uVar7;
      if ((uVar20 & 0x20) != 0) {
        uVar15 = uVar4;
        uVar4 = uVar7;
      }
      uVar15 = uVar4 << (uVar20 & 0x1f) | (uVar15 >> 1) >> (~uVar20 & 0x1f);
      uVar4 = uVar15 >> 0x19;
      iVar18 = 0;
      while( true ) {
        uVar15 = uVar19 & uVar15;
        uVar7 = *(uint *)(iVar17 + uVar15);
        uVar20 = uVar7 ^ uVar4 * 0x1010101;
        for (uVar20 = ~uVar20 & 0x80808080 & uVar20 + 0xfefefeff; uVar20 != 0;
            uVar20 = uVar20 - 1 & uVar20) {
          uVar16 = uVar15 + ((uint)LZCOUNT(uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                           (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3) &
                   uVar19;
          iVar5 = iVar17 + -0x20 + uVar16 * -0x20;
          if ((iVar22 == *(int *)(iVar5 + 8)) &&
             (iVar5 = thunk_FUN_016dd50a(iVar21,*(undefined4 *)(iVar5 + 4),iVar22), iVar5 == 0)) {
            local_48 = -0x80000000;
            local_44 = iVar21;
            local_40 = iVar22;
            local_3c = param_3;
            uVar24 = FUN_011cf8a8(iVar17 + -0x14 + uVar16 * -0x20,(int)((ulonglong)uVar24 >> 0x20),
                                  &local_48,param_4,param_5);
            FUN_011590bc(&local_7c,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
            goto LAB_01245374;
          }
        }
        if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
        iVar18 = iVar18 + 4;
        uVar15 = uVar15 + iVar18;
      }
      goto LAB_01245374;
    }
    local_70 = local_78;
    iVar17 = local_74;
    local_68 = local_7c;
  }
  local_64 = local_70 + iVar17 * 4;
  local_6c = local_70;
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

