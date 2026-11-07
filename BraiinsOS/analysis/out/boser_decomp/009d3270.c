// FUN_009d3270 @ 009d3270 size=384 calls_out=6 calls_in=3
// strings: 

void FUN_009d3270(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((*(int *)(param_1 + 0x24) != -0x80000000) &&
     (uVar5 = *(int *)(param_1 + 0x20) + param_2, *(uint *)(param_1 + 0xc) < uVar5)) {
    do {
      uVar10 = FUN_015ef9a8((int *)(param_1 + 0x24));
      iVar6 = (int)((ulonglong)uVar10 >> 0x20);
      piVar2 = (int *)uVar10;
      if (piVar2 == (int *)0x0) {
        return;
      }
      uVar7 = *(uint *)(iVar6 + 8);
      uVar3 = uVar7;
      if (uVar7 < 9) {
        uVar3 = 8;
      }
      iVar9 = (int)piVar2 + (uVar3 - 1 & 0xfffffff8) + 8;
      uVar10 = FUN_009d37bc(iVar9);
      uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
      iVar4 = (int)uVar10;
      if ((uVar3 & 0xff) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c23458);
      }
      puVar8 = *(undefined1 **)(iVar4 + 0x28);
      *(undefined1 **)(iVar4 + 0x28) = &DAT_3b9aca00;
      if (puVar8 == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c23468);
      }
      local_58 = *(undefined4 *)(iVar4 + 8);
      uStack_54 = *(undefined4 *)(iVar4 + 0xc);
      uStack_50 = *(undefined4 *)(iVar4 + 0x10);
      uStack_4c = *(undefined4 *)(iVar4 + 0x14);
      local_48 = *(undefined4 *)(iVar4 + 0x18);
      uStack_44 = *(undefined4 *)(iVar4 + 0x1c);
      uStack_40 = *(undefined4 *)(iVar4 + 0x20);
      uStack_3c = *(undefined4 *)(iVar4 + 0x24);
      local_34 = *(undefined4 *)(iVar4 + 0x2c);
      uStack_30 = *(undefined4 *)(iVar4 + 0x30);
      uStack_2c = *(undefined4 *)(iVar4 + 0x34);
      FUN_00a97e8c(iVar4,uVar3 & 1);
      local_38 = puVar8;
      (**(code **)(iVar6 + 0xc))(iVar9 + (uVar7 - 1 & 0xffffffc0) + 0x40);
      FUN_009d2e14(param_1,&local_58);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a979fc(piVar2,iVar6);
      }
    } while (*(uint *)(param_1 + 0xc) < uVar5);
  }
  return;
}

