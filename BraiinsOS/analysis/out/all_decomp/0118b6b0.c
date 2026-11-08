// FUN_0118b6b0 @ 0118b6b0 size=1164 calls_out=3 calls_in=0
// strings: 

byte FUN_0118b6b0(int *param_1,char *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined4 *puVar24;
  int iVar25;
  int iVar26;
  undefined4 *puVar27;
  int iVar28;
  uint uVar29;
  undefined8 uVar30;
  int local_bc;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  
  if (*param_2 != '\x05') {
    return 1;
  }
  local_4c = *(int *)(param_2 + 0xc);
  if (local_4c != 0) {
    local_64 = *(int *)(param_2 + 4);
    uVar17 = param_1[1];
    iVar22 = *param_1;
    iVar28 = param_1[0x11];
    if (local_64 == 0) {
      local_4c = 0;
    }
    iVar25 = param_1[0x12];
    local_60 = *(undefined4 *)(param_2 + 8);
    local_6c = (uint)(local_64 != 0);
    local_58 = 0;
    local_68 = 0;
    local_5c = local_6c;
    local_54 = local_64;
    local_50 = local_60;
    if (param_1[3] != 0) {
      uVar10 = param_1[4];
      uVar11 = param_1[5];
      uVar12 = param_1[6];
      uVar13 = param_1[7];
      iVar14 = param_1[8];
      bVar6 = 0;
      iVar15 = param_1[9];
      iVar16 = param_1[10];
      iVar3 = param_1[0xb];
      uVar30 = FUN_00f45584(&local_6c);
      if ((int)uVar30 == 0) {
        return 0;
      }
      do {
        uVar7 = (undefined4)((ulonglong)uVar30 >> 0x20);
        iVar5 = (int)uVar30;
        uVar18 = *(undefined4 *)(iVar5 + 4);
        iVar26 = *(int *)(iVar5 + 8);
        local_48 = iVar14;
        local_44 = iVar15;
        local_40 = iVar16;
        iStack_3c = iVar3;
        local_38 = uVar12;
        uStack_34 = uVar13;
        local_30 = uVar10;
        local_2c = uVar11;
        FUN_011df94c(&local_48,uVar18,iVar26);
        uVar4 = local_38 ^ 0xff;
        uVar23 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                 (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
        lVar1 = (ulonglong)uVar23 * 0xb36a80d2;
        uVar19 = (uint)lVar1;
        uVar8 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                uVar19 >> 0x18) ^
                uStack_34 * 0x2df45158 +
                uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20);
        uVar21 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                 uVar8 >> 0x18;
        lVar2 = (ulonglong)~local_30 * (ulonglong)uVar21;
        uVar29 = (uint)lVar2;
        uVar20 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8
                 | local_2c >> 0x18;
        uVar19 = (uVar4 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
                 local_38 >> 0x18) * -0x4c957f2e +
                 uVar23 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
        uVar23 = (uVar19 * 0x1000000 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
                 uVar19 >> 0x18) ^ (uint)((ulonglong)uVar4 * 0x2df45158);
        uVar4 = (uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
                uVar23 >> 0x18) * ~local_30 + uVar21 * ~local_2c + (int)((ulonglong)lVar2 >> 0x20);
        lVar1 = (ulonglong)uVar20 * (ulonglong)uVar23;
        uVar4 = (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                uVar4 >> 0x18) ^ (uint)lVar1;
        uVar8 = (uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                uVar29 >> 0x18) ^
                uVar8 * uVar20 +
                uVar23 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                          (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                (int)((ulonglong)lVar1 >> 0x20);
        uVar19 = uVar8;
        if ((uVar23 & 0x20) != 0) {
          uVar19 = uVar4;
          uVar4 = uVar8;
        }
        uVar19 = uVar4 << (uVar23 & 0x1f) | (uVar19 >> 1) >> (~uVar23 & 0x1f);
        uVar4 = uVar19 >> 0x19;
        local_bc = 0;
LAB_0118b95c:
        uVar19 = uVar17 & uVar19;
        uVar8 = *(uint *)(iVar22 + uVar19);
        uVar23 = uVar8 ^ uVar4 * 0x1010101;
        uVar23 = ~uVar23 & 0x80808080 & uVar23 + 0xfefefeff;
LAB_0118b98c:
        if (uVar23 == 0) goto LAB_0118b9e8;
        uVar20 = uVar23 - 1 & uVar23;
        uVar21 = uVar19 + ((uint)LZCOUNT(uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                                         (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) >> 3) &
                 uVar17;
        iVar9 = iVar22 + -0x20 + uVar21 * -0x20;
        uVar23 = uVar20;
        if ((iVar26 != *(int *)(iVar9 + 8)) ||
           (iVar9 = thunk_FUN_016dd50a(uVar18,*(undefined4 *)(iVar9 + 4),iVar26), iVar9 != 0))
        goto LAB_0118b98c;
        iVar26 = *(int *)(iVar22 + -0x14 + uVar21 * -0x20);
        uVar4 = 1;
        if ((int)*(uint *)(iVar26 + 8) < 0) {
          uVar4 = *(uint *)(iVar26 + 8) ^ 0x80000000;
        }
        if (uVar4 == 0) {
          if (*(int *)(iVar26 + 0xc) != 0) {
            return 0;
          }
        }
        else if (uVar4 == 1) {
          iVar9 = *(int *)(iVar26 + 0x10);
          puVar27 = *(undefined4 **)(iVar26 + 0xc);
          if (iVar9 == 1) {
            iVar26 = (**(code **)(puVar27[1] + 0x10))(*puVar27,uVar7,param_3);
            if (iVar26 == 0) {
              return 0;
            }
          }
          else if (iVar9 != 0) {
            puVar24 = puVar27 + iVar9 * 8;
            do {
              iVar26 = (**(code **)(puVar27[1] + 0x10))(*puVar27,uVar7,param_3);
              if (iVar26 == 0) {
                return 0;
              }
              puVar27 = puVar27 + 8;
            } while (puVar27 != puVar24);
          }
        }
        else {
          puVar27 = *(undefined4 **)(iVar26 + 0x10);
          iVar26 = *(int *)(iVar26 + 0x14) << 5;
          while (iVar26 != 0) {
            iVar9 = (**(code **)(puVar27[1] + 0x10))(*puVar27,uVar7,param_3);
            iVar26 = iVar26 + -0x20;
            puVar27 = puVar27 + 8;
            if (iVar9 == 0) {
              return 0;
            }
          }
        }
        if (*(int *)(iVar5 + 8) == iVar25) {
          iVar5 = thunk_FUN_016dd50a(*(undefined4 *)(iVar5 + 4),iVar28,iVar25);
          bVar6 = iVar5 == 0 | bVar6;
          uVar30 = FUN_00f45584(&local_6c);
          iVar5 = (int)uVar30;
        }
        else {
          uVar30 = FUN_00f45584(&local_6c);
          iVar5 = (int)uVar30;
        }
        if (iVar5 == 0) {
          return bVar6;
        }
      } while( true );
    }
    FUN_00f45584(&local_6c);
  }
  return 0;
LAB_0118b9e8:
  if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) {
    return 0;
  }
  local_bc = local_bc + 4;
  uVar19 = uVar19 + local_bc;
  goto LAB_0118b95c;
}

