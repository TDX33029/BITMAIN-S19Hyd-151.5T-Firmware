// FUN_016c2084 @ 016c2084 size=276 calls_out=3 calls_in=2
// strings: 

void FUN_016c2084(uint *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint3 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  uint local_48;
  uint local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint3 local_2c;
  undefined1 uStack_29;
  
  uVar8 = param_3 * 0x10;
  bVar10 = 0xffffffe < param_3;
  bVar9 = param_3 == 0xfffffff;
  uVar6 = 0;
  if (param_3 < 0x10000000) {
    bVar10 = 0x7ffffffb < uVar8;
    bVar9 = uVar8 == 0x7ffffffc;
  }
  if (!bVar10 || bVar9) {
    if (uVar8 == 0) {
      local_44 = 4;
      local_48 = 0;
    }
    else {
      uVar6 = 4;
      local_44 = FUN_01298504(uVar8,4);
      if (local_44 == 0) goto LAB_016c20a0;
      local_48 = param_3;
      if (param_3 != 0) {
        uVar7 = 0;
        do {
          if (uVar8 == 0) break;
          FUN_016c0ed4(&local_38,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
          pbVar1 = (byte *)(param_2 + 0xe);
          pbVar2 = (byte *)(param_2 + 0xd);
          uVar8 = uVar8 - 0x10;
          pbVar3 = (byte *)(param_2 + 0xc);
          param_2 = param_2 + 0x10;
          uVar4 = 0;
          if (*pbVar3 != 0) {
            uVar4 = (uint3)*pbVar3 | (uint3)*pbVar1 << 0x10 | (uint3)*pbVar2 << 8;
          }
          _local_2c = CONCAT13(uStack_29,uVar4);
          puVar5 = (undefined4 *)(local_44 + uVar7 * 0x10);
          uVar7 = uVar7 + 1;
          *puVar5 = local_38;
          puVar5[1] = uStack_34;
          puVar5[2] = uStack_30;
          puVar5[3] = _local_2c;
        } while (param_3 != uVar7);
      }
    }
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = param_3;
    return;
  }
LAB_016c20a0:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar6,uVar8);
}

