// FUN_013def48 @ 013def48 size=732 calls_out=3 calls_in=2
// strings: 

void FUN_013def48(uint *param_1,short *param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint local_1b0;
  uint local_1ac;
  ushort local_148;
  short sStack_146;
  ushort local_d0;
  short sStack_ce;
  
  iVar5 = param_3 * 0xe8;
  uVar7 = 0;
  if (0x8d3dcb < param_3) {
LAB_013def70:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar7,iVar5);
  }
  if (iVar5 == 0) {
    local_1ac = 4;
    local_1b0 = 0;
  }
  else {
    uVar7 = 4;
    local_1ac = FUN_01298504(iVar5,4);
    if (local_1ac == 0) goto LAB_013def70;
    local_1b0 = param_3;
    if (param_3 != 0) {
      puVar4 = (undefined4 *)((uint)&local_d0 | 4);
      puVar10 = (undefined4 *)((uint)&local_148 | 4);
      if (param_2 != param_2 + param_3 * 0x74) {
        sVar1 = *param_2;
        if (sVar1 != 1) {
          uVar7 = *(undefined4 *)(param_2 + 4);
          uVar6 = *(undefined4 *)(param_2 + 6);
          uVar8 = *(undefined4 *)(param_2 + 8);
          *puVar10 = *(undefined4 *)(param_2 + 2);
          puVar10[1] = uVar7;
          puVar10[2] = uVar6;
          puVar10[3] = uVar8;
          uVar7 = *(undefined4 *)(param_2 + 0xc);
          uVar6 = *(undefined4 *)(param_2 + 0xe);
          uVar8 = *(undefined4 *)(param_2 + 0x10);
          puVar10[4] = *(undefined4 *)(param_2 + 10);
          puVar10[5] = uVar7;
          puVar10[6] = uVar6;
          puVar10[7] = uVar8;
          sStack_146 = param_2[1];
        }
        else {
          FUN_015e8ad4(puVar10,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6));
        }
        sVar2 = param_2[0x12];
        _local_148 = CONCAT22(sStack_146,(ushort)(sVar1 == 1));
        if (sVar2 != 1) {
          uVar7 = *(undefined4 *)(param_2 + 0x16);
          uVar6 = *(undefined4 *)(param_2 + 0x18);
          uVar8 = *(undefined4 *)(param_2 + 0x1a);
          uVar9 = *(undefined4 *)(param_2 + 0x1c);
          uVar11 = *(undefined4 *)(param_2 + 0x1e);
          *puVar4 = *(undefined4 *)(param_2 + 0x14);
          puVar4[1] = uVar7;
          puVar4[2] = uVar6;
          puVar4[3] = uVar8;
          puVar4[4] = uVar9;
          puVar4[5] = uVar11;
          sStack_ce = param_2[0x13];
        }
        else {
          FUN_015e8ad4(puVar4,*(undefined4 *)(param_2 + 0x16),*(undefined4 *)(param_2 + 0x18));
        }
        _local_d0 = CONCAT22(sStack_ce,(ushort)(sVar2 == 1));
        uVar3 = 0x10;
        if (1 < (ushort)param_2[0x24]) {
          uVar3 = param_2[0x24] - 2;
        }
                    /* WARNING: Could not recover jumptable at 0x013df1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_013df1f0 + *(int *)(&DAT_013df1f0 + (uint)uVar3 * 4)))();
        return;
      }
    }
  }
  *param_1 = local_1b0;
  param_1[1] = local_1ac;
  param_1[2] = param_3;
  return;
}

