// FUN_0117df54 @ 0117df54 size=1436 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_0117df54(int *param_1,char *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined4 *puVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  int local_b4;
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
  
  uVar3 = 1;
  if (*param_2 == '\x05') {
    local_6c[2] = *(uint *)(param_2 + 4);
    local_60 = *(undefined4 *)(param_2 + 8);
    local_4c = *(undefined4 *)(param_2 + 0xc);
    if (local_6c[2] == 0) {
      local_4c = 0;
    }
    iVar19 = *param_1;
    uVar24 = param_1[1];
    local_6c[0] = (uint)(local_6c[2] != 0);
    local_58 = 0;
    local_6c[1] = 0;
    local_5c = local_6c[0];
    local_54 = local_6c[2];
    local_50 = local_60;
    if (param_1[3] == 0) {
      iVar19 = param_1[0xc];
      do {
        while( true ) {
          uVar26 = FUN_00f45584(local_6c);
          uVar3 = (undefined4)((ulonglong)uVar26 >> 0x20);
          if ((int)uVar26 == 0) {
            return 1;
          }
          uVar24 = 1;
          if ((int)*(uint *)(iVar19 + 8) < 0) {
            uVar24 = *(uint *)(iVar19 + 8) ^ 0x80000000;
          }
          if (uVar24 == 0) break;
          if (uVar24 == 1) {
            iVar4 = *(int *)(iVar19 + 0x10);
            puVar22 = *(undefined4 **)(iVar19 + 0xc);
            if (iVar4 == 1) {
              iVar4 = (**(code **)(puVar22[1] + 0x10))(*puVar22,uVar3,param_3);
              if (iVar4 == 0) goto LAB_0117e4d8;
            }
            else {
              puVar20 = puVar22 + iVar4 * 8;
              if (iVar4 != 0) {
                do {
                  iVar4 = (**(code **)(puVar22[1] + 0x10))(*puVar22,uVar3,param_3);
                  if (iVar4 == 0) goto LAB_0117e4d8;
                  puVar22 = puVar22 + 8;
                } while (puVar22 != puVar20);
              }
            }
          }
          else {
            puVar22 = *(undefined4 **)(iVar19 + 0x10);
            iVar4 = *(int *)(iVar19 + 0x14) << 5;
            while (iVar4 != 0) {
              iVar5 = (**(code **)(puVar22[1] + 0x10))(*puVar22,uVar3,param_3);
              iVar4 = iVar4 + -0x20;
              puVar22 = puVar22 + 8;
              if (iVar5 == 0) goto LAB_0117e4d8;
            }
          }
        }
      } while (*(int *)(iVar19 + 0xc) == 0);
    }
    else {
      uVar9 = param_1[4];
      uVar10 = param_1[5];
      uVar11 = param_1[6];
      uVar12 = param_1[7];
      iVar13 = param_1[8];
      iVar14 = param_1[9];
      iVar15 = param_1[10];
      iVar4 = param_1[0xb];
      iVar5 = param_1[0xc];
LAB_0117e148:
      do {
        uVar26 = FUN_00f45584(local_6c);
        uVar3 = (undefined4)((ulonglong)uVar26 >> 0x20);
        iVar23 = (int)uVar26;
        if (iVar23 == 0) {
          return 1;
        }
        uVar16 = *(undefined4 *)(iVar23 + 4);
        iVar23 = *(int *)(iVar23 + 8);
        local_48 = iVar13;
        local_44 = iVar14;
        local_40 = iVar15;
        iStack_3c = iVar4;
        local_38 = uVar11;
        uStack_34 = uVar12;
        local_30 = uVar9;
        uStack_2c = uVar10;
        FUN_011df94c(&local_48,uVar16,iVar23);
        uVar6 = local_38 ^ 0xff;
        uVar21 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                 (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
        lVar1 = (ulonglong)uVar21 * 0xb36a80d2;
        uVar17 = (uint)lVar1;
        uVar7 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                uVar17 >> 0x18) ^
                uStack_34 * 0x2df45158 +
                uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20);
        uVar18 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                 uVar7 >> 0x18;
        lVar2 = (ulonglong)~local_30 * (ulonglong)uVar18;
        uVar25 = (uint)lVar2;
        uVar17 = (uVar6 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
                 local_38 >> 0x18) * -0x4c957f2e +
                 uVar21 * -0x5851f42e + (int)((ulonglong)lVar1 >> 0x20);
        uVar21 = (uVar17 * 0x1000000 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                 uVar17 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
        uVar6 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                uVar21 >> 0x18) * ~local_30 + uVar18 * ~uStack_2c + (int)((ulonglong)lVar2 >> 0x20);
        uVar17 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                 (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
        lVar1 = (ulonglong)uVar17 * (ulonglong)uVar21;
        uVar6 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                uVar6 >> 0x18) ^ (uint)lVar1;
        uVar7 = (uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
                uVar25 >> 0x18) ^
                uVar7 * uVar17 +
                uVar21 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                          (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                (int)((ulonglong)lVar1 >> 0x20);
        uVar17 = uVar7;
        if ((uVar21 & 0x20) != 0) {
          uVar17 = uVar6;
          uVar6 = uVar7;
        }
        uVar17 = uVar6 << (uVar21 & 0x1f) | (uVar17 >> 1) >> (~uVar21 & 0x1f);
        uVar6 = uVar17 >> 0x19;
        local_b4 = 0;
        while( true ) {
          uVar17 = uVar24 & uVar17;
          uVar7 = *(uint *)(iVar19 + uVar17);
          uVar21 = uVar7 ^ uVar6 * 0x1010101;
          uVar21 = ~uVar21 & 0x80808080 & uVar21 + 0xfefefeff;
          while (uVar21 != 0) {
            uVar25 = uVar21 - 1 & uVar21;
            uVar18 = uVar17 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                             (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3) &
                     uVar24;
            iVar8 = iVar19 + -0x20 + uVar18 * -0x20;
            uVar21 = uVar25;
            if ((iVar23 == *(int *)(iVar8 + 8)) &&
               (iVar8 = thunk_FUN_016dd50a(uVar16,*(undefined4 *)(iVar8 + 4),iVar23), iVar8 == 0)) {
              iVar23 = *(int *)(iVar19 + -0x14 + uVar18 * -0x20);
              uVar6 = 1;
              if ((int)*(uint *)(iVar23 + 8) < 0) {
                uVar6 = *(uint *)(iVar23 + 8) ^ 0x80000000;
              }
              if (uVar6 == 0) goto LAB_0117e13c;
              if (uVar6 != 1) {
                puVar22 = *(undefined4 **)(iVar23 + 0x10);
                iVar23 = *(int *)(iVar23 + 0x14) << 5;
                goto LAB_0117e3b8;
              }
              iVar8 = *(int *)(iVar23 + 0x10);
              puVar22 = *(undefined4 **)(iVar23 + 0xc);
              if (iVar8 == 1) goto LAB_0117e390;
              puVar20 = puVar22 + iVar8 * 8;
              if (iVar8 != 0) goto LAB_0117e3f4;
              goto LAB_0117e148;
            }
          }
          if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
          local_b4 = local_b4 + 4;
          uVar17 = uVar17 + local_b4;
        }
        uVar6 = 1;
        if ((int)*(uint *)(iVar5 + 8) < 0) {
          uVar6 = *(uint *)(iVar5 + 8) ^ 0x80000000;
        }
        if (uVar6 != 0) {
          if (uVar6 == 1) {
            iVar23 = *(int *)(iVar5 + 0x10);
            puVar22 = *(undefined4 **)(iVar5 + 0xc);
            if (iVar23 == 1) {
LAB_0117e390:
              iVar23 = (**(code **)(puVar22[1] + 0x10))(*puVar22,uVar3,param_3);
              if (iVar23 == 0) break;
            }
            else if (iVar23 != 0) {
              puVar20 = puVar22 + iVar23 * 8;
              do {
                iVar23 = (**(code **)(puVar22[1] + 0x10))(*puVar22,uVar3,param_3);
                if (iVar23 == 0) goto LAB_0117e4d8;
                puVar22 = puVar22 + 8;
              } while (puVar22 != puVar20);
            }
          }
          else {
            puVar22 = *(undefined4 **)(iVar5 + 0x10);
            iVar23 = *(int *)(iVar5 + 0x14) << 5;
            while (iVar23 != 0) {
              iVar8 = (**(code **)(puVar22[1] + 0x10))(*puVar22,uVar3,param_3);
              iVar23 = iVar23 + -0x20;
              puVar22 = puVar22 + 8;
              if (iVar8 == 0) {
                return 0;
              }
            }
          }
          goto LAB_0117e148;
        }
        iVar23 = iVar5;
LAB_0117e13c:
      } while (*(int *)(iVar23 + 0xc) == 0);
    }
LAB_0117e4d8:
    uVar3 = 0;
  }
  return uVar3;
LAB_0117e3b8:
  if (iVar23 == 0) goto LAB_0117e148;
  iVar8 = (**(code **)(puVar22[1] + 0x10))(*puVar22,uVar3,param_3);
  iVar23 = iVar23 + -0x20;
  puVar22 = puVar22 + 8;
  if (iVar8 == 0) goto LAB_0117e4d8;
  goto LAB_0117e3b8;
  while (puVar22 = puVar22 + 8, puVar22 != puVar20) {
LAB_0117e3f4:
    iVar23 = (**(code **)(puVar22[1] + 0x10))(*puVar22,uVar3,param_3);
    if (iVar23 == 0) goto LAB_0117e4d8;
  }
  goto LAB_0117e148;
}

