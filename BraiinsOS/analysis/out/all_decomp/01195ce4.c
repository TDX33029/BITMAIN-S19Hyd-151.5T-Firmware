// FUN_01195ce4 @ 01195ce4 size=464 calls_out=12 calls_in=1
// strings: 

void FUN_01195ce4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined1 auStack_110 [136];
  undefined1 local_88;
  undefined4 local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  undefined *local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_0119d4b4(auStack_110,param_2,"not",3);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_4) {
  case 0:
    uVar1 = 0;
    break;
  default:
    local_50 = *param_4;
    local_4c = param_4[1];
    local_48 = param_4[2];
    local_44 = param_4[3];
    uStack_40 = param_4[4];
    uStack_3c = param_4[5];
    goto LAB_01195df4;
  case 3:
    iVar4 = param_4[3];
    uVar5 = param_4[2];
    if (iVar4 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(iVar4);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar4);
      }
    }
    FUN_016dd1aa(iVar2,uVar5,iVar4);
    uVar1 = 3;
    local_4c = iVar4;
    local_48 = iVar2;
    local_44 = iVar4;
    break;
  case 4:
    FUN_0115c22c((uint)&local_50 | 4,param_4 + 1);
    uVar1 = 4;
    break;
  case 5:
    if (param_4[3] == 0) {
      local_44 = 0;
      local_4c = 0;
    }
    else {
      if (param_4[1] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac52c);
      }
      FUN_011f809c((uint)&local_50 | 4,param_4[1],param_4[2]);
    }
    uVar1 = 5;
  }
  local_50 = CONCAT31(local_50._1_3_,uVar1);
LAB_01195df4:
  uVar1 = FUN_01352d48(local_88,param_4);
  FUN_0125acb4(&local_38,auStack_110,param_4,uVar1);
  if (local_38 == 0) {
    FUN_01164f34(&local_50);
    puVar3 = (undefined4 *)0x0;
    puVar6 = local_34;
  }
  else {
    local_60 = local_30;
    uStack_5c = uStack_2c;
    uStack_58 = uStack_28;
    local_80 = local_50;
    iStack_7c = local_4c;
    iStack_78 = local_48;
    iStack_74 = local_44;
    uStack_70 = uStack_40;
    uStack_6c = uStack_3c;
    local_64 = local_34;
    local_68 = local_38;
    puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x30);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x30);
    }
    *puVar3 = local_80;
    puVar3[1] = iStack_7c;
    puVar3[2] = iStack_78;
    puVar3[3] = iStack_74;
    puVar3[4] = uStack_70;
    puVar3[5] = uStack_6c;
    puVar3[6] = local_68;
    puVar3[7] = local_64;
    puVar3[8] = local_60;
    puVar3[9] = uStack_5c;
    puVar3[10] = uStack_58;
    puVar3[0xb] = uStack_54;
    puVar6 = &DAT_01889588;
  }
  FUN_01161600(auStack_110);
  param_1[2] = puVar6;
  *param_1 = 1;
  param_1[1] = puVar3;
  return;
}

