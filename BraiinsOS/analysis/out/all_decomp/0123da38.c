// FUN_0123da38 @ 0123da38 size=864 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0123da38(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int local_a8;
  int local_a4;
  undefined1 *local_a0;
  undefined1 local_99;
  int *local_98;
  undefined *local_94;
  int local_90;
  int local_8c;
  int *local_88;
  int local_84;
  undefined *local_80;
  int local_7c;
  undefined *local_78;
  int local_74;
  undefined *local_70;
  int local_6c;
  undefined *local_68;
  int local_64;
  undefined *local_60;
  int local_5c;
  undefined *local_58;
  int local_54;
  undefined *local_50;
  int local_4c;
  undefined *local_48;
  int local_44;
  undefined *local_40;
  int local_3c;
  undefined *local_38;
  int local_34;
  undefined *local_30;
  int **local_2c;
  undefined *local_28;
  
  iVar4 = *param_1;
  piVar3 = (int *)(iVar4 + 0x98);
  if (*piVar3 == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x0123da74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568af8,4);
    return uVar1;
  }
  iVar6 = *param_2;
  iVar7 = param_2[1];
  pcVar5 = *(code **)(iVar7 + 0xc);
  iVar2 = (*pcVar5)(iVar6,&DAT_00569804,4);
  if (iVar2 == 0) {
    local_84 = iVar4;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar5)(iVar6,"(",1);
      if (iVar2 == 0) {
        local_2c = &local_98;
        local_34 = iVar4 + 100;
        local_3c = iVar4 + 0x60;
        local_44 = iVar4 + 0x5c;
        local_4c = iVar4 + 0x58;
        local_54 = iVar4 + 0x8c;
        local_5c = iVar4 + 0x80;
        local_64 = iVar4 + 0x74;
        local_6c = iVar4 + 0x44;
        local_74 = iVar4 + 0x68;
        local_7c = iVar4 + 0x30;
        local_28 = &DAT_0188a450;
        local_30 = &DAT_0188a440;
        local_38 = &DAT_0188a430;
        local_80 = &DAT_0188a3d0;
        local_50 = &DAT_0188a400;
        local_58 = &DAT_0188a400;
        local_60 = &DAT_0188a400;
        local_40 = &DAT_0188a420;
        local_48 = &DAT_0188a410;
        local_68 = &DAT_0188a3e0;
        local_70 = &DAT_0188a3f0;
        local_78 = &DAT_0188a3e0;
        local_98 = piVar3;
        iVar4 = FUN_00fb36b8(param_2,&DAT_0038c12c,0x12,&DAT_0188a460,0xc,&local_84,0xc);
        if (iVar4 == 0) {
          iVar6 = *param_2;
          pcVar5 = *(code **)(param_2[1] + 0xc);
LAB_0123dd74:
          uVar1 = (*pcVar5)(iVar6,&DAT_00418e07,1);
          return uVar1;
        }
      }
    }
    else {
      iVar2 = (*pcVar5)(iVar6,"(\n",2);
      if (iVar2 == 0) {
        local_a0 = &local_99;
        local_98 = &local_a8;
        local_99 = 1;
        local_90 = param_2[2];
        local_8c = param_2[3];
        local_94 = &DAT_01880dc4;
        local_2c = &local_88;
        local_28 = &DAT_0188a450;
        local_30 = &DAT_0188a440;
        local_34 = iVar4 + 100;
        local_3c = iVar4 + 0x60;
        local_44 = iVar4 + 0x5c;
        local_38 = &DAT_0188a430;
        local_40 = &DAT_0188a420;
        local_50 = &DAT_0188a400;
        local_48 = &DAT_0188a410;
        local_4c = iVar4 + 0x58;
        local_54 = iVar4 + 0x8c;
        local_5c = iVar4 + 0x80;
        local_64 = iVar4 + 0x74;
        local_6c = iVar4 + 0x44;
        local_74 = iVar4 + 0x68;
        local_7c = iVar4 + 0x30;
        local_58 = &DAT_0188a400;
        local_60 = &DAT_0188a400;
        local_68 = &DAT_0188a3e0;
        local_70 = &DAT_0188a3f0;
        local_78 = &DAT_0188a3e0;
        local_80 = &DAT_0188a3d0;
        local_a8 = iVar6;
        local_a4 = iVar7;
        local_88 = piVar3;
        iVar4 = FUN_00fb36b8(&local_98,&DAT_0038c12c,0x12,&DAT_0188a460,0xc,&local_84,0xc);
        if ((iVar4 == 0) &&
           (iVar4 = (**(code **)(local_94 + 0xc))(local_98,&DAT_00414a81,2), iVar4 == 0))
        goto LAB_0123dd74;
      }
    }
  }
  return 1;
}

