// FUN_018f1fc4 @ 018f1fc4 size=592 calls_out=11 calls_in=27
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018f1fc4(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  int local_f0;
  undefined2 local_ec;
  undefined2 local_e8;
  undefined2 local_e6;
  undefined1 local_e4 [4];
  undefined4 uStack_e0;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  int local_50;
  int local_4c;
  undefined4 uStack_48;
  int local_44;
  undefined4 local_40;
  int local_38;
  int iStack_34;
  undefined4 uStack_30;
  
  local_40 = CONCAT22(local_40._2_2_,CONCAT11(local_40._1_1_,(undefined1)local_40));
  if (*(char *)(param_1 + 0x259) == '\x01') {
    if (*param_2 == -0x7fffffff) {
      *(undefined2 *)(param_1 + 0x1cc) = *(undefined2 *)((int)param_2 + 6);
    }
    else {
      local_c8 = 0;
      local_cc = 1;
      local_d0 = 0;
      FUN_01917674(param_2,&local_d0);
      uVar4 = local_c8;
      uVar3 = local_cc;
      uVar2 = local_d0;
      uVar9 = *(uint *)(param_1 + 0x80);
      uVar11 = *(uint *)(param_1 + 0x8c);
      if (uVar11 == uVar9) {
        FUN_01935718();
        uVar9 = *(uint *)(param_1 + 0x80);
        uVar11 = *(uint *)(param_1 + 0x8c);
      }
      uVar12 = *(int *)(param_1 + 0x88) + uVar11;
      *(uint *)(param_1 + 0x8c) = uVar11 + 1;
      uVar11 = uVar12 - uVar9;
      if (uVar12 < uVar9) {
        uVar11 = uVar12;
      }
      puVar8 = (undefined1 *)(*(int *)(param_1 + 0x84) + uVar11 * 0x10);
      *puVar8 = (char)param_3;
      *(undefined4 *)(puVar8 + 4) = uVar2;
      *(undefined4 *)(puVar8 + 8) = uVar3;
      *(undefined4 *)(puVar8 + 0xc) = uVar4;
      if (*param_2 != -0x7fffffff) {
        FUN_018f1e24(param_2);
        return;
      }
    }
  }
  else if (param_3 == 0) {
    FUN_01bed4e2(&local_d0,param_2,0x7c);
    FUN_01917558(&local_fc,&local_d0);
    local_c8 = local_f4;
    local_c0 = *(undefined4 *)(param_1 + 0x244);
    local_d0 = 0;
    local_b8 = local_ec;
    local_bc = local_f0;
    local_cc = local_f8;
    while (FUN_0191e464(&local_50,&local_d0), iVar5 = local_bc, local_50 == 1) {
      uStack_e0 = uStack_48;
      uVar6 = (undefined1)local_b8;
      uVar7 = local_b8._1_1_;
      if (local_4c == 0) {
        iVar10 = local_44;
        iVar1 = 0;
      }
      else {
        iVar10 = local_40;
        iVar1 = local_44;
      }
      if (local_4c != 0) {
        iVar10 = iVar10 - iVar1;
      }
      local_d3 = local_b8._1_1_;
      local_d4 = (undefined1)local_b8;
      local_e6 = local_bc._2_2_;
      local_e8 = (undefined2)local_bc;
      FUN_01931298(&local_38,iVar10);
      FUN_019311e4(local_e4,&local_38);
      local_50 = local_38;
      local_4c = iStack_34;
      uStack_48 = uStack_30;
      local_40 = CONCAT31(CONCAT21(local_40._2_2_,uVar7),uVar6);
      local_44 = iVar5;
      FUN_018f2368(param_1,&local_50);
    }
    if (local_fc != -0x80000000) {
      FUN_0134bd64(local_fc,local_f8);
    }
  }
  else {
    FUN_01bed4e2(&local_d0,param_2,0x7c);
    FUN_01917558(&local_e8,&local_d0);
    FUN_018f2280(param_1,&local_e8);
  }
  return;
}

