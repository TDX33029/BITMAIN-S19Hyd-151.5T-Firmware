// FUN_010fdc10 @ 010fdc10 size=708 calls_out=8 calls_in=1
// strings: 

void FUN_010fdc10(uint *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *local_38;
  undefined1 local_34;
  
  if ((param_1[9] != 0x80000000) && (uVar6 = param_1[8], param_1[3] < uVar6 + param_2)) {
    do {
      if (param_1[0xc] == 0) {
        return;
      }
      uVar3 = param_1[0xb] + 1;
      puVar7 = (undefined4 *)(param_1[10] + param_1[0xb] * 8);
      piVar8 = (int *)*puVar7;
      iVar12 = puVar7[1];
      uVar4 = uVar3 - param_1[9];
      if (uVar3 < param_1[9]) {
        uVar4 = uVar3;
      }
      param_1[0xb] = uVar4;
      uVar3 = *(uint *)(iVar12 + 8);
      param_1[0xc] = param_1[0xc] - 1;
      uVar4 = uVar3;
      if (uVar3 < 5) {
        uVar4 = 4;
      }
      uVar4 = uVar4 - 1 & 0xfffffff8;
      piVar9 = (int *)((int)piVar8 + uVar4 + 8);
      if (*piVar9 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01886ab4);
      }
      piVar11 = (int *)((int)piVar8 + uVar4 + 0xc);
      do {
        if (*piVar11 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar11);
          goto LAB_010fdcf0;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = 1;
      DataMemoryBarrier(0xb);
LAB_010fdcf0:
      uVar10 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = *(char *)((int)piVar8 + uVar4 + 0x10);
      }
      else {
        uVar10 = FUN_015bf3f8();
        uVar10 = uVar10 ^ 1;
        cVar1 = *(char *)((int)piVar8 + uVar4 + 0x10);
      }
      if (cVar1 != '\0') {
        local_34 = (undefined1)uVar10;
        local_38 = piVar11;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_01886a1c,&DAT_01886a94);
      }
      cVar1 = *(char *)((int)piVar8 + uVar4 + 0x14);
      *(undefined1 *)((int)piVar8 + uVar4 + 0x14) = 5;
      if (cVar1 == '\x05') {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01886ac4);
      }
      FUN_016dd1aa(&local_38,(int)piVar8 + uVar4 + 0x15,0x13);
      if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        *(undefined1 *)((int)piVar8 + uVar4 + 0x10) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar11;
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = 0;
      if (iVar5 == 2) {
        FUN_016d6968(0xf0,piVar11,0x81,1);
      }
      local_50 = CONCAT31(local_50._1_3_,cVar1);
      FUN_016dd1aa((uint)&local_50 | 1,&local_38,0x13);
      (**(code **)(iVar12 + 0xc))((int)piVar9 + (uVar3 - 1 & 0xffffffe0) + 0x20);
      uVar4 = *param_1;
      uVar3 = param_1[3];
      if (uVar3 == uVar4) {
        FUN_010ff4f0(param_1);
        uVar4 = *param_1;
        uVar3 = param_1[3];
      }
      uVar10 = param_1[2] + uVar3;
      param_1[3] = uVar3 + 1;
      uVar3 = uVar10 - uVar4;
      if (uVar10 < uVar4) {
        uVar3 = uVar10;
      }
      puVar7 = (undefined4 *)(param_1[1] + uVar3 * 0x14);
      *puVar7 = local_50;
      puVar7[1] = uStack_4c;
      puVar7[2] = uStack_48;
      puVar7[3] = uStack_44;
      puVar7[4] = uStack_40;
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010ff130(piVar8,iVar12);
      }
    } while (param_1[3] < uVar6 + param_2);
  }
  return;
}

