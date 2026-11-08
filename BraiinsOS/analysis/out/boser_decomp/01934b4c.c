// FUN_01934b4c @ 01934b4c size=1064 calls_out=14 calls_in=0
// strings: 

void FUN_01934b4c(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 extraout_r1;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 local_1e4 [4];
  uint local_1e0;
  int iStack_1dc;
  uint uStack_1d8;
  undefined1 auStack_1d0 [76];
  undefined2 local_184;
  undefined1 local_182;
  undefined2 local_17b;
  undefined1 local_179;
  undefined1 auStack_178 [72];
  int local_130;
  uint local_12c;
  int local_128;
  uint local_b8;
  int local_b4;
  undefined4 local_b0;
  int local_ac;
  uint local_a8;
  int iStack_a4;
  uint uStack_a0;
  undefined4 local_9c;
  int local_7c;
  
  FUN_01933ff0(&local_b8,param_1);
  iVar3 = local_b4;
  if (local_b8 != 0) {
    FUN_00a97e8c(local_b4,local_b0 & 0xff);
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d259d0);
  }
  cVar1 = *param_2;
  uVar12 = local_b0 & 0xff;
  if (cVar1 == '\x01') {
    FUN_01bed4e2((uint)local_1e4 | 1,param_2 + 1,0x11);
    local_1e4[0] = 1;
  }
  else {
    if (*(uint *)(param_2 + 4) == 0x80000000) {
      local_b8 = *(uint *)(param_2 + 4);
      local_b4 = *(int *)(param_2 + 8);
      local_b0 = *(uint *)(param_2 + 0xc);
    }
    else {
      FUN_006666fc(&local_b8,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    }
    local_1e0 = local_b8;
    iStack_1dc = local_b4;
    uStack_1d8 = local_b0;
    local_1e4[0] = 0;
  }
  FUN_01bed4e2(auStack_1d0,param_3,0x48);
  FUN_018f705c(&local_b8,iVar3 + 0x18,local_1e4);
  uVar4 = local_a8;
  iVar9 = local_ac;
  iVar7 = local_b4;
  uVar6 = local_b8;
  cVar2 = (char)local_b0;
  if ((char)local_b0 == '\x02') {
    FUN_01bed4e2(&local_130,param_3,0x48);
    uVar4 = *(uint *)(uVar6 - 0x6c);
    if ((uVar4 == *(uint *)(uVar6 - 0x78)) && (uVar4 != 0)) {
      iVar7 = *(int *)(uVar6 - 0x74);
      iVar9 = *(int *)(uVar6 - 0x70);
      uVar11 = iVar9 + 1;
      uVar10 = uVar11 - uVar4;
      if (uVar11 < uVar4) {
        uVar10 = uVar11;
      }
      *(uint *)(uVar6 - 0x70) = uVar10;
      *(uint *)(uVar6 - 0x6c) = uVar4 - 1;
      FUN_01bed4e2(&local_b8,iVar7 + iVar9 * 0x48,0x48);
      if (local_7c != -0x80000000) {
        FUN_0192a2a0(&local_b8);
      }
    }
    FUN_01bed4e2(&local_b8,param_3,0x48);
    FUN_019350c8((uint *)(uVar6 - 0x78),&local_b8);
  }
  else {
    local_184 = local_b0._1_2_;
    local_182 = local_b0._3_1_;
    local_179 = local_b0._3_1_;
    local_17b = local_b0._1_2_;
    if ((local_b0 & 1) == 0) {
      if (local_ac == -0x80000000) {
        local_130 = local_ac;
        local_12c = local_a8;
        local_128 = iStack_a4;
      }
      else {
        FUN_006666fc(&local_130,local_a8,iStack_a4);
      }
      uVar5 = 0;
      local_b4 = local_130;
      local_b0 = local_12c;
      local_ac = local_128;
    }
    else {
      local_b8 = local_b0 & 0xffffff00;
      uVar5 = 1;
      local_a8 = CONCAT22(local_a8._2_2_,(short)uStack_a0);
      local_b4 = local_ac;
      local_b0 = uVar4;
      local_ac = iStack_a4;
    }
    local_b8 = CONCAT31(local_b8._1_3_,uVar5);
    FUN_01934070(iVar3 + 8,&local_b8);
    FUN_01bed4e2(auStack_178,param_3,0x48);
    FUN_019340f0(&local_130);
    local_b4 = iVar9;
    local_b0 = uVar4;
    local_ac = iStack_a4;
    local_a8 = uStack_a0;
    local_b8 = CONCAT31(CONCAT12(local_179,local_17b),cVar2);
    FUN_01bed4e2(&uStack_a0,&local_130,0x78);
    iVar7 = FUN_018f7b8c(local_9c,extraout_r1,uVar6,iVar7,&local_b8);
    uVar6 = *(uint *)(iVar7 + -0x6c);
    if ((uVar6 == *(uint *)(iVar7 + -0x78)) && (uVar6 != 0)) {
      iVar9 = *(int *)(iVar7 + -0x70);
      uVar10 = iVar9 + 1;
      uVar4 = uVar10 - uVar6;
      if (uVar10 < uVar6) {
        uVar4 = uVar10;
      }
      *(uint *)(iVar7 + -0x70) = uVar4;
      *(uint *)(iVar7 + -0x6c) = uVar6 - 1;
      FUN_01bed4e2(&local_b8,*(int *)(iVar7 + -0x74) + iVar9 * 0x48,0x48);
      if (local_7c != -0x80000000) {
        FUN_0192a2a0(&local_b8);
      }
    }
    FUN_01bed4e2(&local_b8,param_3,0x48);
    FUN_019350c8((uint *)(iVar7 + -0x78),&local_b8);
    uVar6 = *(uint *)(iVar3 + 8);
    if ((uVar6 == *(uint *)(iVar3 + 0x14)) && (uVar6 != 0)) {
      *(uint *)(iVar3 + 0x14) = uVar6 - 1;
      uVar10 = *(int *)(iVar3 + 0x10) + 1;
      uVar4 = uVar10 - uVar6;
      if (uVar10 < uVar6) {
        uVar4 = uVar10;
      }
      pcVar8 = (char *)(*(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x10) * 0x14);
      cVar2 = *pcVar8;
      *(uint *)(iVar3 + 0x10) = uVar4;
      if (cVar2 != '\x02') {
        local_130 = CONCAT31(local_130._1_3_,cVar2);
        FUN_01bed4e2((uint)&local_130 | 1,pcVar8 + 1,0x13);
        FUN_018f7868(&local_b8,iVar3 + 0x18,&local_130);
        FUN_01934138(&local_b8);
        if ((cVar2 == '\0') && (local_12c != 0x80000000)) {
          FUN_0134bd64(local_12c,local_128);
        }
      }
    }
  }
  FUN_00a97e8c(iVar3,uVar12);
  if ((cVar1 == '\0') && (*(int *)(param_2 + 4) != -0x80000000)) {
    FUN_0134bd64(*(int *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    return;
  }
  return;
}

