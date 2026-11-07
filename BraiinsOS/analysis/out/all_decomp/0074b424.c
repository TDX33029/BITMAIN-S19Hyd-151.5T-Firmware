// FUN_0074b424 @ 0074b424 size=828 calls_out=7 calls_in=2
// strings: 

void FUN_0074b424(undefined4 *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int local_4c;
  undefined4 *local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 **local_2c;
  code *local_28;
  
  iVar14 = param_2[0x35];
  if (param_4 != iVar14) {
    *param_1 = 1;
    param_1[1] = iVar14;
    param_1[2] = param_4;
    param_1[3] = 0;
    return;
  }
  uVar15 = 0xcbf29ce4;
  uVar16 = 0x84222325;
  if (param_4 != 0) {
    puVar5 = param_3;
    do {
      iVar14 = puVar5[1];
      if (iVar14 != 0) {
        pbVar13 = (byte *)*puVar5;
        do {
          iVar14 = iVar14 + -1;
          uVar10 = uVar16 ^ *pbVar13;
          lVar2 = (ulonglong)uVar10 * 0x1b3;
          uVar16 = (uint)lVar2;
          uVar15 = uVar15 * 0x1b3 + (int)((ulonglong)lVar2 >> 0x20) + uVar10 * 0x100;
          pbVar13 = pbVar13 + 1;
        } while (iVar14 != 0);
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != param_3 + param_4 * 2);
  }
  local_40 = param_3;
  local_3c = param_4;
  if (*param_2 == 0) {
    bVar1 = (bool)hasExclusiveAccess(param_2);
    if (bVar1) {
      *param_2 = 8;
      DataMemoryBarrier(0xb);
      goto LAB_0074b4e8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0127e06c(param_2);
LAB_0074b4e8:
  FUN_0128236c(param_2);
  FUN_0128236c();
  uVar3 = FUN_009bd658(param_2[6],param_2[7],param_2[8],param_2[9],uVar16,uVar15);
  uVar10 = uVar3 >> 0x19;
  uVar8 = param_2[3];
  iVar14 = param_2[2];
  local_4c = 0;
  while( true ) {
    uVar3 = uVar8 & uVar3;
    uVar17 = *(uint *)(iVar14 + uVar3);
    uVar11 = uVar17 ^ uVar10 * 0x1010101;
    uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff;
    while (uVar11 != 0) {
      uVar12 = uVar3 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                      (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) & uVar8;
      puVar9 = (uint *)(iVar14 + -0x10 + uVar12 * -0x10);
      uVar11 = uVar11 - 1 & uVar11;
      if (uVar16 == *puVar9 && uVar15 == puVar9[1]) {
        puVar9 = (uint *)(iVar14 + (uVar12 - 4 & uVar8));
        uVar15 = *puVar9;
        uVar16 = *(uint *)(iVar14 + uVar12) & 0x80808080 & *(uint *)(iVar14 + uVar12) << 1;
        iVar6 = param_2[5];
        uVar7 = 0x80;
        if (((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                           (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar15 & 0x80808080 & uVar15 << 1) >> 3) < 4) {
          param_2[4] = param_2[4] + 1;
          uVar7 = 0xff;
        }
        *(undefined1 *)(iVar14 + uVar12) = uVar7;
        *(undefined1 *)(puVar9 + 1) = uVar7;
        piVar4 = *(int **)(iVar14 + uVar12 * -0x10 + -8);
        param_2[5] = iVar6 + -1;
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_012c1110();
        }
        *param_1 = 5;
        FUN_01282570(param_2);
        FUN_01282570((uint)param_2 | 1);
        if (*param_2 == 8) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(param_2);
            if (bVar1) {
              *param_2 = 0;
              return;
            }
          } while (*param_2 == 8);
        }
        ClearExclusiveLocal();
        FUN_0127db4c(param_2);
        return;
      }
    }
    if ((uVar17 & 0x80808080 & uVar17 << 1) != 0) break;
    local_4c = local_4c + 4;
    uVar3 = uVar3 + local_4c;
  }
  local_2c = &local_40;
  local_28 = FUN_00aaf12c;
  FUN_00600d2c(&local_38,&DAT_0057d685,&local_2c);
  *param_1 = 2;
  param_1[1] = local_38;
  param_1[2] = uStack_34;
  param_1[3] = uStack_30;
  FUN_01282570(param_2);
  FUN_01282570((uint)param_2 | 1);
  if (*param_2 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_2);
      if (bVar1) {
        *param_2 = 0;
        return;
      }
    } while (*param_2 == 8);
  }
  ClearExclusiveLocal();
  FUN_0127db4c(param_2);
  return;
}

