// FUN_016f1fec @ 016f1fec size=1052 calls_out=16 calls_in=1
// strings: 

void FUN_016f1fec(undefined4 *param_1,uint param_2,uint *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  if ((param_2 & 1) == 0) {
    iVar3 = 2;
    if (0x10 < *param_3 >> 0x10) {
      iVar3 = *param_3 - 0x110000;
    }
                    /* WARNING: Could not recover jumptable at 0x016f2138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_016f213c + *(int *)(&DAT_016f213c + iVar3 * 4)))();
    return;
  }
  iVar3 = *param_4;
  if ((*(byte *)(iVar3 + 0x14) == 2) || ((*(byte *)(iVar3 + 0x14) & 1) != 0)) {
    FUN_016e9df0(&local_58,iVar3);
    if (local_58 == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d13040);
    }
    local_e0 = local_58;
    uStack_dc = local_54;
    uStack_d8 = uStack_50;
    local_d4 = local_4c;
    uStack_d0 = uStack_48;
    uStack_cc = uStack_44;
    uStack_c8 = uStack_40;
    FUN_016ea684(&local_98,&local_e0);
    FUN_016e9df0(&local_58,iVar3);
    if (local_58 == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d13050);
    }
    local_e0 = local_58;
    uStack_dc = local_54;
    uStack_d8 = uStack_50;
    local_d4 = local_4c;
    uStack_d0 = uStack_48;
    uStack_cc = uStack_44;
    uStack_c8 = uStack_40;
    FUN_016ea684(&local_68,&local_e0);
    FUN_016e9df0(&local_58,iVar3);
    if (local_58 == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d13060);
    }
    local_e0 = local_58;
    uStack_dc = local_54;
    uStack_d8 = uStack_50;
    local_d4 = local_4c;
    uStack_d0 = uStack_48;
    uStack_cc = uStack_44;
    uStack_c8 = uStack_40;
    FUN_016ea684(&local_88,&local_e0);
    if ((*(byte *)(iVar3 + 0x10) & 1) != 0) {
      FUN_016df574(&local_98);
      FUN_016df574(&local_68);
    }
    if ((char)param_3[8] == '\0') {
      FUN_016f6274(&local_68,&local_98);
    }
    else if ((char)param_3[8] == '\x01') {
      FUN_016f5618(&local_68,&local_98);
    }
    else {
      FUN_016c0ed4(&local_58,local_64,local_60);
      local_4c = CONCAT31(local_4c._1_3_,local_5c);
      FUN_016f6274(&local_58,&local_98);
      FUN_016f64a0(&local_68,&local_98);
      FUN_016f5618(&local_68,&local_58);
      FUN_0134aee0(local_58,local_54,4,8);
    }
    FUN_016f64a0(&local_88,&local_68);
    local_54 = local_88;
    uStack_50 = uStack_84;
    local_4c = uStack_80;
    uStack_48 = uStack_7c;
    local_58 = 9;
    FUN_016e9184(iVar3,&local_58);
    FUN_0134aee0(local_68,local_64,4,8);
    uVar1 = 4;
    uVar2 = 8;
  }
  else {
    FUN_016e9df0(&local_58,iVar3);
    if (local_58 == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d13010);
    }
    local_e0 = local_58;
    uStack_dc = local_54;
    uStack_d8 = uStack_50;
    local_d4 = local_4c;
    uStack_d0 = uStack_48;
    uStack_cc = uStack_44;
    uStack_c8 = uStack_40;
    FUN_016ea564(&local_98,&local_e0);
    FUN_016e9df0(&local_58,iVar3);
    if (local_58 == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d13020);
    }
    local_e0 = local_58;
    uStack_dc = local_54;
    uStack_d8 = uStack_50;
    local_d4 = local_4c;
    uStack_d0 = uStack_48;
    uStack_cc = uStack_44;
    uStack_c8 = uStack_40;
    FUN_016ea564(&local_68,&local_e0);
    FUN_016e9df0(&local_58,iVar3);
    if (local_58 == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d13030);
    }
    local_e0 = local_58;
    uStack_dc = local_54;
    uStack_d8 = uStack_50;
    local_d4 = local_4c;
    uStack_d0 = uStack_48;
    uStack_cc = uStack_44;
    uStack_c8 = uStack_40;
    FUN_016ea564(&local_88,&local_e0);
    if ((*(byte *)(iVar3 + 0x10) & 1) != 0) {
      FUN_016de590(&local_98);
      FUN_016de590(&local_68);
    }
    if ((char)param_3[8] == '\0') {
      FUN_016f6580(&local_68,&local_98);
    }
    else if ((char)param_3[8] == '\x01') {
      FUN_016f5a18(&local_68,&local_98);
    }
    else {
      FUN_016e3984(&local_58,local_64,local_60);
      local_4c = CONCAT31(local_4c._1_3_,local_5c);
      FUN_016f6580(&local_58,&local_98);
      FUN_016f67a8(&local_68,&local_98);
      FUN_016f5a18(&local_68,&local_58);
      FUN_0134aee0(local_58,local_54,1,2);
    }
    FUN_016f67a8(&local_88,&local_68);
    local_54 = local_88;
    uStack_50 = uStack_84;
    local_4c = uStack_80;
    uStack_48 = uStack_7c;
    local_58 = 10;
    FUN_016e9184(iVar3,&local_58);
    FUN_0134aee0(local_68,local_64,1,2);
    uVar1 = 1;
    uVar2 = 2;
  }
  FUN_0134aee0(local_98,local_94,uVar1,uVar2);
  *param_1 = 0x80000000;
  return;
}

