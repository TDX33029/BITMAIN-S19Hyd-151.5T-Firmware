// FUN_008ac8bc @ 008ac8bc size=764 calls_out=7 calls_in=2
// strings: 

void FUN_008ac8bc(uint *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int local_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int *local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((param_1[9] != 0x80000000) && (uVar7 = param_1[8], param_1[3] < uVar7 + param_2)) {
    puVar3 = (undefined4 *)((uint)&local_a0 | 4);
    do {
      if (param_1[0xc] == 0) {
        return;
      }
      uVar4 = param_1[0xb] + 1;
      puVar8 = (undefined4 *)(param_1[10] + param_1[0xb] * 8);
      piVar9 = (int *)*puVar8;
      iVar12 = puVar8[1];
      uVar5 = uVar4 - param_1[9];
      if (uVar4 < param_1[9]) {
        uVar5 = uVar4;
      }
      param_1[0xb] = uVar5;
      uVar4 = *(uint *)(iVar12 + 8);
      param_1[0xc] = param_1[0xc] - 1;
      uVar5 = uVar4;
      if (uVar4 < 5) {
        uVar5 = 4;
      }
      uVar5 = uVar5 - 1 & 0xfffffff8;
      piVar14 = (int *)((int)piVar9 + uVar5 + 8);
      if (*piVar14 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01886ab4);
      }
      piVar11 = (int *)((int)piVar9 + uVar5 + 0xc);
      do {
        if (*piVar11 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar11);
          goto LAB_008ac99c;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = 1;
      DataMemoryBarrier(0xb);
LAB_008ac99c:
      uVar10 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = *(char *)((int)piVar9 + uVar5 + 0x10);
      }
      else {
        uVar10 = FUN_015bf3f8();
        uVar10 = uVar10 ^ 1;
        cVar1 = *(char *)((int)piVar9 + uVar5 + 0x10);
      }
      if (cVar1 != '\0') {
        uVar7 = (uint)local_5c >> 8;
        local_5c = CONCAT31((int3)uVar7,(char)uVar10);
        local_60 = piVar11;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_60,&DAT_01863b1c,&DAT_01886a94);
      }
      iVar13 = *(int *)((int)piVar9 + uVar5 + 0x14);
      *(undefined4 *)((int)piVar9 + uVar5 + 0x14) = 0x80000000;
      if (iVar13 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01886ac4);
      }
      local_60 = *(int **)((int)piVar9 + uVar5 + 0x18);
      local_5c = *(undefined4 *)((int)piVar9 + uVar5 + 0x1c);
      uStack_58 = *(undefined4 *)((int)piVar9 + uVar5 + 0x20);
      uStack_54 = *(undefined4 *)((int)piVar9 + uVar5 + 0x24);
      local_50 = *(undefined4 *)((int)piVar9 + uVar5 + 0x28);
      uStack_4c = *(undefined4 *)((int)piVar9 + uVar5 + 0x2c);
      uStack_48 = *(undefined4 *)((int)piVar9 + uVar5 + 0x30);
      uStack_44 = *(undefined4 *)((int)piVar9 + uVar5 + 0x34);
      uStack_40 = *(undefined4 *)((int)piVar9 + uVar5 + 0x38);
      local_3c = *(undefined4 *)((int)piVar9 + uVar5 + 0x3c);
      uStack_38 = *(undefined4 *)((int)piVar9 + uVar5 + 0x40);
      uStack_34 = *(undefined4 *)((int)piVar9 + uVar5 + 0x44);
      uStack_30 = *(undefined4 *)((int)piVar9 + uVar5 + 0x48);
      uStack_2c = *(undefined4 *)((int)piVar9 + uVar5 + 0x4c);
      if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
        *(undefined1 *)((int)piVar9 + uVar5 + 0x10) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar11;
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = 0;
      if (iVar6 == 2) {
        FUN_016d6968(0xf0,piVar11,0x81,1);
      }
      *puVar3 = local_60;
      puVar3[1] = local_5c;
      puVar3[2] = uStack_58;
      puVar3[3] = uStack_54;
      puVar3[4] = local_50;
      puVar3[5] = uStack_4c;
      puVar3[6] = uStack_48;
      puVar3[7] = uStack_44;
      puVar3[8] = uStack_40;
      puVar3[9] = local_3c;
      puVar3[10] = uStack_38;
      puVar3[0xb] = uStack_34;
      puVar3[0xc] = uStack_30;
      puVar3[0xd] = uStack_2c;
      local_a0 = iVar13;
      (**(code **)(iVar12 + 0xc))((int)piVar14 + (uVar4 - 1 & 0xffffffb8) + 0x48);
      uVar5 = *param_1;
      uVar4 = param_1[3];
      if (uVar4 == uVar5) {
        FUN_008ac130(param_1);
        uVar5 = *param_1;
        uVar4 = param_1[3];
      }
      uVar10 = param_1[2] + uVar4;
      param_1[3] = uVar4 + 1;
      uVar4 = uVar10 - uVar5;
      if (uVar10 < uVar5) {
        uVar4 = uVar10;
      }
      piVar14 = (int *)(param_1[1] + uVar4 * 0x3c);
      *piVar14 = local_a0;
      piVar14[1] = iStack_9c;
      piVar14[2] = iStack_98;
      piVar14[3] = iStack_94;
      piVar14[4] = iStack_90;
      piVar14[5] = local_8c;
      piVar14[6] = iStack_88;
      piVar14[7] = iStack_84;
      piVar14[8] = iStack_80;
      piVar14[9] = iStack_7c;
      piVar14[10] = local_78;
      piVar14[0xb] = iStack_74;
      piVar14[0xc] = iStack_70;
      piVar14[0xd] = iStack_6c;
      piVar14[0xe] = iStack_68;
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iVar13 + -1;
      if (iVar13 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089eab4(piVar9,iVar12);
      }
    } while (param_1[3] < uVar7 + param_2);
  }
  return;
}

