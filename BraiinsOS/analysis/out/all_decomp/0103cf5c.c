// FUN_0103cf5c @ 0103cf5c size=952 calls_out=5 calls_in=15
// strings: 

bool FUN_0103cf5c(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
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
  byte *local_80;
  uint local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_68;
  int local_64;
  byte *local_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_48;
  int local_44;
  byte *pbStack_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_28;
  
  cVar1 = *(char *)(param_2 + 0x40);
  if (*(char *)(param_1 + 0x40) != cVar1) {
    return false;
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (cVar1 != '\0') {
      return false;
    }
  }
  else if (cVar1 == '\0') {
    return false;
  }
  sVar2 = *(short *)(param_1 + 0x24);
  if (sVar2 == 1) {
    uVar6 = *(uint *)(param_1 + 0x30);
    if (uVar6 != 0) goto LAB_0103cff8;
    uVar6 = 0;
    if (*(short *)(param_2 + 0x24) == 1) {
      uVar8 = *(uint *)(param_2 + 0x30);
    }
    else {
      uVar8 = (uint)*(ushort *)(param_2 + 0x26);
    }
  }
  else {
    uVar6 = (uint)*(ushort *)(param_1 + 0x26);
    if (uVar6 != 0) goto LAB_0103cff8;
    if (*(short *)(param_2 + 0x24) == 1) {
      uVar8 = *(uint *)(param_2 + 0x30);
    }
    else {
      uVar8 = (uint)*(ushort *)(param_2 + 0x26);
    }
  }
  if (uVar8 == 0) {
    return true;
  }
LAB_0103cff8:
  sVar3 = *(short *)(param_2 + 0x24);
  if (sVar3 == 0) {
    local_93 = (undefined1)*(undefined2 *)(param_2 + 0x26);
  }
  else {
    local_93 = (undefined1)*(undefined4 *)(param_2 + 0x30);
  }
  local_8c = 0;
  local_90 = 0;
  local_94 = 0;
  local_9b = (undefined1)uVar6;
  local_9c = 0;
  local_a0 = param_1;
  local_98 = param_2;
LAB_0103d05c:
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
    local_80 = pbStack_40;
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
    uVar6 = local_68;
    local_64 = local_44;
    local_60 = pbStack_40;
    local_5c = local_3c;
    uStack_58 = uStack_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uVar8 = local_88 & 0xffff;
    local_68 = uVar6;
    if ((local_88 & 1) == 0) {
      uVar6 = (uint)local_88._2_2_;
      uVar7 = uVar6;
      pbVar9 = (byte *)((uint)&local_88 | 4);
      if (0x18 < uVar6) goto LAB_0103d2a0;
    }
    else {
      uVar7 = local_7c;
      pbVar9 = local_80;
    }
    uVar4 = local_48 & 0xffff;
    local_68._2_2_ = (ushort)(local_48 >> 0x10);
    if ((local_48 & 1) == 0) {
      uVar6 = (uint)local_68._2_2_;
      pbVar11 = (byte *)((uint)&local_68 | 4);
      if (0x18 < uVar6) {
LAB_0103d2a0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar6,0x18,&DAT_01883538);
      }
    }
    else {
      uVar6 = local_3c;
      pbVar11 = pbStack_40;
    }
    if (uVar6 < uVar7) {
      uVar7 = uVar6;
    }
    while (uVar7 != 0) {
      uVar6 = (uint)*pbVar11;
      uVar7 = uVar7 - 1;
      uVar10 = (uint)*pbVar9;
      if (uVar6 - 0x41 < 0x1a) {
        uVar6 = uVar6 | 0x20;
      }
      if (uVar10 - 0x41 < 0x1a) {
        uVar10 = uVar10 | 0x20;
      }
      pbVar9 = pbVar9 + 1;
      pbVar11 = pbVar11 + 1;
      if (uVar10 != uVar6) goto LAB_0103d1f0;
    }
    if ((local_88 & 1) == 0) {
      uVar6 = (uint)local_88._2_2_;
    }
    else {
      uVar6 = local_7c;
    }
    if ((local_48 & 1) == 0) {
      uVar7 = (uint)local_68._2_2_;
    }
    else {
      uVar7 = local_3c;
    }
    if (uVar6 != uVar7) {
LAB_0103d1f0:
      iVar5 = 0;
      if (uVar4 != 0) {
        iVar5 = local_44;
      }
      if (uVar4 != 0 && iVar5 != 0) {
        iVar5 = thunk_FUN_016d3fb4(pbStack_40);
        if (uVar8 != 0) {
          iVar5 = local_84;
        }
        if (uVar8 != 0 && iVar5 != 0) goto LAB_0103d238;
      }
      else {
        if (uVar8 != 0) {
          iVar5 = local_84;
        }
        if (uVar8 != 0 && iVar5 != 0) {
LAB_0103d238:
          thunk_FUN_016d3fb4(local_80);
          return false;
        }
      }
      return false;
    }
    iVar5 = 0;
    if (uVar4 != 0) {
      iVar5 = local_44;
    }
    if (uVar4 != 0 && iVar5 != 0) goto LAB_0103d1cc;
    if (uVar8 != 0) {
      iVar5 = local_84;
    }
    if (uVar8 != 0 && iVar5 != 0) goto LAB_0103d1e4;
  }
  if (sVar2 == 0) {
    uVar6 = (uint)*(ushort *)(param_1 + 0x26);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x30);
  }
  if (sVar3 == 0) {
    uVar8 = (uint)*(ushort *)(param_2 + 0x26);
  }
  else {
    uVar8 = *(uint *)(param_2 + 0x30);
  }
  return uVar6 == uVar8;
LAB_0103d1cc:
  iVar5 = thunk_FUN_016d3fb4(pbStack_40);
  if (uVar8 != 0) {
    iVar5 = local_84;
  }
  if (uVar8 != 0 && iVar5 != 0) {
LAB_0103d1e4:
    thunk_FUN_016d3fb4(local_80);
  }
  goto LAB_0103d05c;
}

