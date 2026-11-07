// FUN_01899178 @ 01899178 size=424 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_01899178(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar8 = param_1[1];
  uVar2 = *param_1 & 0xfffffffe;
  if (uVar2 == 0 && uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_38,&DAT_01d21b7c,&DAT_01d21c5c);
  }
  local_34 = param_1[3];
  uVar9 = param_1[2];
  local_30 = param_1[4];
  local_2c = param_1[5];
  local_28 = param_1[6];
  local_38 = uVar9;
  uVar13 = FUN_0189ba6c(param_2,param_3);
  iVar6 = (int)((ulonglong)uVar13 >> 0x20);
  uVar3 = (undefined4)uVar13;
  FUN_01bda5e0(uVar3,uVar3,param_1[7],uVar9,&local_30,iVar6);
  uVar13 = FUN_0189ba6c(uVar3,iVar6);
  uVar7 = (undefined4)((ulonglong)uVar13 >> 0x20);
  uVar4 = (undefined4)uVar13;
  uVar5 = LZCOUNT(uVar2) + 0x20;
  if (uVar8 != 0) {
    uVar5 = LZCOUNT(uVar8);
  }
  uVar5 = uVar5 ^ 0x3f;
  if (uVar5 != 0) {
    uVar10 = 1 << uVar5;
    uVar11 = 1 >> (0x20 - uVar5 & 0xff);
    if (-1 < (int)(uVar5 - 0x20)) {
      uVar10 = 0;
      uVar11 = 1 << (uVar5 - 0x20 & 0xff);
    }
    do {
      FUN_01bda5e0(uVar4,uVar4,uVar4,uVar9,&local_30,uVar7);
      uVar5 = (uint)((byte)uVar11 & 1) << 0x1f | uVar10 >> 1;
      if ((uVar5 & uVar2) != 0 || (uVar11 >> 1 & uVar8) != 0) {
        FUN_01bda5e0(uVar4,uVar4,uVar3,uVar9,&local_30,uVar7);
      }
      bVar12 = uVar10 < 4;
      uVar1 = -uVar11;
      uVar10 = uVar5;
      uVar11 = uVar11 >> 1;
    } while (bVar12 <= uVar1);
  }
  if (iVar6 != 0) {
    thunk_FUN_01be4678(uVar3);
  }
  FUN_01bda5e0(uVar4,uVar4,param_2,uVar9,&local_30,uVar7);
  return uVar13;
}

