// FUN_00d64210 @ 00d64210 size=400 calls_out=1 calls_in=2
// strings: 

longlong FUN_00d64210(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  
  uVar18 = param_3 + 1;
  uVar19 = param_4 + (0xfffffffe < param_3);
  if (!CARRY4(param_4,(uint)(0xfffffffe < param_3))) {
    iVar5 = LZCOUNT(uVar18) + 0x20;
    if (uVar19 != 0) {
      iVar5 = LZCOUNT(uVar19);
    }
    iVar17 = param_1 + 8;
    uVar9 = uVar18 >> (0x20U - iVar5 & 0xff) | uVar19 << iVar5;
    iVar6 = uVar18 << iVar5;
    if (-1 < (int)(iVar5 - 0x20U)) {
      iVar6 = 0;
      uVar9 = uVar18 << (iVar5 - 0x20U & 0xff);
    }
    uVar16 = uVar9 - (iVar6 == 0);
    uVar11 = *(uint *)(param_1 + 0x108);
    do {
      if (uVar11 < 0x3f) {
        uVar3 = uVar11 + 2;
        *(uint *)(param_1 + 0x108) = uVar3;
        puVar7 = (uint *)(iVar17 + uVar11 * 4);
        uVar11 = *puVar7;
        uVar8 = puVar7[1];
      }
      else {
        if (uVar11 == 0x3f) {
          uVar11 = *(uint *)(param_1 + 0x104);
          FUN_01627dc0(param_1 + 0x110,iVar17,uVar9);
          uVar8 = *(uint *)(param_1 + 8);
          uVar3 = 1;
        }
        else {
          FUN_01627dc0(param_1 + 0x110,iVar17,uVar9);
          uVar11 = *(uint *)(param_1 + 8);
          uVar3 = 2;
          uVar8 = *(uint *)(param_1 + 0xc);
        }
        *(uint *)(param_1 + 0x108) = uVar3;
      }
      lVar1 = (ulonglong)uVar18 * (ulonglong)uVar8 + ((ulonglong)uVar18 * (ulonglong)uVar11 >> 0x20)
      ;
      uVar15 = (uint)((ulonglong)lVar1 >> 0x20);
      lVar2 = (ulonglong)uVar19 * (ulonglong)uVar11;
      uVar14 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar13 = (uint)(lVar1 + lVar2);
      bVar20 = (uint)((ulonglong)uVar18 * (ulonglong)uVar11) <= iVar6 - 1U;
      uVar9 = uVar16 - (uVar13 + !bVar20);
      uVar11 = uVar3;
    } while (uVar16 <= uVar13 && (uint)bVar20 <= uVar16 - uVar13);
    return (ulonglong)uVar19 * (ulonglong)uVar8 +
           (ulonglong)
           CONCAT14(CARRY4(uVar15,uVar14) ||
                    CARRY4(uVar15 + uVar14,(uint)CARRY4((uint)lVar2,(uint)lVar1)),
                    (int)((ulonglong)(lVar1 + lVar2) >> 0x20));
  }
  uVar18 = *(uint *)(param_1 + 0x108);
  if (uVar18 < 0x3f) {
    *(uint *)(param_1 + 0x108) = uVar18 + 2;
    return *(longlong *)(param_1 + 8 + uVar18 * 4);
  }
  if (uVar18 == 0x3f) {
    uVar12 = *(undefined4 *)(param_1 + 0x104);
    FUN_01627dc0(param_1 + 0x110);
    uVar4 = 1;
    uVar10 = *(undefined4 *)(param_1 + 8);
  }
  else {
    FUN_01627dc0(param_1 + 0x110);
    uVar4 = 2;
    uVar12 = *(undefined4 *)(param_1 + 8);
    uVar10 = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 0x108) = uVar4;
  return CONCAT44(uVar10,uVar12);
}

