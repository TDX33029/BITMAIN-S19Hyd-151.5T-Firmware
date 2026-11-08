// FUN_011062d8 @ 011062d8 size=612 calls_out=11 calls_in=0
// strings: 

void FUN_011062d8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r9;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_2c;
  int *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x214)) {
  case 0:
    iVar4 = param_2 + 0x90;
    *(undefined1 *)(param_2 + 0x215) = 1;
    FUN_01bed4e2(iVar4,param_2,0x90);
    uVar6 = *(undefined4 *)(param_2 + 0x210);
    iVar3 = FUN_00710404(iVar4);
    if (iVar3 != 0) {
      *(undefined1 *)(param_2 + 0x215) = 0;
      FUN_01bed4e2(param_2 + 0x120,iVar4,0x90);
      *(undefined1 *)(param_2 + 0x20c) = 0;
      *(undefined4 *)(param_2 + 0x208) = uVar6;
      goto switchD_011062f8_caseD_3;
    }
    iVar5 = 4;
LAB_011064b4:
    if (*(char *)(param_2 + 0x215) != '\0') {
      FUN_00ebabdc(param_2 + 0x90);
    }
    uVar6 = 1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c2071c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c2071c);
  case 3:
switchD_011062f8_caseD_3:
    iVar5 = param_2 + 0x120;
    FUN_00f172dc(&local_88,iVar5,param_3);
    iVar1 = local_7c;
    iVar4 = local_80;
    iVar3 = local_84;
    if (local_88 != 0) {
      *param_1 = 2;
      uVar2 = 3;
      goto LAB_01106528;
    }
    FUN_00fb9f1c(iVar5);
    if (local_84 == 0) {
      iVar5 = local_80;
      param_3 = local_78;
      unaff_r9 = local_7c;
      goto LAB_011064b4;
    }
    local_8c = local_78;
    local_6c = 0x80;
    local_84 = 1;
    local_5c = -0x80000000;
    local_28 = &local_5c;
    local_70 = 0;
    local_74 = 0;
    local_78 = local_7c;
    local_7c = local_80;
    local_80 = 0;
    local_88 = 0;
    local_40 = 0;
    local_2c = &local_88;
    FUN_00edff1c(&local_50,&local_40);
    if (local_50 == 1) {
      uStack_64 = local_4c;
      if (local_5c == -0x80000000) {
        local_3c = 4;
        uStack_54 = 0;
        local_40 = 0;
      }
      else {
        local_40 = local_5c;
        local_3c = uStack_58;
      }
      local_34 = local_4c;
      local_68 = uStack_54;
      local_38 = uStack_54;
      FUN_007103d0(&local_50,&local_40);
      uVar6 = 1;
      iVar5 = local_50;
      param_3 = local_48;
      unaff_r9 = local_4c;
    }
    else {
      FUN_00ad9810(&local_5c);
      uVar6 = 0;
      param_3 = local_44;
      unaff_r9 = local_48;
    }
    FUN_019bb7e0(local_88,local_84);
    (**(code **)(iVar3 + 0x10))(&local_8c,iVar4,iVar1);
  }
  *(undefined1 *)(param_2 + 0x215) = 0;
  uVar2 = 1;
  *param_1 = uVar6;
  param_1[1] = iVar5;
  param_1[2] = unaff_r9;
  param_1[3] = param_3;
LAB_01106528:
  *(undefined1 *)(param_2 + 0x214) = uVar2;
  return;
}

