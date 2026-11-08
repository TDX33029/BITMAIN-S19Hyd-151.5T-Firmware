// FUN_01014e4c @ 01014e4c size=1256 calls_out=8 calls_in=1
// strings: 

void FUN_01014e4c(undefined4 *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  uint uVar12;
  uint *puVar13;
  int *piVar14;
  int iVar15;
  code *pcVar16;
  byte *pbVar17;
  int *piVar18;
  undefined4 local_78;
  code *local_74;
  uint *local_70;
  code *local_6c;
  uint local_68;
  int local_64;
  undefined4 *local_60;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if (param_3[1] != 0) {
LAB_01014eb4:
    *(undefined2 *)param_1 = 1;
    return;
  }
  uVar9 = *param_3;
  if ((uint)((int *)param_3[2])[1] <= uVar9) goto LAB_01014eb4;
  cVar2 = *(char *)(*(int *)param_3[2] + uVar9);
  FUN_0101393c(&local_78,param_3,7);
  pcVar3 = local_74;
  if ((char)local_78 != '\0') {
LAB_01014f0c:
    *(undefined1 *)((int)param_1 + 1) = local_78._1_1_;
    *(undefined1 *)param_1 = 1;
    return;
  }
  puVar6 = (undefined4 *)0x0;
  uVar4 = param_3[1];
  uVar12 = *param_3;
  if ((uVar4 == 0) &&
     (puVar6 = (undefined4 *)(*(uint *)(param_3[2] + 4) - uVar12),
     *(uint *)(param_3[2] + 4) < uVar12)) {
    puVar6 = (undefined4 *)0x0;
  }
  if (puVar6 < local_74) {
    local_78._1_1_ = 2;
    goto LAB_01014f0c;
  }
  if (-1 < cVar2) {
    puVar6 = (undefined4 *)0x0;
    if ((uVar4 == 0) &&
       (puVar6 = (undefined4 *)(*(uint *)(param_3[2] + 4) - uVar12),
       *(uint *)(param_3[2] + 4) < uVar12)) {
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar6 < local_74) {
      local_78 = (uint *)local_74;
      local_74 = (code *)puVar6;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_78);
    }
    param_1[1] = 0;
    *(undefined1 *)param_1 = 0;
    param_1[5] = uVar12 - uVar9;
    param_1[6] = local_74;
    *param_3 = uVar12 + (int)local_74;
    param_3[1] = uVar4 + CARRY4(uVar12,(uint)local_74);
    return;
  }
  piVar14 = (int *)param_3[2];
  uVar8 = piVar14[1];
  uVar10 = uVar12;
  if (uVar8 < uVar12) {
    uVar10 = uVar8;
  }
  if (uVar4 != 0) {
    uVar10 = uVar8;
  }
  if ((undefined4 *)(uVar8 - uVar10) < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_74,(undefined4 *)(uVar8 - uVar10),&DAT_01882360);
  }
  iVar15 = *piVar14;
  piVar18 = (int *)(param_2 + 0x20);
  if ((uint)(*(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x24)) < (uint)((int)local_74 << 1)) {
    FUN_00f5f538(piVar18,(int)local_74 << 1);
  }
  if (pcVar3 == (code *)0x0) {
LAB_01015170:
    FUN_00f5f8dc(&local_58,piVar18,*(undefined4 *)(param_2 + 0x24));
    if (local_58 != 0) {
      if ((local_4c & 1) == 0) {
        local_3c = &DAT_018ad580;
        local_70 = (uint *)local_58;
        local_6c = (code *)local_54;
      }
      else {
        local_40 = local_54 + (local_4c >> 5);
        local_44 = local_58 - (local_4c >> 5);
        local_48 = local_50 + (local_4c >> 5);
        FUN_00f5ef18(&local_3c,&local_48);
        local_2c = local_4c >> 5;
        if (local_34 < local_4c >> 5) {
          local_70 = &local_28;
          local_28 = local_34;
          local_6c = FUN_007883b8;
          local_74 = FUN_007883b8;
          local_78 = &local_2c;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00584155,&local_78,&DAT_018a6700);
        }
        local_6c = (code *)(local_34 - local_2c);
        local_70 = (uint *)((int)local_38 + local_2c);
        local_4c = local_30;
      }
      uVar11 = 0;
      local_60 = (undefined4 *)pcVar3;
      local_74 = (code *)local_3c;
      local_68 = local_4c;
      local_64 = uVar12 - uVar9;
      goto LAB_01015258;
    }
    uVar7 = (undefined1)local_54;
  }
  else {
    uVar8 = 0;
    pcVar16 = pcVar3;
    pbVar17 = (byte *)(iVar15 + uVar10);
    do {
      if (0xff < uVar8) {
LAB_01015328:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar8,0x100,&DAT_01882e28);
      }
      bVar1 = *pbVar17;
      puVar13 = (uint *)(&DAT_0037b048 + (bVar1 >> 1 & 0x78) + uVar8 * 0x80);
      if ((*(byte *)((int)puVar13 + 5) & 4) != 0) goto LAB_0101515c;
      uVar8 = *puVar13;
      if ((*(byte *)((int)puVar13 + 5) & 2) != 0) {
        iVar15 = *(int *)(param_2 + 0x24);
        uVar10 = puVar13[1];
        if (*(int *)(param_2 + 0x28) == iVar15) {
          FUN_00f5f538(piVar18,1);
          iVar15 = *(int *)(param_2 + 0x24);
          iVar5 = *(int *)(param_2 + 0x28);
          *(char *)(*(int *)(param_2 + 0x20) + iVar15) = (char)uVar10;
          if (iVar5 == iVar15) goto LAB_01015134;
        }
        else {
          *(char *)(*piVar18 + iVar15) = (char)uVar10;
        }
        *(int *)(param_2 + 0x24) = iVar15 + 1;
      }
      if (0xff < uVar8) goto LAB_01015328;
      puVar13 = (uint *)(&DAT_0037b048 + (bVar1 & 0xf) * 8 + uVar8 * 0x80);
      bVar1 = *(byte *)((int)puVar13 + 5);
      if ((bVar1 & 4) != 0) goto LAB_0101515c;
      uVar8 = *puVar13;
      if ((bVar1 & 2) != 0) {
        iVar15 = *(int *)(param_2 + 0x24);
        uVar10 = puVar13[1];
        if (*(int *)(param_2 + 0x28) == iVar15) {
          FUN_00f5f538(piVar18,1);
          iVar15 = *(int *)(param_2 + 0x24);
          iVar5 = *(int *)(param_2 + 0x28);
          *(char *)(*(int *)(param_2 + 0x20) + iVar15) = (char)uVar10;
          if (iVar5 == iVar15) {
LAB_01015134:
            local_74 = (code *)0x0;
            local_78 = (uint *)0x1;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_78);
          }
        }
        else {
          *(char *)(*piVar18 + iVar15) = (char)uVar10;
        }
        *(int *)(param_2 + 0x24) = iVar15 + 1;
      }
      pcVar16 = (code *)((int)pcVar16 + -1);
      pbVar17 = pbVar17 + 1;
    } while (pcVar16 != (code *)0x0);
    if ((uVar8 == 0) || ((bVar1 & 1) != 0)) goto LAB_01015170;
LAB_0101515c:
    local_58 = 0;
    local_54 = CONCAT31(local_54._1_3_,6);
    uVar7 = 6;
  }
  uVar11 = 1;
  local_78 = (uint *)((uint)CONCAT21(local_78._2_2_,uVar7) << 8);
LAB_01015258:
  local_38 = (undefined4 *)0x0;
  local_78 = (uint *)CONCAT31(local_78._1_3_,uVar11);
  if ((uVar4 == 0) && (local_38 = (undefined4 *)(piVar14[1] - uVar12), (uint)piVar14[1] < uVar12)) {
    local_38 = (undefined4 *)0x0;
  }
  if (local_38 < pcVar3) {
    local_3c = (undefined4 *)pcVar3;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_3c);
  }
  *param_3 = uVar12 + (int)pcVar3;
  param_3[1] = uVar4 + CARRY4(uVar12,(uint)pcVar3);
  *param_1 = local_78;
  param_1[1] = local_74;
  param_1[2] = local_70;
  param_1[3] = local_6c;
  param_1[4] = local_68;
  param_1[5] = local_64;
  param_1[6] = local_60;
  return;
}

