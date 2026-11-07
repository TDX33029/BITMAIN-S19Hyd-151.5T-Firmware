// FUN_018d8fac @ 018d8fac size=672 calls_out=12 calls_in=0
// strings: 

void FUN_018d8fac(undefined4 param_1,char *param_2,undefined2 param_3,undefined2 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_r1;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  undefined1 local_158 [4];
  undefined1 auStack_154 [16];
  undefined2 local_144;
  undefined1 local_142;
  undefined2 local_137;
  undefined1 local_135;
  int local_130;
  undefined4 local_12c;
  undefined4 local_128;
  uint local_b8;
  int local_b4;
  undefined4 local_b0;
  int local_ac;
  uint local_a8;
  int iStack_a4;
  uint uStack_a0;
  undefined4 local_9c;
  
  FUN_01933ff0(&local_b8,param_1);
  iVar2 = local_b4;
  if (local_b8 == 1) {
    local_12c = CONCAT31(local_12c._1_3_,(char)local_b0);
    local_130 = local_b4;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_130,&DAT_01d23088,&DAT_01d23018);
  }
  uVar9 = local_b0 & 0xff;
  cVar1 = *param_2;
  if (cVar1 != '\x01') {
    FUN_006666fc(auStack_154,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
  }
  else {
    FUN_01bed4e2((uint)local_158 | 1,param_2 + 1,0x11);
  }
  local_158[0] = cVar1 == '\x01';
  FUN_018c9b78(&local_b8,iVar2 + 0x18,local_158);
  uVar6 = local_a8;
  iVar3 = local_ac;
  iVar4 = local_b4;
  uVar5 = local_b8;
  cVar1 = (char)local_b0;
  if ((char)local_b0 == '\x02') {
    *(undefined2 *)(local_b8 - 6) = param_4;
    *(undefined2 *)(local_b8 - 8) = param_3;
  }
  else {
    bVar10 = (local_b0 & 1) == 0;
    local_144 = local_b0._1_2_;
    local_142 = local_b0._3_1_;
    local_135 = local_b0._3_1_;
    local_137 = local_b0._1_2_;
    if (bVar10) {
      FUN_006666fc(&local_b4,local_a8,iStack_a4);
    }
    else {
      local_b8 = local_b0 & 0xffffff00;
      local_a8 = CONCAT22(local_a8._2_2_,(short)uStack_a0);
      local_ac = iStack_a4;
      local_b0 = uVar6;
      local_b4 = iVar3;
    }
    local_b8 = CONCAT31(local_b8._1_3_,!bVar10);
    FUN_018bb228(iVar2 + 8,&local_b8);
    FUN_018dae74(&local_130);
    local_b0 = uVar6;
    local_ac = iStack_a4;
    local_a8 = uStack_a0;
    local_b4 = iVar3;
    local_b8 = CONCAT31(CONCAT12(local_135,local_137),cVar1);
    FUN_01bed4e2(&uStack_a0,&local_130,0x78);
    iVar4 = FUN_018cad84(local_9c,extraout_r1,uVar5,iVar4,&local_b8);
    *(undefined2 *)(iVar4 + -6) = param_4;
    *(undefined2 *)(iVar4 + -8) = param_3;
    uVar5 = *(uint *)(iVar2 + 8);
    if ((uVar5 == *(uint *)(iVar2 + 0x14)) && (uVar5 != 0)) {
      *(uint *)(iVar2 + 0x14) = uVar5 - 1;
      uVar7 = *(int *)(iVar2 + 0x10) + 1;
      uVar6 = uVar7 - uVar5;
      if (uVar7 < uVar5) {
        uVar6 = uVar7;
      }
      pcVar8 = (char *)(*(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x10) * 0x14);
      cVar1 = *pcVar8;
      *(uint *)(iVar2 + 0x10) = uVar6;
      if (cVar1 != '\x02') {
        local_130 = CONCAT31(local_130._1_3_,cVar1);
        FUN_01bed4e2((uint)&local_130 | 1,pcVar8 + 1,0x13);
        FUN_018cab8c(&local_b8,iVar2 + 0x18,&local_130);
        FUN_018c446c(&local_b8);
        if (cVar1 == '\0') {
          FUN_0134bd64(local_12c,local_128);
        }
      }
    }
  }
  FUN_00a97e8c(iVar2,uVar9);
  return;
}

