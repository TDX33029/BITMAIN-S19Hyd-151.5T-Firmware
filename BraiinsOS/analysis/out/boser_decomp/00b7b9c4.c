// FUN_00b7b9c4 @ 00b7b9c4 size=404 calls_out=7 calls_in=1
// strings: 

void FUN_00b7b9c4(int *param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int local_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[2]) {
  case '\0':
    param_2[1] = *param_2;
    iVar3 = FUN_007411c4(*(int *)(*param_2 + 8) + 8);
    puVar4 = &DAT_01c07ee8;
    param_2[3] = iVar3;
    param_2[4] = (int)&DAT_01c07ee8;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13640);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13640);
  case '\x03':
    iVar3 = param_2[3];
    puVar4 = (undefined *)param_2[4];
    break;
  case '\x04':
    iVar3 = param_2[9];
    puVar4 = (undefined *)param_2[10];
    goto LAB_00b7babc;
  }
  (**(code **)(puVar4 + 0xc))(&local_88,iVar3,param_3);
  iVar3 = local_88;
  if (local_88 == -0x7ffffffe) {
    *param_1 = -0x7ffffffe;
    uVar1 = 3;
  }
  else {
    local_70 = local_84;
    iStack_6c = iStack_80;
    iStack_68 = iStack_7c;
    iStack_64 = iStack_78;
    iStack_60 = iStack_74;
    FUN_01139b38(param_2[3],param_2[4]);
    iVar2 = -0x7fffffff;
    if (iVar3 != -0x7fffffff) {
      param_2[3] = iVar3;
      param_2[4] = local_70;
      param_2[5] = iStack_6c;
      param_2[6] = iStack_68;
      param_2[7] = iStack_64;
      param_2[8] = iStack_60;
      iVar3 = FUN_007416ec(*(int *)(param_2[1] + 8) + 8);
      puVar4 = &DAT_01c07fe8;
      param_2[9] = iVar3;
      param_2[10] = (int)&DAT_01c07fe8;
LAB_00b7babc:
      (**(code **)(puVar4 + 0xc))(&local_88,iVar3,param_3);
      if (local_88 == -0x7fffffff) {
        *param_1 = -0x7ffffffe;
        uVar1 = 4;
        goto LAB_00b7bb48;
      }
      local_58 = local_88;
      iStack_54 = local_84;
      iStack_50 = iStack_80;
      FUN_01139b38(param_2[9],param_2[10]);
      iVar2 = param_2[3];
      local_48 = param_2[4];
      iStack_44 = param_2[5];
      iStack_40 = param_2[6];
      iStack_3c = param_2[7];
      local_38 = param_2[8];
      local_34 = local_58;
      iStack_30 = iStack_54;
      iStack_2c = iStack_50;
    }
    *param_1 = iVar2;
    param_1[1] = local_48;
    param_1[2] = iStack_44;
    param_1[3] = iStack_40;
    param_1[4] = iStack_3c;
    uVar1 = 1;
    param_1[5] = local_38;
    param_1[6] = local_34;
    param_1[7] = iStack_30;
    param_1[8] = iStack_2c;
  }
LAB_00b7bb48:
  *(undefined1 *)(param_2 + 2) = uVar1;
  return;
}

