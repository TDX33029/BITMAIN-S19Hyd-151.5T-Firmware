// FUN_00fb4fb8 @ 00fb4fb8 size=232 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_00fb4fb8(uint *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar5 = *param_1;
  if ((uVar5 == 0) || (uVar6 = param_1[1], (int)uVar6 < 0)) {
    return 0;
  }
  if (0x12 < uVar6) {
    return 0xffffffffffffffff;
  }
  if (uVar6 == 0) {
    uVar3 = 0;
    iVar4 = 0;
  }
  else {
    uVar3 = 0;
    iVar4 = 0;
    uVar7 = 0;
    do {
      uVar2 = (ulonglong)uVar3;
      uVar3 = (uint)(uVar2 * 10);
      iVar4 = (int)(uVar2 * 10 >> 0x20) + iVar4 * 10;
      if (uVar7 < uVar5) {
        uVar8 = (uint)*(byte *)((int)param_1 + uVar7 + 8);
        bVar9 = CARRY4(uVar3,uVar8);
        uVar3 = uVar3 + uVar8;
        iVar4 = iVar4 + (uint)bVar9;
      }
      uVar7 = uVar7 + 1;
    } while (uVar6 != uVar7);
  }
  if (uVar5 <= uVar6) {
LAB_00fb5074:
    return CONCAT44(iVar4,uVar3);
  }
  bVar1 = *(byte *)((int)param_1 + uVar6 + 8);
  if (uVar6 + 1 == uVar5 && bVar1 == 5) {
    if ((char)param_1[0xc2] == '\0') {
      bVar1 = 0;
      if (uVar6 != 0) {
        bVar1 = *(byte *)((int)param_1 + uVar6 + 7);
      }
      if (uVar6 == 0 || (bVar1 & 1) == 0) goto LAB_00fb5074;
    }
  }
  else if (bVar1 < 5) goto LAB_00fb5074;
  return CONCAT44(iVar4 + (uint)(0xfffffffe < uVar3),uVar3 + 1);
}

