// FUN_00f8f0c0 @ 00f8f0c0 size=808 calls_out=6 calls_in=3
// strings: 

void FUN_00f8f0c0(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int iVar16;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar1 = thunk_FUN_016d4a50(100);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,100);
  }
  iVar6 = *(int *)(param_2 + 0x48);
  iVar10 = *(int *)(param_2 + 0x4c) * 0x134 + iVar6;
  local_28 = 0;
  local_30 = 5;
  local_34 = 0;
  local_2c = uVar1;
  do {
    uVar13 = local_28;
    while( true ) {
      do {
        iVar8 = iVar6;
        if (iVar8 == iVar10) {
          if (*(int *)(param_2 + 0x70) == 0) goto LAB_00f8f3b0;
          iVar10 = *(int *)(param_2 + 0x6c);
          iVar6 = iVar10 + *(int *)(param_2 + 0x70) * 0x30;
          goto LAB_00f8f218;
        }
        iVar6 = iVar8 + 0x134;
      } while ((*(byte *)(iVar8 + 0x11c) & 1) == 0);
      uVar15 = *(undefined4 *)(iVar8 + 0x114);
      iVar8 = *(int *)(iVar8 + 0x118);
      if (uVar13 == 0) break;
      piVar7 = (int *)(uVar1 + 0x10);
      iVar16 = local_34;
      while ((*piVar7 != iVar8 || (iVar2 = thunk_FUN_016dd50a(piVar7[-1],uVar15,iVar8), iVar2 != 0))
            ) {
        iVar16 = iVar16 + -0x14;
        piVar7 = piVar7 + 5;
        if (iVar16 == 0) goto LAB_00f8f188;
      }
    }
LAB_00f8f188:
    if (uVar13 == local_30) {
      FUN_00f98f6c(&local_30);
      uVar1 = local_2c;
    }
    local_28 = uVar13 + 1;
    puVar5 = (undefined4 *)(uVar1 + uVar13 * 0x14);
    *puVar5 = 0;
    puVar5[1] = 4;
    puVar5[2] = 0;
    puVar5[3] = uVar15;
    puVar5[4] = iVar8;
    local_34 = local_34 + 0x14;
  } while( true );
LAB_00f8f218:
  uVar1 = local_2c;
  if (*(char *)(iVar10 + 0x2c) != '\0') {
    uVar15 = *(undefined4 *)(iVar10 + 0x24);
    iVar8 = *(int *)(iVar10 + 0x28);
    if (uVar13 != 0) {
      iVar16 = 0;
      uVar11 = 0;
      do {
        if ((*(int *)((uVar1 - iVar16) + 0x10) == iVar8) &&
           (iVar2 = thunk_FUN_016dd50a(*(undefined4 *)((uVar1 - iVar16) + 0xc),uVar15,iVar8),
           iVar2 == 0)) {
          iVar8 = *(int *)(iVar10 + 0x14);
          uVar3 = uVar13;
          goto joined_r0x00f8f29c;
        }
        iVar16 = iVar16 + -0x14;
        uVar11 = uVar11 + 1;
      } while (uVar13 * -0x14 != iVar16);
    }
    if (uVar13 == local_30) {
      FUN_00f98f6c(&local_30);
      uVar1 = local_2c;
    }
    puVar5 = (undefined4 *)(uVar1 + uVar13 * 0x14);
    *puVar5 = 0;
    puVar5[1] = 4;
    puVar5[2] = 0;
    puVar5[3] = uVar15;
    puVar5[4] = iVar8;
    uVar3 = uVar13 + 1;
    iVar8 = *(int *)(iVar10 + 0x14);
    uVar11 = uVar13;
    local_28 = uVar3;
joined_r0x00f8f29c:
    if (iVar8 == 0) {
      uVar13 = uVar3;
    }
    else {
      puVar14 = *(undefined4 **)(iVar10 + 0x10);
      puVar5 = puVar14 + iVar8 * 2;
      iVar8 = uVar3 * 0x14;
      uVar9 = uVar3;
      do {
        uVar12 = *puVar14;
        uVar15 = puVar14[1];
        if (uVar9 == local_30) {
          FUN_00f98f6c(&local_30);
          uVar1 = local_2c;
        }
        puVar4 = (undefined4 *)(uVar1 + iVar8);
        *puVar4 = 0;
        puVar4[3] = uVar12;
        uVar13 = uVar9 + 1;
        puVar4[1] = 4;
        puVar4[2] = 0;
        puVar4[4] = uVar15;
        local_28 = uVar13;
        if (uVar3 < uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar11,uVar13,&DAT_018807d4);
        }
        piVar7 = (int *)(uVar1 + uVar11 * 0x14);
        iVar16 = piVar7[2];
        if (iVar16 == *piVar7) {
          FUN_00f98d28(piVar7);
        }
        iVar8 = iVar8 + 0x14;
        puVar14 = puVar14 + 2;
        *(uint *)(piVar7[1] + iVar16 * 4) = uVar9;
        piVar7[2] = iVar16 + 1;
        uVar9 = uVar13;
      } while (puVar14 != puVar5);
    }
  }
  iVar10 = iVar10 + 0x30;
  if (iVar10 == iVar6) {
LAB_00f8f3b0:
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = local_28;
    return;
  }
  goto LAB_00f8f218;
}

