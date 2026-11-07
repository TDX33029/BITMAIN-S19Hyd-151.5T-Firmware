// FUN_013cad2c @ 013cad2c size=816 calls_out=5 calls_in=18
// strings: 

bool FUN_013cad2c(int param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int *extraout_r1;
  int *extraout_r1_00;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  byte *local_80;
  int *local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  byte *local_60;
  int *local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_48;
  undefined4 local_44;
  byte *pbStack_40;
  int *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_28;
  
  bVar2 = false;
  if (*(char *)(param_1 + 0x40) == *(char *)(param_2 + 0x40)) {
    uVar6 = (uint)*(ushort *)(param_1 + 0x24);
    if (uVar6 == 1) {
      uVar3 = *(uint *)(param_1 + 0x30);
    }
    else {
      uVar3 = (uint)*(ushort *)(param_1 + 0x26);
    }
    if (uVar3 == 0) {
      if (*(short *)(param_2 + 0x24) == 1) {
        uVar3 = *(uint *)(param_2 + 0x30);
      }
      else {
        uVar3 = (uint)*(ushort *)(param_2 + 0x26);
      }
      if (uVar3 == 0) {
        return true;
      }
    }
    sVar1 = *(short *)(param_2 + 0x24);
    if (uVar6 == 0) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x26);
    }
    else {
      uVar3 = (uint)*(byte *)(param_1 + 0x30);
    }
    uVar7 = uVar6;
    if (sVar1 != 1) {
      uVar7 = (uint)*(ushort *)(param_2 + 0x26);
    }
    if (sVar1 == 1) {
      uVar7 = (uint)*(byte *)(param_2 + 0x30);
    }
    local_9c = (uVar3 & 0xff) << 8;
    local_94 = (uVar7 & 0xff) << 8;
    local_8c = 0;
    local_90 = 0;
    piVar4 = &local_98;
    local_a0 = param_1;
    local_98 = param_2;
    while( true ) {
      uVar11 = FUN_013c884c(&local_a0,piVar4);
      if ((int)uVar11 == 0) break;
      uVar12 = FUN_013c884c(&local_98);
      if ((int)uVar12 == 0) break;
      FUN_013d9ca0(&local_48,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
      if ((short)local_48 == 2) {
        local_68 = local_44;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_68,&DAT_01cf1f7c,&DAT_01cf1f1c);
      }
      local_88 = local_48;
      local_84 = local_44;
      local_80 = pbStack_40;
      local_7c = local_3c;
      uStack_78 = uStack_38;
      uStack_74 = uStack_34;
      uStack_70 = uStack_30;
      FUN_013d9ca0(&local_48,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
      if ((short)local_48 == 2) {
        local_28 = local_44;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01cf1f7c,&DAT_01cf1f2c);
      }
      local_68 = local_48;
      local_64 = local_44;
      local_60 = pbStack_40;
      local_5c = local_3c;
      uStack_58 = uStack_38;
      uStack_54 = uStack_34;
      uStack_50 = uStack_30;
      uVar3 = local_88 & 0xffff;
      if ((local_88 & 1) == 0) {
        piVar4 = (int *)(uint)local_88._2_2_;
        piVar5 = piVar4;
        pbVar8 = (byte *)((uint)&local_88 | 4);
        if (&DAT_00000018 < piVar4) goto LAB_013cb050;
      }
      else {
        piVar5 = local_7c;
        pbVar8 = local_80;
      }
      local_68._2_2_ = (ushort)(local_48 >> 0x10);
      if ((local_48 & 1) == 0) {
        piVar4 = (int *)(uint)local_68._2_2_;
        pbVar10 = (byte *)((uint)&local_68 | 4);
        if (&DAT_00000018 < piVar4) {
LAB_013cb050:
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,piVar4,0x18,&DAT_01cf2da0);
        }
      }
      else {
        piVar4 = local_3c;
        pbVar10 = pbStack_40;
      }
      if (piVar4 < piVar5) {
        piVar5 = piVar4;
      }
      while (piVar5 != (int *)0x0) {
        uVar7 = (uint)*pbVar10;
        piVar5 = (int *)((int)piVar5 + -1);
        uVar9 = (uint)*pbVar8;
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
        if (uVar9 - 0x41 < 0x1a) {
          uVar9 = uVar9 | 0x20;
        }
        pbVar8 = pbVar8 + 1;
        pbVar10 = pbVar10 + 1;
        if (uVar9 != uVar7) goto LAB_013caf7c;
      }
      if ((local_88 & 1) == 0) {
        piVar4 = (int *)(uint)local_88._2_2_;
      }
      else {
        piVar4 = local_7c;
      }
      if ((local_48 & 1) == 0) {
        piVar5 = (int *)(uint)local_68._2_2_;
        if (piVar4 != piVar5) {
LAB_013caf7c:
          if ((local_48 & 0xffff) == 0) goto LAB_013caf90;
          goto LAB_013caf84;
        }
      }
      else {
        if (piVar4 != local_3c) {
LAB_013caf84:
          FUN_019bb7e0(local_44,pbStack_40);
LAB_013caf90:
          if (uVar3 != 0) {
            FUN_019bb7e0(local_84,local_80);
          }
          return false;
        }
        FUN_019bb7e0(local_44,pbStack_40);
        piVar4 = extraout_r1;
      }
      if (uVar3 != 0) {
        FUN_019bb7e0(local_84);
        piVar4 = extraout_r1_00;
      }
    }
    if (uVar6 == 0) {
      uVar6 = (uint)*(ushort *)(param_1 + 0x26);
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x30);
    }
    if (sVar1 == 0) {
      uVar3 = (uint)*(ushort *)(param_2 + 0x26);
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x30);
    }
    bVar2 = uVar6 == uVar3;
  }
  return bVar2;
}

