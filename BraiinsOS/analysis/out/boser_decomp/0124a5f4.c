// FUN_0124a5f4 @ 0124a5f4 size=860 calls_out=6 calls_in=0
// strings: 

void FUN_0124a5f4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *local_108;
  int *local_104;
  undefined4 local_100;
  int *local_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int local_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined1 local_30;
  
  local_108 = *(int **)(param_2 + 0x10);
  local_100 = *(undefined4 *)(param_2 + 0xc);
  local_fc = local_108 + *(int *)(param_2 + 0x14) * 0x1c;
  local_104 = local_108;
  FUN_0124a4cc(&local_a0,&local_108);
  iVar7 = local_94;
  iVar4 = local_98;
  iVar1 = local_9c;
  if (local_a0 != 2) {
    param_1[4] = local_90;
    param_1[5] = iStack_8c;
    param_1[6] = local_88;
    param_1[7] = iStack_84;
    param_1[8] = local_80;
    param_1[9] = iStack_7c;
    param_1[10] = iStack_78;
    param_1[0xb] = iStack_74;
    *param_1 = local_a0;
    param_1[1] = local_9c;
    param_1[2] = local_98;
    param_1[3] = local_94;
    goto LAB_0124a7e0;
  }
  if (local_9c == -0x7fffffff) {
    FUN_0123c028(&local_a0,0,&DAT_01c24dc4,&DAT_01d064b8);
    *param_1 = local_a0;
    param_1[1] = local_9c;
    param_1[2] = local_98;
    param_1[3] = local_94;
    param_1[4] = local_90;
    param_1[5] = iStack_8c;
    param_1[6] = local_88;
    param_1[7] = iStack_84;
    param_1[8] = local_80;
    param_1[9] = iStack_7c;
    param_1[10] = iStack_78;
    param_1[0xb] = iStack_74;
    goto LAB_0124a7e0;
  }
  FUN_0124a4cc(&local_a0,&local_108);
  iVar8 = local_94;
  iVar5 = local_98;
  iVar2 = local_9c;
  if (local_a0 == 2) {
    if (local_9c == -0x7fffffff) {
      FUN_0123c028(&local_a0,1,&DAT_01c24dc4,&DAT_01d064b8);
      *param_1 = local_a0;
      param_1[1] = local_9c;
      param_1[2] = local_98;
      param_1[3] = local_94;
      param_1[4] = local_90;
      param_1[5] = iStack_8c;
      param_1[6] = local_88;
      param_1[7] = iStack_84;
      param_1[8] = local_80;
      param_1[9] = iStack_7c;
      param_1[10] = iStack_78;
      param_1[0xb] = iStack_74;
    }
    else {
      FUN_0124a4cc(&local_a0,&local_108);
      iVar9 = local_94;
      iVar6 = local_98;
      iVar3 = local_9c;
      if (local_a0 == 2) {
        if (local_9c == -0x7fffffff) {
          FUN_0123c028(&local_a0,2,&DAT_01c24dc4,&DAT_01d064b8);
          *param_1 = local_a0;
          param_1[1] = local_9c;
          param_1[2] = local_98;
          param_1[3] = local_94;
          param_1[4] = local_90;
          param_1[5] = iStack_8c;
          param_1[6] = local_88;
          param_1[7] = iStack_84;
          param_1[8] = local_80;
          param_1[9] = iStack_7c;
          param_1[10] = iStack_78;
          param_1[0xb] = iStack_74;
        }
        else {
          piVar10 = local_104;
          if (local_104 == local_fc) {
LAB_0124a6e8:
            local_104 = piVar10;
            FUN_0123c028(&local_a0,3,&DAT_01c24dc4,&DAT_01d064b8);
            *param_1 = local_a0;
            param_1[1] = local_9c;
            param_1[2] = local_98;
            param_1[3] = local_94;
            param_1[4] = local_90;
            param_1[5] = iStack_8c;
            param_1[6] = local_88;
            param_1[7] = iStack_84;
            param_1[8] = local_80;
            param_1[9] = iStack_7c;
            param_1[10] = iStack_78;
            param_1[0xb] = iStack_74;
          }
          else {
            iVar11 = *local_104;
            piVar10 = local_104 + 0x1c;
            if (iVar11 == 4) goto LAB_0124a6e8;
            piVar10 = local_104 + 1;
            local_104 = local_104 + 0x1c;
            FUN_01bed4e2((uint)&local_a0 | 4,piVar10,0x6c);
            local_30 = 0;
            local_a0 = iVar11;
            FUN_0123e608(&local_d0,&local_a0);
            if (local_d0 == 2) {
              piVar10 = local_104;
              if (local_cc != 2) {
                param_1[9] = iVar3;
                param_1[10] = iVar6;
                *param_1 = 2;
                param_1[1] = local_cc;
                param_1[8] = iVar8;
                param_1[4] = iVar4;
                param_1[5] = iVar7;
                param_1[6] = iVar2;
                param_1[0xb] = iVar9;
                param_1[2] = local_c8;
                param_1[3] = iVar1;
                param_1[7] = iVar5;
                goto LAB_0124a7e0;
              }
              goto LAB_0124a6e8;
            }
            local_f8 = local_c4;
            iStack_f4 = iStack_c0;
            iStack_f0 = iStack_bc;
            iStack_ec = iStack_b8;
            local_e8 = local_b4;
            iStack_e4 = iStack_b0;
            iStack_e0 = iStack_ac;
            iStack_dc = iStack_a8;
            iStack_d8 = iStack_a4;
            param_1[3] = local_c4;
            param_1[4] = iStack_c0;
            param_1[5] = iStack_bc;
            param_1[6] = iStack_b8;
            param_1[7] = local_b4;
            param_1[8] = iStack_b0;
            param_1[9] = iStack_ac;
            param_1[10] = iStack_a8;
            param_1[0xb] = iStack_a4;
            *param_1 = local_d0;
            param_1[1] = local_cc;
            param_1[2] = local_c8;
          }
          if (iVar3 != -0x80000000) {
            FUN_019bb7e0(iVar3,iVar6);
          }
        }
      }
      else {
        param_1[4] = local_90;
        param_1[5] = iStack_8c;
        param_1[6] = local_88;
        param_1[7] = iStack_84;
        param_1[8] = local_80;
        param_1[9] = iStack_7c;
        param_1[10] = iStack_78;
        param_1[0xb] = iStack_74;
        *param_1 = local_a0;
        param_1[1] = local_9c;
        param_1[2] = local_98;
        param_1[3] = local_94;
      }
      if (iVar2 != -0x80000000) {
        FUN_019bb7e0(iVar2,iVar5);
      }
    }
  }
  else {
    param_1[4] = local_90;
    param_1[5] = iStack_8c;
    param_1[6] = local_88;
    param_1[7] = iStack_84;
    param_1[8] = local_80;
    param_1[9] = iStack_7c;
    param_1[10] = iStack_78;
    param_1[0xb] = iStack_74;
    *param_1 = local_a0;
    param_1[1] = local_9c;
    param_1[2] = local_98;
    param_1[3] = local_94;
  }
  if (iVar1 != -0x80000000) {
    FUN_019bb7e0(iVar1,iVar4);
  }
LAB_0124a7e0:
  FUN_01a53260(&local_108);
  return;
}

