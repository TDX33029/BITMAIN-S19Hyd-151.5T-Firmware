// FUN_0136bff8 @ 0136bff8 size=668 calls_out=4 calls_in=1
// strings: 

void FUN_0136bff8(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  int local_68;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar6 = *(int *)(param_2 + 0x178);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_003cd849,0x31,&DAT_018926c0);
  }
  piVar14 = (int *)*param_3;
  uVar15 = param_3[1];
  piVar16 = (int *)0x0;
  local_68 = param_3[2];
  if (piVar14 == (int *)0x0) {
    local_68 = 0;
  }
  bVar12 = piVar14 != (int *)0x0;
  local_30 = 4;
  local_3c = 4;
  local_2c = 0;
  local_34 = 0;
  local_38 = 0;
  local_40 = 0;
  local_28 = iVar6;
  do {
    iVar4 = local_2c;
    iVar3 = local_30;
    iVar2 = local_34;
    iVar1 = local_38;
    iVar10 = local_3c;
    iVar8 = local_40;
    if (local_68 == 0) {
      local_28 = iVar6;
      if (*(int *)(param_2 + 0x160) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x164));
      }
      if (*(int *)(param_2 + 0x16c) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x170));
      }
      *(int *)(param_2 + 0x160) = iVar8;
      *(int *)(param_2 + 0x164) = iVar10;
      *(int *)(param_2 + 0x168) = iVar1;
      *(int *)(param_2 + 0x16c) = iVar2;
      *(int *)(param_2 + 0x170) = iVar3;
      *(int *)(param_2 + 0x174) = iVar4;
      *(int *)(param_2 + 0x178) = iVar6;
      *param_1 = 0x30;
      return;
    }
    if (!bVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a9ff4);
    }
    if (piVar16 == (int *)0x0) {
      uVar7 = 0;
      piVar16 = piVar14;
      for (; uVar15 != 0; uVar15 = uVar15 - 1) {
        piVar16 = (int *)piVar16[0x2e];
      }
      piVar14 = (int *)0x0;
      piVar13 = piVar16;
      if (*(short *)((int)piVar16 + 0xb6) == 0) goto LAB_0136c0d0;
    }
    else {
      uVar7 = uVar15;
      piVar13 = piVar16;
      if (*(ushort *)((int)piVar16 + 0xb6) <= uVar15) {
LAB_0136c0d0:
        do {
          piVar13 = (int *)*piVar16;
          if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018aa004);
          }
          uVar7 = (uint)*(ushort *)(piVar16 + 0x2d);
          piVar14 = (int *)((int)piVar14 + 1);
          piVar16 = piVar13;
        } while (*(ushort *)((int)piVar13 + 0xb6) <= uVar7);
      }
    }
    if (piVar14 == (int *)0x0) {
      uVar15 = uVar7 + 1;
      piVar16 = piVar13;
    }
    else {
      piVar5 = piVar13 + uVar7 + 0x2f;
      do {
        piVar16 = (int *)*piVar5;
        piVar14 = (int *)((int)piVar14 + -1);
        piVar5 = piVar16 + 0x2e;
      } while (piVar14 != (int *)0x0);
      uVar15 = 0;
    }
    if (local_38 == local_40) {
      FUN_005fd37c(&local_40);
    }
    iVar8 = iVar1 + 1;
    *(int *)(local_3c + iVar1 * 4) = iVar4;
    iVar10 = piVar13[uVar7 * 3 + 0xe];
    if (iVar8 == local_40) {
      local_38 = iVar8;
      FUN_005fd37c(&local_40);
    }
    bVar12 = true;
    *(int *)(local_3c + iVar8 * 4) = iVar10;
    piVar14 = (int *)0x0;
    local_68 = local_68 + -1;
    local_38 = iVar1 + 2;
    if (piVar13[uVar7 * 3 + 0xe] != 0) {
      puVar9 = (undefined4 *)piVar13[uVar7 * 3 + 0xd];
      iVar8 = piVar13[uVar7 * 3 + 0xe] << 2;
      do {
        iVar10 = local_2c;
        uVar11 = *puVar9;
        if (local_2c == local_34) {
          FUN_005fd37c(&local_34);
        }
        puVar9 = puVar9 + 1;
        iVar8 = iVar8 + -4;
        *(undefined4 *)(local_30 + iVar10 * 4) = uVar11;
        local_2c = iVar10 + 1;
      } while (iVar8 != 0);
    }
  } while( true );
}

