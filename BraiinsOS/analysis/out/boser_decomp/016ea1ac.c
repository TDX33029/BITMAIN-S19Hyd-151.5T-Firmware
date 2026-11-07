// FUN_016ea1ac @ 016ea1ac size=476 calls_out=8 calls_in=0
// strings: assertion failed: !self.flags().unicode()assertion failed: self.flags().unicode()09AZaz

void FUN_016ea1ac(uint *param_1,int *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  uint local_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar10 = *param_2;
  bVar1 = *(byte *)(iVar10 + 0x14);
  if ((bVar1 == 2) || ((bVar1 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: !self.flags().unicode()assertion failed: self.flags().unicode()09AZaz"
                 ,0x29,&DAT_01d0a408);
  }
  uVar13 = FUN_016eae08(**(undefined1 **)(&DAT_01d332b8 + (uint)*(byte *)(param_3 + 0x18) * 4));
  iVar4 = (int)((ulonglong)uVar13 >> 0x20);
  iVar2 = (int)uVar13;
  uVar8 = iVar4 - iVar2;
  uVar7 = 0;
  if (0x7fffffff < uVar8) {
LAB_016ea200:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar7,uVar8);
  }
  uVar9 = 0;
  if (iVar4 == iVar2) {
    local_54 = 1;
    local_58 = 0;
  }
  else {
    uVar7 = 1;
    local_54 = FUN_01298504(uVar8,1);
    local_58 = uVar8 >> 1;
    if (local_54 == 0) goto LAB_016ea200;
  }
  if (iVar2 != iVar4) {
    uVar9 = 0;
    do {
      pbVar5 = (byte *)(iVar2 + uVar9 * 2);
      bVar1 = *pbVar5;
      bVar6 = pbVar5[1];
      bVar3 = bVar6;
      if (bVar1 >= bVar6 && bVar1 != bVar6) {
        bVar3 = bVar1;
      }
      if (bVar1 < bVar6) {
        bVar6 = bVar1;
      }
      pbVar5 = (byte *)(local_54 + uVar9 * 2);
      *pbVar5 = bVar6;
      uVar9 = uVar9 + 1;
      pbVar5[1] = bVar3;
    } while (uVar8 >> 1 != uVar9);
  }
  local_50 = uVar9;
  local_30 = local_58;
  uStack_2c = local_54;
  uStack_28 = uVar9;
  FUN_016f6888(&local_68);
  if (*(char *)(param_3 + 0x19) == '\x01') {
    FUN_016de88c(&local_68);
  }
  bVar11 = *(char *)(iVar10 + 0x17) != '\0';
  uVar8 = 0;
  if (bVar11) {
    uVar8 = local_60;
  }
  bVar12 = uVar8 != 0;
  if (bVar11 && bVar12) {
    uVar8 = local_64 + uVar8 * 2;
  }
  if (((bVar11 && bVar12) && uVar8 != 2) && (0x7fffffff < (uint)(int)*(char *)(uVar8 - 1))) {
    FUN_016e9480(&local_58,param_2[1],param_2[2],param_3,1);
    *param_1 = local_58;
    param_1[1] = local_54;
    param_1[2] = local_50;
    param_1[3] = uStack_4c;
    param_1[4] = uStack_48;
    param_1[5] = local_44;
    param_1[6] = uStack_40;
    param_1[7] = uStack_3c;
    param_1[8] = uStack_38;
    param_1[9] = uStack_34;
    FUN_0134aee0(local_68,local_64,1,2);
  }
  else {
    param_1[1] = local_68;
    param_1[2] = local_64;
    param_1[3] = local_60;
    param_1[4] = uStack_5c;
    *param_1 = 0x80000000;
  }
  return;
}

