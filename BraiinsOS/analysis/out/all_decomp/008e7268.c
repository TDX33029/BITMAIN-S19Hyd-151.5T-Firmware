// FUN_008e7268 @ 008e7268 size=312 calls_out=6 calls_in=1
// strings: 

void FUN_008e7268(int param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  uint uVar5;
  undefined4 extraout_s1;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  FUN_015f3b0c(&local_38,1);
  local_48 = local_38;
  uStack_44 = uStack_34;
  uStack_40 = local_30;
  FUN_015f3c24(&local_38,param_1 + 0x40,&local_48);
  dVar9 = (double)FUN_01845f30(uVar4,uVar3);
  uVar3 = (undefined4)((ulonglong)dVar9 >> 0x20);
  if ((local_38 & 1) == 0) {
    dVar7 = (double)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    dVar9 = dVar7 / 1000000000.0 + dVar9;
    uVar1 = in_fpscr & 0xfffffff | (uint)(dVar9 < 0.0) << 0x1f | (uint)(dVar9 == 0.0) << 0x1e;
    uVar5 = uVar1 | (uint)NAN(dVar9) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar5 >> 0x1c) & 1)) {
      return;
    }
    dVar8 = (double)FUN_01845f30(local_30,uStack_2c);
    dVar7 = (double)VectorUnsignedToFloat(uStack_28,(byte)(uVar5 >> 0x16) & 3);
    dVar9 = 1.0 - (dVar7 / 1000000000.0 + dVar8) / dVar9;
    if (dVar9 < 0.0) {
      dVar9 = 0.0;
    }
    uVar1 = uVar5 & 0xfffffff | (uint)(dVar9 < 1.0) << 0x1f | (uint)(dVar9 == 1.0) << 0x1e;
    bVar2 = (byte)(uVar1 >> 0x18);
    dVar7 = (double)VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0x20),(byte)(uVar1 >> 0x16) & 3)
    ;
    if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == NAN(dVar9)) {
      dVar9 = 1.0;
    }
    uVar4 = FUN_016d6168(SUB84(dVar9 * dVar7,0));
    uVar10 = FUN_01845b18(uVar4,extraout_s1);
    uVar3 = (undefined4)(uVar10 >> 0x20);
    if ((double)CONCAT44(extraout_s1,uVar4) < 0.0) {
      uVar10 = 0;
    }
    if (1.844674407370955e+19 < (double)CONCAT44(extraout_s1,uVar4)) {
      uVar10 = 0xffffffffffffffff;
    }
  }
  else {
    uVar10 = (ulonglong)*(uint *)(param_1 + 0x20);
  }
  FUN_00714b60(param_1,uVar3,(int)uVar10,(int)(uVar10 >> 0x20));
  return;
}

