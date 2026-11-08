// FUN_00fa4788 @ 00fa4788 size=944 calls_out=5 calls_in=2
// strings: 

void FUN_00fa4788(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar16 = *(int *)(param_2 + 0x48);
  iVar13 = *(int *)(param_2 + 0x4c) * 0x134;
  while( true ) {
    if (iVar13 == 0) {
      iVar16 = *(int *)(param_2 + 0x6c);
      iVar13 = *(int *)(param_2 + 0x70) * 0x30;
      while( true ) {
        if (iVar13 == 0) {
          *param_1 = 0;
          param_1[1] = 4;
          param_1[2] = 0;
          return;
        }
        if ((*(int *)(iVar16 + 0x28) == param_4) &&
           (iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(iVar16 + 0x24),param_3,param_4), iVar1 == 0))
        break;
        iVar16 = iVar16 + 0x30;
        iVar13 = iVar13 + -0x30;
      }
      FUN_00f748c0(param_1,*(undefined4 *)(iVar16 + 0x1c),*(undefined4 *)(iVar16 + 0x20));
      return;
    }
    if ((*(int *)(iVar16 + 0x118) == param_4) &&
       (iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(iVar16 + 0x114),param_3,param_4), iVar1 == 0))
    break;
    iVar16 = iVar16 + 0x134;
    iVar13 = iVar13 + -0x134;
  }
  FUN_00f748c0(&local_30,*(undefined4 *)(iVar16 + 0x40),*(undefined4 *)(iVar16 + 0x44));
  iVar1 = *(int *)(param_2 + 0x70);
  iVar11 = *(int *)(param_2 + 0x6c);
  uVar15 = *(undefined4 *)(iVar16 + 0x114);
  iVar14 = *(int *)(iVar16 + 0x118);
  iVar13 = iVar11;
LAB_00fa482c:
  while (iVar13 != iVar11 + iVar1 * 0x30) {
    iVar17 = iVar13 + 0x30;
    iVar18 = *(int *)(iVar13 + 8) << 3;
    piVar9 = (int *)(*(int *)(iVar13 + 4) + 4);
    while( true ) {
      if (iVar18 == 0) goto LAB_00fa4828;
      if ((*piVar9 == iVar14) && (iVar2 = thunk_FUN_016dd50a(piVar9[-1],uVar15,iVar14), iVar2 == 0))
      break;
      iVar18 = iVar18 + -8;
      piVar9 = piVar9 + 2;
    }
    uVar10 = *(undefined4 *)(iVar13 + 0x24);
    iVar2 = *(int *)(iVar13 + 0x28);
    iVar13 = iVar1 * 0x30;
    iVar18 = iVar11;
    while( true ) {
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_0035e2fc,99,&DAT_018809ec);
      }
      if ((*(int *)(iVar18 + 0x28) == iVar2) &&
         (iVar3 = thunk_FUN_016dd50a(*(undefined4 *)(iVar18 + 0x24),uVar10,iVar2), iVar3 == 0))
      break;
      iVar18 = iVar18 + 0x30;
      iVar13 = iVar13 + -0x30;
    }
    iVar13 = *(int *)(iVar18 + 0x1c);
    uVar12 = *(uint *)(iVar18 + 0x20);
    if ((uint)(local_30 - local_28) < uVar12) {
      FUN_00f991dc(&local_30,local_28,uVar12,4,8);
LAB_00fa48ec:
      uVar4 = 0;
      do {
        puVar8 = (undefined4 *)(iVar13 + uVar4 * 8);
        uVar10 = puVar8[1];
        puVar7 = (undefined4 *)(local_2c + local_28 * 8 + uVar4 * 8);
        *puVar7 = *puVar8;
        uVar4 = uVar4 + 1;
        puVar7[1] = uVar10;
      } while (uVar12 != uVar4);
      iVar2 = local_28 + uVar4;
    }
    else {
      iVar2 = local_28;
      if (uVar12 != 0) goto LAB_00fa48ec;
    }
    iVar13 = iVar17;
    local_28 = iVar2;
    if (*(char *)(iVar18 + 0x2d) == '\0') {
      if (*(int *)(iVar18 + 8) != 0) {
        iVar13 = *(int *)(iVar18 + 8) << 3;
        piVar9 = (int *)(*(int *)(iVar18 + 4) + 4);
        iVar18 = local_2c;
        do {
          iVar3 = piVar9[-1];
          iVar19 = *piVar9;
          if (iVar19 == *(int *)(iVar16 + 0x118)) {
            iVar6 = thunk_FUN_016dd50a(iVar3,*(undefined4 *)(iVar16 + 0x114),iVar19);
            if (iVar6 != 0) goto LAB_00fa49c4;
          }
          else {
LAB_00fa49c4:
            if (iVar2 == local_30) {
              FUN_00f98f0c(&local_30);
              iVar18 = local_2c;
            }
            piVar5 = (int *)(iVar18 + iVar2 * 8);
            *piVar5 = iVar3;
            iVar2 = iVar2 + 1;
            piVar5[1] = iVar19;
            local_28 = iVar2;
          }
          piVar9 = piVar9 + 2;
          iVar13 = iVar13 + -8;
        } while (iVar13 != 0);
        iVar13 = iVar17;
      }
    }
  }
  iVar13 = *(int *)(iVar16 + 0x4c);
  uVar12 = *(uint *)(iVar16 + 0x50);
  if ((uint)(local_30 - local_28) < uVar12) {
    FUN_00f991dc(&local_30,local_28,uVar12,4,8);
  }
  else if (uVar12 == 0) goto LAB_00fa4ae0;
  uVar4 = 0;
  do {
    puVar8 = (undefined4 *)(iVar13 + uVar4 * 8);
    uVar15 = puVar8[1];
    puVar7 = (undefined4 *)(local_2c + local_28 * 8 + uVar4 * 8);
    *puVar7 = *puVar8;
    uVar4 = uVar4 + 1;
    puVar7[1] = uVar15;
  } while (uVar12 != uVar4);
  local_28 = local_28 + uVar4;
LAB_00fa4ae0:
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
LAB_00fa4828:
  iVar13 = iVar17;
  goto LAB_00fa482c;
}

