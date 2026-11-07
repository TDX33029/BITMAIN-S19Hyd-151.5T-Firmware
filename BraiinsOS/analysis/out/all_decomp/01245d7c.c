// FUN_01245d7c @ 01245d7c size=1040 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_01245d7c(int *param_1,char *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  undefined8 uVar26;
  uint local_6c [3];
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  
  if (*param_2 != '\x05') {
    return 1;
  }
  local_6c[2] = *(uint *)(param_2 + 4);
  local_60 = *(undefined4 *)(param_2 + 8);
  uVar21 = param_1[1];
  iVar24 = *param_1;
  local_4c = *(undefined4 *)(param_2 + 0xc);
  if (local_6c[2] == 0) {
    local_4c = 0;
  }
  local_6c[0] = (uint)(local_6c[2] != 0);
  local_58 = 0;
  local_6c[1] = 0;
  local_5c = local_6c[0];
  local_54 = local_6c[2];
  local_50 = local_60;
  if (param_1[3] == 0) {
    do {
      iVar24 = FUN_00f45584(local_6c);
    } while (iVar24 != 0);
    return 1;
  }
  uVar8 = param_1[4];
  uVar9 = param_1[5];
  uVar10 = param_1[6];
  uVar11 = param_1[7];
  iVar12 = param_1[8];
  iVar13 = param_1[9];
  iVar14 = param_1[10];
  iVar3 = param_1[0xb];
LAB_01245e74:
  do {
    uVar26 = FUN_00f45584(local_6c);
    uVar5 = (undefined4)((ulonglong)uVar26 >> 0x20);
    iVar22 = (int)uVar26;
    if (iVar22 == 0) {
      return 1;
    }
    uVar15 = *(undefined4 *)(iVar22 + 4);
    iVar22 = *(int *)(iVar22 + 8);
    local_48 = iVar12;
    local_44 = iVar13;
    local_40 = iVar14;
    iStack_3c = iVar3;
    local_38 = uVar10;
    uStack_34 = uVar11;
    local_30 = uVar8;
    uStack_2c = uVar9;
    FUN_011df94c(&local_48,uVar15,iVar22);
    uVar4 = local_38 ^ 0xff;
    uVar19 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 | (uStack_34 >> 0x10 & 0xff) << 8 |
             uStack_34 >> 0x18;
    lVar1 = (ulonglong)uVar19 * 0xb36a80d2;
    uVar16 = (uint)lVar1;
    uVar6 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
            uVar16 >> 0x18) ^
            uStack_34 * 0x2df45158 +
            uVar4 * 0x2d7f954c + (int)((ulonglong)uVar4 * 0x2df45158 >> 0x20);
    uVar17 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
             uVar6 >> 0x18;
    lVar2 = (ulonglong)~local_30 * (ulonglong)uVar17;
    uVar25 = (uint)lVar2;
    uVar16 = (uVar4 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
             local_38 >> 0x18) * -0x4c957f2e +
             uVar19 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
    uVar19 = (uVar16 * 0x1000000 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
             uVar16 >> 0x18) ^ (uint)((ulonglong)uVar4 * 0x2df45158);
    uVar4 = (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
            uVar19 >> 0x18) * ~local_30 + uVar17 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
    uVar16 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 | (uStack_2c >> 0x10 & 0xff) << 8 |
             uStack_2c >> 0x18;
    lVar1 = (ulonglong)uVar16 * (ulonglong)uVar19;
    uVar4 = (uVar4 * 0x1000000 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
            uVar4 >> 0x18) ^ (uint)lVar1;
    uVar6 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
            uVar25 >> 0x18) ^
            uVar6 * uVar16 +
            uVar19 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                      (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
            (int)((ulonglong)lVar1 >> 0x20);
    uVar16 = uVar6;
    if ((uVar19 & 0x20) != 0) {
      uVar16 = uVar4;
      uVar4 = uVar6;
    }
    uVar16 = uVar4 << (uVar19 & 0x1f) | (uVar16 >> 1) >> (~uVar19 & 0x1f);
    iVar23 = 0;
    uVar4 = uVar16 >> 0x19;
    while( true ) {
      uVar16 = uVar21 & uVar16;
      uVar6 = *(uint *)(iVar24 + uVar16);
      uVar19 = uVar6 ^ uVar4 * 0x1010101;
      uVar19 = ~uVar19 & 0x80808080 & uVar19 + 0xfefefeff;
      while (uVar19 != 0) {
        uVar25 = uVar19 - 1 & uVar19;
        uVar17 = uVar16 + ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                         (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3) &
                 uVar21;
        iVar7 = iVar24 + -0x20 + uVar17 * -0x20;
        uVar19 = uVar25;
        if ((iVar22 == *(int *)(iVar7 + 8)) &&
           (iVar7 = thunk_FUN_016dd50a(uVar15,*(undefined4 *)(iVar7 + 4),iVar22), iVar7 == 0)) {
          iVar22 = *(int *)(iVar24 + -0x14 + uVar17 * -0x20);
          uVar4 = 1;
          if ((int)*(uint *)(iVar22 + 8) < 0) {
            uVar4 = *(uint *)(iVar22 + 8) ^ 0x80000000;
          }
          if (uVar4 == 0) {
            if (*(int *)(iVar22 + 0xc) != 0) {
              return 0;
            }
          }
          else if (uVar4 == 1) {
            iVar23 = *(int *)(iVar22 + 0x10);
            puVar20 = *(undefined4 **)(iVar22 + 0xc);
            if (iVar23 == 1) {
              iVar22 = (**(code **)(puVar20[1] + 0x10))(*puVar20,uVar5,param_3);
              if (iVar22 == 0) {
                return 0;
              }
            }
            else {
              puVar18 = puVar20 + iVar23 * 8;
              if (iVar23 != 0) {
                do {
                  iVar22 = (**(code **)(puVar20[1] + 0x10))(*puVar20,uVar5,param_3);
                  if (iVar22 == 0) {
                    return 0;
                  }
                  puVar20 = puVar20 + 8;
                } while (puVar20 != puVar18);
              }
            }
          }
          else {
            puVar20 = *(undefined4 **)(iVar22 + 0x10);
            iVar22 = *(int *)(iVar22 + 0x14) << 5;
            while (iVar22 != 0) {
              iVar23 = (**(code **)(puVar20[1] + 0x10))(*puVar20,uVar5,param_3);
              iVar22 = iVar22 + -0x20;
              puVar20 = puVar20 + 8;
              if (iVar23 == 0) {
                return 0;
              }
            }
          }
          goto LAB_01245e74;
        }
      }
      if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
      iVar23 = iVar23 + 4;
      uVar16 = uVar16 + iVar23;
    }
  } while( true );
}

