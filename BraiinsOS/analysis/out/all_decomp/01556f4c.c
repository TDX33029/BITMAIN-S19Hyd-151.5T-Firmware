// FUN_01556f4c @ 01556f4c size=1636 calls_out=3 calls_in=6
// strings: assertion failed: len <= self.usedECDSA_P256ECDSA_P384ECDSA_P521ECDSA_P256K1

void FUN_01556f4c(int param_1,undefined4 param_2,int param_3)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  code *pcVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 local_a1;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ushort local_60;
  undefined1 local_5d;
  undefined1 local_5c [4];
  ushort *local_58;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  undefined *local_48;
  undefined4 local_44;
  undefined *local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_25;
  
  uVar16 = (**(code **)(*(int *)(param_1 + 0xc) + 0x18))(*(undefined4 *)(param_1 + 8));
  puVar11 = (undefined4 *)((ulonglong)uVar16 >> 0x20);
  uVar8 = (undefined4)uVar16;
  uVar9 = (**(code **)(*(int *)(param_1 + 0x14) + 0x14))(*(undefined4 *)(param_1 + 0x10));
  local_60 = (ushort)((uVar9 & 0xff) << 8) | (ushort)(uVar9 >> 8) & 0xff;
  local_38 = &local_a0;
  local_40 = &DAT_004145fc;
  local_44 = 6;
  local_50 = &local_a1;
  local_a1 = 9;
  local_a0 = 0;
  local_2c = 0;
  local_30 = 1;
  local_34 = 1;
  local_3c = 3;
  local_48 = &DAT_0040c506;
  local_4c = 1;
  local_54 = 2;
  local_64 = 0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_80 = (ushort *)0x0;
  local_58 = &local_60;
  iVar10 = (*(code *)puVar11[3])(uVar8,&local_58,6,&local_80,0x20);
  uVar7 = local_64;
  uVar6 = local_68;
  uVar5 = local_6c;
  uVar4 = local_70;
  uVar3 = local_74;
  uVar2 = local_78;
  uVar14 = local_7c;
  puVar1 = local_80;
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0040c50c,0x24,&local_25,&DAT_018a8a48,&DAT_018a8b18);
  }
  local_5c[0] = (undefined1)local_80;
  local_88 = (undefined1)local_78;
  local_25 = local_78._1_1_;
  local_91 = local_70._1_1_;
  local_93 = local_70._3_1_;
  local_9b = local_68._3_1_;
  local_5d = local_80._1_1_;
  local_9c = (undefined1)local_64;
  local_82 = local_80._2_1_;
  local_83 = local_80._3_1_;
  local_84 = (undefined1)local_7c;
  local_85 = local_7c._1_1_;
  local_86 = local_7c._2_1_;
  local_87 = local_7c._3_1_;
  local_8a = local_78._2_1_;
  local_9d = local_64._1_1_;
  local_8b = local_78._3_1_;
  local_8c = (undefined1)local_74;
  local_8d = local_74._1_1_;
  local_8e = local_74._2_1_;
  local_8f = local_74._3_1_;
  local_90 = (undefined1)local_70;
  local_92 = local_70._2_1_;
  local_9e = local_64._2_1_;
  local_94 = (undefined1)local_6c;
  local_95 = local_6c._1_1_;
  local_96 = local_6c._2_1_;
  local_97 = local_6c._3_1_;
  local_98 = (undefined1)local_68;
  local_99 = local_68._1_1_;
  local_9a = local_68._2_1_;
  local_9f = local_64._3_1_;
  if (0x20 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: len <= self.usedECDSA_P256ECDSA_P384ECDSA_P521ECDSA_P256K1",0x22
                 ,&DAT_018a7ee4);
  }
  local_38 = local_5c;
  local_82 = 0;
  local_83 = 0;
  local_84 = 0;
  local_85 = 0;
  local_86 = 0;
  local_87 = 0;
  local_88 = 0;
  local_25 = 0;
  local_8a = 0;
  local_8b = 0;
  local_8c = 0;
  local_8d = 0;
  local_8e = 0;
  local_8f = 0;
  local_90 = 0;
  local_91 = 0;
  local_92 = 0;
  local_93 = 0;
  local_94 = 0;
  local_95 = 0;
  local_96 = 0;
  local_97 = 0;
  local_98 = 0;
  local_99 = 0;
  local_9a = 0;
  local_9b = 0;
  local_9c = 0;
  local_9d = 0;
  local_9e = 0;
  local_9f = 0;
  local_40 = &DAT_0040c504;
  local_44 = 6;
  local_50 = &local_5d;
  local_60 = 0xc00;
  local_5d = 8;
  local_2c = 0;
  local_30 = 1;
  local_34 = 1;
  local_3c = 2;
  local_48 = &DAT_0040c506;
  local_4c = 1;
  local_5c[0] = 0;
  local_54 = 2;
  local_78 = 0;
  local_7c = 0;
  local_80 = (ushort *)0x0;
  local_58 = &local_60;
  iVar10 = (*(code *)puVar11[3])(uVar8,&local_58,6,&local_80,0xc);
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0040c50c,0x24,&local_25,&DAT_018a8a48,&DAT_018a8b18);
  }
  local_b0 = local_80;
  uStack_ac = local_7c;
  uStack_a8 = local_78;
  local_58 = puVar1;
  local_54 = uVar14;
  local_50 = (undefined1 *)uVar2;
  local_4c = uVar3;
  local_48 = (undefined *)uVar4;
  local_44 = uVar5;
  local_40 = (undefined *)uVar6;
  local_3c = uVar7;
  local_38 = (undefined1 *)uVar9;
  uVar16 = (**(code **)(*(int *)(param_1 + 0x14) + 0xc))
                     (*(undefined4 *)(param_1 + 0x10),&local_58,&local_b0);
  uVar14 = *(undefined4 *)(param_3 + 8);
  puVar15 = *(undefined4 **)(param_3 + 0xc);
  pcVar12 = (code *)*puVar15;
  uVar9 = *(uint *)(param_1 + 0x20);
  iVar10 = *(int *)(param_1 + 0x24);
  if (pcVar12 != (code *)0x0) {
    (*pcVar12)(uVar14);
  }
  if (puVar15[1] != 0) {
    thunk_FUN_016d3fb4(uVar14);
  }
  *(undefined1 *)(param_3 + 0x31) = 2;
  *(undefined8 *)(param_3 + 8) = uVar16;
  uVar13 = 0xffff0000;
  if (uVar9 < 0xffff0000) {
    uVar13 = uVar9;
  }
  if (iVar10 != -1) {
    uVar13 = uVar9;
  }
  *(undefined4 *)(param_3 + 0x20) = 0;
  *(uint *)(param_3 + 0x18) = uVar13;
  *(int *)(param_3 + 0x1c) = iVar10;
  *(undefined4 *)(param_3 + 0x24) = 0;
  if ((code *)*puVar11 != (code *)0x0) {
    (*(code *)*puVar11)(uVar8);
  }
  if (puVar11[1] != 0) {
    thunk_FUN_016d3fb4(uVar8);
  }
  return;
}

