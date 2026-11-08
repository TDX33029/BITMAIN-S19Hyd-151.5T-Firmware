// FUN_00ed0a50 @ 00ed0a50 size=1916 calls_out=8 calls_in=1
// strings: additional_info

/* WARNING: Removing unreachable block (ram,0x00ed1114) */

int FUN_00ed0a50(char *param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  undefined4 uVar19;
  uint uVar20;
  bool bVar21;
  int iVar22;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_1 != '\0') {
    local_30 = 10;
    iVar3 = FUN_0157c50c(&local_30,0,0);
    return iVar3;
  }
  iVar3 = FUN_00e5b230(param_1,"additional_info",0xf);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar4 = *(undefined4 **)(param_1 + 4);
  piVar14 = (int *)*puVar4;
  iVar3 = piVar14[2];
  if ((uint)(*piVar14 - iVar3) < 2) {
    FUN_00edff4c(piVar14,iVar3,2,1,1);
    iVar3 = piVar14[2];
  }
  piVar14[2] = iVar3 + 2;
  piVar16 = (int *)*param_2;
  uVar17 = param_2[1];
  *(undefined2 *)(piVar14[1] + iVar3) = 0x203a;
  iVar3 = param_2[2];
  if (piVar16 == (int *)0x0) {
    iVar3 = 0;
  }
  iVar10 = puVar4[3];
  piVar14 = (int *)*puVar4;
  *(undefined1 *)(puVar4 + 4) = 0;
  puVar4[3] = iVar10 + 1;
  iVar8 = piVar14[2];
  bVar1 = piVar16 != (int *)0x0;
  if (*piVar14 == iVar8) {
    FUN_00edff4c(piVar14,iVar8,1,1,1);
    iVar8 = piVar14[2];
  }
  iVar22 = iVar8 + 1;
  *(undefined1 *)(piVar14[1] + iVar8) = 0x7b;
  bVar21 = iVar3 != 0;
  iVar8 = 0x100;
  piVar14[2] = iVar22;
  if (iVar3 == 0) {
    iVar8 = *piVar14;
    puVar4[3] = iVar10;
    if (iVar8 == iVar22) {
      FUN_00edff4c(piVar14,iVar22,1,1,1);
      iVar8 = piVar14[2];
      iVar22 = iVar8;
    }
    else {
      iVar8 = piVar14[2];
    }
    *(undefined1 *)(piVar14[1] + iVar22) = 0x7d;
    iVar22 = iVar8 + 1;
    iVar8 = 0;
    piVar14[2] = iVar22;
  }
  else {
    iVar10 = iVar10 + 1;
  }
  piVar18 = (int *)0x0;
  uVar19 = puVar4[1];
  uVar20 = puVar4[2];
  bVar2 = false;
  do {
    if (iVar3 == 0) {
      if (iVar8 != 0) {
        iVar10 = iVar10 + -1;
        puVar4[3] = iVar10;
        if (bVar2) {
          if (*piVar14 == iVar22) {
            FUN_00edff4c(piVar14,iVar22,1,1,1);
            iVar3 = piVar14[2];
            iVar22 = iVar3;
          }
          else {
            iVar3 = piVar14[2];
          }
          *(undefined1 *)(piVar14[1] + iVar22) = 10;
          iVar22 = iVar3 + 1;
          piVar14[2] = iVar22;
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            if ((uint)(*piVar14 - iVar22) < uVar20) {
              FUN_00edff4c(piVar14,iVar22,uVar20,1,1);
              iVar22 = piVar14[2];
            }
            FUN_016dd1aa(piVar14[1] + iVar22,uVar19,uVar20);
            iVar22 = iVar22 + uVar20;
            piVar14[2] = iVar22;
          }
        }
        if (*piVar14 == iVar22) {
          FUN_00edff4c(piVar14,iVar22,1,1,1);
          iVar3 = piVar14[2];
          iVar22 = iVar3;
        }
        else {
          iVar3 = piVar14[2];
        }
        *(undefined1 *)(piVar14[1] + iVar22) = 0x7d;
        piVar14[2] = iVar3 + 1;
      }
      *(undefined1 *)(puVar4 + 4) = 1;
      return 0;
    }
    if (!bVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a9ff4);
    }
    if (piVar18 == (int *)0x0) {
      uVar5 = 0;
      piVar18 = piVar16;
      for (; uVar17 != 0; uVar17 = uVar17 - 1) {
        piVar18 = (int *)piVar18[0x44];
      }
      piVar16 = (int *)0x0;
      piVar11 = piVar18;
      if (*(short *)((int)piVar18 + 0x10e) == 0) goto LAB_00ed0c18;
    }
    else {
      uVar5 = uVar17;
      piVar11 = piVar18;
      if (*(ushort *)((int)piVar18 + 0x10e) <= uVar17) {
LAB_00ed0c18:
        do {
          piVar11 = (int *)*piVar18;
          if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018aa004);
          }
          uVar5 = (uint)*(ushort *)(piVar18 + 0x43);
          piVar16 = (int *)((int)piVar16 + 1);
          piVar18 = piVar11;
        } while (*(ushort *)((int)piVar11 + 0x10e) <= uVar5);
      }
    }
    if (piVar16 == (int *)0x0) {
      uVar17 = uVar5 + 1;
      piVar18 = piVar11;
    }
    else {
      piVar13 = piVar11 + uVar5 + 0x45;
      do {
        piVar18 = (int *)*piVar13;
        piVar16 = (int *)((int)piVar16 + -1);
        piVar13 = piVar18 + 0x44;
      } while (piVar16 != (int *)0x0);
      uVar17 = 0;
    }
    iVar15 = piVar11[uVar5 * 3 + 0x23];
    iVar12 = piVar11[uVar5 * 3 + 2];
    iVar9 = piVar11[uVar5 * 3 + 3];
    iVar6 = piVar11[uVar5 * 3 + 0x24];
    iVar8 = iVar10;
    if (bVar21) {
      if (*piVar14 == iVar22) {
        FUN_00edff4c(piVar14,iVar22,1,1,1);
        iVar7 = piVar14[2];
        iVar22 = iVar7;
      }
      else {
        iVar7 = piVar14[2];
      }
      iVar7 = iVar7 + 1;
      *(undefined1 *)(piVar14[1] + iVar22) = 10;
      piVar14[2] = iVar7;
    }
    else {
      if ((uint)(*piVar14 - iVar22) < 2) {
        FUN_00edff4c(piVar14,iVar22,2,1,1);
        iVar7 = piVar14[2];
        iVar22 = iVar7;
      }
      else {
        iVar7 = piVar14[2];
      }
      iVar7 = iVar7 + 2;
      *(undefined2 *)(piVar14[1] + iVar22) = 0xa2c;
      piVar14[2] = iVar7;
    }
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      if ((uint)(*piVar14 - iVar7) < uVar20) {
        FUN_00edff4c(piVar14,iVar7,uVar20,1,1);
        iVar7 = piVar14[2];
      }
      FUN_016dd1aa(piVar14[1] + iVar7,uVar19,uVar20);
      iVar7 = iVar7 + uVar20;
      piVar14[2] = iVar7;
    }
    if (*piVar14 == iVar7) {
      FUN_00edff4c(piVar14,iVar7,1,1,1);
      iVar7 = piVar14[2];
    }
    *(undefined1 *)(piVar14[1] + iVar7) = 0x22;
    piVar14[2] = iVar7 + 1;
    local_30 = CONCAT31(local_30._1_3_,4);
    FUN_00e57bb4(&local_30,piVar14,iVar12,iVar9);
    if ((char)local_30 != '\x04') {
LAB_00ed10a0:
      iVar3 = FUN_0157c4a0(local_30,local_2c);
      return iVar3;
    }
    iVar8 = piVar14[2];
    if (*piVar14 == iVar8) {
      FUN_00edff4c(piVar14,iVar8,1,1,1);
      iVar8 = piVar14[2];
    }
    *(undefined1 *)(piVar14[1] + iVar8) = 0x22;
    iVar8 = iVar8 + 1;
    piVar14[2] = iVar8;
    if ((uint)(*piVar14 - iVar8) < 2) {
      FUN_00edff4c(piVar14,iVar8,2,1,1);
      iVar8 = piVar14[2];
    }
    iVar22 = iVar8 + 2;
    piVar14[2] = iVar22;
    *(undefined2 *)(piVar14[1] + iVar8) = 0x203a;
    if (*piVar14 == iVar22) {
      FUN_00edff4c(piVar14,iVar22,1,1,1);
      iVar22 = piVar14[2];
    }
    local_30 = CONCAT31(local_30._1_3_,4);
    *(undefined1 *)(piVar14[1] + iVar22) = 0x22;
    piVar14[2] = iVar22 + 1;
    FUN_00e57bb4(&local_30,piVar14,iVar15,iVar6);
    if ((char)local_30 != '\x04') goto LAB_00ed10a0;
    iVar6 = piVar14[2];
    if (*piVar14 == iVar6) {
      FUN_00edff4c(piVar14,iVar6,1,1,1);
      iVar6 = piVar14[2];
    }
    iVar22 = iVar6 + 1;
    bVar21 = false;
    iVar8 = 0x200;
    iVar3 = iVar3 + -1;
    *(undefined1 *)(piVar14[1] + iVar6) = 0x22;
    bVar1 = true;
    piVar14[2] = iVar22;
    *(undefined1 *)(puVar4 + 4) = 1;
    piVar16 = (int *)0x0;
    bVar2 = true;
  } while( true );
}

