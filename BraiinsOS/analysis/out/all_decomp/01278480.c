// FUN_01278480 @ 01278480 size=1596 calls_out=7 calls_in=1
// strings: Cannot subtract b from a because b is larger than a. | Cannot subtract b from a because b is larger than a. | Tried to shrink to a larger capacitymax line length exceeded | Tried to shrink to a larger capacitymax line length exceeded

void FUN_01278480(undefined1 *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  uint local_2c;
  
  if (param_3 == 0) {
LAB_012784e8:
    uVar16 = 0;
  }
  else {
    uVar16 = param_3;
    if (param_2[param_3 - 1] == 0) {
      iVar3 = param_3 * -4;
      uVar7 = param_3;
      do {
        uVar16 = uVar7;
        if (iVar3 == 0) goto LAB_012784e8;
        iVar1 = -4 - iVar3;
        iVar3 = iVar3 + 4;
        uVar7 = uVar16 - 1;
      } while (*(int *)((int)param_2 + iVar1) == 0);
      if (param_3 < uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar16,param_3,&DAT_0188b6d4);
      }
    }
  }
  uVar7 = param_5;
  if (param_4[param_5 - 1] == 0) {
    iVar3 = param_5 * -4;
    uVar11 = param_5;
    do {
      uVar7 = uVar11;
      if (iVar3 == 0) {
        uVar7 = 0;
        goto LAB_01278544;
      }
      iVar1 = -4 - iVar3;
      iVar3 = iVar3 + 4;
      uVar11 = uVar7 - 1;
    } while (*(int *)((int)param_4 + iVar1) == 0);
    if (param_5 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar7,param_5,&DAT_0188b6e4);
    }
  }
LAB_01278544:
  bVar18 = uVar16 < uVar7;
  bVar17 = !bVar18 && uVar16 != uVar7;
  if (uVar16 == uVar7) {
    iVar3 = uVar16 << 2;
    do {
      puVar14 = (uint *)((int)param_4 + iVar3);
      if (iVar3 == 0) {
        cVar2 = '\0';
        if (param_4 != puVar14) {
          cVar2 = -1;
        }
        goto joined_r0x0127861c;
      }
      uVar11 = *(uint *)((int)param_2 + iVar3 + -4);
      iVar3 = iVar3 + -4;
      uVar15 = puVar14[-1];
    } while (uVar11 == uVar15);
    bVar18 = false;
    bVar17 = uVar11 >= uVar15;
    if (uVar11 < uVar15) {
      bVar18 = true;
    }
  }
  cVar2 = bVar17 - bVar18;
joined_r0x0127861c:
  if (cVar2 == '\0') {
    *param_1 = 1;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 4;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  if (cVar2 != '\x01') {
    uVar11 = uVar7 * 4;
    bVar18 = 0x3ffffffe < uVar7;
    bVar17 = uVar7 == 0x3fffffff;
    if (uVar7 < 0x40000000) {
      bVar18 = 0x7ffffffb < uVar11;
      bVar17 = uVar11 == 0x7ffffffc;
    }
    if (bVar18 && !bVar17) goto LAB_01278604;
    if (uVar11 == 0) {
      puVar14 = (uint *)&DAT_00000004;
      local_2c = 0;
    }
    else {
      puVar14 = (uint *)thunk_FUN_016d4a50(uVar11);
      local_2c = uVar7;
      if (puVar14 == (uint *)0x0) goto LAB_0127866c;
    }
    FUN_016dd1aa(puVar14,param_4,uVar11);
    uVar15 = uVar7;
    if (uVar16 < uVar7) {
      uVar15 = uVar16;
    }
    if (uVar15 != 0) {
      puVar8 = puVar14 + uVar15;
      uVar6 = 0;
      uVar4 = uVar15;
      puVar5 = puVar14;
      puVar9 = param_2;
      do {
        uVar10 = *puVar9;
        uVar12 = *puVar5;
        uVar13 = uVar12 - uVar10;
        *puVar5 = uVar13 - uVar6;
        uVar6 = (uint)(uVar12 < uVar10 || uVar13 < uVar6);
        uVar4 = uVar4 - 1;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar4 != 0);
      if (uVar6 != 0) {
        if (uVar16 < uVar7) {
          iVar3 = uVar11 + uVar15 * -4;
          do {
            uVar11 = *puVar8;
            *puVar8 = uVar11 - 1;
            if (uVar11 != 0) goto LAB_01278894;
            puVar8 = puVar8 + 1;
            iVar3 = iVar3 + -4;
          } while (iVar3 != 0);
        }
        goto LAB_012788b8;
      }
    }
LAB_01278894:
    iVar3 = uVar16 * 4 + uVar15 * -4;
    puVar5 = param_2 + uVar15;
    do {
      if (iVar3 == 0) {
        if (uVar7 == 0) {
          uVar7 = 0;
        }
        else if (puVar14[uVar7 - 1] == 0) {
          iVar3 = uVar7 * -4;
          uVar16 = uVar7;
          goto LAB_01278900;
        }
        uVar16 = uVar7;
        if (uVar7 < local_2c >> 2) goto LAB_01278998;
        goto LAB_01278a24;
      }
      uVar16 = *puVar5;
      iVar3 = iVar3 + -4;
      puVar5 = puVar5 + 1;
    } while (uVar16 == 0);
LAB_012788b8:
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("Cannot subtract b from a because b is larger than a.",0x69,&DAT_0188b744);
  }
  uVar11 = uVar16 * 4;
  bVar18 = 0x3ffffffe < uVar16;
  bVar17 = uVar16 == 0x3fffffff;
  if (uVar16 < 0x40000000) {
    bVar18 = 0x7ffffffb < uVar11;
    bVar17 = uVar11 == 0x7ffffffc;
  }
  if (bVar18 && !bVar17) {
LAB_01278604:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar11);
  }
  if (uVar11 == 0) {
    puVar14 = (uint *)&DAT_00000004;
    local_2c = 0;
  }
  else {
    puVar14 = (uint *)thunk_FUN_016d4a50(uVar11);
    local_2c = uVar16;
    if (puVar14 == (uint *)0x0) {
LAB_0127866c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar11);
    }
  }
  FUN_016dd1aa(puVar14,param_2,uVar11);
  uVar15 = uVar16;
  if (uVar7 < uVar16) {
    uVar15 = uVar7;
  }
  if (uVar15 != 0) {
    puVar8 = puVar14 + uVar15;
    uVar6 = 0;
    uVar4 = uVar15;
    puVar5 = puVar14;
    puVar9 = param_4;
    do {
      uVar10 = *puVar9;
      uVar12 = *puVar5;
      uVar13 = uVar12 - uVar10;
      *puVar5 = uVar13 - uVar6;
      uVar6 = (uint)(uVar12 < uVar10 || uVar13 < uVar6);
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar4 != 0);
    if (uVar6 != 0) {
      if (uVar7 < uVar16) {
        iVar3 = uVar11 + uVar15 * -4;
        do {
          uVar11 = *puVar8;
          *puVar8 = uVar11 - 1;
          if (uVar11 != 0) goto LAB_01278734;
          puVar8 = puVar8 + 1;
          iVar3 = iVar3 + -4;
        } while (iVar3 != 0);
      }
      goto LAB_01278758;
    }
  }
