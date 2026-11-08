// FUN_0077a9e4 @ 0077a9e4 size=512 calls_out=9 calls_in=0
// strings: 

void FUN_0077a9e4(uint *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint extraout_r1;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint unaff_r8;
  uint unaff_r9;
  undefined2 extraout_r12;
  undefined2 extraout_r12_00;
  undefined2 uVar8;
  undefined8 uVar9;
  int local_bc;
  uint local_b8;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[6]) {
  case '\0':
    local_bc = param_2[1];
    local_b8 = param_2[2];
    iVar6 = *param_2;
    param_2[3] = iVar6;
    param_2[4] = local_bc;
    param_2[5] = local_b8;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c08a84);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c08a84);
  case '\x03':
    iVar6 = param_2[3];
    local_bc = param_2[4];
    local_b8 = param_2[5];
  }
  iVar7 = *(int *)(iVar6 + 8);
  while( true ) {
    FUN_019e7220(&local_48,iVar7,param_3,0);
    uVar2 = local_40;
    uVar1 = local_44;
    if (local_48 == 2) break;
    uVar5 = extraout_r1;
    uVar8 = extraout_r12;
    if ((local_48 & 1) != 0) {
LAB_0077ab20:
      uVar4 = 2;
      local_48 = uVar5;
      unaff_r8 = local_44;
      unaff_r9 = local_40;
      local_44._2_2_ = uVar8;
      goto LAB_0077ab24;
    }
    local_50 = local_44;
    local_4c = local_40;
    if (*(int *)(iVar6 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d28f7c);
    }
    FUN_01609c4c(&local_48,*(int *)(iVar6 + 0xc),local_bc,local_b8);
    uVar4 = local_44 & 0xffff;
    if (uVar4 != 2) {
      local_80 = local_38;
      uStack_7c = uStack_34;
      uStack_78 = uStack_30;
      uStack_74 = uStack_2c;
      uStack_70 = uStack_28;
      unaff_r8 = local_40;
      unaff_r9 = local_3c;
      goto LAB_0077ab24;
    }
    uVar9 = FUN_005ef5e8(&local_40);
    uVar5 = (uint)((ulonglong)uVar9 >> 0x20);
    if (((uint)uVar9 & 0xff) != 0xd) {
      local_44 = local_40;
      local_40 = local_3c;
      uVar8 = extraout_r12_00;
      goto LAB_0077ab20;
    }
    FUN_019e0788(iVar7 + 0x20,&local_50);
    FUN_0069263c(local_40 & 0xff,local_3c);
    unaff_r8 = uVar1;
    unaff_r9 = uVar2;
  }
  uVar4 = 3;
  local_48 = extraout_r1;
  local_44._2_2_ = extraout_r12;
LAB_0077ab24:
  if ((uVar4 & 2) == 2) {
    if (uVar4 == 3) {
      uVar3 = 3;
      *(undefined2 *)(param_1 + 1) = 3;
      goto LAB_0077abb0;
    }
  }
  else {
    if (local_b8 < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_48,local_b8,&DAT_01d2e4e0);
    }
    local_b0 = local_80;
    uStack_ac = uStack_7c;
    uStack_a8 = uStack_78;
    uStack_a4 = uStack_74;
    uStack_a0 = uStack_70;
  }
  *param_1 = local_48;
  *(short *)(param_1 + 1) = (short)uVar4;
  *(undefined2 *)((int)param_1 + 6) = local_44._2_2_;
  param_1[2] = unaff_r8;
  param_1[3] = unaff_r9;
  param_1[4] = local_b0;
  param_1[5] = uStack_ac;
  param_1[6] = uStack_a8;
  param_1[7] = uStack_a4;
  param_1[8] = uStack_a0;
  uVar3 = 1;
LAB_0077abb0:
  *(undefined1 *)(param_2 + 6) = uVar3;
  return;
}

