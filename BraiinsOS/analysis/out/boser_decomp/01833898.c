// FUN_01833898 @ 01833898 size=808 calls_out=14 calls_in=3
// strings: 

void FUN_01833898(int *param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  uint *puVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  uint local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined1 auStack_9c [100];
  undefined4 local_38;
  uint local_30;
  uint local_2c;
  
  bVar2 = FUN_019ec70c();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x94)) {
  case 0:
    uVar9 = *(undefined4 *)(param_2 + 0x70);
    uVar6 = *(uint *)(param_2 + 0x52);
    uVar11 = *(uint *)(param_2 + 100);
    uVar3 = *(ushort *)(param_2 + 0x56);
    uVar1 = *(ushort *)(param_2 + 0x6c);
    *(undefined1 *)(param_2 + 0x95) = 1;
    *(undefined4 *)(param_2 + 0x74) = uVar9;
    if ((*(ushort *)(param_2 + 0x50) & 1) == 0) {
      FUN_01bed93e(&local_b0,0,0x78);
      uVar3 = uVar3 << 8 | uVar3 >> 8;
      local_38 = 0x10;
      uVar5 = 2;
    }
    else {
      local_b0 = CONCAT22(uVar3,(short)(uVar6 >> 0x10));
      local_ac = *(undefined4 *)(param_2 + 0x58);
      uStack_a8 = *(undefined4 *)(param_2 + 0x5c);
      uStack_a4 = *(undefined4 *)(param_2 + 0x60);
      local_a0 = *(undefined4 *)(param_2 + 0x68);
      FUN_01bed93e(auStack_9c,0,100);
      uVar3 = uVar1 << 8 | uVar1 >> 8;
      local_38 = 0x1c;
      uVar5 = 10;
      uVar6 = uVar11;
    }
    local_b8 = CONCAT22(uVar3,uVar5);
    local_b4 = uVar6;
    FUN_01979d90(&local_c0,uVar9,&local_b8);
    if ((char)local_c0 != '\x04') {
      local_2c = local_bc;
      local_30 = local_c0;
      if ((local_c0 & 0xff) != 0 || local_bc != 0x73) {
        FUN_01bf01d6(*(undefined4 *)(param_2 + 0x74));
        iVar10 = 2;
        goto LAB_01833b54;
      }
      FUN_018248cc(&local_30);
    }
    uVar9 = *(undefined4 *)(param_2 + 0x74);
    *(undefined4 *)(param_2 + 0x78) = uVar9;
    *(undefined1 *)(param_2 + 0x95) = 0;
    *(undefined1 *)(param_2 + 0x90) = 0;
LAB_01833a24:
    FUN_019dd2f8(&local_b8,uVar9);
    if (local_b8 != 2) {
      puVar4 = (uint *)(param_2 + 0x7c);
      *puVar4 = local_b8;
      *(uint *)(param_2 + 0x80) = local_b4;
      *(uint *)(param_2 + 0x84) = local_b0;
      *(undefined4 *)(param_2 + 0x88) = local_ac;
      *(uint **)(param_2 + 0x8c) = puVar4;
      goto LAB_01833a74;
    }
    uVar11 = local_b4 >> 8 | local_b0 << 0x18;
    uVar8 = local_b4;
    uVar6 = local_b0;
LAB_01833b2c:
    uVar6 = uVar6 >> 8;
    *(undefined1 *)(param_2 + 0x90) = 1;
    uVar8 = uVar8 & 0xff | uVar11 << 8;
    uVar11 = uVar6 << 8 | uVar11 >> 0x18;
    iVar10 = 2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d2e00c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d2e00c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x90)) {
    case 0:
      uVar9 = *(undefined4 *)(param_2 + 0x78);
      goto LAB_01833a24;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2e01c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2e01c);
    case 3:
      puVar4 = *(uint **)(param_2 + 0x8c);
    }
LAB_01833a74:
    FUN_019e7220(&local_b8,puVar4[2],param_3,1);
    if (local_b8 == 2) {
      *(undefined1 *)(param_2 + 0x90) = 3;
LAB_01833a9c:
      iVar7 = 3;
      uVar9 = *param_3;
      *(undefined1 *)(param_2 + 0x94) = 3;
      iVar10 = FUN_019ee264(bVar2 == 2 | bVar2 & 1,param_2,uVar9);
      if (iVar10 != 0) {
        iVar7 = 4;
      }
      *param_1 = iVar7;
      return;
    }
    if ((local_b8 & 1) != 0) {
      uVar11 = local_b4 >> 8 | local_b0 << 0x18;
LAB_01833b24:
      uVar6 = local_b0;
      uVar8 = local_b4;
      FUN_0077749c(param_2 + 0x7c);
      goto LAB_01833b2c;
    }
    if (*(int *)(param_2 + 0x88) == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d28f7c);
    }
    FUN_01609600(&local_b8);
    uVar11 = local_b4 >> 8 | local_b0 << 0x18;
    uVar6 = local_b8;
    if (local_b8 == 0) {
      uVar6 = local_b4 & 0xff;
    }
    if (local_b8 != 0 || uVar6 != 4) goto LAB_01833b24;
    iVar10 = *(int *)(param_2 + 0x7c);
    uVar8 = *(uint *)(param_2 + 0x80);
    uVar11 = *(uint *)(param_2 + 0x84);
    uVar6 = *(uint *)(param_2 + 0x88);
    *(undefined1 *)(param_2 + 0x90) = 1;
    if (iVar10 == 3) goto LAB_01833a9c;
  }
  FUN_0182f440(param_2 + 0x78);
  local_c0 = uVar8;
  local_bc = uVar11;
LAB_01833b54:
  *(undefined1 *)(param_2 + 0x95) = 0;
  *param_1 = iVar10;
  *(undefined1 *)(param_2 + 0x94) = 1;
  param_1[1] = local_c0;
  param_1[2] = local_bc;
  param_1[3] = uVar6;
  return;
}

