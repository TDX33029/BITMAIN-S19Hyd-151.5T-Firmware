// FUN_013cc2b4 @ 013cc2b4 size=352 calls_out=1 calls_in=3
// strings: 

void FUN_013cc2b4(undefined4 param_1,short *param_2)

{
  short sVar1;
  undefined4 *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ushort local_148;
  short sStack_146;
  ushort local_90;
  short sStack_8e;
  
  sVar1 = *param_2;
  if (sVar1 != 1) {
    puVar2 = (undefined4 *)((uint)&local_148 | 4);
    uVar4 = *(undefined4 *)(param_2 + 4);
    uVar5 = *(undefined4 *)(param_2 + 6);
    uVar6 = *(undefined4 *)(param_2 + 8);
    *puVar2 = *(undefined4 *)(param_2 + 2);
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 0xe);
    uVar6 = *(undefined4 *)(param_2 + 0x10);
    puVar2[4] = *(undefined4 *)(param_2 + 10);
    puVar2[5] = uVar4;
    puVar2[6] = uVar5;
    puVar2[7] = uVar6;
    sStack_146 = param_2[1];
  }
  else {
    FUN_015e8ad4((uint)&local_148 | 4,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6));
  }
  _local_148 = CONCAT22(sStack_146,(ushort)(sVar1 == 1));
  sVar1 = param_2[0x12];
  if (sVar1 != 1) {
    puVar2 = (undefined4 *)((uint)&local_90 | 4);
    uVar4 = *(undefined4 *)(param_2 + 0x16);
    uVar5 = *(undefined4 *)(param_2 + 0x18);
    uVar6 = *(undefined4 *)(param_2 + 0x1a);
    uVar7 = *(undefined4 *)(param_2 + 0x1c);
    uVar8 = *(undefined4 *)(param_2 + 0x1e);
    *puVar2 = *(undefined4 *)(param_2 + 0x14);
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    puVar2[4] = uVar7;
    puVar2[5] = uVar8;
    sStack_8e = param_2[0x13];
  }
  else {
    FUN_015e8ad4((uint)&local_90 | 4,*(undefined4 *)(param_2 + 0x16),*(undefined4 *)(param_2 + 0x18)
                );
  }
  _local_90 = CONCAT22(sStack_8e,(ushort)(sVar1 == 1));
  uVar3 = 0x10;
  if (1 < (ushort)param_2[0x24]) {
    uVar3 = param_2[0x24] - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x013cc410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_013cc414 + *(int *)(&DAT_013cc414 + (uint)uVar3 * 4)))();
  return;
}

