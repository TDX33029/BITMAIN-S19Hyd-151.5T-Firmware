// FUN_0150c8f8 @ 0150c8f8 size=408 calls_out=2 calls_in=1
// strings: 

void FUN_0150c8f8(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  uVar8 = param_2[1];
  uVar11 = param_2[2];
  if (uVar8 - uVar11 < 2) {
    param_1[3] = 0x1f;
    *(undefined1 *)(param_1 + 1) = 0xc;
    *(undefined2 *)(param_1 + 2) = 0xbd70;
    *param_1 = 0x80000001;
    *(undefined2 *)((int)param_1 + 10) = 0x40;
    return;
  }
  uVar6 = uVar11 + 2;
  param_2[2] = uVar6;
  if ((0xfffffffd < uVar11) || (uVar8 < uVar6)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar11,uVar6,uVar8,&DAT_018a78f8);
  }
  uVar4 = *(ushort *)(*param_2 + uVar11);
  uVar5 = (uint)uVar4 << 0x18 | (uint)(uVar4 >> 8) << 0x10;
  uVar10 = (uVar5 >> 0x10) - 1;
  uVar9 = (undefined2)uVar10;
  if (2 < (uVar10 & 0xffff)) {
    uVar9 = 3;
  }
  if (uVar8 - uVar6 < 3) {
    *(undefined1 *)(param_1 + 1) = 0xc;
    *param_1 = 0x80000001;
    param_1[2] = &DAT_0040bf71;
    param_1[3] = 3;
    return;
  }
  uVar10 = uVar11 + 5;
  bVar13 = 0xfffffffb < uVar6;
  bVar12 = uVar11 == 0xfffffffa;
  if (!bVar13 || bVar12) {
    bVar13 = uVar8 <= uVar10;
    bVar12 = uVar10 == uVar8;
  }
  param_2[2] = uVar10;
  if (!bVar13 || bVar12) {
    pbVar7 = (byte *)(*param_2 + uVar6);
    bVar1 = *pbVar7;
    bVar2 = pbVar7[1];
    bVar3 = pbVar7[2];
    FUN_015405b4(&local_34);
    if (local_34 == 1) {
      *param_1 = 0x80000001;
      param_1[1] = local_30;
      param_1[2] = uStack_2c;
      param_1[3] = local_28;
      return;
    }
    param_1[2] = local_28;
    *param_1 = local_30;
    param_1[1] = uStack_2c;
    param_1[4] = (uint)bVar1 << 0x10 | (uint)bVar2 << 8 | (uint)bVar3;
    *(short *)((int)param_1 + 0xe) = (short)(uVar5 >> 0x10);
    *(undefined2 *)(param_1 + 3) = uVar9;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c(uVar6,uVar10,uVar8,&DAT_018a78f8);
}

