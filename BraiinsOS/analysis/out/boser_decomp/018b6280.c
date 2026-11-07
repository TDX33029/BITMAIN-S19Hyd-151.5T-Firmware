// FUN_018b6280 @ 018b6280 size=764 calls_out=9 calls_in=1
// strings: 

void FUN_018b6280(int *param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  undefined8 uVar14;
  int local_58;
  int iStack_54;
  int iStack_50;
  undefined8 local_4c;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  char *pcStack_30;
  char *pcStack_2c;
  char *local_28;
  
  pcVar9 = (char *)0x2;
  uVar14 = FUN_018beed0(param_2,2);
  if (((ushort *)uVar14 == (ushort *)0x0) || ((int)((ulonglong)uVar14 >> 0x20) != 2)) {
    pcStack_30 = (char *)0xb;
    pcStack_2c = &DAT_005239af;
  }
  else {
    uVar1 = *(ushort *)uVar14;
    uVar14 = FUN_018beed0(param_2,uVar1 << 8 | uVar1 >> 8);
    if ((int)uVar14 != 0) {
      iVar6 = 4;
      local_44 = 0;
      local_38 = 0;
      local_3c = 4;
      local_40 = 0;
      if ((int)((ulonglong)uVar14 >> 0x20) != 0) {
        iVar10 = 8;
        do {
          iVar2 = local_38;
          local_4c = uVar14;
          FUN_018c4324(&local_34,&local_4c);
          pcVar3 = local_28;
          pcVar12 = pcStack_2c;
          pcVar8 = pcStack_30;
          if (local_34 == 1) {
            pcVar9 = local_28;
LAB_018b6524:
            FUN_015e8b48(&local_40);
            goto LAB_018b6534;
          }
          uVar14 = FUN_018beed0(&local_4c,4);
          if (((uint *)uVar14 == (uint *)0x0) || ((int)((ulonglong)uVar14 >> 0x20) != 4)) {
            FUN_0134bd64(pcVar8,pcVar12);
            pcStack_30 = (char *)0xb;
            pcVar9 = (char *)0x3;
            pcStack_2c = "u32";
            goto LAB_018b6524;
          }
          uVar4 = *(uint *)uVar14;
          pcVar9 = (char *)(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                            (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18);
          if (pcVar8 == (char *)0x80000000) {
            pcStack_30 = pcVar12;
            pcStack_2c = pcVar3;
            goto LAB_018b6524;
          }
          uVar14 = local_4c;
          if (iVar2 == local_40) {
            FUN_018fa978(&local_40);
            iVar6 = local_3c;
            uVar14 = local_4c;
          }
          local_4c._4_4_ = (uint)((ulonglong)uVar14 >> 0x20);
          puVar5 = (undefined4 *)(iVar6 + iVar2 * 0x10);
          *puVar5 = pcVar8;
          local_38 = iVar2 + 1;
          puVar5[1] = pcVar12;
          puVar5 = (undefined4 *)(iVar6 + iVar10);
          *puVar5 = pcVar3;
          iVar10 = iVar10 + 0x10;
          puVar5[1] = pcVar9;
        } while (local_44 < local_4c._4_4_);
      }
      iVar2 = local_38;
      iVar10 = local_3c;
      iVar6 = local_40;
      iStack_54 = local_3c;
      iStack_50 = local_38;
      local_58 = local_40;
      local_4c = uVar14;
      uVar14 = FUN_018beed0(param_2,2);
      pcVar12 = &DAT_005239af;
      pcVar9 = (char *)0x2;
      pcVar8 = (char *)0xb;
      if (((ushort *)uVar14 != (ushort *)0x0) && ((int)((ulonglong)uVar14 >> 0x20) == 2)) {
        uVar1 = *(ushort *)uVar14;
        uVar14 = FUN_018beed0(param_2,uVar1 << 8 | uVar1 >> 8);
        if ((int)uVar14 != 0) {
          local_44 = 0;
          iVar7 = 0;
          local_38 = 0;
          local_3c = 4;
          local_40 = 0;
          iVar11 = 4;
          iVar13 = 0;
          if ((int)((ulonglong)uVar14 >> 0x20) != 0) {
            iVar11 = 4;
            iVar13 = 0;
            do {
              iVar7 = local_38;
              local_4c = uVar14;
              FUN_018c41e4(&local_34,&local_4c);
              pcVar12 = local_28;
              pcVar8 = pcStack_2c;
              pcVar9 = pcStack_30;
              if (local_34 != 0) {
                FUN_018a8274(&local_40);
                pcVar9 = local_28;
                pcVar8 = pcStack_30;
                pcVar12 = pcStack_2c;
                goto LAB_018b6560;
              }
              uVar14 = local_4c;
              if (iVar7 == local_40) {
                FUN_018c4418(&local_40);
                iVar11 = local_3c;
                uVar14 = local_4c;
              }
              local_4c._4_4_ = (uint)((ulonglong)uVar14 >> 0x20);
              iVar7 = iVar7 + 1;
              puVar5 = (undefined4 *)(iVar11 + iVar13);
              *puVar5 = pcVar9;
              iVar13 = iVar13 + 0xc;
              puVar5[1] = pcVar8;
              puVar5[2] = pcVar12;
              local_38 = iVar7;
            } while (local_44 < local_4c._4_4_);
            iVar11 = local_3c;
            iVar13 = local_40;
          }
          *param_1 = iVar6;
          param_1[3] = iVar13;
          param_1[1] = iVar10;
          param_1[2] = iVar2;
          param_1[4] = iVar11;
          param_1[5] = iVar7;
          return;
        }
        pcVar9 = (char *)0x0;
        pcVar8 = (char *)0xa;
      }
LAB_018b6560:
      *param_1 = -0x80000000;
      param_1[1] = (int)pcVar8;
      param_1[2] = (int)pcVar12;
      param_1[3] = (int)pcVar9;
      FUN_018afbfc(&local_58);
      return;
    }
    pcStack_2c = (char *)0x0;
    pcStack_30 = (char *)0xa;
    pcVar9 = (char *)0x0;
  }
LAB_018b6534:
  param_1[2] = (int)pcStack_2c;
  *param_1 = -0x80000000;
  param_1[1] = (int)pcStack_30;
  param_1[3] = (int)pcVar9;
  return;
}

