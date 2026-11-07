// FUN_00783380 @ 00783380 size=708 calls_out=5 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00783380(int *param_1,short *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  short *psVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint unaff_r4;
  ushort *puVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  short sVar18;
  int local_68;
  short *local_64;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  short local_28;
  undefined2 local_26;
  
  sVar18 = *param_2;
  if (sVar18 == 3) {
    psVar5 = *(short **)(param_2 + 4);
    if (psVar5 == *(short **)(param_2 + 8)) {
LAB_007833cc:
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      FUN_0134c054(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 2),4,0x20);
      return;
    }
    *(short **)(param_2 + 4) = psVar5 + 0x10;
    sVar18 = *psVar5;
    FUN_01bed4e2(&local_58,psVar5 + 1,0x1e);
    if (sVar18 == 2) goto LAB_007833cc;
    iVar15 = 3;
    uVar2 = (uint)(*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) >> 5;
  }
  else {
    FUN_01bed4e2(&local_58,param_2 + 1,0x1e);
    uVar2 = 0;
    if (sVar18 == 2) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      return;
    }
    iVar15 = 2;
  }
  uVar6 = uVar2;
  if (uVar2 < 4) {
    uVar6 = 3;
  }
  uVar13 = 0;
  if (uVar2 != 0x7ffffff) {
    iVar17 = uVar6 + 1;
    unaff_r4 = iVar17 * 0x20;
    if (unaff_r4 < 0x7ffffffd) {
      if (unaff_r4 == 0) {
        iVar17 = 0;
        psVar5 = (short *)&SUB_00000004;
      }
      else {
        uVar13 = 4;
        psVar5 = (short *)FUN_01298504(unaff_r4,4);
        if (psVar5 == (short *)0x0) goto LAB_00783494;
      }
      *psVar5 = sVar18;
      FUN_01bed4e2(psVar5 + 1,&local_58,0x1e);
      uVar7 = *(undefined4 *)(param_2 + 2);
      local_60 = 1;
      local_28 = param_2[1];
      iVar14 = 0x34;
      uVar8 = *(undefined4 *)(param_2 + 6);
      iVar11 = *(int *)(param_2 + 4);
      puVar9 = *(ushort **)(param_2 + 8);
      local_38 = *(undefined4 *)(param_2 + 10);
      uStack_34 = *(undefined4 *)(param_2 + 0xc);
      uStack_30 = *(undefined4 *)(param_2 + 0xe);
      uVar2 = (int)puVar9 - iVar11;
      puVar10 = puVar9;
      iVar12 = iVar11;
      uVar13 = uStack_30;
      local_68 = iVar17;
      local_64 = psVar5;
      do {
        iVar1 = local_60;
        uVar2 = uVar2 - 0x20;
        if (iVar15 != 3) {
LAB_00783614:
          *param_1 = local_68;
          param_1[1] = (int)local_64;
          param_1[2] = local_60;
          return;
        }
        iVar15 = iVar11 + iVar14;
        puVar4 = (ushort *)(iVar15 + -0x34);
        uVar16 = 3;
        if (puVar4 != puVar9) {
          local_26 = *(undefined2 *)(iVar15 + -0x32);
          uVar13 = *(undefined4 *)(iVar15 + -0x30);
          iVar12 = *(int *)(iVar15 + -0x2c);
          iVar17 = *(int *)(iVar15 + -0x28);
          uVar16 = *(undefined4 *)(iVar15 + -0x24);
          puVar10 = (ushort *)(uint)*puVar4;
          local_58 = *(undefined4 *)(iVar15 + -0x20);
          uStack_54 = *(undefined4 *)(iVar15 + -0x1c);
          uStack_50 = *(undefined4 *)(iVar15 + -0x18);
        }
        if (puVar4 == puVar9 || puVar10 == (ushort *)0x2) {
          FUN_0134c054(uVar8,uVar7,4,0x20);
          goto LAB_00783614;
        }
        if (local_60 == local_68) {
          FUN_0132b898(&local_68,local_60,(uVar2 >> 5) + 1,4,0x20);
          psVar5 = local_64;
        }
        puVar3 = (undefined4 *)((int)psVar5 + iVar14);
        local_60 = iVar1 + 1;
        iVar14 = iVar14 + 0x20;
        *(short *)(puVar3 + -5) = (short)puVar10;
        *(undefined2 *)((int)puVar3 + -0x12) = local_26;
        puVar3[-1] = uVar16;
        iVar15 = 3;
        puVar3[-4] = uVar13;
        puVar3[-3] = iVar12;
        puVar3[-2] = iVar17;
        *puVar3 = local_58;
        puVar3[1] = uStack_54;
        puVar3[2] = uStack_50;
        uVar13 = uStack_50;
      } while( true );
    }
  }
LAB_00783494:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar13,unaff_r4);
}

