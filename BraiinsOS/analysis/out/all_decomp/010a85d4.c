// FUN_010a85d4 @ 010a85d4 size=716 calls_out=5 calls_in=3
// strings: 

void FUN_010a85d4(int param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  byte bVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  uint local_38;
  uint local_28;
  
  uVar4 = *(uint *)(param_1 + 0x28);
  uVar6 = *(uint *)(param_1 + 0x24);
  uVar15 = 0;
  iVar7 = *(int *)(param_1 + 0x30);
  local_28 = 0;
  uVar2 = *(uint *)(param_1 + 0x34);
  if (uVar4 == 0) {
    uVar15 = 2;
  }
  if (uVar15 == 2) goto LAB_010a8670;
  do {
    if (uVar4 <= local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(local_28,uVar4,&DAT_018a65cc);
    }
    puVar8 = (uint *)(local_28 * 0x34 + uVar6);
    if ((uVar15 & 1) == 0) goto LAB_010a868c;
    if (uVar2 <= local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(local_38,uVar2,&DAT_018a65dc);
    }
    iVar5 = iVar7 + local_38 * 0x24;
    puVar11 = (uint *)(iVar5 + 0x10);
    bVar17 = *(int *)(iVar5 + 8) == 0;
    uVar3 = local_38;
    if (!bVar17) {
      uVar3 = *(uint *)(iVar5 + 0xc);
    }
LAB_010a86a4:
    uVar15 = 2;
    if (!bVar17) {
      uVar15 = 1;
      local_38 = uVar3;
    }
    if (puVar8[8] == 0) {
      uVar18 = FUN_010a84b4((char)puVar8[9]);
    }
    else {
      uVar18 = *(undefined8 *)(puVar8 + 9);
    }
    uVar16 = (uint)((ulonglong)uVar18 >> 0x20);
    iVar14 = *param_2;
    iVar5 = param_2[2];
    uVar3 = iVar14 - iVar5;
    if (uVar3 < uVar16) {
      FUN_010bf6b0(param_2,iVar5,uVar16,1,1);
      iVar5 = param_2[2];
LAB_010a86f0:
      bVar10 = 0x2d;
      do {
        bVar1 = *(byte *)uVar18;
        bVar9 = bVar1;
        if ((byte)(bVar1 + 0x9f) < 0x1a) {
          bVar9 = bVar1 ^ 0x20;
        }
        bVar17 = bVar10 != 0x2d;
        bVar10 = bVar9;
        if (bVar17) {
          bVar10 = bVar1;
        }
        if (iVar5 == *param_2) {
          FUN_006029c0(param_2);
        }
        iVar14 = (int)((ulonglong)uVar18 >> 0x20) + -1;
        uVar18 = CONCAT44(iVar14,(byte *)uVar18 + 1);
        *(byte *)(param_2[1] + iVar5) = bVar10;
        iVar5 = iVar5 + 1;
        param_2[2] = iVar5;
      } while (iVar14 != 0);
      iVar14 = *param_2;
      uVar3 = iVar14 - iVar5;
    }
    else if (uVar16 != 0) goto LAB_010a86f0;
    if (uVar3 < 2) {
      FUN_010bf6b0(param_2,iVar5,2,1,1);
      iVar14 = *param_2;
      iVar5 = param_2[2];
    }
    iVar12 = param_2[1];
    iVar13 = iVar5 + 2;
    param_2[2] = iVar13;
    *(undefined2 *)(iVar12 + iVar5) = 0x203a;
    uVar3 = puVar11[2];
    uVar16 = puVar11[1];
    if ((uint)(iVar14 - iVar13) < uVar3) {
      FUN_010bf6b0(param_2,iVar13,uVar3,1,1);
      iVar14 = *param_2;
      iVar12 = param_2[1];
      iVar13 = param_2[2];
    }
    FUN_016dd1aa(iVar12 + iVar13,uVar16,uVar3);
    iVar13 = iVar13 + uVar3;
    param_2[2] = iVar13;
    if ((uint)(iVar14 - iVar13) < 2) {
      FUN_010bf6b0(param_2,iVar13,2,1,1);
      iVar12 = param_2[1];
      iVar13 = param_2[2];
    }
    *(undefined2 *)(iVar12 + iVar13) = 0xa0d;
    param_2[2] = iVar13 + 2;
  } while (uVar15 != 2);
LAB_010a8670:
  local_28 = local_28 + 1;
  if (uVar4 <= local_28) {
    return;
  }
  puVar8 = (uint *)(local_28 * 0x34 + uVar6);
LAB_010a868c:
  puVar11 = puVar8 + 3;
  bVar17 = (*puVar8 & 1) == 0;
  uVar3 = uVar6;
  if (!bVar17) {
    uVar3 = puVar8[1];
  }
  goto LAB_010a86a4;
}

