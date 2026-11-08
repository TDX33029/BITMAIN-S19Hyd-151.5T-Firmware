// FUN_00bd809c @ 00bd809c size=304 calls_out=3 calls_in=1
// strings: 

void FUN_00bd809c(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[8]) {
  case '\0':
    piVar1 = (int *)*param_2;
    uVar3 = 0x80000000;
    param_2[3] = param_2[1];
    if (*piVar1 == -0x80000000) goto LAB_00bd8160;
    param_2[4] = (int)piVar1;
    *(undefined1 *)(param_2 + 7) = 0;
    param_2[5] = param_2[1];
    param_2[6] = param_2[2];
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c21c3c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c21c3c);
  case '\x03':
    if ((char)param_2[7] != '\0') {
      if ((char)param_2[7] == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21c0c);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21c0c);
    }
    piVar1 = (int *)param_2[4];
  }
  FUN_006666fc(&local_68,piVar1[1],piVar1[2]);
  puVar2 = (undefined4 *)((uint)&local_38 | 4);
  *puVar2 = local_68;
  puVar2[1] = uStack_64;
  puVar2[2] = uStack_60;
  puVar2[3] = uStack_5c;
  local_88 = local_54;
  uStack_84 = uStack_50;
  uStack_80 = uStack_4c;
  local_7c = local_48;
  uStack_78 = uStack_44;
  uStack_74 = uStack_40;
  uStack_70 = uStack_3c;
  uVar3 = 0x80000002;
  *(undefined1 *)(param_2 + 7) = 1;
LAB_00bd8160:
  *param_1 = 0;
  param_1[1] = local_38;
  param_1[2] = uStack_34;
  param_1[3] = uStack_30;
  param_1[4] = uStack_2c;
  param_1[5] = uStack_28;
  param_1[6] = uVar3;
  param_1[7] = local_88;
  param_1[8] = uStack_84;
  param_1[9] = uStack_80;
  param_1[10] = local_7c;
  param_1[0xb] = uStack_78;
  param_1[0xc] = uStack_74;
  param_1[0xd] = uStack_70;
  *(undefined1 *)(param_2 + 8) = 1;
  return;
}

