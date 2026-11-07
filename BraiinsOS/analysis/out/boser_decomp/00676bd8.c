// FUN_00676bd8 @ 00676bd8 size=656 calls_out=3 calls_in=0
// strings: 

void FUN_00676bd8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 local_124;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int *local_a0;
  int local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x24)) {
  case 0:
    local_124 = param_2[0x18];
    param_2[4] = *param_2;
    param_2[5] = param_2[1];
    param_2[6] = param_2[2];
    param_2[7] = param_2[3];
    param_2[8] = local_124;
    param_2[9] = param_2[0x19];
    param_2[10] = param_2[0x1a];
    param_2[0xb] = param_2[0x1b];
    param_2[0xc] = param_2[0x1c];
    param_2[0xd] = param_2[0x1d];
    param_2[0xe] = param_2[0x1e];
    param_2[0xf] = param_2[0x1f];
    param_2[0x10] = param_2[0x20];
    param_2[0x11] = param_2[0x21];
    param_2[0x12] = param_2[0x22];
    param_2[0x13] = param_2[0x23];
    *(undefined1 *)(param_2 + 0x14) = 0;
LAB_00676c94:
    local_98 = param_2[6];
    piVar3 = (int *)param_2[4];
    local_94 = param_2[7];
    local_d0 = param_2[9];
    uStack_cc = param_2[10];
    uStack_c8 = param_2[0xb];
    uStack_c4 = param_2[0xc];
    uStack_c0 = param_2[0xd];
    local_bc = param_2[0xe];
    uStack_b8 = param_2[0xf];
    uStack_b4 = param_2[0x10];
    uStack_b0 = param_2[0x11];
    uStack_ac = param_2[0x12];
    uStack_a8 = param_2[0x13];
    if (param_2[5] != 0) {
      local_9c = param_2[5] + -1;
      local_a0 = piVar3 + 2;
      uVar4 = (**(code **)(piVar3[1] + 0x24))
                        (*piVar3 + (*(int *)(piVar3[1] + 8) - 1U & 0xfffffff8) + 8,local_124,
                         &local_d0,&local_a0);
      *(undefined8 *)(param_2 + 0x15) = uVar4;
      goto LAB_00676d50;
    }
    param_2[0x15] = local_98;
    param_2[0x16] = local_94;
LAB_00676db0:
    (**(code **)(local_94 + 0xc))(&local_a0,local_98,param_3);
    if (local_a0 != (int *)0x2) {
      puVar2 = (undefined4 *)((uint)&local_a0 | 4);
      local_60 = *puVar2;
      uStack_5c = puVar2[1];
      uStack_58 = puVar2[2];
      uStack_54 = puVar2[3];
      uStack_50 = puVar2[4];
      local_4c = puVar2[5];
      uStack_48 = puVar2[6];
      uStack_44 = puVar2[7];
      uStack_40 = puVar2[8];
      uStack_3c = puVar2[9];
      local_38 = puVar2[10];
      uStack_34 = puVar2[0xb];
      uStack_30 = puVar2[0xc];
      uStack_2c = puVar2[0xd];
      uStack_28 = puVar2[0xe];
      goto LAB_00676e08;
    }
    uVar1 = 4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c04714);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c04714);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x14)) {
    case 0:
      local_124 = param_2[8];
      goto LAB_00676c94;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c219fc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c219fc);
    case 3:
      uVar4 = *(undefined8 *)(param_2 + 0x15);
      break;
    case 4:
      local_98 = param_2[0x15];
      local_94 = param_2[0x16];
      goto LAB_00676db0;
    }
LAB_00676d50:
    (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0xc))(&local_a0,(int)uVar4,param_3);
    piVar3 = local_a0;
    if (local_a0 != (int *)0x2) {
      puVar2 = (undefined4 *)((uint)&local_a0 | 4);
      local_60 = *puVar2;
      uStack_5c = puVar2[1];
      uStack_58 = puVar2[2];
      uStack_54 = puVar2[3];
      uStack_50 = puVar2[4];
      local_4c = puVar2[5];
      uStack_48 = puVar2[6];
      uStack_44 = puVar2[7];
      uStack_40 = puVar2[8];
      uStack_3c = puVar2[9];
      local_38 = puVar2[10];
      uStack_34 = puVar2[0xb];
      uStack_30 = puVar2[0xc];
      uStack_2c = puVar2[0xd];
      uStack_28 = puVar2[0xe];
      FUN_01139b38(param_2[0x15],param_2[0x16]);
      local_a0 = piVar3;
LAB_00676e08:
      uVar1 = 1;
      *(undefined1 *)(param_2 + 0x14) = 1;
      *param_1 = local_a0;
      param_1[1] = local_60;
      param_1[2] = uStack_5c;
      param_1[3] = uStack_58;
      param_1[4] = uStack_54;
      param_1[5] = uStack_50;
      param_1[6] = local_4c;
      param_1[7] = uStack_48;
      param_1[8] = uStack_44;
      param_1[9] = uStack_40;
      param_1[10] = uStack_3c;
      param_1[0xb] = local_38;
      param_1[0xc] = uStack_34;
      param_1[0xd] = uStack_30;
      param_1[0xe] = uStack_2c;
      param_1[0xf] = uStack_28;
      goto LAB_00676e50;
    }
    uVar1 = 3;
  }
  *(undefined1 *)(param_2 + 0x14) = uVar1;
  *param_1 = 2;
  uVar1 = 3;
LAB_00676e50:
  *(undefined1 *)(param_2 + 0x24) = uVar1;
  return;
}

