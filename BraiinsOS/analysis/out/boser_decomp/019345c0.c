// FUN_019345c0 @ 019345c0 size=924 calls_out=13 calls_in=0
// strings: 

void FUN_019345c0(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined4 extraout_r1;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  undefined1 local_214 [4];
  uint local_210;
  int iStack_20c;
  uint uStack_208;
  undefined1 auStack_200 [100];
  undefined2 local_19c;
  undefined1 local_19a;
  undefined2 local_193;
  undefined1 local_191;
  undefined1 auStack_190 [96];
  int local_130;
  uint local_12c;
  int local_128;
  uint local_b8;
  int local_b4;
  undefined4 local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  uint local_a0;
  undefined4 local_9c;
  
  FUN_01933ff0(&local_b8,param_1);
  iVar3 = local_b4;
  if (local_b8 != 0) {
    FUN_00a97e8c(local_b4,local_b0 & 0xff);
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d259b0);
  }
  cVar1 = *param_2;
  uVar11 = local_b0 & 0xff;
  if (cVar1 == '\x01') {
    FUN_01bed4e2((uint)local_214 | 1,param_2 + 1,0x11);
    local_214[0] = 1;
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
    local_210 = local_b8;
    iStack_20c = local_b4;
    uStack_208 = local_b0;
    local_214[0] = 0;
  }
  FUN_01bed4e2(auStack_200,param_3,0x60);
  FUN_018f705c(&local_b8,iVar3 + 0x18,local_214);
  uVar8 = local_a8;
  iVar4 = local_ac;
  uVar6 = local_b0;
  iVar10 = local_b4;
  uVar5 = local_b8;
  cVar2 = (char)local_b0;
  if ((char)local_b0 == '\x02') {
    iVar10 = local_b8 - 0x68;
    if (*(int *)(local_b8 - 0x44) == -0x80000000) {
      FUN_01bed4e2(iVar10,param_3,0x60);
    }
    else {
      FUN_0192a3c8(iVar10);
      FUN_01bed4e2(iVar10,auStack_200,0x60);
    }
  }
  else {
    local_19c = local_b0._1_2_;
    local_19a = local_b0._3_1_;
    local_191 = local_b0._3_1_;
    local_193 = local_b0._1_2_;
    if ((local_b0 & 1) == 0) {
      if (local_ac == -0x80000000) {
        local_128 = local_a4;
        local_12c = local_a8;
        local_130 = local_ac;
      }
      else {
        FUN_006666fc(&local_130,local_a8,local_a4);
      }
      uVar7 = 0;
      local_b4 = local_130;
      local_b0 = local_12c;
      local_ac = local_128;
    }
    else {
      local_a8 = CONCAT22(local_a8._2_2_,(short)local_a0);
      local_b0 = uVar8;
      uVar7 = 1;
      local_b8 = uVar6 & 0xffffff00;
      local_ac = local_a4;
      local_b4 = iVar4;
    }
    local_b8 = CONCAT31(local_b8._1_3_,uVar7);
    FUN_01934070(iVar3 + 8,&local_b8);
    FUN_01bed4e2(auStack_190,param_3,0x60);
    FUN_019340f0(&local_130);
    local_a8 = local_a0;
    local_b4 = iVar4;
    local_b0 = uVar8;
    local_b8 = CONCAT31(CONCAT12(local_191,local_193),cVar2);
    local_ac = local_a4;
    FUN_01bed4e2(&local_a0,&local_130,0x78);
    iVar10 = FUN_018f7b8c(local_9c,extraout_r1,uVar5,iVar10,&local_b8);
    if (*(int *)(iVar10 + -0x44) != -0x80000000) {
      FUN_0192a3c8(iVar10 + -0x68);
    }
    FUN_01bed4e2(iVar10 + -0x68,auStack_190,0x60);
    uVar5 = *(uint *)(iVar3 + 8);
    if ((uVar5 == *(uint *)(iVar3 + 0x14)) && (uVar5 != 0)) {
      *(uint *)(iVar3 + 0x14) = uVar5 - 1;
      uVar8 = *(int *)(iVar3 + 0x10) + 1;
      uVar6 = uVar8 - uVar5;
      if (uVar8 < uVar5) {
        uVar6 = uVar8;
      }
      pcVar9 = (char *)(*(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x10) * 0x14);
      cVar2 = *pcVar9;
      *(uint *)(iVar3 + 0x10) = uVar6;
      if (cVar2 != '\x02') {
        local_130 = CONCAT31(local_130._1_3_,cVar2);
        FUN_01bed4e2((uint)&local_130 | 1,pcVar9 + 1,0x13);
        FUN_018f7868(&local_b8,iVar3 + 0x18,&local_130);
        FUN_01934138(&local_b8);
        if ((cVar2 == '\0') && (local_12c != 0x80000000)) {
          FUN_0134bd64(local_12c,local_128);
        }
      }
    }
  }
  FUN_00a97e8c(iVar3,uVar11);
  if ((cVar1 == '\0') && (*(int *)(param_2 + 4) != -0x80000000)) {
    FUN_0134bd64(*(int *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    return;
  }
  return;
}

