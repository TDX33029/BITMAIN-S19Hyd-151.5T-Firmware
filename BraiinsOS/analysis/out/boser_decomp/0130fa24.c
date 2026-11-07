// FUN_0130fa24 @ 0130fa24 size=800 calls_out=7 calls_in=5
// strings: 

void FUN_0130fa24(ulonglong *param_1,undefined4 *param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int unaff_r8;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined4 local_3c;
  int local_34;
  
  puVar3 = (undefined4 *)FUN_016ecaf4();
  *(undefined2 *)((int)puVar3 + 0x32) = 0;
  piVar13 = (int *)param_2[1];
  uVar18 = 2;
  piVar16 = (int *)param_2[3];
  uVar2 = ZEXT48(puVar3);
  local_34 = 0;
  uVar4 = *param_2;
  uVar5 = param_2[2];
  *puVar3 = 0;
  do {
    iVar9 = (int)(uVar2 >> 0x20);
    local_3c = (undefined4)uVar2;
    iVar11 = unaff_r8;
    do {
      if (uVar18 == 2) {
        if (piVar13 == piVar16) goto LAB_0130fba4;
        iVar12 = *piVar13;
        piVar14 = piVar13 + 1;
      }
      else {
        iVar12 = iVar11;
        piVar14 = piVar13;
        if ((uVar18 & 1) == 0) {
LAB_0130fba4:
          FUN_0134aee0(uVar5,uVar4,4,4);
          uVar20 = uVar2;
          goto joined_r0x0130fbc0;
        }
      }
      if (piVar14 == piVar16) {
        uVar18 = 0;
        unaff_r8 = iVar11;
        piVar13 = piVar14;
        break;
      }
      piVar13 = piVar14 + 1;
      unaff_r8 = *piVar14;
      uVar18 = 1;
      iVar11 = iVar12;
    } while (iVar12 == unaff_r8);
    uVar1 = *(ushort *)((int)puVar3 + 0x32);
    if (uVar1 < 0xb) {
      *(ushort *)((int)puVar3 + 0x32) = uVar1 + 1;
      puVar3[uVar1 + 1] = iVar12;
    }
    else {
      iVar11 = 0;
      do {
        puVar3 = (undefined4 *)*puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          uVar20 = FUN_0130a890(local_3c,iVar9);
          uVar2 = uVar20;
          break;
        }
        iVar11 = iVar11 + 1;
        uVar20 = CONCAT44(iVar11,puVar3);
      } while (10 < *(ushort *)((int)puVar3 + 0x32));
      iVar11 = (int)(uVar20 >> 0x20);
      puVar3 = (undefined4 *)FUN_016ecaf4();
      uVar21 = ZEXT48(puVar3);
      *(undefined2 *)((int)puVar3 + 0x32) = 0;
      *puVar3 = 0;
      iVar9 = iVar11;
      while( true ) {
        iVar9 = iVar9 + -1;
        if (iVar9 == 0) break;
        uVar21 = FUN_0130a890((int)uVar21);
      }
      FUN_0130a810((int)uVar20,iVar11,iVar12,(int)uVar21,(int)(uVar21 >> 0x20));
      while( true ) {
        iVar9 = (int)(uVar20 >> 0x20);
        puVar3 = (undefined4 *)uVar20;
        if (iVar9 == 0) break;
        uVar20 = CONCAT44(iVar9 + -1,puVar3[*(ushort *)((int)puVar3 + 0x32) + 0xd]);
      }
    }
    local_34 = local_34 + 1;
  } while( true );
joined_r0x0130fbc0:
  if (iVar9 == 0) {
LAB_0130fcd8:
    *param_1 = uVar2;
    *(int *)(param_1 + 1) = local_34;
    return;
  }
  iVar11 = (int)uVar20;
  uVar18 = (uint)*(ushort *)(iVar11 + 0x32);
  if (uVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a28,0x19,&DAT_01d305a8);
  }
  iVar9 = (int)(uVar20 >> 0x20) + -1;
  iVar12 = *(int *)(iVar11 + (uVar18 + 0xd) * 4);
  uVar20 = CONCAT44(iVar9,iVar12);
  uVar7 = (uint)*(ushort *)(iVar12 + 0x32);
  if (uVar7 < 5) {
    iVar6 = *(int *)(iVar11 + (uVar18 + 0xc) * 4);
    uVar8 = -uVar7 + 5;
    uVar19 = (uint)*(ushort *)(iVar6 + 0x32);
    if (uVar19 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00533acc,0x27,&DAT_01d30618);
    }
    iVar17 = uVar19 - uVar8;
    iVar10 = iVar12 + 4;
    *(short *)(iVar6 + 0x32) = (short)iVar17;
    *(undefined2 *)(iVar12 + 0x32) = 5;
    FUN_01bed864(iVar10 + uVar8 * 4,iVar10);
    iVar15 = iVar17 + 1;
    if (uVar19 - iVar15 != -uVar7 + 4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
    }
    FUN_01bed4e2(iVar10,iVar6 + 4 + iVar15 * 4,(uVar19 - iVar15) * 4);
    uVar4 = *(undefined4 *)(iVar11 + uVar18 * 4);
    *(undefined4 *)(iVar11 + uVar18 * 4) = *(undefined4 *)(iVar6 + 4 + iVar17 * 4);
    *(undefined4 *)(iVar12 + uVar8 * 4) = uVar4;
    if (iVar9 == 0) goto LAB_0130fcd8;
    iVar11 = iVar12 + 0x34;
    FUN_01bed864(iVar11 + uVar8 * 4,iVar11,uVar7 * 4 + 4);
    FUN_01bed4e2(iVar11,iVar6 + iVar15 * 4 + 0x34,uVar8 * 4);
    iVar11 = 0;
    do {
      piVar13 = *(int **)(iVar12 + (iVar11 + 0xd) * 4);
      *(short *)(piVar13 + 0xc) = (short)iVar11;
      iVar11 = iVar11 + 1;
      *piVar13 = iVar12;
    } while (iVar11 != 6);
  }
  goto joined_r0x0130fbc0;
}

