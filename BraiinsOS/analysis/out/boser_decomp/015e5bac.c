// FUN_015e5bac @ 015e5bac size=432 calls_out=3 calls_in=1
// strings: 

void FUN_015e5bac(undefined4 *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar5 = param_1[0xb];
  if (uVar5 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,2,uVar5,&DAT_01cfd478);
  }
  puVar2 = (ushort *)param_1[10];
  iVar6 = param_1[0xf];
  uVar1 = *(ushort *)(iVar6 + 0x38);
  uVar7 = *(ushort *)(iVar6 + 0x3a) << 8 | *(ushort *)(iVar6 + 0x3a) >> 8;
  if (*(char *)(iVar6 + 0x3c) != '\0') {
    uVar7 = 0;
  }
  *puVar2 = uVar7;
  if (uVar5 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(2,4,uVar5,&DAT_01cfd478);
  }
  puVar2[1] = uVar1 << 8 | uVar1 >> 8;
  if (uVar5 < 6) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(4,6,uVar5,&DAT_01cfd478);
  }
  puVar2[2] = *(ushort *)(param_1 + 0xc) << 8 | *(ushort *)(param_1 + 0xc) >> 8;
  if (uVar5 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(6,8,uVar5,&DAT_01cfd478);
  }
  puVar2[3] = *(ushort *)((int)param_1 + 0x32) << 8 | *(ushort *)((int)param_1 + 0x32) >> 8;
  if (uVar5 < 10) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(8,10,uVar5,&DAT_01cfd478);
  }
  puVar2[4] = *(ushort *)(param_1 + 0xd) << 8 | *(ushort *)(param_1 + 0xd) >> 8;
  if (uVar5 < 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(10,0xc,uVar5,&DAT_01cfd478);
  }
  uVar4 = param_1[0xe];
  puVar2[5] = *(ushort *)((int)param_1 + 0x36) << 8 | *(ushort *)((int)param_1 + 0x36) >> 8;
  FUN_015e5a74(&local_90,uVar4);
  local_58 = *param_1;
  uStack_54 = param_1[1];
  uStack_50 = param_1[2];
  uStack_4c = param_1[3];
  local_48 = param_1[4];
  uStack_44 = param_1[5];
  uStack_40 = param_1[6];
  uStack_3c = param_1[7];
  uStack_38 = param_1[8];
  local_34 = param_1[9];
  uStack_30 = param_1[10];
  uStack_2c = param_1[0xb];
  uStack_28 = param_1[0xc];
  uStack_24 = param_1[0xd];
  *param_1 = local_90;
  param_1[1] = uStack_8c;
  param_1[2] = uStack_88;
  param_1[3] = uStack_84;
  param_1[4] = local_80;
  param_1[5] = uStack_7c;
  param_1[6] = uStack_78;
  param_1[7] = uStack_74;
  param_1[8] = uStack_70;
  param_1[9] = local_6c;
  param_1[10] = uStack_68;
  param_1[0xb] = uStack_64;
  param_1[0xc] = uStack_60;
  param_1[0xd] = uStack_5c;
  iVar6 = param_1[0x12];
  if (iVar6 == param_1[0x10]) {
    FUN_019cacf8();
  }
  puVar3 = (undefined4 *)(param_1[0x11] + iVar6 * 0x38);
  *puVar3 = local_58;
  puVar3[1] = uStack_54;
  puVar3[2] = uStack_50;
  puVar3[3] = uStack_4c;
  puVar3[4] = local_48;
  puVar3[5] = uStack_44;
  puVar3[6] = uStack_40;
  puVar3[7] = uStack_3c;
  puVar3[8] = uStack_38;
  puVar3[9] = local_34;
  puVar3[10] = uStack_30;
  puVar3[0xb] = uStack_2c;
  puVar3[0xc] = uStack_28;
  puVar3[0xd] = uStack_24;
  param_1[0x12] = iVar6 + 1;
  return;
}

