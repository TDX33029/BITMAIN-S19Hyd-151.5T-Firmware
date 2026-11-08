// FUN_00a3fec4 @ 00a3fec4 size=364 calls_out=1 calls_in=1
// strings: 

longlong FUN_00a3fec4(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar16 = *(uint *)(param_1 + 1);
  uVar14 = *(uint *)((int)param_1 + 0xc);
  if (uVar16 != 0 || uVar14 != 0) {
    uVar6 = *(uint *)(param_1 + 2);
    uVar7 = *(uint *)((int)param_1 + 0x14);
    uVar3 = *(uint *)(param_2 + 0x108);
    do {
      if (uVar3 < 0x3f) {
        uVar4 = uVar3 + 2;
        *(uint *)(param_2 + 0x108) = uVar4;
        puVar8 = (uint *)(param_2 + 8 + uVar3 * 4);
        uVar11 = *puVar8;
        uVar17 = puVar8[1];
      }
      else {
        if (uVar3 == 0x3f) {
          uVar11 = *(uint *)(param_2 + 0x104);
          FUN_01627dc0(param_2 + 0x110);
          uVar4 = 1;
          uVar17 = *(uint *)(param_2 + 8);
        }
        else {
          FUN_01627dc0(param_2 + 0x110);
          uVar4 = 2;
          uVar11 = *(uint *)(param_2 + 8);
          uVar17 = *(uint *)(param_2 + 0xc);
        }
        *(uint *)(param_2 + 0x108) = uVar4;
      }
      lVar1 = (ulonglong)uVar16 * (ulonglong)uVar17 +
              ((ulonglong)uVar16 * (ulonglong)uVar11 >> 0x20);
      uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
      lVar2 = (ulonglong)uVar14 * (ulonglong)uVar11;
      uVar15 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar10 = (uint)(lVar1 + lVar2);
      uVar3 = uVar4;
    } while (~uVar7 <= uVar10 &&
             (uint)((uint)((ulonglong)uVar16 * (ulonglong)uVar11) <= ~uVar6) <= ~uVar7 - uVar10);
    return (ulonglong)uVar14 * (ulonglong)uVar17 +
           (ulonglong)
           CONCAT14(CARRY4(uVar9,uVar15) ||
                    CARRY4(uVar9 + uVar15,(uint)CARRY4((uint)lVar2,(uint)lVar1)),
                    (int)((ulonglong)(lVar1 + lVar2) >> 0x20)) + *param_1;
  }
  uVar14 = *(uint *)(param_2 + 0x108);
  if (uVar14 < 0x3f) {
    *(uint *)(param_2 + 0x108) = uVar14 + 2;
    return *(longlong *)(param_2 + 8 + uVar14 * 4);
  }
  if (uVar14 == 0x3f) {
    uVar12 = *(undefined4 *)(param_2 + 0x104);
    FUN_01627dc0(param_2 + 0x110);
    uVar5 = 1;
    uVar13 = *(undefined4 *)(param_2 + 8);
  }
  else {
    FUN_01627dc0(param_2 + 0x110);
    uVar5 = 2;
    uVar12 = *(undefined4 *)(param_2 + 8);
    uVar13 = *(undefined4 *)(param_2 + 0xc);
  }
  *(undefined4 *)(param_2 + 0x108) = uVar5;
  return CONCAT44(uVar13,uVar12);
}

