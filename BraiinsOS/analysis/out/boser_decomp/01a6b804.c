// FUN_01a6b804 @ 01a6b804 size=728 calls_out=12 calls_in=2
// strings: 

void FUN_01a6b804(int *param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  ushort uVar3;
  uint *puVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint local_b0;
  uint uStack_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined1 auStack_8c [100];
  undefined4 local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x22]) {
  case '\0':
    uVar9 = *(undefined4 *)(param_2 + 0x10);
    uVar8 = *(uint *)(param_2 + 1);
    uVar6 = *(uint *)(param_2 + 10);
    uVar3 = param_2[3];
    uVar1 = param_2[0xe];
    *(undefined1 *)((int)param_2 + 0x45) = 1;
    *(undefined4 *)(param_2 + 0x12) = uVar9;
    if ((*param_2 & 1) == 0) {
      FUN_01bed93e(&local_a0,0,0x78);
      uVar3 = uVar3 << 8 | uVar3 >> 8;
      local_28 = 0x10;
      uVar5 = 2;
    }
    else {
      local_a0 = CONCAT22(uVar3,(short)(uVar8 >> 0x10));
      local_9c = *(undefined4 *)(param_2 + 4);
      uStack_98 = *(undefined4 *)(param_2 + 6);
      uStack_94 = *(undefined4 *)(param_2 + 8);
      local_90 = *(undefined4 *)(param_2 + 0xc);
      FUN_01bed93e(auStack_8c,0,100);
      uVar3 = uVar1 << 8 | uVar1 >> 8;
      local_28 = 0x1c;
      uVar5 = 10;
      uVar8 = uVar6;
    }
    local_a8 = CONCAT22(uVar3,uVar5);
    local_a4 = uVar8;
    FUN_01979d90(&local_b0,uVar9,&local_a8);
    if ((char)local_b0 == '\x04') {
LAB_01a6b94c:
      uVar9 = *(undefined4 *)(param_2 + 0x12);
      *(undefined4 *)(param_2 + 0x14) = uVar9;
      *(undefined1 *)((int)param_2 + 0x45) = 0;
      *(undefined1 *)(param_2 + 0x20) = 0;
LAB_01a6b968:
      FUN_019dd2f8(&local_a8,uVar9);
      if (local_a8 != 2) {
        puVar4 = (uint *)(param_2 + 0x16);
        *puVar4 = local_a8;
        *(uint *)(param_2 + 0x18) = local_a4;
        *(uint *)(param_2 + 0x1a) = local_a0;
        *(undefined4 *)(param_2 + 0x1c) = local_9c;
        *(uint **)(param_2 + 0x1e) = puVar4;
        goto LAB_01a6b9b8;
      }
      uVar8 = local_a4 >> 8 | local_a0 << 0x18;
      uVar6 = local_a4;
      param_3 = local_a0;
LAB_01a6ba50:
      param_3 = param_3 >> 8;
      *(undefined1 *)(param_2 + 0x20) = 1;
      uVar6 = uVar6 & 0xff | uVar8 << 8;
      uVar8 = param_3 << 8 | uVar8 >> 0x18;
      iVar7 = 2;
      goto LAB_01a6ba6c;
    }
    if ((local_b0 & 0xff) == 0 && uStack_ac == 0x73) {
      FUN_0187266c(0,0x73);
      goto LAB_01a6b94c;
    }
    FUN_01bf01d6(*(undefined4 *)(param_2 + 0x12));
    iVar7 = 2;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d2e00c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d2e00c);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x20]) {
    case '\0':
      uVar9 = *(undefined4 *)(param_2 + 0x14);
      goto LAB_01a6b968;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2e01c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2e01c);
    case '\x03':
      puVar4 = *(uint **)(param_2 + 0x1e);
    }
LAB_01a6b9b8:
    FUN_019e7220(&local_a8,puVar4[2],param_3,1);
    if (local_a8 == 2) {
      *(undefined1 *)(param_2 + 0x20) = 3;
LAB_01a6b9e0:
      uVar2 = 3;
      *param_1 = 3;
      goto LAB_01a6ba84;
    }
    if ((local_a8 & 1) != 0) {
      uVar8 = local_a4 >> 8 | local_a0 << 0x18;
LAB_01a6ba48:
      param_3 = local_a0;
      uVar6 = local_a4;
      FUN_00b76614(param_2 + 0x16);
      goto LAB_01a6ba50;
    }
    if (*(int *)(param_2 + 0x1c) == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d28f7c);
    }
    FUN_01609600(&local_a8);
    uVar8 = local_a4 >> 8 | local_a0 << 0x18;
    uVar6 = local_a8;
    if (local_a8 == 0) {
      uVar6 = local_a4 & 0xff;
    }
    if (local_a8 != 0 || uVar6 != 4) goto LAB_01a6ba48;
    *(undefined1 *)(param_2 + 0x20) = 1;
    iVar7 = *(int *)(param_2 + 0x16);
    uVar6 = *(uint *)(param_2 + 0x18);
    uVar8 = *(uint *)(param_2 + 0x1a);
    param_3 = *(uint *)(param_2 + 0x1c);
    if (iVar7 == 3) goto LAB_01a6b9e0;
LAB_01a6ba6c:
    FUN_01a6bbbc(param_2 + 0x14);
    local_b0 = uVar6;
    uStack_ac = uVar8;
  }
  *(undefined1 *)((int)param_2 + 0x45) = 0;
  *param_1 = iVar7;
  param_1[1] = local_b0;
  param_1[2] = uStack_ac;
  param_1[3] = param_3;
  uVar2 = 1;
LAB_01a6ba84:
  *(undefined1 *)(param_2 + 0x22) = uVar2;
  return;
}

