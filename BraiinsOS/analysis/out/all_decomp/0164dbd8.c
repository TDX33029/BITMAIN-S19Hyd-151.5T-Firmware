// FUN_0164dbd8 @ 0164dbd8 size=240 calls_out=3 calls_in=3
// strings: driver missing

int FUN_0164dbd8(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  local_40 = *(int *)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x40) = 3;
  if (local_40 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("driver missing",0xe,&DAT_018acba0);
  }
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  uVar4 = *(undefined4 *)(param_2 + 0x4c);
  uVar7 = *(undefined4 *)(param_2 + 0x50);
  puVar6 = (undefined4 *)((uint)&local_40 | 4);
  *puVar6 = *(undefined4 *)(param_2 + 0x44);
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar7;
  uVar3 = *(undefined4 *)(param_2 + 0x58);
  uVar4 = *(undefined4 *)(param_2 + 0x5c);
  uVar7 = *(undefined4 *)(param_2 + 0x60);
  puVar6[4] = *(undefined4 *)(param_2 + 0x54);
  puVar6[5] = uVar3;
  puVar6[6] = uVar4;
  puVar6[7] = uVar7;
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
  iVar2 = FUN_0164dd24();
  piVar5 = (int *)(iVar2 + 0x40);
  if (*piVar5 != 3) {
    FUN_0164bf84(piVar5);
  }
  *piVar5 = local_40;
  *(undefined4 *)(iVar2 + 0x44) = uStack_3c;
  *(undefined4 *)(iVar2 + 0x48) = uStack_38;
  *(undefined4 *)(iVar2 + 0x4c) = uStack_34;
  *(undefined4 *)(iVar2 + 0x50) = local_30;
  *(undefined4 *)(iVar2 + 0x54) = uStack_2c;
  *(undefined4 *)(iVar2 + 0x58) = uStack_28;
  *(undefined4 *)(iVar2 + 0x5c) = uStack_24;
  *(undefined4 *)(iVar2 + 0x60) = uStack_20;
  return iVar2;
}

