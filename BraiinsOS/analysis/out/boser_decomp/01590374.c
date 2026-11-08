// FUN_01590374 @ 01590374 size=1336 calls_out=13 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_01590374(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  double *pdVar4;
  uint uVar5;
  bool bVar6;
  double in_d0;
  double dVar7;
  int local_100;
  int *local_fc;
  int local_f8;
  int local_f4;
  int *local_f0;
  int local_ec;
  uint local_e8;
  int local_e0;
  int *local_dc;
  int local_d8;
  int local_d4;
  int *local_d0;
  int local_cc;
  uint local_c8;
  int local_c0;
  int *local_bc;
  int local_b8;
  int local_b4;
  int *local_b0;
  int local_ac;
  uint local_a8;
  undefined1 local_a0 [4];
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined4 local_88;
  int local_80;
  int *piStack_7c;
  int iStack_78;
  int local_70;
  int *local_6c;
  int local_68;
  int local_64;
  int *local_60;
  int local_5c;
  int local_58;
  int *local_54;
  int local_50;
  int local_48;
  int *piStack_44;
  int iStack_40;
  int local_3c;
  int *piStack_38;
  int iStack_34;
  
  pdVar4 = (double *)(param_1 + 2);
  if (*param_1 == 0) {
    dVar7 = (double)FUN_01bf0e80(*(int *)pdVar4,param_1[3]);
  }
  else if (*param_1 == 1) {
    dVar7 = (double)FUN_01bf0cac(*(int *)pdVar4,param_1[3]);
  }
  else {
    dVar7 = *pdVar4;
  }
  if (dVar7 == 0.0) {
    return true;
  }
  if (dVar7 < in_d0) {
    return false;
  }
  FUN_01581790(&local_e0);
  FUN_01581790(&local_c0);
  uVar5 = local_e0 + 0x80000001U & local_e0 >> 0x1f;
  if (uVar5 == 0) {
    uVar5 = local_c0 + 0x80000001U & local_c0 >> 0x1f;
    if (uVar5 == 0) {
      if (local_d8 == 0) {
        if (local_b8 != 0) {
          local_100 = local_e0;
          local_fc = local_dc;
          local_f8 = local_d8;
          local_f4 = local_d4;
          local_f0 = local_d0;
          local_ec = local_cc;
          local_e8 = local_e8 & 0xffffff00;
          FUN_0157ba44(&local_c0);
          goto LAB_0159084c;
        }
        local_100 = -0x7fffffff;
      }
      else {
        if (local_b8 != 0) {
          FUN_0157ba70(local_a0,local_dc,local_d8,local_bc,local_b8);
          FUN_0157ba70(local_90,local_d0,local_cc,local_b0,local_ac);
          local_50 = local_d8;
          local_54 = local_dc;
          local_58 = local_e0;
          FUN_0164a9cc(&local_48,local_9c,local_98);
          FUN_0164af2c(&local_100,&local_58,&local_48);
          iVar3 = local_f8;
          piVar2 = local_fc;
          iVar1 = local_100;
          FUN_0134aee0(local_f4,local_f0,4,4);
          local_68 = iVar3;
          local_6c = piVar2;
          local_70 = iVar1;
          local_50 = local_ac;
          local_54 = local_b0;
          local_58 = local_b4;
          FUN_0164a9cc(&local_48,local_8c,local_88);
          FUN_0164af2c(&local_100,&local_58,&local_48);
          iVar3 = local_f8;
          piVar2 = local_fc;
          iVar1 = local_100;
          FUN_0134aee0(local_f4,local_f0,4,4);
          local_5c = iVar3;
          local_60 = piVar2;
          local_64 = iVar1;
          FUN_01582374(&local_80,&local_70,&local_64);
          local_50 = local_cc;
          local_54 = local_d0;
          local_58 = local_d4;
          FUN_0164af2c(&local_100,&local_58,&local_48);
          iVar3 = local_f8;
          piVar2 = local_fc;
          iVar1 = local_100;
          FUN_0134aee0(local_f4,local_f0,4,4);
          local_68 = iVar3;
          local_50 = local_b8;
          local_54 = local_bc;
          local_6c = piVar2;
          local_70 = iVar1;
          local_58 = local_c0;
          FUN_0164af2c(&local_100,&local_58,&local_48);
          FUN_0134aee0(local_f4,local_f0,4,4);
          local_64 = local_100;
          local_60 = local_fc;
          local_5c = local_f8;
          FUN_01582374(&local_58,&local_70,&local_64);
          local_48 = local_80;
          piStack_44 = piStack_7c;
          iStack_40 = iStack_78;
          local_3c = local_58;
          piStack_38 = local_54;
          iStack_34 = local_50;
          FUN_0157b7fc(&local_48);
          local_100 = local_48;
          local_fc = piStack_44;
          local_f8 = iStack_40;
          local_f4 = local_3c;
          local_f0 = piStack_38;
          local_ec = iStack_34;
          local_e8 = CONCAT31(local_e8._1_3_,(local_c8 & 0xff) != (local_a8 & 0xff));
          goto LAB_0159084c;
        }
        local_fc = (int *)CONCAT31(local_fc._1_3_,(undefined1)local_c8);
        local_100 = -0x80000000;
      }
      FUN_0157ba44(&local_c0);
      bVar6 = false;
LAB_015907ec:
      FUN_0134aee0(local_e0,local_dc,4,4);
      FUN_0134aee0(local_d4,local_d0,4,4);
      if (!bVar6) goto LAB_0159084c;
      goto LAB_0159081c;
    }
    if (uVar5 == 1) {
      local_f0 = (int *)thunk_FUN_01be5118(4);
      if (local_f0 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,4);
      }
      bVar6 = true;
      *local_f0 = 1;
      local_e8 = local_e8 & 0xffffff00;
      local_100 = 0;
      local_fc = (int *)&SUB_00000004;
      local_f8 = 0;
      local_ec = 1;
      local_f4 = 1;
      goto LAB_015907ec;
    }
    local_100 = local_c0;
    local_fc = local_bc;
    local_f8 = local_b8;
    local_f4 = local_b4;
    local_f0 = local_b0;
    local_ec = local_ac;
    local_e8 = local_a8;
    FUN_0134aee0(local_e0,local_dc,4,4);
    local_b4 = local_d4;
    local_b0 = local_d0;
  }
  else {
    if (uVar5 == 1) {
      uVar5 = local_c0 + 0x80000001U & local_c0 >> 0x1f;
      if (uVar5 == 0) {
        local_100 = -0x80000000;
        local_fc = (int *)CONCAT31(local_fc._1_3_,((uint)local_dc & 0xff) != (local_a8 & 0xff));
      }
      else {
        if (uVar5 != 1) {
          local_100 = local_c0;
          local_fc = local_bc;
          local_f8 = local_b8;
          local_f4 = local_b4;
          local_f0 = local_b0;
          local_ec = local_ac;
          local_e8 = local_a8;
          goto LAB_0159084c;
        }
        local_100 = -0x7fffffff;
      }
    }
    else {
      local_100 = local_e0;
      local_fc = local_dc;
      local_f8 = local_d8;
      local_f4 = local_d4;
      local_f0 = local_d0;
      local_ec = local_cc;
      local_e8 = local_c8;
    }
LAB_0159081c:
    if (local_c0 < 0) goto LAB_0159084c;
    FUN_0134aee0(local_c0,local_bc,4,4);
  }
  FUN_0134aee0(local_b4,local_b0,4,4);
LAB_0159084c:
  if (local_100 < 0) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
    if (local_ec == 1) {
      bVar6 = *local_f0 == 1;
    }
  }
  FUN_01590aac(&local_100);
  return bVar6;
}

