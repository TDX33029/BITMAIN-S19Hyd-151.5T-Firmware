// FUN_01208308 @ 01208308 size=740 calls_out=11 calls_in=4
// strings: 

void FUN_01208308(undefined4 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_70;
  int local_6c;
  int *local_68;
  undefined2 *local_64;
  undefined4 local_60;
  int local_58;
  undefined4 local_54;
  int **local_50;
  code *local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  code *local_3c;
  int *local_38;
  undefined2 *local_34;
  int ***local_30;
  code *local_2c;
  
  piVar3 = &local_90;
  uVar10 = thunk_FUN_01bee35a(param_1,0x70);
  piVar6 = (int *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
  if ((char)piVar6[4] != '\x01') {
    if ((char)piVar6[4] == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_019b0950(&DAT_01d301c0);
    }
    FUN_019a2bcc(piVar6,&LAB_01abe6ec);
    *(undefined1 *)(piVar6 + 4) = 1;
  }
  iVar7 = *piVar6;
  local_78 = param_1[2];
  piVar8 = (int *)param_1[4];
  piVar9 = (int *)param_1[5];
  local_80 = *param_1;
  local_7c = param_1[1];
  if (iVar7 == 0) {
    piVar3 = piVar6 + 1;
    *piVar6 = -1;
  }
  else {
    local_88 = 0;
    local_90 = 0;
    local_8c = 1;
  }
  iVar2 = *piVar8;
  local_70 = iVar2 + 0x68;
  local_6c = *piVar9;
  local_50 = &local_84;
  local_4c = (code *)&DAT_01d2ec18;
  local_48 = CONCAT31(local_48._1_3_,*(undefined1 *)(iVar2 + 0x66));
  local_84 = piVar3;
  iVar2 = FUN_01abb59c(iVar2,&local_80,&local_50);
  if (iVar2 == 0) {
    uVar10 = FUN_012069d0(*piVar8 + 8);
    FUN_01263d28(&local_68,(int)uVar10 + 8,local_84[1],local_84[2]);
    uVar4 = (uint)local_68 & 0xff;
    if ((*(char *)(*piVar8 + 0x67) == '\x01') && (uVar4 != 4)) {
      local_4c = FUN_019a7d7c;
      local_50 = &local_38;
      local_34 = local_64;
      local_38 = local_68;
      FUN_019a896c(&DAT_0057a6ad,&local_50);
      FUN_0069d8a4((uint)local_38 & 0xff,local_34);
    }
    else if (uVar4 != 4) {
      FUN_0069d8a4(uVar4,local_64);
    }
    FUN_00a97e8c((int)uVar10,(uint)((ulonglong)uVar10 >> 0x20) & 1);
  }
  else if (*(char *)(*piVar8 + 0x67) == '\x01') {
    iVar2 = *piVar9;
    iVar5 = *(int *)(iVar2 + 0x14);
    local_58 = *(int *)(iVar5 + 0xc);
    local_54 = *(undefined4 *)(iVar5 + 0x10);
    piVar3 = *(int **)(*(int *)(iVar2 + 0x10) + 8);
    local_50 = (int **)*piVar3;
    local_4c = (code *)piVar3[1];
    local_48 = piVar3[2];
    local_44 = piVar3[3];
    local_38 = &local_58;
    local_40 = 0;
    local_2c = FUN_01208280;
    local_34 = &DAT_0132b6a0;
    local_3c = local_4c;
    local_30 = &local_50;
    FUN_00664898(&local_68,&DAT_005b68f9,&local_38);
    puVar1 = local_64;
    piVar3 = local_68;
    uVar10 = FUN_012069d0(*piVar8 + 8);
    FUN_01263d28(&local_68,(int)uVar10 + 8,puVar1,local_60);
    if ((char)local_68 != '\x04') {
      local_34 = local_64;
      local_38 = local_68;
      local_4c = FUN_019a7d7c;
      local_50 = &local_38;
      FUN_019a896c(&DAT_005b9489,&local_50);
      FUN_0069d8a4((uint)local_38 & 0xff,local_34);
    }
    FUN_00a97e8c((int)uVar10,(uint)((ulonglong)uVar10 >> 0x20) & 1);
    FUN_019bb7e0(piVar3,puVar1);
  }
  local_84[2] = 0;
  if (iVar7 == 0) {
    *piVar6 = *piVar6 + 1;
  }
  else {
    FUN_019bb7e0(local_90,local_8c);
  }
  return;
}

