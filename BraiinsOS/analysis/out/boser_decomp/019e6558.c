// FUN_019e6558 @ 019e6558 size=856 calls_out=5 calls_in=4
// strings: driver missing | core missing | core missing

int FUN_019e6558(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined1 *local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 *local_60;
  undefined1 **local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_38 [8];
  undefined1 *local_30;
  
  local_88 = *(undefined1 **)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x40) = 3;
  if (local_88 == (undefined1 *)0x3) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("driver missing",0xe,&DAT_01d29194);
  }
  uVar7 = *(undefined4 *)(param_2 + 0x48);
  uVar10 = *(undefined4 *)(param_2 + 0x4c);
  uVar12 = *(undefined4 *)(param_2 + 0x50);
  puVar3 = (undefined4 *)((uint)&local_88 | 4);
  *puVar3 = *(undefined4 *)(param_2 + 0x44);
  puVar3[1] = uVar7;
  puVar3[2] = uVar10;
  puVar3[3] = uVar12;
  puVar5 = puVar3 + 4;
  uVar7 = *(undefined4 *)(param_2 + 0x58);
  uVar10 = *(undefined4 *)(param_2 + 0x5c);
  uVar12 = *(undefined4 *)(param_2 + 0x60);
  *puVar5 = *(undefined4 *)(param_2 + 0x54);
  puVar3[5] = uVar7;
  puVar3[6] = uVar10;
  puVar3[7] = uVar12;
  iVar8 = *(int *)(param_3 + 200);
  if (iVar8 == 0) {
LAB_019e6630:
    if (*(int *)(param_2 + 0xc) == 0) {
      iVar8 = *(uint *)(param_2 + 0x18) + 1;
      iVar11 = *(int *)(param_2 + 0x1c) + (uint)(0xfffffffe < *(uint *)(param_2 + 0x18));
      iVar2 = *(uint *)(param_2 + 0x20) + 1;
      uVar7 = *(undefined4 *)(param_2 + 0x14);
      iVar4 = *(int *)(param_2 + 0x24) + (uint)(0xfffffffe < *(uint *)(param_2 + 0x20));
      puVar3 = (undefined4 *)(param_3 + 0x10);
      *(int *)(param_2 + 0x18) = iVar8;
      *(int *)(param_2 + 0x1c) = iVar11;
      *(int *)(param_2 + 0x20) = iVar2;
      *(int *)(param_2 + 0x24) = iVar4;
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_3 + 0x14) = uVar7;
      piVar9 = (int *)(param_3 + 0x18);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar1);
      *piVar9 = iVar8;
      *(int *)(param_3 + 0x1c) = iVar11;
      local_5c = &local_88;
      piVar13 = (int *)(param_3 + 0x20);
      do {
        uVar7 = *(undefined4 *)(param_3 + 0x24);
        bVar1 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar1);
      *piVar13 = iVar2;
      *(int *)(param_3 + 0x24) = iVar4;
      local_30 = &DAT_3b9aca00;
      local_60 = auStack_38;
      local_58 = param_3;
      local_54 = param_1;
      param_2 = FUN_019e6410(param_1,param_2,&local_60,uVar7);
      iVar8 = *(uint *)(param_2 + 0x20) + 1;
      uVar7 = *(undefined4 *)(param_2 + 0x14);
      iVar11 = *(int *)(param_2 + 0x24) + (uint)(0xfffffffe < *(uint *)(param_2 + 0x20));
      *(int *)(param_2 + 0x20) = iVar8;
      *(int *)(param_2 + 0x24) = iVar11;
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_3 + 0x14) = uVar7;
      uVar7 = *(undefined4 *)(param_2 + 0x1c);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar1);
      *piVar9 = *(int *)(param_2 + 0x18);
      *(undefined4 *)(param_3 + 0x1c) = uVar7;
      do {
        puVar5 = *(undefined4 **)(param_3 + 0x24);
        bVar1 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar1);
      *piVar13 = iVar8;
      *(int *)(param_3 + 0x24) = iVar11;
    }
    iVar8 = *(int *)(param_3 + 0xd0);
    if (iVar8 == 0) {
LAB_019e67e8:
      local_60 = local_88;
      local_5c = (undefined1 **)uStack_84;
      local_58 = uStack_80;
      local_54 = uStack_7c;
      local_50 = local_78;
      uStack_4c = uStack_74;
      uStack_48 = uStack_70;
      uStack_44 = uStack_6c;
      uStack_40 = uStack_68;
      piVar9 = (int *)(param_2 + 0x40);
      if (*piVar9 != 3) {
        FUN_019e5670(piVar9);
      }
      *piVar9 = (int)local_60;
      *(undefined1 ***)(param_2 + 0x44) = local_5c;
      *(int *)(param_2 + 0x48) = local_58;
      *(int *)(param_2 + 0x4c) = local_54;
      *(undefined4 *)(param_2 + 0x50) = local_50;
      *(undefined4 *)(param_2 + 0x54) = uStack_4c;
      *(undefined4 *)(param_2 + 0x58) = uStack_48;
      *(undefined4 *)(param_2 + 0x5c) = uStack_44;
      *(undefined4 *)(param_2 + 0x60) = uStack_40;
      return param_2;
    }
    if (*(int *)(param_1 + 4) != 0) {
      FUN_01306fc8(&DAT_01d291a4,puVar5);
      goto LAB_019e68b4;
    }
    iVar11 = *(int *)(param_3 + 0xd4);
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    if (*(int *)(param_1 + 8) == 0) {
      iVar2 = 0;
    }
    else {
      FUN_019e5fac();
      iVar2 = *(int *)(param_1 + 4) + 1;
    }
    iVar4 = *(int *)(iVar11 + 8);
    pcVar6 = *(code **)(iVar11 + 0x14);
    *(int *)(param_1 + 4) = iVar2;
    *(int *)(param_1 + 8) = param_2;
    (*pcVar6)(iVar8 + (iVar4 - 1U & 0xfffffff8) + 8);
    if (*(int *)(param_1 + 4) == 0) {
      param_2 = *(int *)(param_1 + 8);
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
      *(undefined4 *)(param_1 + 8) = 0;
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("core missing",0xc,&DAT_01d291c4);
      }
      *(undefined4 *)(param_1 + 4) = 0;
      goto LAB_019e67e8;
    }
  }
  else {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_01306fc8(&DAT_01d291a4);
      goto LAB_019e68b4;
    }
    iVar11 = *(int *)(param_3 + 0xcc);
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    if (*(int *)(param_1 + 8) == 0) {
      iVar2 = 0;
    }
    else {
      FUN_019e5fac();
      iVar2 = *(int *)(param_1 + 4) + 1;
    }
    iVar4 = *(int *)(iVar11 + 8);
    pcVar6 = *(code **)(iVar11 + 0x14);
    *(int *)(param_1 + 4) = iVar2;
    *(int *)(param_1 + 8) = param_2;
    (*pcVar6)(iVar8 + (iVar4 - 1U & 0xfffffff8) + 8);
    if (*(int *)(param_1 + 4) == 0) {
      param_2 = *(int *)(param_1 + 8);
      puVar5 = (undefined4 *)0x0;
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
      *(undefined4 *)(param_1 + 8) = 0;
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("core missing",0xc,&DAT_01d291c4);
      }
      *(undefined4 *)(param_1 + 4) = 0;
      goto LAB_019e6630;
    }
  }
  FUN_01306fc8(&DAT_01d291b4);
LAB_019e68b4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)software_udf(0xfdee,0x19e68b4);
  (*pcVar6)();
}

