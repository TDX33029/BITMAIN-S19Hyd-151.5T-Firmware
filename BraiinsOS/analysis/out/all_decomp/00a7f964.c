// FUN_00a7f964 @ 00a7f964 size=892 calls_out=7 calls_in=3
// strings: 

void FUN_00a7f964(int param_1,int *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  uint uVar6;
  uint extraout_r2;
  uint extraout_r3;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined8 uVar15;
  uint local_34;
  byte local_30;
  byte local_2f;
  byte local_2e;
  uint *local_2c;
  undefined4 local_28;
  
  DataMemoryBarrier(0xb);
  if (DAT_018d7c7c == 0) {
    iVar9 = param_2[2];
    iVar11 = *(int *)(param_1 + 0x68);
    if (iVar9 == iVar11) {
      if (iVar11 != 0) {
        iVar1 = param_2[1];
        iVar7 = 0;
        iVar8 = *(int *)(param_1 + 100);
        do {
          iVar12 = iVar8 + iVar7;
          iVar13 = iVar1 + iVar7;
          uVar2 = (uint)*(ushort *)(iVar12 + 0x20);
          uVar6 = (uint)*(ushort *)(iVar13 + 0x20);
          bVar14 = uVar6 != uVar2;
          if (!bVar14) {
            uVar6 = *(uint *)(iVar13 + 0x10);
            uVar2 = *(uint *)(iVar12 + 0x10);
            param_3 = (uint)(uVar6 == 0x80000000);
            param_4 = (uint)(uVar2 == 0x80000000);
          }
          if (bVar14 || param_3 != param_4) goto LAB_00a7fa74;
          if (uVar6 != 0x80000000 && uVar2 != 0x80000000) {
            uVar2 = (uint)*(byte *)(iVar12 + 0x1c);
            bVar14 = *(byte *)(iVar13 + 0x1c) != uVar2;
            if (!bVar14) {
              param_3 = *(uint *)(iVar13 + 0x18);
              uVar2 = *(uint *)(iVar12 + 0x18);
            }
            if ((bVar14 || param_3 != uVar2) ||
               (iVar3 = thunk_FUN_016dd50a(*(undefined4 *)(iVar13 + 0x14),
                                           *(undefined4 *)(iVar12 + 0x14)), iVar3 != 0))
            goto LAB_00a7fa74;
          }
          if (*(int *)(iVar13 + 0xc) != *(int *)(iVar12 + 0xc)) goto LAB_00a7fa74;
          uVar15 = thunk_FUN_016dd50a(*(undefined4 *)(iVar13 + 8),*(undefined4 *)(iVar12 + 8));
          bVar14 = (int)uVar15 != 0;
          if (!bVar14) {
            uVar15 = CONCAT44(*(undefined4 *)(iVar8 + iVar7),*(undefined4 *)(iVar1 + iVar7));
          }
          if (bVar14 || (int)((ulonglong)uVar15 >> 0x20) != (int)uVar15) goto LAB_00a7fa74;
          iVar7 = iVar7 + 0x24;
          iVar11 = iVar11 + -1;
          param_3 = extraout_r2;
          param_4 = extraout_r3;
        } while (iVar11 != 0);
      }
    }
    else {
LAB_00a7fa74:
      local_2c = (uint *)0x9249f1a5;
      pbVar4 = (byte *)FUN_00a33670(&DAT_00342d36,0x9249f1a5);
      local_2e = pbVar4[6] ^ 0xdb;
      local_2f = pbVar4[5] ^ 0x3e;
      local_30 = pbVar4[4] ^ 0xf;
      local_34 = ((uint)pbVar4[3] << 0x18 | (uint)pbVar4[2] << 0x10 | (uint)pbVar4[1] << 8 |
                 (uint)*pbVar4) ^ 0x4745ffb6;
      local_28 = 7;
      local_2c = &local_34;
      piVar5 = (int *)FUN_00749fd0(DAT_018d7cc8,&local_2c,1);
      puVar10 = (uint *)(piVar5 + 2);
      do {
        uVar2 = *puVar10;
        bVar14 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar14);
      *puVar10 = uVar2 + 1;
      piVar5[3] = piVar5[3] + (uint)(0xfffffffe < uVar2);
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar5;
        bVar14 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar14);
      *piVar5 = iVar11 + -1;
      if (iVar11 == 1) {
        DataMemoryBarrier(0xb);
        FUN_012c0df4();
      }
    }
    local_2c = (uint *)0xe74084a2;
    pbVar4 = (byte *)FUN_00a3360c(&DAT_00342c66,0xe74084a2);
    local_2e = pbVar4[6] ^ 0x6b;
    local_2f = pbVar4[5] ^ 0x2c;
    local_30 = pbVar4[4] ^ 0x92;
    local_34 = ((uint)pbVar4[3] << 0x18 | (uint)pbVar4[2] << 0x10 | (uint)pbVar4[1] << 8 |
               (uint)*pbVar4) ^ 0x6942ecb8;
    local_28 = 7;
    local_2c = &local_34;
    piVar5 = (int *)FUN_00749168(DAT_018d7cc0,&local_2c,1);
    do {
      bVar14 = (bool)hasExclusiveAccess(piVar5 + 2);
    } while (!bVar14);
    piVar5[2] = (uint)(iVar9 != 0);
    piVar5[3] = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar5;
      bVar14 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar14);
    *piVar5 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_012c0df4();
    }
  }
  iVar9 = *(int *)(param_1 + 100);
  puVar10 = (uint *)(iVar9 + 0x10);
  for (iVar11 = *(int *)(param_1 + 0x68); iVar11 != 0; iVar11 = iVar11 + -1) {
    if ((*puVar10 & 0x7fffffff) == 0) {
      uVar2 = puVar10[-3];
    }
    else {
      thunk_FUN_016d3fb4(puVar10[1]);
      uVar2 = puVar10[-3];
    }
    if (uVar2 != 0) {
      thunk_FUN_016d3fb4(puVar10[-2]);
    }
    puVar10 = puVar10 + 9;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    thunk_FUN_016d3fb4(iVar9);
  }
  iVar9 = param_2[1];
  iVar11 = param_2[2];
  *(int *)(param_1 + 0x60) = *param_2;
  *(int *)(param_1 + 100) = iVar9;
  *(int *)(param_1 + 0x68) = iVar11;
  return;
}

