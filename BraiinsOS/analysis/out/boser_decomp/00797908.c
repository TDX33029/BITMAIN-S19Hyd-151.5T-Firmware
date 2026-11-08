// FUN_00797908 @ 00797908 size=300 calls_out=3 calls_in=2
// strings: 

void FUN_00797908(int *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  byte *local_68;
  byte *local_64;
  int iStack_60;
  byte *pbStack_5c;
  int local_58;
  byte *local_54;
  int local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_01656528(&local_58);
  pbVar13 = local_54 + local_50 * 0x34;
  local_68 = local_54;
  local_64 = local_54;
  iStack_60 = local_58;
  iVar2 = -0x80000000;
  pbStack_5c = pbVar13;
  if (local_50 != 0) {
    pbVar1 = local_54;
    do {
      iVar2 = *(int *)pbVar1;
      local_54 = *(byte **)(pbVar1 + 4);
      local_50 = *(int *)(pbVar1 + 8);
      uStack_4c = *(undefined4 *)(pbVar1 + 0xc);
      local_48 = *(undefined4 *)(pbVar1 + 0x10);
      uStack_44 = *(undefined4 *)(pbVar1 + 0x14);
      uStack_40 = *(undefined4 *)(pbVar1 + 0x18);
      uStack_3c = *(undefined4 *)(pbVar1 + 0x1c);
      local_38 = *(undefined4 *)(pbVar1 + 0x20);
      uStack_34 = *(undefined4 *)(pbVar1 + 0x24);
      uStack_30 = *(undefined4 *)(pbVar1 + 0x28);
      uStack_2c = *(undefined4 *)(pbVar1 + 0x2c);
      uStack_28 = *(undefined4 *)(pbVar1 + 0x30);
      pbVar9 = pbVar1 + 0x34;
      local_58 = iVar2;
      if (local_50 == param_3) {
        pbVar3 = local_54;
        iVar4 = param_3;
        pbVar5 = param_2;
        do {
          if (iVar4 == 0) {
            if (iVar2 == -0x80000000) goto LAB_007979e0;
            iVar4 = *(int *)(pbVar1 + 8);
            iVar6 = *(int *)(pbVar1 + 0xc);
            iVar8 = *(int *)(pbVar1 + 0x10);
            iVar10 = *(int *)(pbVar1 + 0x14);
            iVar12 = *(int *)(pbVar1 + 0x18);
            param_1[1] = *(int *)(pbVar1 + 4);
            param_1[2] = iVar4;
            param_1[3] = iVar6;
            param_1[4] = iVar8;
            param_1[5] = iVar10;
            param_1[6] = iVar12;
            iVar4 = *(int *)(pbVar1 + 0x20);
            iVar6 = *(int *)(pbVar1 + 0x24);
            iVar8 = *(int *)(pbVar1 + 0x28);
            iVar10 = *(int *)(pbVar1 + 0x2c);
            iVar12 = *(int *)(pbVar1 + 0x30);
            param_1[7] = *(int *)(pbVar1 + 0x1c);
            param_1[8] = iVar4;
            param_1[9] = iVar6;
            param_1[10] = iVar8;
            param_1[0xb] = iVar10;
            param_1[0xc] = iVar12;
            local_64 = pbVar9;
            goto LAB_00797a20;
          }
          uVar11 = (uint)*pbVar5;
          iVar4 = iVar4 + -1;
          uVar7 = (uint)*pbVar3;
          if (uVar11 - 0x41 < 0x1a) {
            uVar11 = uVar11 | 0x20;
          }
          if (uVar7 - 0x41 < 0x1a) {
            uVar7 = uVar7 | 0x20;
          }
          pbVar3 = pbVar3 + 1;
          pbVar5 = pbVar5 + 1;
        } while (uVar7 == uVar11);
      }
      FUN_007390c4(&local_58);
LAB_007979e0:
      pbVar1 = pbVar9;
    } while (pbVar9 != pbVar13);
    iVar2 = -0x80000000;
    local_64 = pbVar13;
  }
LAB_00797a20:
  *param_1 = iVar2;
  FUN_012e8d04(&local_68);
  return;
}

