// FUN_019e6284 @ 019e6284 size=292 calls_out=3 calls_in=4
// strings: driver missing

int FUN_019e6284(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 *local_58;
  undefined1 *local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_54 = (undefined1 *)&local_80;
  local_80 = *(undefined4 **)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x40) = 3;
  if (local_80 == (undefined4 *)0x3) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("driver missing",0xe,&DAT_01d29184);
  }
  puVar6 = (undefined4 *)((uint)&local_80 | 4);
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  uVar4 = *(undefined4 *)(param_2 + 0x4c);
  uVar5 = *(undefined4 *)(param_2 + 0x50);
  *puVar6 = *(undefined4 *)(param_2 + 0x44);
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar5;
  uVar3 = *(undefined4 *)(param_2 + 0x58);
  uVar4 = *(undefined4 *)(param_2 + 0x5c);
  uVar5 = *(undefined4 *)(param_2 + 0x60);
  puVar6[4] = *(undefined4 *)(param_2 + 0x54);
  puVar6[5] = uVar3;
  puVar6[6] = uVar4;
  puVar6[7] = uVar5;
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(param_3 + 0x10));
  } while (!bVar1);
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_3 + 0x14) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(param_3 + 0x18));
  } while (!bVar1);
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_3 + 0x1c) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(param_3 + 0x20));
  } while (!bVar1);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_3 + 0x24) = uVar3;
  local_2c = 0;
  local_30 = 0;
  local_28 = 0;
  local_58 = &local_30;
  local_50 = param_3;
  local_4c = param_1;
  iVar2 = FUN_019e6410(param_1,param_2,&local_58);
  local_58 = local_80;
  local_54 = (undefined1 *)uStack_7c;
  local_50 = uStack_78;
  local_4c = uStack_74;
  local_48 = local_70;
  uStack_44 = uStack_6c;
  uStack_40 = uStack_68;
  uStack_3c = uStack_64;
  uStack_38 = uStack_60;
  piVar7 = (int *)(iVar2 + 0x40);
  if (*piVar7 != 3) {
    FUN_019e5670(piVar7);
  }
  *piVar7 = (int)local_58;
  *(undefined1 **)(iVar2 + 0x44) = local_54;
  *(int *)(iVar2 + 0x48) = local_50;
  *(undefined4 *)(iVar2 + 0x4c) = local_4c;
  *(undefined4 *)(iVar2 + 0x50) = local_48;
  *(undefined4 *)(iVar2 + 0x54) = uStack_44;
  *(undefined4 *)(iVar2 + 0x58) = uStack_40;
  *(undefined4 *)(iVar2 + 0x5c) = uStack_3c;
  *(undefined4 *)(iVar2 + 0x60) = uStack_38;
  return iVar2;
}

