// FUN_01203378 @ 01203378 size=392 calls_out=6 calls_in=3
// strings: 

void FUN_01203378(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  undefined8 uVar19;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(int *)(param_1 + 0x24) != -0x80000000) {
    iVar6 = *(int *)(param_1 + 0x20);
    uVar2 = *(uint *)(param_1 + 0xc);
    while (uVar2 < (uint)(iVar6 + param_2)) {
      uVar19 = FUN_015ef9a8((int *)(param_1 + 0x24));
      iVar5 = (int)((ulonglong)uVar19 >> 0x20);
      piVar3 = (int *)uVar19;
      if (piVar3 == (int *)0x0) {
        return;
      }
      uVar17 = *(uint *)(iVar5 + 8);
      uVar2 = uVar17;
      if (uVar17 < 5) {
        uVar2 = 4;
      }
      iVar13 = (int)piVar3 + (uVar2 - 1 & 0xfffffff8) + 8;
      uVar19 = FUN_009d36bc(iVar13);
      uVar2 = (uint)((ulonglong)uVar19 >> 0x20);
      iVar4 = (int)uVar19;
      if ((uVar2 & 0xff) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c23458);
      }
      iVar18 = *(int *)(iVar4 + 8);
      *(undefined4 *)(iVar4 + 8) = 3;
      if (iVar18 == 3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c23468,uVar2 & 1);
      }
      uVar7 = *(undefined4 *)(iVar4 + 0xc);
      uVar9 = *(undefined4 *)(iVar4 + 0x10);
      uVar11 = *(undefined4 *)(iVar4 + 0x14);
      uVar15 = *(undefined4 *)(iVar4 + 0x18);
      uVar8 = *(undefined4 *)(iVar4 + 0x1c);
      uVar10 = *(undefined4 *)(iVar4 + 0x20);
      uVar12 = *(undefined4 *)(iVar4 + 0x24);
      uVar14 = *(undefined4 *)(iVar4 + 0x28);
      uVar16 = *(undefined4 *)(iVar4 + 0x2c);
      FUN_00a97e8c(iVar4);
      (**(code **)(iVar5 + 0xc))(iVar13 + (uVar17 - 1 & 0xffffffcc) + 0x34);
      local_4c = iVar18;
      local_48 = uVar7;
      uStack_44 = uVar9;
      uStack_40 = uVar11;
      uStack_3c = uVar15;
      local_38 = uVar8;
      uStack_34 = uVar10;
      uStack_30 = uVar12;
      uStack_2c = uVar14;
      uStack_28 = uVar16;
      FUN_009d299c(param_1,&local_4c);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a97a68(piVar3,iVar5);
      }
      uVar2 = *(uint *)(param_1 + 0xc);
    }
  }
  return;
}

