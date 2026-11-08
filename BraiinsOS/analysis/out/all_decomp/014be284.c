// FUN_014be284 @ 014be284 size=1296 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_014be284(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined1 *puVar11;
  code *pcVar12;
  undefined *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  code *pcVar16;
  undefined4 local_48;
  int local_44;
  undefined1 *local_40;
  undefined1 local_39;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  
  piVar10 = param_1 + 2;
  if (*piVar10 == -0x80000000) {
    uVar4 = *param_2;
    iVar5 = param_2[1];
    pcVar3 = *(code **)(iVar5 + 0xc);
    iVar1 = (*pcVar3)(uVar4,&DAT_0056a600,8);
    if (iVar1 != 0) {
      return 1;
    }
    puVar9 = param_1 + 4;
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar1 = (*pcVar3)(uVar4,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_30 = param_2[2];
      local_2c = param_2[3];
      local_28 = param_1 + 0x10;
      puVar15 = param_1 + 0xc;
      piVar10 = param_1 + 10;
      puVar6 = &DAT_00409251;
      puVar7 = &DAT_00409246;
      pcVar12 = FUN_014bee88;
      puVar13 = &DAT_00409219;
      uVar14 = 0xd;
      pcVar16 = (code *)&LAB_016b18a0;
      uVar2 = 0x1a;
      uVar8 = 0xb;
      pcVar3 = FUN_014befe8;
      puVar11 = &LAB_016b18a0;
      local_48 = uVar4;
      local_44 = iVar5;
      goto LAB_014be734;
    }
    iVar1 = (*pcVar3)(uVar4,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = param_1 + 0x10;
    iVar1 = FUN_00fb35ac(param_2,&DAT_00409251,0x1a,&DAT_00409246,0xb,puVar9,FUN_014befe8,
                         &DAT_00409226,6,param_1 + 10,&LAB_016b18a0,&DAT_0040922c,0x1a,param_1 + 0xe
                         ,FUN_014bee88,&DAT_00409219,0xd,param_1 + 0xc,&LAB_016b18a0,&DAT_00418f67,
                         0xb,&local_38,FUN_016cf424);
  }
  else {
    uVar4 = *param_2;
    iVar5 = param_2[1];
    pcVar3 = *(code **)(iVar5 + 0xc);
    iVar1 = (*pcVar3)(uVar4,&DAT_004091fd,5);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(uVar4,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      local_38 = param_1;
      iVar1 = FUN_00fb35ac(param_2,&DAT_00409202,0x17,&DAT_00409219,0xd,param_1 + 0x11,FUN_014bb3d8,
                           &DAT_00409226,6,piVar10,&LAB_00fc51fc,&DAT_0040922c,0x1a,param_1 + 0xe,
                           FUN_014becf8,&DAT_00409246,0xb,param_1 + 5,FUN_014be864,&DAT_00418f67,0xb
                           ,&local_38,FUN_016cf424);
      if (iVar1 != 0) {
        return 1;
      }
      goto LAB_014be76c;
    }
    iVar1 = (*pcVar3)(uVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_30 = param_2[2];
    local_2c = param_2[3];
    puVar15 = param_1 + 5;
    pcVar12 = FUN_014becf8;
    puVar13 = &DAT_00409246;
    uVar14 = 0xb;
    puVar9 = param_1 + 0x11;
    puVar6 = &DAT_00409202;
    pcVar16 = FUN_014be864;
    pcVar3 = FUN_014bb3d8;
    puVar7 = &DAT_00409219;
    uVar8 = 0xd;
    uVar2 = 0x17;
    puVar11 = &LAB_00fc51fc;
    local_48 = uVar4;
    local_44 = iVar5;
    local_28 = param_1;
LAB_014be734:
    local_34 = &DAT_01880dc4;
    local_38 = &local_48;
    local_39 = 1;
    local_40 = &local_39;
    iVar1 = FUN_00fb35ac(&local_38,puVar6,uVar2,puVar7,uVar8,puVar9,pcVar3,&DAT_00409226,6,piVar10,
                         puVar11,&DAT_0040922c,0x1a,param_1 + 0xe,pcVar12,puVar13,uVar14,puVar15,
                         pcVar16,&DAT_00418f67,0xb,&local_28,FUN_016cf424);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2);
  }
  if (iVar1 != 0) {
    return 1;
  }
LAB_014be76c:
  uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
  return uVar4;
}

