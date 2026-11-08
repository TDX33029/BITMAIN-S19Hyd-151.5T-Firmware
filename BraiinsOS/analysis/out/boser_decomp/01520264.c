// FUN_01520264 @ 01520264 size=384 calls_out=10 calls_in=1
// strings: 

void FUN_01520264(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined1 auStack_110 [136];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  undefined *local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_01526248(auStack_110,param_2,"not",3);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_4) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    local_50 = *param_4;
    uStack_4c = param_4[1];
    local_48 = param_4[2];
    uStack_44 = param_4[3];
    uStack_40 = param_4[4];
    uStack_3c = param_4[5];
    goto LAB_01520338;
  case 2:
    local_48 = param_4[2];
    uStack_44 = param_4[3];
    uStack_40 = param_4[4];
    uStack_3c = param_4[5];
    uVar1 = 2;
    break;
  case 3:
    FUN_006666fc((uint)&local_50 | 4,param_4[2],param_4[3]);
    uVar1 = 3;
    break;
  case 4:
    FUN_014fcef8((uint)&local_50 | 4,param_4 + 1);
    uVar1 = 4;
    break;
  case 5:
    FUN_0156aa80((uint)&local_50 | 4,param_4 + 1);
    uVar1 = 5;
  }
  local_50 = CONCAT31(local_50._1_3_,uVar1);
LAB_01520338:
  uVar1 = FUN_016731b0(local_88,param_4);
  FUN_0156aca8(&local_38,auStack_110,param_4,uVar1);
  if (local_38 == 0) {
    FUN_00db4764(&local_50);
    puVar2 = (undefined4 *)0x0;
    puVar3 = local_34;
  }
  else {
    local_60 = local_30;
    uStack_5c = uStack_2c;
    uStack_58 = uStack_28;
    local_80 = local_50;
    uStack_7c = uStack_4c;
    uStack_78 = local_48;
    uStack_74 = uStack_44;
    uStack_70 = uStack_40;
    uStack_6c = uStack_3c;
    local_64 = local_34;
    local_68 = local_38;
    puVar2 = (undefined4 *)thunk_FUN_01be5118(0x30);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x30);
    }
    *puVar2 = local_80;
    puVar2[1] = uStack_7c;
    puVar2[2] = uStack_78;
    puVar2[3] = uStack_74;
    puVar2[4] = uStack_70;
    puVar2[5] = uStack_6c;
    puVar2[6] = local_68;
    puVar2[7] = local_64;
    puVar2[8] = local_60;
    puVar2[9] = uStack_5c;
    puVar2[10] = uStack_58;
    puVar2[0xb] = uStack_54;
    puVar3 = &DAT_01cfae50;
  }
  FUN_014ff9e0(auStack_110);
  param_1[2] = puVar3;
  *param_1 = 1;
  param_1[1] = puVar2;
  return;
}

