// FUN_00b4f44c @ 00b4f44c size=664 calls_out=3 calls_in=13
// strings: 

void FUN_00b4f44c(int *param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int *local_e4;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int local_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int *local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int iStack_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int *local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x24]) {
  case '\0':
    iVar2 = param_2[0x18];
    iVar4 = *(int *)(iVar2 + 0x10);
    iVar5 = *(int *)(iVar2 + 0x14);
    local_e4 = *(int **)(iVar2 + 4);
    iVar8 = *(int *)(iVar2 + 8);
    iVar7 = *param_2;
    if (iVar5 != 0) {
      iVar5 = iVar5 + 8;
    }
    iVar6 = param_2[1];
    piVar3 = param_2 + 2;
    *piVar3 = iVar2 + 0xc;
    param_2[4] = iVar5;
    param_2[3] = iVar4 + 8;
    param_2[5] = (int)local_e4;
    param_2[6] = iVar8;
    param_2[7] = iVar7;
    param_2[8] = iVar6;
    param_2[9] = (int)piVar3;
    param_2[10] = param_2[0x19];
    param_2[0xb] = param_2[0x1a];
    param_2[0xc] = param_2[0x1b];
    param_2[0xd] = param_2[0x1c];
    param_2[0xe] = param_2[0x1d];
    param_2[0xf] = param_2[0x1e];
    param_2[0x10] = param_2[0x1f];
    param_2[0x11] = param_2[0x20];
    param_2[0x12] = param_2[0x21];
    param_2[0x13] = param_2[0x22];
    param_2[0x14] = param_2[0x23];
    *(undefined1 *)(param_2 + 0x15) = 0;
LAB_00b4f544:
    local_d8 = param_2[10];
    iStack_d4 = param_2[0xb];
    iStack_d0 = param_2[0xc];
    iStack_cc = param_2[0xd];
    iStack_c8 = param_2[0xe];
    local_c4 = param_2[0xf];
    iStack_c0 = param_2[0x10];
    iStack_bc = param_2[0x11];
    iStack_b8 = param_2[0x12];
    iStack_b4 = param_2[0x13];
    iStack_b0 = param_2[0x14];
    if (iVar8 != 0) {
      local_a4 = iVar8 + -1;
      local_a8 = local_e4 + 2;
      local_a0 = iVar7;
      local_9c = iVar6;
      uVar9 = (**(code **)(local_e4[1] + 0x24))
                        (*local_e4 + (*(int *)(local_e4[1] + 8) - 1U & 0xfffffff8) + 8,piVar3,
                         &local_d8,&local_a8);
      *(undefined8 *)(param_2 + 0x16) = uVar9;
      goto LAB_00b4f5e0;
    }
    param_2[0x16] = iVar7;
    param_2[0x17] = iVar6;
LAB_00b4f644:
    (**(code **)(iVar6 + 0xc))(&local_a8,iVar7,param_3);
    if (local_a8 != (int *)0x2) {
      local_68 = local_a8;
      iStack_64 = local_a4;
      iStack_60 = local_a0;
      iStack_5c = local_9c;
      iStack_58 = iStack_98;
      local_54 = local_94;
      iStack_50 = iStack_90;
      iStack_4c = iStack_8c;
      iStack_48 = iStack_88;
      iStack_44 = iStack_84;
      local_40 = local_80;
      iStack_3c = iStack_7c;
      iStack_38 = iStack_78;
      iStack_34 = iStack_74;
      iStack_30 = iStack_70;
      iStack_2c = iStack_6c;
      goto LAB_00b4f68c;
    }
    uVar1 = 4;
LAB_00b4f668:
    *(undefined1 *)(param_2 + 0x15) = uVar1;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c219cc);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c219cc);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      iVar8 = param_2[6];
      iVar7 = param_2[7];
      iVar6 = param_2[8];
      piVar3 = (int *)param_2[9];
      local_e4 = (int *)param_2[5];
      goto LAB_00b4f544;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c219fc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c219fc);
    case '\x03':
      uVar9 = *(undefined8 *)(param_2 + 0x16);
      break;
    case '\x04':
      iVar7 = param_2[0x16];
      iVar6 = param_2[0x17];
      goto LAB_00b4f644;
    }
LAB_00b4f5e0:
    (**(code **)((int)((ulonglong)uVar9 >> 0x20) + 0xc))(&local_a8,(int)uVar9,param_3);
    if (local_a8 == (int *)0x2) {
      uVar1 = 3;
      goto LAB_00b4f668;
    }
    local_68 = local_a8;
    iStack_64 = local_a4;
    iStack_60 = local_a0;
    iStack_5c = local_9c;
    iStack_58 = iStack_98;
    local_54 = local_94;
    iStack_50 = iStack_90;
    iStack_4c = iStack_8c;
    iStack_48 = iStack_88;
    iStack_44 = iStack_84;
    local_40 = local_80;
    iStack_3c = iStack_7c;
    iStack_38 = iStack_78;
    iStack_34 = iStack_74;
    iStack_30 = iStack_70;
    iStack_2c = iStack_6c;
    FUN_0175d85c(param_2 + 0x16);
LAB_00b4f68c:
    *param_1 = (int)local_68;
    param_1[1] = iStack_64;
    param_1[2] = iStack_60;
    param_1[3] = iStack_5c;
    param_1[4] = iStack_58;
    param_1[5] = local_54;
    param_1[6] = iStack_50;
    param_1[7] = iStack_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    uVar1 = 1;
    param_1[10] = local_40;
    param_1[0xb] = iStack_3c;
    param_1[0xc] = iStack_38;
    param_1[0xd] = iStack_34;
    param_1[0xe] = iStack_30;
    param_1[0xf] = iStack_2c;
    iVar6 = *param_1;
    *(undefined1 *)(param_2 + 0x15) = 1;
    if (iVar6 != 2) goto LAB_00b4f6cc;
  }
  *param_1 = 2;
  uVar1 = 3;
LAB_00b4f6cc:
  *(undefined1 *)(param_2 + 0x24) = uVar1;
  return;
}

