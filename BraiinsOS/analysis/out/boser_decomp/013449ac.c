// FUN_013449ac @ 013449ac size=128 calls_out=2 calls_in=3
// strings: 

undefined8 FUN_013449ac(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r5;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  
  uVar6 = FUN_01344a30();
  uVar5 = 0;
  if ((uVar6 & 1) != 0) {
    unaff_r5 = (int)(uVar6 >> 0x20) << 0x18;
    uVar3 = 4;
    uVar4 = 0x10;
    do {
      iVar1 = FUN_01344ae8(param_1,".",1);
      if ((iVar1 == 0) || (uVar6 = FUN_01344a30(param_1), (uVar6 & 1) == 0)) goto LAB_01344a20;
      uVar2 = uVar4 & 0x18;
      uVar3 = uVar3 - 1;
      uVar4 = uVar4 - 8;
      unaff_r5 = unaff_r5 | (int)(uVar6 >> 0x20) << uVar2;
    } while (1 < uVar3);
    uVar5 = 1;
  }
LAB_01344a20:
  return CONCAT44(unaff_r5,uVar5);
}

