// FUN_01b2fff8 @ 01b2fff8 size=408 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b2fff8(undefined4 *param_1,uint *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  uVar1 = (ulonglong)*param_2 * (ulonglong)*param_2;
  *param_1 = (int)uVar1;
  lVar2 = (ulonglong)*param_2 * (ulonglong)param_2[1];
  lVar3 = lVar2 + (uVar1 >> 0x20);
  param_1[1] = (int)(lVar3 + lVar2);
  uVar5 = (uint)CARRY4((uint)((ulonglong)lVar3 >> 0x20),
                       (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar3,(uint)lVar2));
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[1] + ((ulonglong)(lVar3 + lVar2) >> 0x20);
  uVar6 = (uint)(uVar1 >> 0x20);
  uVar10 = uVar5 + uVar6;
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[2] + (uVar1 & 0xffffffff);
  uVar8 = (uint)(uVar1 >> 0x20);
  uVar11 = uVar10 + uVar8;
  lVar2 = (ulonglong)*param_2 * (ulonglong)param_2[2] + (uVar1 & 0xffffffff);
  param_1[2] = (int)lVar2;
  uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
  bVar12 = CARRY4(uVar11,uVar4);
  uVar11 = uVar11 + uVar4;
  if (!bVar12) {
    uVar4 = 0;
  }
  if (bVar12) {
    uVar4 = 1;
  }
  uVar4 = uVar4 + (uint)CARRY4(uVar5,uVar6) + (uint)CARRY4(uVar10,uVar8);
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[3] + (ulonglong)uVar11;
  uVar10 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar4 + uVar10;
  uVar1 = (ulonglong)*param_2 * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar11 = (uint)(uVar1 >> 0x20);
  uVar8 = uVar6 + uVar11;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[2] + (uVar1 & 0xffffffff);
  uVar9 = (uint)(uVar1 >> 0x20);
  uVar5 = uVar8 + uVar9;
  lVar2 = (ulonglong)param_2[1] * (ulonglong)param_2[2] + (uVar1 & 0xffffffff);
  param_1[3] = (int)lVar2;
  uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar6 = (uint)CARRY4(uVar4,uVar10) + (uint)CARRY4(uVar6,uVar11) + (uint)CARRY4(uVar8,uVar9) +
          (uint)CARRY4(uVar5,uVar7);
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[2] + (ulonglong)(uVar5 + uVar7);
  uVar10 = (uint)(uVar1 >> 0x20);
  uVar8 = uVar6 + uVar10;
  uVar1 = (ulonglong)param_2[1] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  uVar11 = (uint)(uVar1 >> 0x20);
  uVar5 = uVar8 + uVar11;
  lVar2 = (ulonglong)param_2[1] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  param_1[4] = (int)lVar2;
  uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
  bVar12 = CARRY4(uVar5,uVar4);
  uVar5 = uVar5 + uVar4;
  if (!bVar12) {
    uVar4 = 0;
  }
  if (bVar12) {
    uVar4 = 1;
  }
  uVar4 = uVar4 + (uint)CARRY4(uVar6,uVar10) + (uint)CARRY4(uVar8,uVar11);
  uVar1 = (ulonglong)param_2[2] * (ulonglong)param_2[3] + (ulonglong)uVar5;
  uVar8 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar4 + uVar8;
  lVar2 = (ulonglong)param_2[2] * (ulonglong)param_2[3] + (uVar1 & 0xffffffff);
  param_1[5] = (int)lVar2;
  uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
  lVar2 = (ulonglong)param_2[3] * (ulonglong)param_2[3] + (ulonglong)(uVar6 + uVar5);
  param_1[6] = (int)lVar2;
  param_1[7] = (uint)CARRY4(uVar4,uVar8) + (int)((ulonglong)lVar2 >> 0x20) +
               (uint)CARRY4(uVar6,uVar5);
  return 0;
}

