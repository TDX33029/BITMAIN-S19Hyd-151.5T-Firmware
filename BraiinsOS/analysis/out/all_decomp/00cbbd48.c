// FUN_00cbbd48 @ 00cbbd48 size=564 calls_out=9 calls_in=0
// strings: 

undefined1 FUN_00cbbd48(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_68;
  int *local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  uint local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x17)) {
  case 0:
    *(undefined1 *)((int)param_1 + 0x5d) = 1;
    local_68 = *param_1;
    local_64 = (int *)param_1[1];
    local_60 = param_1[2];
    local_5c = param_1[3];
    local_58 = (undefined4 *)param_1[4];
    local_54 = param_1[5];
    uStack_50 = param_1[6];
    local_4c = param_1[7];
    uStack_48 = param_1[8];
    uStack_44 = param_1[9];
    local_40 = param_1[10];
    uStack_3c = param_1[0xb];
    uStack_38 = param_1[0xc];
    uStack_34 = param_1[0xd];
    uStack_30 = param_1[0xe];
    uStack_2c = param_1[0xf];
    puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x40);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x40);
    }
    uVar6 = param_1[1];
    uVar7 = param_1[2];
    uVar8 = param_1[3];
    uVar10 = param_1[4];
    *puVar3 = *param_1;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    puVar3[4] = uVar10;
    uVar6 = param_1[6];
    uVar7 = param_1[7];
    uVar8 = param_1[8];
    uVar10 = param_1[9];
    puVar3[5] = param_1[5];
    puVar3[6] = uVar6;
    puVar3[7] = uVar7;
    puVar3[8] = uVar8;
    puVar3[9] = uVar10;
    uVar6 = param_1[0xb];
    uVar7 = param_1[0xc];
    uVar8 = param_1[0xd];
    uVar10 = param_1[0xe];
    uVar11 = param_1[0xf];
    puVar3[10] = param_1[10];
    puVar3[0xb] = uVar6;
    puVar3[0xc] = uVar7;
    puVar3[0xd] = uVar8;
    puVar3[0xe] = uVar10;
    puVar3[0xf] = uVar11;
    local_68 = param_1[0x14];
    local_64 = (int *)param_1[0x15];
    local_60 = param_1[0x16];
    *(undefined1 *)((int)param_1 + 0x5d) = 0;
    local_4c = local_4c & 0xffffff00;
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x20);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x20);
    }
    *puVar4 = local_68;
    puVar4[1] = local_64;
    puVar4[2] = local_60;
    puVar4[3] = local_5c;
    puVar4[4] = local_58;
    puVar4[5] = local_54;
    puVar4[6] = uStack_50;
    puVar4[7] = local_4c;
    param_1[0x10] = puVar3;
    param_1[0x11] = &DAT_0186f188;
    param_1[0x12] = puVar4;
    param_1[0x13] = &DAT_01876f9c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876cbc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876cbc);
  }
  FUN_00bbba60(&local_68,param_1 + 0x10,param_2);
  puVar3 = local_58;
  uVar7 = local_5c;
  piVar2 = local_64;
  uVar6 = local_68;
  uVar9 = local_60 & 0xff;
  if (uVar9 == 4) {
    *(undefined1 *)(param_1 + 0x17) = 3;
    return 2;
  }
  FUN_00887914(param_1 + 0x10);
  if (uVar9 == 3) {
    if ((code *)*piVar2 != (code *)0x0) {
      (*(code *)*piVar2)(uVar6);
    }
    if (piVar2[1] == 0) goto LAB_00cbbf40;
    uVar7 = uVar6;
  }
  else {
    if (uVar9 != 2) {
      local_68 = uVar6;
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(uVar7);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
      FUN_0076b120(uVar6);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(piVar2);
      }
      goto LAB_00cbbf40;
    }
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(uVar7);
    }
    if (puVar3[1] == 0) goto LAB_00cbbf40;
  }
  thunk_FUN_016d3fb4(uVar7);
LAB_00cbbf40:
  *(undefined1 *)(param_1 + 0x17) = 1;
  return uVar9 == 3;
}

