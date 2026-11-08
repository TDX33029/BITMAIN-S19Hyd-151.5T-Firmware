// FUN_016b2b58 @ 016b2b58 size=628 calls_out=4 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016b2b58(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  int local_98;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar7 = *(int *)(param_2 + 0x178);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_004ce7f7,0x31,&DAT_01d087ac);
  }
  piVar15 = (int *)*param_3;
  uVar14 = param_3[1];
  local_98 = param_3[2];
  if (piVar15 == (int *)0x0) {
    local_98 = 0;
  }
  bVar12 = piVar15 != (int *)0x0;
  local_30 = 4;
  local_3c = 4;
  local_2c = 0;
  local_34 = 0;
  local_38 = 0;
  local_40 = 0;
  piVar13 = (int *)0x0;
  local_28 = iVar7;
  while( true ) {
    iVar5 = local_2c;
    iVar4 = local_30;
    iVar3 = local_34;
    iVar2 = local_38;
    iVar10 = local_3c;
    iVar9 = local_40;
    if (local_98 == 0) {
      local_28 = iVar7;
      FUN_0165940c(param_2 + 0x160);
      *(int *)(param_2 + 0x160) = iVar9;
      *(int *)(param_2 + 0x164) = iVar10;
      *(int *)(param_2 + 0x168) = iVar2;
      *(int *)(param_2 + 0x16c) = iVar3;
      *(int *)(param_2 + 0x170) = iVar4;
      *(int *)(param_2 + 0x174) = iVar5;
      *(int *)(param_2 + 0x178) = iVar7;
      *param_1 = 0x30;
      return;
    }
    if (!bVar12) break;
    if (piVar13 == (int *)0x0) {
      uVar8 = 0;
      piVar13 = piVar15;
      for (; uVar14 != 0; uVar14 = uVar14 - 1) {
        piVar13 = (int *)piVar13[0x2e];
      }
      piVar15 = (int *)0x0;
    }
    else {
      uVar8 = uVar14;
    }
    piVar16 = piVar13;
    if (*(ushort *)((int)piVar13 + 0xb6) <= uVar8) {
      do {
        piVar13 = (int *)*piVar16;
        if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2fff0);
        }
        uVar8 = (uint)*(ushort *)(piVar16 + 0x2d);
        piVar15 = (int *)((int)piVar15 + 1);
        piVar16 = piVar13;
      } while (*(ushort *)((int)piVar13 + 0xb6) <= uVar8);
    }
    if (piVar15 == (int *)0x0) {
      uVar14 = uVar8 + 1;
      piVar16 = piVar13;
    }
    else {
      piVar6 = piVar13 + uVar8 + 0x2f;
      do {
        piVar16 = (int *)*piVar6;
        piVar15 = (int *)((int)piVar15 + -1);
        piVar6 = piVar16 + 0x2e;
      } while (piVar15 != (int *)0x0);
      uVar14 = 0;
    }
    if (local_38 == local_40) {
      FUN_01a54b48(&local_40);
    }
    iVar9 = iVar2 + 1;
    *(int *)(local_3c + iVar2 * 4) = iVar5;
    iVar10 = piVar13[uVar8 * 3 + 0xe];
    if (iVar9 == local_40) {
      local_38 = iVar9;
      FUN_01a54b48(&local_40);
    }
    bVar12 = true;
    *(int *)(local_3c + iVar9 * 4) = iVar10;
    piVar15 = (int *)0x0;
    local_98 = local_98 + -1;
    local_38 = iVar2 + 2;
    iVar9 = piVar13[uVar8 * 3 + 0xe] << 2;
    puVar1 = (undefined4 *)piVar13[uVar8 * 3 + 0xd];
    iVar10 = local_2c;
    iVar2 = piVar13[uVar8 * 3 + 0xe];
    while( true ) {
      piVar13 = piVar16;
      local_2c = iVar10;
      if (iVar2 == 0) break;
      uVar11 = *puVar1;
      if (iVar10 == local_34) {
        FUN_01a54b48(&local_34);
      }
      *(undefined4 *)(local_30 + iVar10 * 4) = uVar11;
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + -4;
      puVar1 = puVar1 + 1;
      iVar2 = iVar9;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0cc(&DAT_01d2ffe0);
}