LAB_01278734:
  iVar3 = uVar7 * 4 + uVar15 * -4;
  puVar5 = param_4 + uVar15;
  do {
    if (iVar3 == 0) {
      if (uVar16 == 0) {
        uVar16 = 0;
      }
      else if (puVar14[uVar16 - 1] == 0) {
        iVar3 = uVar16 * -4;
        uVar7 = uVar16;
        goto LAB_012787a0;
      }
      uVar7 = uVar16;
      if (uVar16 < local_2c >> 2) goto LAB_01278944;
      goto LAB_012789f8;
    }
    uVar7 = *puVar5;
    iVar3 = iVar3 + -4;
    puVar5 = puVar5 + 1;
  } while (uVar7 == 0);
LAB_01278758:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478("Cannot subtract b from a because b is larger than a.",0x69,&DAT_0188b744);
  while( true ) {
    iVar1 = -4 - iVar3;
    iVar3 = iVar3 + 4;
    uVar16 = uVar11 - 1;
    if (*(int *)((int)puVar14 + iVar1) != 0) break;
LAB_01278900:
    uVar11 = uVar16;
    if (iVar3 == 0) {
      uVar7 = 0;
      uVar16 = uVar7;
      if (local_2c >> 2 == 0) goto LAB_01278a24;
      goto LAB_01278998;
    }
  }
  if (uVar11 < uVar7) {
    uVar7 = uVar11;
  }
  uVar16 = uVar7;
  if (uVar7 < local_2c >> 2) {
LAB_01278998:
    if (local_2c < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("Tried to shrink to a larger capacitymax line length exceeded",0x49,&DAT_018ad594
                  );
    }
    uVar16 = uVar7;
    if (local_2c != 0) {
      if (uVar7 == 0) {
        thunk_FUN_016d3fb4(puVar14);
        puVar14 = (uint *)&DAT_00000004;
      }
      else {
        puVar14 = (uint *)thunk_FUN_016d4ea4(puVar14,uVar7 << 2);
        if (puVar14 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,uVar7 << 2);
        }
      }
      goto LAB_01278a28;
    }
    local_2c = 0;
  }
LAB_01278a24:
  uVar7 = local_2c;
LAB_01278a28:
  *(uint **)(param_1 + 8) = puVar14;
  *(uint *)(param_1 + 4) = uVar7;
  *(uint *)(param_1 + 0xc) = uVar16;
  *param_1 = 0;
  return;
  while( true ) {
    iVar1 = -4 - iVar3;
    iVar3 = iVar3 + 4;
    uVar7 = uVar11 - 1;
    if (*(int *)((int)puVar14 + iVar1) != 0) break;
LAB_012787a0:
    uVar11 = uVar7;
    if (iVar3 == 0) {
      uVar16 = 0;
      uVar7 = uVar16;
      if (local_2c >> 2 == 0) goto LAB_012789f8;
      goto LAB_01278944;
    }
  }
  if (uVar11 < uVar16) {
    uVar16 = uVar11;
  }
  uVar7 = uVar16;
  if (uVar16 < local_2c >> 2) {
LAB_01278944:
    if (local_2c < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("Tried to shrink to a larger capacitymax line length exceeded",0x49,&DAT_018ad594
                  );
    }
    uVar7 = uVar16;
    if (local_2c != 0) {
      if (uVar16 == 0) {
        thunk_FUN_016d3fb4(puVar14);
        puVar14 = (uint *)&DAT_00000004;
      }
      else {
        puVar14 = (uint *)thunk_FUN_016d4ea4(puVar14,uVar16 << 2);
        if (puVar14 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,uVar16 << 2);
        }
      }
      goto LAB_012789fc;
    }
    local_2c = 0;
  }
LAB_012789f8:
  uVar16 = local_2c;
LAB_012789fc:
  *(uint **)(param_1 + 8) = puVar14;
  *(uint *)(param_1 + 4) = uVar16;
  *(uint *)(param_1 + 0xc) = uVar7;
  *param_1 = 2;
  return;
}

