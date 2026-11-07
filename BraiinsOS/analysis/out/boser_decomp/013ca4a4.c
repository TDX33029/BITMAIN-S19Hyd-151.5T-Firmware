// FUN_013ca4a4 @ 013ca4a4 size=816 calls_out=5 calls_in=0
// strings: 

bool FUN_013ca4a4(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *extraout_r1;
  int *extraout_r1_00;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
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
  char *local_80;
  int *local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  char *local_60;
  int *local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_48;
  undefined4 local_44;
  char *pcStack_40;
  int *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_28;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (*(char *)(param_2 + 0x40) != '\0') {
      return false;
    }
  }
  else if (*(char *)(param_2 + 0x40) == '\0') {
    return false;
  }
  uVar5 = (uint)*(ushort *)(param_1 + 0x24);
  if (uVar5 == 1) {
    uVar4 = *(uint *)(param_1 + 0x30);
  }
  else {
    uVar4 = (uint)*(ushort *)(param_1 + 0x26);
  }
  if (uVar4 == 0) {
    if (*(short *)(param_2 + 0x24) == 1) {
      uVar4 = *(uint *)(param_2 + 0x30);
    }
    else {
      uVar4 = (uint)*(ushort *)(param_2 + 0x26);
    }
    if (uVar4 == 0) {
      return true;
    }
  }
  sVar3 = *(short *)(param_2 + 0x24);
  if (uVar5 == 0) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x26);
  }
  else {
    uVar4 = (uint)*(byte *)(param_1 + 0x30);
  }
  uVar6 = uVar5;
  if (sVar3 != 1) {
    uVar6 = (uint)*(ushort *)(param_2 + 0x26);
  }
  if (sVar3 == 1) {
    uVar6 = (uint)*(byte *)(param_2 + 0x30);
  }
  local_9c = (uVar4 & 0xff) << 8;
  local_94 = (uVar6 & 0xff) << 8;
  local_8c = 0;
  local_90 = 0;
  piVar7 = &local_98;
  local_a0 = param_1;
  local_98 = param_2;
  while( true ) {
    uVar11 = FUN_013c884c(&local_a0,piVar7);
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
    local_80 = pcStack_40;
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
    local_60 = pcStack_40;
    local_5c = local_3c;
    uStack_58 = uStack_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uVar4 = local_88 & 0xffff;
    if ((local_88 & 1) == 0) {
      piVar7 = (int *)(uint)local_88._2_2_;
      piVar8 = piVar7;
      pcVar9 = (char *)((uint)&local_88 | 4);
      if (&DAT_00000018 < piVar7) goto LAB_013ca7c8;
    }
    else {
      piVar8 = local_7c;
      pcVar9 = local_80;
    }
    local_68._2_2_ = (ushort)(local_48 >> 0x10);
    if ((local_48 & 1) == 0) {
      piVar7 = (int *)(uint)local_68._2_2_;
      pcVar10 = (char *)((uint)&local_68 | 4);
      if (&DAT_00000018 < piVar7) {
LAB_013ca7c8:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,piVar7,0x18,&DAT_01cf2da0);
      }
    }
    else {
      piVar7 = local_3c;
      pcVar10 = pcStack_40;
    }
    if (piVar7 < piVar8) {
      piVar8 = piVar7;
    }
    while (piVar8 != (int *)0x0) {
      cVar1 = *pcVar9;
      piVar8 = (int *)((int)piVar8 + -1);
      cVar2 = *pcVar10;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
      if (cVar1 != cVar2) goto LAB_013ca6f8;
    }
    if ((local_88 & 1) == 0) {
      piVar7 = (int *)(uint)local_88._2_2_;
    }
    else {
      piVar7 = local_7c;
    }
    if ((local_48 & 1) == 0) {
      piVar8 = (int *)(uint)local_68._2_2_;
      if (piVar7 != piVar8) {
LAB_013ca6f8:
        if ((local_48 & 0xffff) == 0) goto LAB_013ca70c;
        goto LAB_013ca700;
      }
    }
    else {
      if (piVar7 != local_3c) {
LAB_013ca700:
        FUN_019bb7e0(local_44,pcStack_40);
LAB_013ca70c:
        if (uVar4 != 0) {
          FUN_019bb7e0(local_84,local_80);
        }
        return false;
      }
      FUN_019bb7e0(local_44,pcStack_40);
      piVar7 = extraout_r1;
    }
    if (uVar4 != 0) {
      FUN_019bb7e0(local_84);
      piVar7 = extraout_r1_00;
    }
  }
  if (uVar5 == 0) {
    uVar5 = (uint)*(ushort *)(param_1 + 0x26);
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x30);
  }
  if (sVar3 == 0) {
    uVar4 = (uint)*(ushort *)(param_2 + 0x26);
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x30);
  }
  return uVar5 == uVar4;
}

