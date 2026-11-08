// FUN_0153a398 @ 0153a398 size=540 calls_out=9 calls_in=1
// strings: 

void FUN_0153a398(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int local_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  puVar2 = (undefined4 *)FUN_01671160();
  uVar5 = *puVar2;
  iVar6 = puVar2[1];
  puVar2 = (undefined4 *)FUN_01671044();
  uVar5 = (**(code **)(iVar6 + 0xc))(uVar5);
  FUN_00653054(&local_a0,puVar2[2],*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2 + 8,uVar5);
  local_e0 = &DAT_0056d238;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = local_a0;
  uStack_cc = uStack_9c;
  local_c8 = local_98;
  uStack_c4 = uStack_94;
  uStack_c0 = local_90;
  uStack_bc = uStack_8c;
  uStack_b8 = uStack_88;
  uStack_b4 = uStack_84;
  local_90 = param_2[8];
  local_b0 = *param_2;
  uStack_ac = param_2[1];
  uStack_a8 = param_2[2];
  uStack_a4 = param_2[3];
  local_a0 = param_2[4];
  uStack_9c = param_2[5];
  local_98 = param_2[6];
  uStack_94 = param_2[7];
  uVar3 = (uint)&local_40 | 4;
  do {
    do {
      uVar7 = FUN_01a41998(&local_b0);
      piVar4 = (int *)((ulonglong)uVar7 >> 0x20);
      iVar6 = (int)uVar7;
      if (iVar6 == 0) {
        *param_1 = local_e0;
        param_1[1] = uStack_dc;
        param_1[2] = uStack_d8;
        param_1[3] = uStack_d4;
        param_1[4] = uStack_d0;
        param_1[5] = uStack_cc;
        param_1[6] = local_c8;
        param_1[7] = uStack_c4;
        param_1[8] = uStack_c0;
        param_1[9] = uStack_bc;
        param_1[10] = uStack_b8;
        param_1[0xb] = uStack_b4;
        return;
      }
    } while ((*(int *)(iVar6 + 8) == 4) && (**(int **)(iVar6 + 4) == 0x66657224));
    FUN_006666fc(&local_58,*(int **)(iVar6 + 4),*(int *)(iVar6 + 8));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)*piVar4) {
    case '\0':
      uVar1 = 0;
      break;
    case '\x01':
      local_40 = *piVar4;
      iStack_3c = piVar4[1];
      local_38 = piVar4[2];
      iStack_34 = piVar4[3];
      iStack_30 = piVar4[4];
      iStack_2c = piVar4[5];
      goto LAB_0153a544;
    case '\x02':
      local_38 = piVar4[2];
      iStack_34 = piVar4[3];
      iStack_30 = piVar4[4];
      iStack_2c = piVar4[5];
      uVar1 = 2;
      break;
    case '\x03':
      FUN_006666fc(uVar3,piVar4[2],piVar4[3]);
      uVar1 = 3;
      break;
    case '\x04':
      FUN_014fcef8(uVar3,piVar4 + 1);
      uVar1 = 4;
      break;
    case '\x05':
      FUN_0156aa80(uVar3,piVar4 + 1);
      uVar1 = 5;
    }
    local_40 = CONCAT31(local_40._1_3_,uVar1);
LAB_0153a544:
    local_7c = local_40;
    iStack_78 = iStack_3c;
    iStack_74 = local_38;
    iStack_70 = iStack_34;
    iStack_6c = iStack_30;
    iStack_68 = iStack_2c;
    if (local_58 != -0x80000000) {
      local_64 = local_58;
      local_60 = local_54;
      iStack_5c = iStack_50;
      local_58 = local_40;
      local_54 = iStack_3c;
      iStack_50 = local_38;
      iStack_4c = iStack_34;
      iStack_48 = iStack_30;
      iStack_44 = iStack_2c;
      FUN_0153a5fc(&local_40,&local_e0,&local_64,&local_58);
      if ((char)local_40 != '\x06') {
        FUN_00e0febc(&local_40);
      }
    }
  } while( true );
}

