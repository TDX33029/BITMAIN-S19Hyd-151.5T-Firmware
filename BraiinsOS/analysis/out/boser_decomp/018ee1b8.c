// FUN_018ee1b8 @ 018ee1b8 size=792 calls_out=9 calls_in=1
// strings: 

void FUN_018ee1b8(int *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *unaff_r4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *unaff_r10;
  undefined8 uVar12;
  int local_58;
  int iStack_54;
  int iStack_50;
  undefined8 local_4c;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  
  FUN_01930f74(&local_34,&DAT_01d232d0,param_2);
  if ((char)local_34 == '\x18') {
    uVar12 = FUN_0192fac8(param_2,local_30);
    if ((int)uVar12 != 0) {
      iVar5 = 4;
      local_44 = 0;
      local_38 = 0;
      local_3c = 4;
      local_40 = 0;
      if ((int)((ulonglong)uVar12 >> 0x20) != 0) {
        iVar10 = 8;
        do {
          iVar1 = local_38;
          local_4c = uVar12;
          FUN_01935ea0(&local_34,&local_4c);
          unaff_r10 = local_28;
          pcVar2 = local_2c;
          pcVar8 = local_30;
          if (local_34 == (char *)0x1) {
            unaff_r4 = local_2c;
            local_34 = local_30;
LAB_018ee468:
            FUN_018e2658(&local_40);
            goto LAB_018ee478;
          }
          uVar12 = FUN_0192fac8(&local_4c,4);
          if (((uint *)uVar12 == (uint *)0x0) || ((int)((ulonglong)uVar12 >> 0x20) != 4)) {
            FUN_0134bd64(pcVar8,pcVar2);
            unaff_r4 = "u32";
            unaff_r10 = (char *)0x3;
            local_34 = (char *)0xc;
            goto LAB_018ee468;
          }
          uVar3 = *(uint *)uVar12;
          pcVar7 = (char *)(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                            (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18);
          if (pcVar8 == (char *)0x80000000) {
            unaff_r4 = unaff_r10;
            unaff_r10 = pcVar7;
            local_34 = pcVar2;
            goto LAB_018ee468;
          }
          uVar12 = local_4c;
          if (iVar1 == local_40) {
            FUN_018fa978(&local_40);
            iVar5 = local_3c;
            uVar12 = local_4c;
          }
          local_4c._4_4_ = (uint)((ulonglong)uVar12 >> 0x20);
          puVar4 = (undefined4 *)(iVar5 + iVar1 * 0x10);
          *puVar4 = pcVar8;
          local_38 = iVar1 + 1;
          puVar4[1] = pcVar2;
          puVar4 = (undefined4 *)(iVar5 + iVar10);
          *puVar4 = unaff_r10;
          iVar10 = iVar10 + 0x10;
          puVar4[1] = pcVar7;
        } while (local_44 < local_4c._4_4_);
      }
      iVar1 = local_38;
      iVar10 = local_3c;
      iVar5 = local_40;
      iStack_54 = local_3c;
      iStack_50 = local_38;
      local_58 = local_40;
      local_4c = uVar12;
      FUN_01930f74(&local_34,&DAT_01d23310,param_2);
      pcVar8 = (char *)((uint)local_34 & 0xff);
      if (pcVar8 == (char *)0x18) {
        uVar12 = FUN_0192fac8(param_2,local_30);
        if ((int)uVar12 != 0) {
          iVar6 = 0;
          local_44 = 0;
          local_38 = 0;
          local_3c = 4;
          local_40 = 0;
          iVar11 = 4;
          iVar9 = 0;
          if ((int)((ulonglong)uVar12 >> 0x20) != 0) {
            iVar11 = 4;
            iVar9 = 0;
            do {
              iVar6 = local_38;
              local_4c = uVar12;
              FUN_01935c58(&local_34,&local_4c);
              pcVar7 = local_28;
              pcVar2 = local_2c;
              pcVar8 = local_30;
              if (local_34 != (char *)0x0) {
                FUN_018e26a0(&local_40);
                uVar3 = (uint)local_30 >> 8;
                unaff_r10 = local_2c;
                goto LAB_018ee4ac;
              }
              uVar12 = local_4c;
              if (iVar6 == local_40) {
                FUN_018c4418(&local_40);
                iVar11 = local_3c;
                uVar12 = local_4c;
              }
              local_4c._4_4_ = (uint)((ulonglong)uVar12 >> 0x20);
              iVar6 = iVar6 + 1;
              puVar4 = (undefined4 *)(iVar11 + iVar9);
              *puVar4 = pcVar8;
              iVar9 = iVar9 + 0xc;
              puVar4[1] = pcVar2;
              puVar4[2] = pcVar7;
              local_38 = iVar6;
            } while (local_44 < local_4c._4_4_);
            iVar11 = local_3c;
            iVar9 = local_40;
          }
          param_1[1] = iVar10;
          param_1[2] = iVar1;
          *param_1 = iVar5;
          param_1[3] = iVar9;
          param_1[4] = iVar11;
          param_1[5] = iVar6;
          return;
        }
        uVar3 = 0;
        pcVar8 = (char *)0xb;
        local_28 = (char *)0x0;
      }
      else {
        uVar3 = (uint)local_34 >> 8;
        unaff_r10 = local_30;
        local_28 = local_2c;
      }
LAB_018ee4ac:
      param_1[1] = (uint)pcVar8 & 0xff | uVar3 << 8;
      param_1[2] = (int)unaff_r10;
      param_1[3] = (int)local_28;
      *param_1 = -0x80000000;
      FUN_018e2658(&local_58);
      return;
    }
    local_34 = (char *)0xb;
  }
  else {
    unaff_r4 = local_30;
    unaff_r10 = local_2c;
  }
LAB_018ee478:
  param_1[2] = (int)unaff_r4;
  *param_1 = -0x80000000;
  param_1[1] = (int)local_34;
  param_1[3] = (int)unaff_r10;
  return;
}

