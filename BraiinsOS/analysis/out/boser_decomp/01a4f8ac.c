// FUN_01a4f8ac @ 01a4f8ac size=1376 calls_out=12 calls_in=1
// strings: 

void FUN_01a4f8ac(uint *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  uint *puVar7;
  char *pcVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  char *pcVar17;
  int iVar18;
  bool bVar19;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  uint local_94;
  undefined4 local_90;
  uint local_88;
  uint local_84;
  char *local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  char *local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  char *local_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  char *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  pcVar12 = *(char **)(param_3 + 8);
  iVar15 = *(int *)(param_3 + 0xc);
  FUN_01a4fe90(&local_b8);
  if (local_b8 != 1) {
    *param_1 = local_b8;
    param_1[1] = local_b4;
    param_1[2] = local_b0;
    param_1[3] = uStack_ac;
    param_1[4] = local_a8;
    param_1[5] = local_a4;
    return;
  }
  puVar16 = (undefined4 *)((uint)&local_b8 | 4);
  local_a0 = *puVar16;
  local_9c = puVar16[1];
  uStack_98 = puVar16[2];
  uVar11 = puVar16[3];
  local_90 = puVar16[4];
  pcVar8 = (char *)0x4;
  local_88 = 1;
  *(char **)(param_3 + 8) = pcVar12;
  *(int *)(param_3 + 0xc) = iVar15;
  local_94 = uVar11;
  if ((iVar15 == 0) || (*pcVar12 != '\\')) {
    uVar13 = 0;
    uVar9 = 0;
    uVar14 = 0;
    uVar10 = 0;
  }
  else {
    *(char **)(param_3 + 8) = pcVar12 + 1;
    *(int *)(param_3 + 0xc) = iVar15 + -1;
    FUN_01a4e62c(&local_40,param_3);
    if ((local_40 == 3) && (FUN_01a4f600(&local_40,param_3), local_40 == 3)) {
      iVar18 = *(int *)(param_3 + 0xc);
      do {
        pcVar17 = *(char **)(param_3 + 8);
        pcVar8 = (char *)0x4;
        if ((iVar18 == 0) || (*pcVar17 != '\\')) {
          uVar13 = 0;
          local_3c = 0;
          uVar14 = 0;
LAB_01a4fc94:
          *(char **)(param_3 + 8) = pcVar17;
          *(int *)(param_3 + 0xc) = iVar18;
          FUN_0134aee0(local_3c & 0xff | uVar13 << 8,pcVar8,4,0xc);
          FUN_012d40d0(uVar14,uVar11);
          local_7c = 0;
          local_80 = (char *)0x1;
          local_84 = 0x80000000;
          local_88 = 3;
          goto LAB_01a4fcdc;
        }
        *(char **)(param_3 + 8) = pcVar17 + 1;
        *(int *)(param_3 + 0xc) = iVar18 + -1;
        FUN_01a4e62c(&local_40,param_3);
        if ((local_40 != 3) || (FUN_01a4f600(&local_40,param_3), local_40 != 3)) {
          uVar10 = local_34 >> 8;
          uVar13 = local_3c >> 8;
          pcVar8 = local_38;
          uVar14 = local_30;
          uVar11 = local_2c;
          if (local_40 == 1) goto LAB_01a4fc94;
          uVar14 = local_3c & 0xff | uVar13 << 8;
          local_88 = local_40;
          uVar13 = local_30;
          uVar9 = (undefined1)local_34;
          goto LAB_01a4fdf8;
        }
        bVar19 = *(int *)(param_3 + 0xc) != iVar18;
        iVar18 = *(int *)(param_3 + 0xc);
      } while (bVar19);
      uVar14 = 0;
      uVar10 = 0;
      local_88 = 2;
      pcVar8 = (char *)0x4;
      uVar13 = 0;
      uVar9 = 0;
LAB_01a4fdf8:
    }
    else {
      uVar10 = local_34 >> 8;
      local_88 = local_40;
      pcVar8 = local_38;
      uVar13 = local_30;
      uVar11 = local_2c;
      uVar14 = local_3c;
      uVar9 = (undefined1)local_34;
    }
  }
  uVar4 = local_90;
  uVar3 = local_94;
  local_7c = CONCAT13((char)(uVar10 >> 0x10),(int3)CONCAT31((int3)uVar10,uVar9));
  local_84 = uVar14;
  local_80 = pcVar8;
  local_78 = uVar13;
  local_74 = uVar11;
  if (local_88 == 1) {
    FUN_0134aee0(local_a0,local_9c,4,0xc);
    FUN_012d40d0(uVar3,uVar4);
    *(char **)(param_3 + 8) = pcVar12;
    *(int *)(param_3 + 0xc) = iVar15;
    FUN_01a471bc(&local_40,param_3);
    uVar5 = local_2c;
    uVar3 = local_30;
    pcVar17 = local_38;
    uVar10 = local_3c;
    if (local_40 == 3) {
      uVar9 = (undefined1)local_3c;
      if (local_3c < 0x80) {
        local_58 = local_3c & 0xff;
        uVar10 = 1;
      }
      else {
        uVar1 = (undefined1)(local_3c >> 6);
        if (local_3c < 0x800) {
          local_58 = (CONCAT11(uVar9,uVar1) & 0x3fff | 0x8000) | 0xc0;
          uVar10 = 2;
        }
        else {
          bVar2 = (byte)(local_3c >> 0xc);
          if (local_3c >> 0x10 == 0) {
            bVar6 = bVar2 | 0xe0;
            local_58._1_3_ = (CONCAT11(uVar9,uVar1) & 0x3fff | 0x8000) & 0xffff3f | 0x80;
            uVar10 = 3;
          }
          else {
            bVar6 = (byte)(local_3c >> 0x12) | 0xf0;
            uVar10 = 4;
            local_58._1_3_ = CONCAT21(CONCAT11(uVar9,uVar1),bVar2) & 0x3f3f3f | 0x808080;
          }
          local_58 = CONCAT31(local_58._1_3_,bVar6);
        }
      }
      pcVar12 = (char *)FUN_01298504(uVar10,1);
      if (pcVar12 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar10);
      }
      FUN_01bed4e2(pcVar12,&local_58,uVar10);
      local_70 = 3;
      local_6c = uVar10;
      local_68 = pcVar12;
      local_64 = uVar10;
    }
    else {
      local_70 = local_40;
      local_6c = local_3c;
      local_68 = local_38;
      local_64 = local_34;
      local_60 = local_30;
      local_5c = local_2c;
      if (local_40 == 1) {
        FUN_0134aee0(uVar14,pcVar8,4,0xc);
        FUN_012d40d0(uVar13,uVar11);
        *(char **)(param_3 + 8) = pcVar12;
        *(int *)(param_3 + 0xc) = iVar15;
        FUN_01a4f43c(&local_40,param_3);
        if (local_40 == 3) {
          local_4c = 1;
          local_54 = 0x80000000;
          local_58 = 3;
          local_50 = "\n";
        }
        else {
          local_58 = local_40;
          local_54 = local_3c;
          local_50 = local_38;
          local_4c = local_34;
          uStack_48 = local_30;
          uStack_44 = local_2c;
          if (local_40 == 1) {
            FUN_01a451b0((uint)&local_70 | 4);
            puVar7 = (uint *)((uint)&local_58 | 4);
            uVar11 = puVar7[1];
            uVar10 = puVar7[2];
            uVar13 = puVar7[3];
            uVar14 = puVar7[4];
            param_1[1] = *puVar7;
            param_1[2] = uVar11;
            param_1[3] = uVar10;
            param_1[4] = uVar13;
            param_1[5] = uVar14;
            *param_1 = 1;
            goto LAB_01a4fda8;
          }
        }
        *param_1 = local_58;
        param_1[1] = local_54;
        param_1[2] = (uint)local_50;
        param_1[3] = local_4c;
        param_1[4] = uStack_48;
        param_1[5] = uStack_44;
        FUN_0134aee0(uVar10,pcVar17,4,0xc);
        FUN_012d40d0(uVar3,uVar5);
        goto LAB_01a4fda8;
      }
    }
    *param_1 = local_70;
    param_1[1] = local_6c;
    param_1[2] = (uint)local_68;
    param_1[3] = local_64;
    param_1[4] = local_60;
    param_1[5] = local_5c;
    FUN_0134aee0(uVar14,pcVar8,4,0xc);
    FUN_012d40d0(uVar13,uVar11);
  }
  else {
LAB_01a4fcdc:
    *param_1 = local_88;
    param_1[1] = local_84;
    param_1[2] = (uint)local_80;
    param_1[3] = local_7c;
    param_1[4] = local_78;
    param_1[5] = local_74;
    FUN_0134aee0(local_a0,local_9c,4,0xc);
    FUN_012d40d0(local_94,local_90);
  }
LAB_01a4fda8:
  if (1 < local_b8) {
    if (local_b8 == 2) {
      FUN_0134aee0(local_b4,local_b0,4,0xc);
      FUN_012d40d0(local_a8,local_a4);
      return;
    }
    FUN_01a50258(&local_b8);
  }
  return;
}

