// FUN_0103c6d8 @ 0103c6d8 size=924 calls_out=5 calls_in=0
// strings: 

bool FUN_0103c6d8(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_a0;
  undefined1 local_9c;
  undefined1 local_9b;
  int local_98;
  undefined1 local_94;
  undefined1 local_93;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  char *local_80;
  uint local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_68;
  int local_64;
  char *local_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_48;
  int local_44;
  char *pcStack_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_28;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (*(char *)(param_2 + 0x40) != '\0') {
      return false;
    }
  }
  else if (*(char *)(param_2 + 0x40) == '\0') {
    return false;
  }
  sVar3 = *(short *)(param_1 + 0x24);
  if (sVar3 == 1) {
    uVar7 = *(uint *)(param_1 + 0x30);
    if (uVar7 != 0) goto LAB_0103c770;
    uVar7 = 0;
    if (*(short *)(param_2 + 0x24) == 1) {
      uVar9 = *(uint *)(param_2 + 0x30);
    }
    else {
      uVar9 = (uint)*(ushort *)(param_2 + 0x26);
    }
  }
  else {
    uVar7 = (uint)*(ushort *)(param_1 + 0x26);
    if (uVar7 != 0) goto LAB_0103c770;
    if (*(short *)(param_2 + 0x24) == 1) {
      uVar9 = *(uint *)(param_2 + 0x30);
    }
    else {
      uVar9 = (uint)*(ushort *)(param_2 + 0x26);
    }
  }
  if (uVar9 == 0) {
    return true;
  }
LAB_0103c770:
  sVar4 = *(short *)(param_2 + 0x24);
  if (sVar4 == 0) {
    local_93 = (undefined1)*(undefined2 *)(param_2 + 0x26);
  }
  else {
    local_93 = (undefined1)*(undefined4 *)(param_2 + 0x30);
  }
  local_8c = 0;
  local_90 = 0;
  local_94 = 0;
  local_9b = (undefined1)uVar7;
  local_9c = 0;
  local_a0 = param_1;
  local_98 = param_2;
LAB_0103c7d4:
  while( true ) {
    uVar12 = FUN_0103a344(&local_a0);
    if ((int)uVar12 == 0) break;
    uVar13 = FUN_0103a344(&local_98);
    if ((int)uVar13 == 0) break;
    FUN_01049718(&local_48,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    if ((short)local_48 == 2) {
      local_68 = local_44;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_68,&DAT_018832c8,&DAT_01883288);
    }
    local_88 = local_48;
    local_84 = local_44;
    local_80 = pcStack_40;
    local_7c = local_3c;
    uStack_78 = uStack_38;
    uStack_74 = uStack_34;
    uStack_70 = uStack_30;
    FUN_01049718(&local_48,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
    if ((short)local_48 == 2) {
      local_28 = local_44;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_018832c8,&DAT_01883298);
    }
    local_68 = local_48;
    uVar7 = local_68;
    local_64 = local_44;
    local_60 = pcStack_40;
    local_5c = local_3c;
    uStack_58 = uStack_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uVar9 = local_88 & 0xffff;
    local_68 = uVar7;
    if ((local_88 & 1) == 0) {
      uVar7 = (uint)local_88._2_2_;
      uVar8 = uVar7;
      pcVar10 = (char *)((uint)&local_88 | 4);
      if (0x18 < uVar7) goto LAB_0103ca00;
    }
    else {
      uVar8 = local_7c;
      pcVar10 = local_80;
    }
    uVar5 = local_48 & 0xffff;
    local_68._2_2_ = (ushort)(local_48 >> 0x10);
    if ((local_48 & 1) == 0) {
      uVar7 = (uint)local_68._2_2_;
      pcVar11 = (char *)((uint)&local_68 | 4);
      if (0x18 < uVar7) {
LAB_0103ca00:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar7,0x18,&DAT_01883538);
      }
    }
    else {
      uVar7 = local_3c;
      pcVar11 = pcStack_40;
    }
    if (uVar7 < uVar8) {
      uVar8 = uVar7;
    }
    while (uVar8 != 0) {
      cVar1 = *pcVar10;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar11;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
      if (cVar1 != cVar2) goto LAB_0103c950;
    }
    if ((local_88 & 1) == 0) {
      uVar7 = (uint)local_88._2_2_;
    }
    else {
      uVar7 = local_7c;
    }
    if ((local_48 & 1) == 0) {
      uVar8 = (uint)local_68._2_2_;
    }
    else {
      uVar8 = local_3c;
    }
    if (uVar7 != uVar8) {
LAB_0103c950:
      iVar6 = 0;
      if (uVar5 != 0) {
        iVar6 = local_44;
      }
      if (uVar5 != 0 && iVar6 != 0) {
        iVar6 = thunk_FUN_016d3fb4(pcStack_40);
        if (uVar9 != 0) {
          iVar6 = local_84;
        }
        if (uVar9 != 0 && iVar6 != 0) goto LAB_0103c998;
      }
      else {
        if (uVar9 != 0) {
          iVar6 = local_84;
        }
        if (uVar9 != 0 && iVar6 != 0) {
LAB_0103c998:
          thunk_FUN_016d3fb4(local_80);
          return false;
        }
      }
      return false;
    }
    iVar6 = 0;
    if (uVar5 != 0) {
      iVar6 = local_44;
    }
    if (uVar5 != 0 && iVar6 != 0) goto LAB_0103c92c;
    if (uVar9 != 0) {
      iVar6 = local_84;
    }
    if (uVar9 != 0 && iVar6 != 0) goto LAB_0103c944;
  }
  if (sVar3 == 0) {
    uVar7 = (uint)*(ushort *)(param_1 + 0x26);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x30);
  }
  if (sVar4 == 0) {
    uVar9 = (uint)*(ushort *)(param_2 + 0x26);
  }
  else {
    uVar9 = *(uint *)(param_2 + 0x30);
  }
  return uVar7 == uVar9;
LAB_0103c92c:
  iVar6 = thunk_FUN_016d3fb4(pcStack_40);
  if (uVar9 != 0) {
    iVar6 = local_84;
  }
  if (uVar9 != 0 && iVar6 != 0) {
LAB_0103c944:
    thunk_FUN_016d3fb4(local_80);
  }
  goto LAB_0103c7d4;
}

