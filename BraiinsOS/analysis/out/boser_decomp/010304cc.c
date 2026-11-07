// FUN_010304cc @ 010304cc size=704 calls_out=7 calls_in=1
// strings: 

void FUN_010304cc(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [12];
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 uStack_28;
  
  puVar4 = (undefined4 *)((uint)&local_d8 | 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 5)) {
  case 0:
    *(undefined1 *)(param_2 + 1) = 0;
    uVar2 = FUN_00b6db10(*param_2);
    puVar3 = &DAT_01c13430;
    param_2[2] = uVar2;
    param_2[3] = &DAT_01c13430;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1df0c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1df0c);
  case 3:
    uVar2 = param_2[2];
    puVar3 = (undefined *)param_2[3];
    break;
  case 4:
    if (*(char *)(param_2 + 9) != '\0') {
      if (*(char *)(param_2 + 9) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1d6e4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1d6e4);
    }
    goto LAB_01030668;
  }
  (**(code **)(puVar3 + 0xc))(&local_40,uVar2,param_3);
  uVar5 = CONCAT44(local_30,local_34);
  if (local_40 == 4) {
    *param_1 = 8;
    param_1[1] = 0;
    uVar1 = 3;
  }
  else {
    local_b0 = local_3c;
    local_ac = uStack_38;
    local_b8 = local_2c;
    local_b4 = uStack_28;
    FUN_01139b38(param_2[2],param_2[3]);
    if (local_40 == 3) {
      local_dc = local_ac;
      local_e0 = local_b0;
      uVar2 = 7;
      local_e4 = local_b4;
      local_e8 = local_b8;
    }
    else {
      puVar4[4] = local_b8;
      puVar4[5] = local_b4;
      local_d8 = local_40;
      *puVar4 = local_b0;
      puVar4[1] = local_ac;
      *(undefined1 *)(param_2 + 1) = 0;
      local_c8 = local_30;
      local_cc = local_34;
      param_2[2] = local_40;
      param_2[3] = uStack_d4;
      param_2[4] = uStack_d0;
      param_2[5] = local_34;
      param_2[6] = local_30;
      param_2[7] = uStack_c4;
      param_2[8] = uStack_c0;
      *(undefined1 *)(param_2 + 9) = 0;
LAB_01030668:
      local_68 = param_2[2];
      uStack_64 = param_2[3];
      uStack_60 = param_2[4];
      local_5c = param_2[5];
      uStack_58 = param_2[6];
      uStack_54 = param_2[7];
      uStack_50 = param_2[8];
      FUN_013184d8(auStack_4c,0x2000);
      local_40 = local_68;
      local_3c = uStack_64;
      uStack_38 = uStack_60;
      local_34 = local_5c;
      local_30 = uStack_58;
      local_2c = uStack_54;
      uStack_28 = uStack_50;
      uVar5 = FUN_0189bc00(auStack_4c);
      *(undefined1 *)(param_2 + 9) = 1;
      local_e8 = local_68;
      local_e4 = uStack_64;
      uVar2 = 3;
      local_100 = uStack_60;
      uStack_fc = local_5c;
      uStack_f8 = uStack_58;
      uStack_f4 = uStack_54;
      uStack_f0 = uStack_50;
    }
    *param_1 = uVar2;
    param_1[1] = 0;
    param_1[4] = (int)uVar5;
    *(undefined1 *)(param_2 + 1) = 0;
    param_1[2] = local_e0;
    param_1[3] = local_dc;
    param_1[6] = local_e8;
    param_1[7] = local_e4;
    param_1[5] = (int)((ulonglong)uVar5 >> 0x20);
    param_1[8] = local_100;
    param_1[9] = uStack_fc;
    param_1[10] = uStack_f8;
    param_1[0xb] = uStack_f4;
    param_1[0xc] = uStack_f0;
    uVar1 = 1;
    param_1[0x10] = 0;
    param_1[0x11] = 1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 1;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  *(undefined1 *)((int)param_2 + 5) = uVar1;
  return;
}

