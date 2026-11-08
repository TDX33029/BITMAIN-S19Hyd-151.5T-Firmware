// FUN_012258fc @ 012258fc size=804 calls_out=3 calls_in=1
// strings: 

void FUN_012258fc(undefined4 *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int unaff_r4;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint local_6c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  
  local_30 = param_1[4];
  local_40 = param_1[10];
  local_2c = param_1[5];
  local_38 = param_1[6];
  uStack_3c = param_1[0xb];
  local_34 = param_1[7];
  local_48 = param_1[8];
  local_44 = param_1[9];
  FUN_011df94c(&local_48);
  uVar6 = local_38 ^ 0xff;
  uVar9 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
          local_34 >> 0x18;
  lVar2 = (ulonglong)uVar9 * 0xb36a80d2;
  uVar10 = (uint)lVar2;
  uVar16 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18) ^
           local_34 * 0x2df45158 + uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20)
  ;
  uVar13 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18;
  lVar3 = (ulonglong)~local_30 * (ulonglong)uVar13;
  uVar18 = (uint)lVar3;
  uVar9 = (uVar6 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
          local_38 >> 0x18) * -0x4c957f2e + uVar9 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar10 = (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
           uVar9 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
  uVar9 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
          local_2c >> 0x18;
  uVar6 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
          uVar10 >> 0x18) * ~local_30 + uVar13 * ~local_2c + (int)((ulonglong)lVar3 >> 0x20);
  lVar2 = (ulonglong)uVar9 * (ulonglong)uVar10;
  uVar6 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ (uint)lVar2;
  uVar13 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18) ^
           uVar16 * uVar9 +
           uVar10 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                     (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
           (int)((ulonglong)lVar2 >> 0x20);
  uVar9 = uVar13;
  if ((uVar10 & 0x20) != 0) {
    uVar9 = uVar6;
    uVar6 = uVar13;
  }
  if (param_1[2] == 0) {
    FUN_011aabe4(param_1,1,param_1 + 4);
  }
  uVar13 = param_1[1];
  uVar9 = uVar6 << (uVar10 & 0x1f) | (uVar9 >> 1) >> (~uVar10 & 0x1f);
  bVar5 = false;
  puVar14 = (uint *)*param_1;
  iVar17 = 0;
  uVar6 = uVar9;
  do {
    uVar6 = uVar13 & uVar6;
    uVar16 = *(uint *)((int)puVar14 + uVar6);
    uVar10 = uVar16 ^ (uVar9 >> 0x19) * 0x1010101;
    for (uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff; uVar10 != 0;
        uVar10 = uVar10 - 1 & uVar10) {
      uVar18 = uVar6 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                      (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) & uVar13;
      if ((param_3 == puVar14[uVar18 * -2 + -1]) &&
         (iVar7 = thunk_FUN_016dd50a(param_2,puVar14[uVar18 * -2 + -2],param_3), iVar7 == 0)) {
        if (param_3 == 0) {
          return;
        }
        if (param_2 == 0) {
          return;
        }
        iVar17 = FUN_016d3bc8();
        uVar6 = *(byte *)(param_2 - 3) & 0x1f;
        if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
           (uVar9 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar7 = uVar9 - 0x10, uVar9 == 0)) {
          iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar9 = (uint)(*(byte *)(param_2 - 3) >> 5);
        iVar15 = *(int *)(iVar17 + 8) + 0x10;
        iVar12 = iVar7 * uVar6 + iVar7 + -4;
        iVar7 = iVar15 + iVar12;
        if (4 < uVar9) {
          if (uVar9 != 5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar4)();
          }
          uVar9 = *(uint *)(iVar7 + -4);
          if (uVar9 < 5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar4)();
          }
          if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar4)();
          }
        }
        if (iVar7 - param_2 < uVar9) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar4)();
        }
        if (*(char *)(iVar7 - uVar9) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar4)();
        }
        if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar4)();
        }
        bVar1 = *(byte *)(iVar17 + 0x14);
        uVar9 = 1 << uVar6;
        *(undefined1 *)(param_2 - 3) = 0xff;
        *(undefined2 *)(param_2 - 2) = 0;
        goto LAB_016d4066;
      }
    }
    uVar10 = uVar16 & 0x80808080;
    if (bVar5) {
LAB_01225b48:
      if ((uVar10 & uVar16 << 1) != 0) {
        uVar6 = (uint)*(char *)((int)puVar14 + local_6c);
        if (-1 < (int)uVar6) {
          uVar6 = *puVar14 & 0x80808080;
          uVar10 = LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                           (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18);
          uVar6 = (uint)*(byte *)((int)puVar14 + (uVar10 >> 3));
          local_6c = uVar10 >> 3;
        }
        iVar17 = param_1[3];
        iVar7 = param_1[2];
        bVar1 = (byte)(uVar9 >> 0x19);
        *(byte *)((int)puVar14 + local_6c) = bVar1;
        param_1[2] = iVar7 - (uVar6 & 1);
        param_1[3] = iVar17 + 1;
        *(byte *)((int)puVar14 + (uVar13 & local_6c - 4) + 4) = bVar1;
        puVar14[local_6c * -2 + -2] = param_2;
        puVar14[local_6c * -2 + -1] = param_3;
        return;
      }
      bVar5 = true;
    }
    else {
      if (uVar10 != 0) {
        local_6c = uVar6 + ((uint)LZCOUNT((uVar16 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                   uVar13;
        goto LAB_01225b48;
      }
      bVar5 = false;
    }
    iVar17 = iVar17 + 4;
    uVar6 = iVar17 + uVar6;
  } while( true );
LAB_016d4066:
  uVar13 = *(uint *)(iVar17 + 0x10);
  uVar10 = *(uint *)(iVar17 + 0xc) | uVar13;
  if ((uVar9 & uVar10) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4074);
    (*pcVar4)();
  }
  if ((uVar13 == 0) || (uVar10 + uVar9 == (2 << (bVar1 & 0x1f)) + -1)) {
    if (DAT_018ddb0b != '\0') {
      FUN_016ddcc0(&DAT_018ddd48);
    }
    FUN_016d3ca8(&uStack_28,iVar17,uVar6);
    FUN_016dddc0(&DAT_018ddd48);
    if (unaff_r4 == 0) {
      return;
    }
    puVar8 = (undefined4 *)FUN_016d2bc8();
    uVar11 = *puVar8;
    FUN_016d6ac4(uStack_28,unaff_r4);
    *puVar8 = uVar11;
    return;
  }
  if (DAT_018ddb0b == '\0') {
    *(uint *)(iVar17 + 0x10) = uVar9 + uVar13;
    return;
  }
  puVar14 = (uint *)(iVar17 + 0x10);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar14);
    uVar10 = *puVar14;
    if (uVar13 != uVar10) goto LAB_016d409c;
    bVar5 = (bool)hasExclusiveAccess(puVar14);
  } while (!bVar5);
  *puVar14 = uVar9 + uVar13;
LAB_016d409c:
  DataMemoryBarrier(0x1b);
  if (uVar13 == uVar10) {
    return;
  }
  goto LAB_016d4066;
}

