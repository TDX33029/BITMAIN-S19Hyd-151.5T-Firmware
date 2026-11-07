// FUN_01287c58 @ 01287c58 size=584 calls_out=0 calls_in=0
// strings: 

void FUN_01287c58(int param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar8 = *(uint *)(param_1 + 0x14);
  uVar3 = (*param_2 & 0x3ffffff) + *(int *)(param_1 + 0x24);
  uVar12 = *(uint *)(param_1 + 0x18);
  uVar14 = *(uint *)(param_1 + 0x1c);
  uVar10 = *(uint *)(param_1 + 0x10);
  uVar9 = ((*(uint *)((int)param_2 + 3) & 0xfffffff) >> 2) + *(int *)(param_1 + 0x28);
  uVar11 = ((*(uint *)((int)param_2 + 6) & 0x3fffffff) >> 4) + *(int *)(param_1 + 0x2c);
  uVar7 = *(uint *)(param_1 + 0x20) * 5;
  uVar6 = uVar14 * 5;
  uVar2 = *(int *)(param_1 + 0x34) + (param_2[3] >> 8) + 0x1000000;
  uVar13 = *(int *)(param_1 + 0x30) + (*(uint *)((int)param_2 + 9) >> 6);
  lVar1 = (ulonglong)(uVar12 * 5) * (ulonglong)uVar13 +
          (ulonglong)uVar6 * (ulonglong)uVar11 +
          (ulonglong)uVar7 * (ulonglong)uVar9 + (ulonglong)uVar10 * (ulonglong)uVar3 +
          (ulonglong)(uVar8 * 5) * (ulonglong)uVar2;
  uVar4 = (uint)lVar1;
  lVar1 = (ulonglong)(uVar12 * 5) * (ulonglong)uVar2 +
          (ulonglong)uVar6 * (ulonglong)uVar13 +
          (ulonglong)uVar10 * (ulonglong)uVar9 + (ulonglong)uVar8 * (ulonglong)uVar3 +
          (ulonglong)uVar7 * (ulonglong)uVar11 +
          (ulonglong)(uVar4 >> 0x1a | (int)((ulonglong)lVar1 >> 0x20) * 0x40);
  uVar5 = (uint)lVar1;
  lVar1 = (ulonglong)uVar7 * (ulonglong)uVar13 +
          (ulonglong)uVar8 * (ulonglong)uVar9 + (ulonglong)uVar12 * (ulonglong)uVar3 +
          (ulonglong)uVar10 * (ulonglong)uVar11 + (ulonglong)uVar6 * (ulonglong)uVar2 +
          (ulonglong)(uVar5 >> 0x1a | (int)((ulonglong)lVar1 >> 0x20) * 0x40);
  uVar6 = (uint)lVar1;
  *(uint *)(param_1 + 0x2c) = uVar6 & 0x3ffffff;
  lVar1 = (ulonglong)uVar10 * (ulonglong)uVar13 +
          (ulonglong)uVar12 * (ulonglong)uVar9 + (ulonglong)uVar14 * (ulonglong)uVar3 +
          (ulonglong)uVar8 * (ulonglong)uVar11 + (ulonglong)uVar7 * (ulonglong)uVar2 +
          (ulonglong)(uVar6 >> 0x1a | (int)((ulonglong)lVar1 >> 0x20) * 0x40);
  uVar7 = (uint)lVar1;
  *(uint *)(param_1 + 0x30) = uVar7 & 0x3ffffff;
  lVar1 = (ulonglong)uVar10 * (ulonglong)uVar2 +
          (ulonglong)uVar8 * (ulonglong)uVar13 +
          (ulonglong)uVar12 * (ulonglong)uVar11 +
          (ulonglong)uVar14 * (ulonglong)uVar9 +
          (ulonglong)*(uint *)(param_1 + 0x20) * (ulonglong)uVar3 +
          (ulonglong)(uVar7 >> 0x1a | (int)((ulonglong)lVar1 >> 0x20) * 0x40);
  uVar7 = (uint)lVar1;
  *(uint *)(param_1 + 0x34) = uVar7 & 0x3ffffff;
  uVar7 = (uVar7 >> 0x1a | (int)((ulonglong)lVar1 >> 0x20) * 0x40) * 5 + (uVar4 & 0x3ffffff);
  *(uint *)(param_1 + 0x24) = uVar7 & 0x3ffffff;
  *(uint *)(param_1 + 0x28) = (uVar5 & 0x3ffffff) + (uVar7 >> 0x1a);
  return;
}

