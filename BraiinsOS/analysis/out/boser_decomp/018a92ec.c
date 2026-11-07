// FUN_018a92ec @ 018a92ec size=972 calls_out=13 calls_in=1
// strings: ServerNameType

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018a92ec(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  uint3 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  uint unaff_r10;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  char *local_7c;
  uint local_6c;
  char *local_68;
  int local_64;
  uint local_60;
  undefined8 local_5c;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar14 = FUN_018beed0(param_2,2);
  if (((ushort *)uVar14 == (ushort *)0x0) || ((int)((ulonglong)uVar14 >> 0x20) != 2)) {
    *(undefined1 *)(param_1 + 1) = 0xb;
    *param_1 = 1;
    param_1[2] = &DAT_005239af;
    param_1[3] = 2;
  }
  else {
    uVar1 = *(ushort *)uVar14;
    uVar14 = FUN_018beed0(param_2,uVar1 << 8 | uVar1 >> 8);
    if ((int)uVar14 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 10;
    }
    else {
      iVar11 = 0;
      local_54 = 0;
      local_48 = 0;
      local_64 = 4;
      local_4c = 4;
      local_50 = 0;
      if ((int)((ulonglong)uVar14 >> 0x20) != 0) {
        local_60 = 0;
        local_6c = 0;
        do {
          iVar2 = local_48;
          local_5c = uVar14;
          uVar14 = FUN_018beed0(&local_5c,1);
          pcVar8 = (char *)0xe;
          uVar13 = 0xb;
          uVar6 = 0;
          if (((byte *)uVar14 == (byte *)0x0) || ((int)((ulonglong)uVar14 >> 0x20) != 1)) {
            pcVar10 = "ServerNameType";
            goto LAB_018a9678;
          }
          local_60 = (uint)*(byte *)uVar14;
          if (local_60 == 0) {
            FUN_018c4324(&local_44,&local_5c);
            pcVar8 = local_38;
            pcVar10 = local_3c;
            uVar13 = (uint)local_40 & 0xff;
            uVar3 = local_40._1_3_;
            local_6c = (uint)local_40._1_3_;
            if (local_44 != 0) {
              uVar6 = local_6c & 0xff0000;
              local_60 = (local_6c & 0xffff) >> 8;
              goto LAB_018a9678;
            }
            uVar9 = 0;
            if ((int)local_38 < 0) {
LAB_018a96ac:
                    /* WARNING: Subroutine does not return */
              FUN_00664620(uVar9,local_7c);
            }
            if (local_38 == (char *)0x0) {
              local_7c = (char *)0x1;
              local_68 = (char *)0x0;
            }
            else {
              uVar9 = 1;
              local_7c = (char *)FUN_01298504(local_38,1);
              if (local_7c == (char *)0x0) {
                local_7c = pcVar8;
                goto LAB_018a96ac;
              }
              local_68 = pcVar8;
            }
            FUN_01bed4e2(local_7c,pcVar10,pcVar8);
            FUN_012fbd94(&local_44,local_7c,pcVar8);
            if (local_44 != 0) {
LAB_018a9538:
              FUN_0134bd64(local_68,local_7c);
              FUN_006643f0(&local_30,pcVar10,pcVar8);
              uVar9 = local_2c;
              FUN_01304dac(&local_44,local_2c,local_28);
              if ((local_44 & 0xff) == 2) {
                if (local_30 != -0x80000000) {
                  FUN_0134bd64(local_30,uVar9);
                }
                FUN_0134bd64(uVar13 | local_6c << 8,pcVar10);
                uVar13 = 8;
                uVar6 = 0;
                local_60 = 0;
                local_6c = 0;
LAB_018a9678:
                param_1[3] = pcVar8;
                *param_1 = 1;
                param_1[1] = uVar13 | (uVar6 | local_60 << 8 | local_6c & 0xff) << 8;
                param_1[2] = pcVar10;
                FUN_018a8130(&local_50);
                return;
              }
              local_68 = pcVar10;
              if (local_30 != -0x80000000) {
                FUN_0134bd64(local_30,uVar9);
              }
              uVar9 = 1;
              uVar6 = (uint)(uVar3 >> 0x10);
              goto LAB_018a93f8;
            }
            iVar5 = FUN_018c4060(local_7c,pcVar8);
            if (iVar5 != 0) goto LAB_018a9538;
            FUN_0134bd64(uVar13 | local_6c << 8,pcVar10);
            uVar9 = 0;
            uVar6 = (uint)local_68 >> 0x18;
            uVar7 = (uint)local_68 >> 0x10;
            uVar13 = (uint)local_68 & 0xff;
            local_6c = (uint)local_68 >> 8;
            local_68 = local_7c;
          }
          else {
            FUN_018c3e74(&local_44,&local_5c);
            uVar9 = 2;
            uVar6 = (uint)*(byte *)((int)((uint)&local_44 | 1) + 2);
            local_68 = local_40;
            local_6c = (uint)*(uint3 *)((uint)&local_44 | 1);
            uVar13 = local_44 & 0xff;
            pcVar8 = local_3c;
LAB_018a93f8:
            uVar7 = local_6c >> 8;
          }
          uVar12 = unaff_r10 & 0xffff0000;
          if (local_60 != 0) {
            uVar12 = uVar12 | 1;
          }
          uVar14 = local_5c;
          if (iVar2 == local_50) {
            FUN_0161d664(&local_50);
            local_64 = local_4c;
            uVar14 = local_5c;
          }
          local_5c._4_4_ = (uint)((ulonglong)uVar14 >> 0x20);
          local_48 = iVar2 + 1;
          unaff_r10 = uVar12 | local_60 << 8;
          puVar4 = (undefined4 *)(local_64 + iVar11);
          *puVar4 = uVar9;
          iVar11 = iVar11 + 0x14;
          puVar4[1] = uVar13 | ((uVar7 & 0xff) * 0x100 + uVar6 * 0x10000 | local_6c & 0xff) << 8;
          puVar4[2] = local_68;
          puVar4[3] = pcVar8;
          puVar4[4] = unaff_r10;
          local_6c = (uint)(local_60 != 0);
        } while (local_54 < local_5c._4_4_);
      }
      param_1[1] = local_50;
      param_1[2] = local_4c;
      param_1[3] = local_48;
      *param_1 = 0;
    }
  }
  return;
}

