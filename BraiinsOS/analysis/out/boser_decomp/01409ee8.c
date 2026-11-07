// FUN_01409ee8 @ 01409ee8 size=344 calls_out=1 calls_in=2
// strings: 

undefined8
FUN_01409ee8(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  ulonglong uVar13;
  
  uVar10 = param_5 - param_1;
  uVar11 = 0;
  iVar8 = param_6 - (param_2 + (param_1 > param_5));
  if (param_6 <= param_2 && (uint)(param_1 <= param_5) <= param_6 - param_2) {
    uVar10 = 0;
    iVar8 = 0;
  }
  uVar13 = FUN_01bf0ff0(uVar10,iVar8,&DAT_3b9aca00,0);
  uVar3 = (uint)(uVar13 >> 0x20);
  lVar1 = (uVar13 & 0xffffffff) * 1000000000;
  uVar2 = (uint)lVar1;
  uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
  lVar1 = (ulonglong)uVar3 * 1000000000 + (ulonglong)uVar9;
  uVar4 = (uint)lVar1;
  uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar5 = uVar10 - uVar2;
  uVar3 = iVar8 - (uVar9 + uVar3 * 1000000000 + (uint)(uVar10 < uVar2));
  uVar10 = uVar2 + uVar5;
  bVar12 = CARRY4(uVar4,uVar3) || CARRY4(uVar4 + uVar3,(uint)CARRY4(uVar2,uVar5));
  uVar2 = uVar4 + uVar3 + (uint)CARRY4(uVar2,uVar5);
  bVar6 = false;
  if (uVar7 + bVar12 != 0 || CARRY4(uVar7,(uint)bVar12)) {
    uVar10 = 0xffffffff;
    uVar2 = 0xffffffff;
  }
  uVar5 = param_5 - param_3;
  uVar3 = param_6 - (param_4 + (param_3 > param_5));
  uVar4 = 0;
  if (param_6 <= param_4 && (uint)(param_3 <= param_5) <= param_6 - param_4) {
    uVar3 = 0;
    uVar5 = 0;
  }
  do {
    uVar7 = uVar4;
    if ((bVar6) || (3 < uVar7)) {
      uVar7 = 4;
      goto LAB_0140a034;
    }
    uVar4 = uVar7;
    if (uVar7 != 3) {
      uVar4 = uVar7 + 1;
    }
    bVar6 = uVar7 == 3;
  } while ((uint)(&DAT_00476b24)[uVar7 * 2] < uVar3 ||
           uVar3 - (&DAT_00476b24)[uVar7 * 2] < (uint)((uint)(&DAT_00476b20)[uVar7 * 2] <= uVar5));
  uVar3 = (&DAT_00476ab8)[uVar7 * 2] & 0x3f;
  uVar11 = uVar10 >> uVar3 | uVar2 << (0x20 - uVar3 & 0xff);
  if (-1 < (int)(uVar3 - 0x20)) {
    uVar11 = uVar2 >> (uVar3 - 0x20 & 0xff);
  }
  uVar11 = uVar11 & (&DAT_00476ae0)[uVar7 * 2] - 1;
LAB_0140a034:
  return CONCAT44(uVar11,uVar7);
}

