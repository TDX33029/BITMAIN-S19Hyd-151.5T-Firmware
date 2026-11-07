// FUN_0074b780 @ 0074b780 size=1008 calls_out=7 calls_in=3
// strings: 

void FUN_0074b780(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int local_48;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 **local_2c;
  code *local_28;
  
  iVar7 = param_2[0x31];
  local_3c = 5;
  if (iVar7 != 5) {
    *param_1 = 1;
    param_1[1] = iVar7;
    param_1[2] = 5;
    param_1[3] = 0;
    return;
  }
  iVar7 = param_3[1];
  uVar13 = 0xcbf29ce4;
  uVar14 = 0x84222325;
  if (iVar7 != 0) {
    pbVar8 = (byte *)*param_3;
    do {
      iVar7 = iVar7 + -1;
      uVar11 = uVar14 ^ *pbVar8;
      lVar2 = (ulonglong)uVar11 * 0x1b3;
      uVar14 = (uint)lVar2;
      uVar13 = uVar13 * 0x1b3 + uVar11 * 0x100 + (int)((ulonglong)lVar2 >> 0x20);
      pbVar8 = pbVar8 + 1;
    } while (iVar7 != 0);
  }
  iVar7 = param_3[3];
  if (iVar7 != 0) {
    pbVar8 = (byte *)param_3[2];
    do {
      iVar7 = iVar7 + -1;
      uVar11 = uVar14 ^ *pbVar8;
      lVar2 = (ulonglong)uVar11 * 0x1b3;
      uVar14 = (uint)lVar2;
      uVar13 = uVar13 * 0x1b3 + uVar11 * 0x100 + (int)((ulonglong)lVar2 >> 0x20);
      pbVar8 = pbVar8 + 1;
    } while (iVar7 != 0);
  }
  iVar7 = param_3[5];
  if (iVar7 != 0) {
    pbVar8 = (byte *)param_3[4];
    do {
      iVar7 = iVar7 + -1;
      uVar11 = uVar14 ^ *pbVar8;
      lVar2 = (ulonglong)uVar11 * 0x1b3;
      uVar14 = (uint)lVar2;
      uVar13 = uVar13 * 0x1b3 + uVar11 * 0x100 + (int)((ulonglong)lVar2 >> 0x20);
      pbVar8 = pbVar8 + 1;
    } while (iVar7 != 0);
  }
  iVar7 = param_3[7];
  if (iVar7 != 0) {
    pbVar8 = (byte *)param_3[6];
    do {
      iVar7 = iVar7 + -1;
      uVar11 = uVar14 ^ *pbVar8;
      lVar2 = (ulonglong)uVar11 * 0x1b3;
      uVar14 = (uint)lVar2;
      uVar13 = uVar13 * 0x1b3 + uVar11 * 0x100 + (int)((ulonglong)lVar2 >> 0x20);
      pbVar8 = pbVar8 + 1;
    } while (iVar7 != 0);
  }
  iVar7 = param_3[9];
  if (iVar7 != 0) {
    pbVar8 = (byte *)param_3[8];
    do {
      iVar7 = iVar7 + -1;
      uVar11 = uVar14 ^ *pbVar8;
      lVar2 = (ulonglong)uVar11 * 0x1b3;
      uVar14 = (uint)lVar2;
      uVar13 = uVar13 * 0x1b3 + uVar11 * 0x100 + (int)((ulonglong)lVar2 >> 0x20);
      pbVar8 = pbVar8 + 1;
    } while (iVar7 != 0);
  }
  local_40 = param_3;
  if (*param_2 == 0) {
    bVar1 = (bool)hasExclusiveAccess(param_2);
    if (bVar1) {
      *param_2 = 8;
      DataMemoryBarrier(0xb);
      goto LAB_0074b8c0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0127e06c(param_2);
LAB_0074b8c0:
  FUN_0128236c(param_2);
  uVar15 = (uint)param_2 | 1;
  FUN_0128236c(uVar15);
  uVar3 = FUN_009bd658(param_2[6],param_2[7],param_2[8],param_2[9],uVar14,uVar13);
  uVar11 = uVar3 >> 0x19;
  iVar7 = param_2[2];
  uVar9 = param_2[3];
  local_48 = 0;
  while( true ) {
    uVar3 = uVar9 & uVar3;
    uVar16 = *(uint *)(iVar7 + uVar3);
    uVar4 = uVar16 ^ uVar11 * 0x1010101;
    uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
    while (uVar4 != 0) {
      uVar5 = uVar3 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                     (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar9;
      puVar10 = (uint *)(iVar7 + -0x10 + uVar5 * -0x10);
      uVar4 = uVar4 - 1 & uVar4;
      if (uVar14 == *puVar10 && uVar13 == puVar10[1]) {
        puVar10 = (uint *)(iVar7 + (uVar5 - 4 & uVar9));
        uVar13 = *puVar10;
        uVar14 = *(uint *)(iVar7 + uVar5) & 0x80808080 & *(uint *)(iVar7 + uVar5) << 1;
        uVar12 = 0x80;
        if (((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                           (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar13 & 0x80808080 & uVar13 << 1) >> 3) < 4) {
          param_2[4] = param_2[4] + 1;
          uVar12 = 0xff;
        }
        *(undefined1 *)(iVar7 + uVar5) = uVar12;
        *(undefined1 *)(puVar10 + 1) = uVar12;
        piVar6 = *(int **)(iVar7 + uVar5 * -0x10 + -8);
        param_2[5] = param_2[5] + -1;
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar6;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_012c0df4();
        }
        *param_1 = 5;
        FUN_01282570(param_2);
        FUN_01282570(uVar15);
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
    if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) break;
    local_48 = local_48 + 4;
    uVar3 = uVar3 + local_48;
  }
  local_2c = &local_40;
  local_28 = FUN_00aaf12c;
  FUN_00600d2c(&local_38,&DAT_0057d685,&local_2c);
  *param_1 = 2;
  param_1[1] = local_38;
  param_1[2] = uStack_34;
  param_1[3] = uStack_30;
  FUN_01282570(param_2);
  FUN_01282570(uVar15);
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

