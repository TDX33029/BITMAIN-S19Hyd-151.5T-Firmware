// FUN_00a293e0 @ 00a293e0 size=540 calls_out=5 calls_in=0
// strings: 

void FUN_00a293e0(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  iVar11 = *param_2;
  if (iVar11 == -0x80000000) {
    *param_1 = 0x80000000;
  }
  else {
    local_3c = 0;
    local_40 = 1;
    local_44 = 0;
    local_2c = 0;
    local_30 = 0x60000020;
    local_34 = &DAT_01c0e3e4;
    local_38 = &local_44;
    iVar10 = FUN_013095bc(param_2 + 3,&local_38);
    uVar7 = local_3c;
    uVar4 = local_40;
    uVar1 = local_44;
    if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01c0e3fc,&DAT_01d30334);
    }
    local_3c = 0;
    local_44 = 0;
    local_2c = 0;
    local_40 = 1;
    local_34 = &DAT_01c0e3e4;
    local_30 = 0x60000020;
    local_38 = &local_44;
    iVar10 = FUN_013095bc(param_2 + 4,&local_38);
    uVar8 = local_3c;
    uVar5 = local_40;
    uVar2 = local_44;
    if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01c0e3fc,&DAT_01d30334);
    }
    local_3c = 0;
    local_44 = 0;
    local_2c = 0;
    local_40 = 1;
    local_34 = &DAT_01c0e3e4;
    local_30 = 0x60000020;
    local_38 = &local_44;
    iVar10 = FUN_013095bc(param_2 + 5,&local_38);
    uVar9 = local_3c;
    uVar6 = local_40;
    uVar3 = local_44;
    if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01c0e3fc,&DAT_01d30334);
    }
    iVar10 = param_2[1];
    FUN_00745308(&local_38,iVar10,iVar10 + param_2[2] * 4);
    param_1[9] = local_38;
    param_1[10] = local_34;
    param_1[0xb] = local_30;
    *param_1 = uVar1;
    param_1[8] = uVar9;
    param_1[1] = uVar4;
    param_1[2] = uVar7;
    param_1[3] = uVar2;
    param_1[4] = uVar5;
    param_1[5] = uVar8;
    param_1[6] = uVar3;
    param_1[7] = uVar6;
    FUN_0134c054(iVar11,iVar10,1,4);
  }
  if (param_2[6] != -0x80000000) {
    FUN_019bb7e0(param_2[6],param_2[7]);
  }
  return;
}

