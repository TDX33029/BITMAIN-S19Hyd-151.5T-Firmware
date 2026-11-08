// FUN_0191556c @ 0191556c size=680 calls_out=5 calls_in=0
// strings: 

void FUN_0191556c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_c0;
  int local_bc;
  int local_b8;
  int iStack_b4;
  int local_b0;
  uint local_ac;
  uint local_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int iStack_94;
  int local_90;
  uint local_8c;
  uint local_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  uint uStack_6c;
  uint uStack_68;
  int iStack_64;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  uVar1 = *(undefined1 *)(param_2 + 4);
  FUN_0190e3fc(&local_58,param_2[1],uVar1,param_3,param_4,param_2[2]);
  iVar2 = local_4c;
  iVar9 = local_50;
  iVar8 = local_54;
  iVar7 = local_58;
  if (local_58 == 0) {
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = &DAT_8000001c;
    param_1[3] = 0x1a;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  else {
    FUN_0190e49c(&DAT_0056c128);
    (**(code **)(param_2[6] + 0x14))(&local_58,param_2[5],iVar9,iVar2);
    if (local_58 != 1) {
      piVar4 = (int *)((uint)&local_58 | 4);
      local_c0 = *piVar4;
      local_bc = piVar4[1];
      local_b8 = piVar4[2];
      iStack_b4 = piVar4[3];
      local_b0 = piVar4[4];
      local_ac = piVar4[5];
      local_a8 = piVar4[6];
      iStack_a4 = piVar4[7];
      local_80 = local_c0;
      iStack_7c = local_bc;
      iStack_78 = local_b8;
      iStack_74 = iStack_b4;
      local_70 = local_b0;
      uStack_6c = local_ac;
      uStack_68 = local_a8;
      iStack_64 = iStack_a4;
      (**(code **)(param_2[8] + 0x14))(&local_58,param_2[7],iVar7,iVar8);
      if (local_58 != 0) {
        piVar4 = (int *)((uint)&local_80 | 4);
        *piVar4 = local_50;
        piVar4[1] = local_4c;
        piVar4[2] = iStack_48;
        piVar4[3] = iStack_44;
        piVar4[4] = local_40;
        piVar4[5] = iStack_3c;
        piVar4[6] = iStack_38;
        piVar4[7] = iStack_34;
        iVar7 = piVar4[1];
        iVar8 = piVar4[2];
        iVar9 = piVar4[3];
        param_1[2] = *piVar4;
        param_1[3] = iVar7;
        param_1[4] = iVar8;
        param_1[5] = iVar9;
        iVar7 = piVar4[5];
        iVar8 = piVar4[6];
        iVar9 = piVar4[7];
        param_1[6] = piVar4[4];
        param_1[7] = iVar7;
        param_1[8] = iVar8;
        param_1[9] = iVar9;
        *param_1 = 1;
LAB_019157ec:
        FUN_0191585c(&local_c0);
        return;
      }
      piVar4 = (int *)((uint)&local_58 | 4);
      local_a0 = *piVar4;
      local_9c = piVar4[1];
      local_98 = piVar4[2];
      iStack_94 = piVar4[3];
      local_90 = piVar4[4];
      local_8c = piVar4[5];
      local_88 = piVar4[6];
      iStack_84 = piVar4[7];
      local_80 = local_a0;
      iStack_7c = local_9c;
      iStack_78 = local_98;
      iStack_74 = iStack_94;
      local_70 = local_90;
      uStack_6c = local_8c;
      uStack_68 = local_88;
      iStack_64 = iStack_84;
      FUN_0190e6ac(&local_80,uVar1,local_9c,local_98,local_bc,local_b8);
      uVar3 = local_88;
      uVar6 = local_8c;
      if (local_88 <= local_8c) {
        if (local_a8 <= local_ac) {
          FUN_0190e6ac(&local_30,uVar1,local_90 + local_88,local_8c - local_88,local_b0 + local_a8,
                       local_ac - local_a8);
          uVar5 = *param_2;
          local_58 = local_80;
          local_54 = iStack_7c;
          local_50 = iStack_78;
          local_4c = local_30;
          iStack_48 = iStack_2c;
          iStack_44 = iStack_28;
          param_1[1] = local_80;
          param_1[2] = iStack_7c;
          param_1[3] = iStack_78;
          param_1[4] = local_30;
          param_1[5] = iStack_2c;
          param_1[6] = iStack_28;
          param_1[7] = 0;
          param_1[8] = uVar5;
          *param_1 = 0;
          FUN_0191585c(&local_a0);
          goto LAB_019157ec;
        }
        uVar3 = local_a8;
        uVar6 = local_ac;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar3,uVar6,uVar6,&DAT_01d250a8);
    }
    piVar4 = (int *)((uint)&local_80 | 4);
    *piVar4 = local_50;
    piVar4[1] = local_4c;
    piVar4[2] = iStack_48;
    piVar4[3] = iStack_44;
    piVar4[4] = local_40;
    piVar4[5] = iStack_3c;
    piVar4[6] = iStack_38;
    piVar4[7] = iStack_34;
    iVar7 = piVar4[1];
    iVar8 = piVar4[2];
    iVar9 = piVar4[3];
    param_1[2] = *piVar4;
    param_1[3] = iVar7;
    param_1[4] = iVar8;
    param_1[5] = iVar9;
    iVar7 = piVar4[5];
    iVar8 = piVar4[6];
    iVar9 = piVar4[7];
    param_1[6] = piVar4[4];
    param_1[7] = iVar7;
    param_1[8] = iVar8;
    param_1[9] = iVar9;
  }
  *param_1 = 1;
  return;
}

