// FUN_007a3e10 @ 007a3e10 size=336 calls_out=1 calls_in=1
// strings: 

longlong FUN_007a3e10(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  
  uVar17 = *(uint *)(param_1 + 1);
  uVar15 = *(uint *)((int)param_1 + 0xc);
  if (uVar17 == 0 && uVar15 == 0) {
    uVar15 = *(uint *)(param_2 + 0x148);
    if (uVar15 < 0x3f) {
      *(uint *)(param_2 + 0x148) = uVar15 + 2;
      lVar1 = *(longlong *)(param_2 + 8 + uVar15 * 4);
    }
    else {
      if (uVar15 == 0x3f) {
        uVar11 = *(undefined4 *)(param_2 + 0x104);
        FUN_007a4e44(param_2 + 0x108);
        uVar4 = 1;
        uVar12 = *(undefined4 *)(param_2 + 8);
      }
      else {
        FUN_007a4e44(param_2 + 0x108);
        uVar4 = 2;
        uVar11 = *(undefined4 *)(param_2 + 8);
        uVar12 = *(undefined4 *)(param_2 + 0xc);
      }
      lVar1 = CONCAT44(uVar12,uVar11);
      *(undefined4 *)(param_2 + 0x148) = uVar4;
    }
  }
  else {
    iVar16 = param_2 + 8;
    uVar13 = *(uint *)(param_1 + 2);
    uVar18 = *(uint *)((int)param_1 + 0x14);
    uVar3 = *(uint *)(param_2 + 0x148);
    do {
      if (uVar3 < 0x3f) {
        uVar7 = uVar3 + 2;
        *(uint *)(param_2 + 0x148) = uVar7;
        puVar5 = (uint *)(iVar16 + uVar3 * 4);
        uVar9 = *puVar5;
        uVar6 = puVar5[1];
      }
      else {
        if (uVar3 == 0x3f) {
          uVar9 = *(uint *)(param_2 + 0x104);
          FUN_007a4e44(param_2 + 0x108,iVar16);
          uVar6 = *(uint *)(param_2 + 8);
          uVar7 = 1;
        }
        else {
          FUN_007a4e44(param_2 + 0x108,iVar16);
          uVar9 = *(uint *)(param_2 + 8);
          uVar7 = 2;
          uVar6 = *(uint *)(param_2 + 0xc);
        }
        *(uint *)(param_2 + 0x148) = uVar7;
      }
      lVar1 = (ulonglong)uVar17 * (ulonglong)uVar6 + ((ulonglong)uVar17 * (ulonglong)uVar9 >> 0x20);
      uVar8 = (uint)((ulonglong)lVar1 >> 0x20);
      lVar2 = (ulonglong)uVar15 * (ulonglong)uVar9;
      uVar14 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar10 = (uint)(lVar1 + lVar2);
      uVar3 = uVar7;
    } while (uVar10 <= uVar18 &&
             (uint)(uVar13 <= (uint)((ulonglong)uVar17 * (ulonglong)uVar9)) <= uVar10 - uVar18);
    lVar1 = (ulonglong)uVar15 * (ulonglong)uVar6 +
            (ulonglong)
            CONCAT14(CARRY4(uVar8,uVar14) ||
                     CARRY4(uVar8 + uVar14,(uint)CARRY4((uint)lVar2,(uint)lVar1)),
                     (int)((ulonglong)(lVar1 + lVar2) >> 0x20)) + *param_1;
  }
  return lVar1;
}

