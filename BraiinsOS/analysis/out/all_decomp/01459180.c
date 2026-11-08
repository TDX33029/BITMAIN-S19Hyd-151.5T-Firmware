// FUN_01459180 @ 01459180 size=912 calls_out=14 calls_in=2
// strings: 

void FUN_01459180(int *param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  ushort *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined1 auStack_94 [100];
  undefined4 local_30;
  uint local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x22]) {
  case '\0':
    uVar7 = *(undefined4 *)(param_2 + 0x10);
    uVar8 = *(uint *)(param_2 + 1);
    uVar6 = *(uint *)(param_2 + 10);
    uVar9 = *(undefined4 *)(param_2 + 0xc);
    uVar2 = param_2[3];
    uVar1 = param_2[0xe];
    *(undefined1 *)((int)param_2 + 0x45) = 1;
    *(undefined4 *)(param_2 + 0x12) = uVar7;
    if ((*param_2 & 1) == 0) {
      FUN_016dd606(&local_a8,0,0x78);
      uVar2 = uVar2 << 8 | uVar2 >> 8;
      local_30 = 0x10;
      uVar5 = 2;
    }
    else {
      local_a4 = *(undefined4 *)(param_2 + 4);
      uStack_a0 = *(undefined4 *)(param_2 + 6);
      uStack_9c = *(undefined4 *)(param_2 + 8);
      local_a8 = CONCAT22(uVar2,(short)(uVar8 >> 0x10));
      FUN_016dd606(auStack_94,0,100);
      uVar2 = uVar1 << 8 | uVar1 >> 8;
      local_30 = 0x1c;
      uVar5 = 10;
      uVar8 = uVar6;
      local_98 = uVar9;
    }
    local_b0 = CONCAT22(uVar2,uVar5);
    local_ac = uVar8;
    iVar3 = FUN_016d6ed2(uVar7,&local_b0);
    if (iVar3 == -1) {
      puVar4 = (uint *)FUN_016d2bc8();
      uVar8 = *puVar4;
      if (uVar8 != 0x73) {
        FUN_016dffb2(*(undefined4 *)(param_2 + 0x12));
        uVar6 = 0;
        iVar3 = 2;
        *(undefined1 *)((int)param_2 + 0x45) = 0;
        goto LAB_01459484;
      }
    }
    uVar7 = *(undefined4 *)(param_2 + 0x12);
    *(undefined4 *)(param_2 + 0x14) = uVar7;
    *(undefined1 *)((int)param_2 + 0x45) = 0;
    *(undefined1 *)(param_2 + 0x20) = 0;
LAB_014592d4:
    uVar11 = FUN_0164ec90(&DAT_018ac94c);
    FUN_01657a90(&local_b0,uVar7,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20),&DAT_018ac94c);
    uVar6 = local_a8;
    uVar8 = local_ac;
    if (local_b0 != 2) {
      puVar4 = (uint *)(param_2 + 0x16);
      *puVar4 = local_b0;
      *(uint *)(param_2 + 0x18) = local_ac;
      *(uint *)(param_2 + 0x1a) = local_a8;
      *(undefined4 *)(param_2 + 0x1c) = uVar7;
      *(uint **)(param_2 + 0x1e) = puVar4;
      goto LAB_0145934c;
    }
    FUN_016dffb2(uVar7);
    uVar10 = uVar8 >> 8 | uVar6 << 0x18;
    param_3 = uVar6 >> 8;
LAB_01459454:
    iVar3 = 2;
    *(undefined1 *)(param_2 + 0x20) = 1;
    uVar6 = uVar8 & 0xff | uVar10 << 8;
    uVar8 = uVar10 >> 0x18 | param_3 << 8;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018a686c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018a686c);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x20]) {
    case '\0':
      uVar7 = *(undefined4 *)(param_2 + 0x14);
      goto LAB_014592d4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018a687c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018a687c);
    case '\x03':
      puVar4 = *(uint **)(param_2 + 0x1e);
    }
LAB_0145934c:
    FUN_01657318(&local_b0,puVar4[2],param_3,1);
    if (local_b0 == 2) {
      *(undefined1 *)(param_2 + 0x20) = 3;
LAB_01459378:
      *param_1 = 3;
      *(undefined1 *)(param_2 + 0x22) = 3;
      return;
    }
    if ((local_b0 & 1) != 0) {
      uVar10 = local_ac >> 8 | local_a8 << 0x18;
      param_3 = local_a8 >> 8;
      uVar8 = local_ac;
LAB_01459430:
      FUN_005e6cdc(param_2 + 0x16);
      if (*(int *)(param_2 + 0x1c) != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(param_2 + 0x16);
      goto LAB_01459454;
    }
    if (*(int *)(param_2 + 0x1c) == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ad11c);
    }
    uVar8 = 0;
    local_b0 = 4;
    local_28 = 0;
    iVar3 = FUN_016d7828(*(int *)(param_2 + 0x1c),1,4,&local_28,&local_b0);
    if (iVar3 == -1) {
      puVar4 = (uint *)FUN_016d2bc8();
      param_3 = *puVar4 >> 8;
      uVar10 = *puVar4 << 0x18;
      goto LAB_01459430;
    }
    if (local_28 != 0) {
      param_3 = local_28 >> 8;
      uVar10 = local_28 << 0x18;
      uVar8 = 0;
      goto LAB_01459430;
    }
    uVar10 = 0;
    uVar8 = 4;
    if (iVar3 == -1) {
      param_3 = 0;
      goto LAB_01459430;
    }
    iVar3 = *(int *)(param_2 + 0x16);
    uVar6 = *(uint *)(param_2 + 0x18);
    uVar8 = *(uint *)(param_2 + 0x1a);
    param_3 = *(uint *)(param_2 + 0x1c);
    *(undefined1 *)(param_2 + 0x20) = 1;
    if (iVar3 == 3) goto LAB_01459378;
  }
  local_b8 = param_2 + 0x14;
  FUN_01434db4(local_b8);
  *(undefined1 *)((int)param_2 + 0x45) = 0;
LAB_01459484:
  *param_1 = iVar3;
  param_1[1] = uVar6;
  param_1[2] = uVar8;
  param_1[3] = param_3;
  *(undefined1 *)(param_2 + 0x22) = 1;
  return;
}

