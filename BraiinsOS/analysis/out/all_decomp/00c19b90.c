// FUN_00c19b90 @ 00c19b90 size=392 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_00c19b90(int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  int *local_210;
  undefined1 auStack_208 [328];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  iVar4 = *(int *)(param_1 + 0x230);
  FUN_00c0d1cc(auStack_208,iVar4);
  local_38 = *(undefined4 *)(iVar4 + 0x1d0);
  local_60 = *(undefined8 *)(iVar4 + 0x1a8);
  uStack_58 = *(undefined8 *)(iVar4 + 0x1b0);
  uStack_50 = *(undefined8 *)(iVar4 + 0x1b8);
  local_48 = *(undefined4 *)(iVar4 + 0x1c0);
  local_44 = *(undefined4 *)(iVar4 + 0x1c4);
  local_40 = *(undefined4 *)(iVar4 + 0x1c8);
  local_30 = *(undefined4 *)(iVar4 + 0x1d8);
  local_34 = *(undefined4 *)(iVar4 + 0x1d4);
  puVar3 = (undefined4 *)((uint)&local_3f0 | 4);
  uVar5 = *(undefined4 *)(iVar4 + 0x18c);
  uVar6 = *(undefined4 *)(iVar4 + 400);
  uVar7 = *(undefined4 *)(iVar4 + 0x194);
  *puVar3 = *(undefined4 *)(iVar4 + 0x188);
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  uVar5 = *(undefined4 *)(iVar4 + 0x19c);
  uVar6 = *(undefined4 *)(iVar4 + 0x1a0);
  uVar7 = *(undefined4 *)(iVar4 + 0x1a4);
  puVar3[4] = *(undefined4 *)(iVar4 + 0x198);
  puVar3[5] = uVar5;
  puVar3[6] = uVar6;
  puVar3[7] = uVar7;
  local_8c = *(undefined4 *)(iVar4 + 0x17c);
  local_90 = *(undefined4 *)(iVar4 + 0x178);
  local_9c = *(undefined4 *)(iVar4 + 0x16c);
  local_a0 = *(undefined4 *)(iVar4 + 0x168);
  local_ac = *(undefined4 *)(iVar4 + 0x15c);
  local_c0 = *(undefined4 *)(iVar4 + 0x148);
  local_bc = *(undefined4 *)(iVar4 + 0x14c);
  local_b8 = *(undefined4 *)(iVar4 + 0x150);
  local_88 = *(undefined4 *)(iVar4 + 0x180);
  local_98 = *(undefined4 *)(iVar4 + 0x170);
  local_b0 = *(undefined4 *)(iVar4 + 0x158);
  local_a8 = *(undefined4 *)(iVar4 + 0x160);
  local_84 = local_3f0;
  uStack_80 = uStack_3ec;
  uStack_7c = uStack_3e8;
  uStack_78 = uStack_3e4;
  local_74 = local_3e0;
  uStack_70 = uStack_3dc;
  uStack_6c = uStack_3d8;
  uStack_68 = uStack_3d4;
  uStack_64 = uStack_3d0;
  local_210 = *(int **)(param_1 + 0x234);
  do {
    iVar4 = *local_210;
    bVar2 = (bool)hasExclusiveAccess(local_210);
  } while (!bVar2);
  *local_210 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xc19d14);
    (*pcVar1)();
  }
  FUN_016dd1aa(&local_3f0,auStack_208,0x1e0);
  iVar4 = thunk_FUN_016d4a50(0x1e8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x1e8);
  }
  FUN_016dd1aa(iVar4,&local_3f0,0x1e8);
  return CONCAT44(&UNK_01872d2c,iVar4);
}

