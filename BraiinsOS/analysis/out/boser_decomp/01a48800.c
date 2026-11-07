// FUN_01a48800 @ 01a48800 size=824 calls_out=6 calls_in=2
// strings: integer | digit | integer | integer | integer

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a48800(undefined4 *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  int unaff_lr;
  int iVar15;
  undefined4 in_stack_ffffff3c;
  uint in_stack_ffffff40;
  undefined4 in_stack_ffffff44;
  uint in_stack_ffffff48;
  undefined1 local_8c [4];
  undefined4 local_88;
  char *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  char *local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  char *pcStack_6c;
  undefined4 uStack_68;
  char *local_60;
  uint local_5c;
  int local_58;
  char *local_54;
  undefined4 local_50;
  int local_4c;
  char **local_48;
  int local_44;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  byte *pbStack_2c;
  int iStack_28;
  
  local_74 = 7;
  local_7c = 3;
  local_80 = 5;
  local_88 = 2;
  local_8c[0] = 0x5f;
  local_78 = "integer";
  local_84 = "digit";
  uStack_70 = 3;
  pcStack_6c = "integer";
  uStack_68 = 7;
  uVar13 = *(uint *)(param_2 + 0xc);
  pcVar10 = *(char **)(param_2 + 8);
  local_60 = pcVar10;
  local_5c = uVar13;
  if (uVar13 == 0) {
LAB_01a488c8:
    *(char **)(param_2 + 8) = pcVar10;
    *(uint *)(param_2 + 0xc) = uVar13;
    FUN_0134aee0(0,4,4,0xc);
    unaff_lr = 0x1a488ec;
    FUN_012d40d0(0);
    pbVar8 = *(byte **)(param_2 + 8);
    iVar9 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar9 = uVar13 - 1;
    pbVar8 = (byte *)(pcVar10 + 1);
    cVar1 = *pcVar10;
    *(byte **)(param_2 + 8) = pbVar8;
    *(int *)(param_2 + 0xc) = iVar9;
    if (cVar1 != '+' && cVar1 != '-') {
      *(char **)(param_2 + 8) = pcVar10;
      *(uint *)(param_2 + 0xc) = uVar13;
      goto LAB_01a488c8;
    }
  }
  iVar14 = 1;
  uVar12 = 4;
  if (iVar9 == 0) {
LAB_01a48964:
    uVar4 = 0;
    uVar7 = 0;
    pbVar11 = (byte *)0x0;
    uVar5 = 0;
LAB_01a48974:
    uVar3 = CONCAT13((char)(uVar4 >> 0x10),(int3)CONCAT31((int3)uVar4,(char)uVar5));
    uVar6 = uVar4 >> 8;
    local_44 = unaff_lr;
    if (iVar14 == 1) {
      *(byte **)(param_2 + 8) = pbVar8;
      *(int *)(param_2 + 0xc) = iVar9;
      iVar15 = unaff_lr;
      local_58 = iVar14;
      local_54 = (char *)uVar3;
      local_50 = uVar12;
      local_4c = uVar7;
      local_48 = (char **)pbVar11;
      FUN_01a47d18(&local_3c,param_2);
      if (local_3c == 3) {
        iVar14 = 3;
        uVar6 = in_stack_ffffff40;
        uVar7 = in_stack_ffffff44;
        uVar5 = in_stack_ffffff48;
      }
      else {
        uVar5 = local_38 & 0xff;
        uVar4 = local_38 >> 8 & 0xff;
        uVar6 = local_38 >> 0x10;
        pbVar8 = pbStack_2c;
        iVar9 = iStack_28;
        iVar14 = local_3c;
        in_stack_ffffff3c = local_34;
        uVar7 = local_30;
        if (local_3c == 1) {
          FUN_0134aee0(local_54,uVar12,4,0xc,iVar15,local_34,uVar6,local_30,uVar5);
          uVar12 = local_34;
          uVar7 = local_30;
          FUN_012d40d0(pbVar11,iVar15);
          iVar14 = 1;
          pbVar11 = pbStack_2c;
          unaff_lr = iStack_28;
          goto LAB_01a48ac8;
        }
      }
      FUN_0134aee0(uVar3,uVar12,4,0xc);
      uVar12 = in_stack_ffffff3c;
      FUN_012d40d0(pbVar11,unaff_lr);
      pbVar11 = pbVar8;
      unaff_lr = iVar9;
      if (iVar14 == 3) goto LAB_01a48a88;
    }
LAB_01a48ac8:
    local_38 = uVar5 & 0xff | (uVar4 & 0xff) << 8 | uVar6 << 0x10;
    local_58 = uStack_70;
    local_54 = pcStack_6c;
    local_50 = uStack_68;
    local_48 = &local_60;
    local_4c = param_2;
    local_3c = iVar14;
    local_34 = uVar12;
    local_30 = uVar7;
    pbStack_2c = pbVar11;
    iStack_28 = unaff_lr;
    FUN_01a5cbd0(param_1,&local_3c);
  }
  else {
    bVar2 = *pbVar8;
    *(byte **)(param_2 + 8) = pbVar8 + 1;
    *(int *)(param_2 + 0xc) = iVar9 + -1;
    if (8 < bVar2 - 0x31) {
      *(byte **)(param_2 + 8) = pbVar8;
      *(int *)(param_2 + 0xc) = iVar9;
      goto LAB_01a48964;
    }
    FUN_01a465ac(&local_3c,local_8c,param_2);
    if (local_3c != 3) {
      uVar4 = local_38 >> 8;
      uVar5 = local_38 & 0xff;
      uVar7 = local_30;
      pbVar11 = pbStack_2c;
      uVar12 = local_34;
      iVar14 = local_3c;
      unaff_lr = iStack_28;
      goto LAB_01a48974;
    }
LAB_01a48a88:
    iVar9 = *(int *)(param_2 + 8);
    *(char **)(param_2 + 8) = pcVar10;
    uVar4 = iVar9 - (int)pcVar10;
    *(uint *)(param_2 + 0xc) = uVar13;
    if (uVar13 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2c054);
    }
    *(char **)(param_2 + 8) = pcVar10 + uVar4;
    *(uint *)(param_2 + 0xc) = uVar13 - uVar4;
    *param_1 = 3;
    param_1[1] = pcVar10;
    param_1[2] = uVar4;
  }
  return;
}

