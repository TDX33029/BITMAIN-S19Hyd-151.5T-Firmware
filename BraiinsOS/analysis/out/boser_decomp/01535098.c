// FUN_01535098 @ 01535098 size=344 calls_out=6 calls_in=1
// strings: 

void FUN_01535098(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = FUN_0196b3a8(*param_3,param_3[1],&DAT_00567978,0x10);
  if (iVar2 == 0) {
    uVar3 = 0;
    goto LAB_015351e4;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_4) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    local_58 = *param_4;
    uStack_54 = param_4[1];
    local_50 = param_4[2];
    uStack_4c = param_4[3];
    uStack_48 = param_4[4];
    uStack_44 = param_4[5];
    goto LAB_01535178;
  case 2:
    local_50 = param_4[2];
    uStack_4c = param_4[3];
    uStack_48 = param_4[4];
    uStack_44 = param_4[5];
    uVar1 = 2;
    break;
  case 3:
    FUN_006666fc((uint)&local_58 | 4,param_4[2],param_4[3]);
    uVar1 = 3;
    break;
  case 4:
    FUN_014fcef8((uint)&local_58 | 4,param_4 + 1);
    uVar1 = 4;
    break;
  case 5:
    FUN_0156aa80((uint)&local_58 | 4,param_4 + 1);
    uVar1 = 5;
  }
  local_58 = CONCAT31(local_58._1_3_,uVar1);
LAB_01535178:
  local_3c = 1;
  local_40 = 1;
  local_38 = local_58;
  uStack_34 = uStack_54;
  local_30 = local_50;
  uStack_2c = uStack_4c;
  uStack_28 = uStack_48;
  uStack_24 = uStack_44;
  puVar4 = (undefined4 *)thunk_FUN_01be5118(0x20);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x20);
  }
  *puVar4 = local_40;
  puVar4[1] = local_3c;
  puVar4[2] = local_38;
  puVar4[3] = uStack_34;
  puVar4[4] = local_30;
  puVar4[5] = uStack_2c;
  puVar4[6] = uStack_28;
  puVar4[7] = uStack_24;
  piVar5 = (int *)thunk_FUN_01be5118(4);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,4);
  }
  *piVar5 = (int)puVar4;
  param_1[1] = piVar5;
  param_1[2] = &DAT_01cfb630;
  uVar3 = 1;
LAB_015351e4:
  *param_1 = uVar3;
  return;
}

