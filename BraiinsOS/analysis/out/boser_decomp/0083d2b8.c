// FUN_0083d2b8 @ 0083d2b8 size=340 calls_out=3 calls_in=2
// strings: 

void FUN_0083d2b8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
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
  switch(*(undefined1 *)(param_2 + 0xb)) {
  case 0:
    iVar1 = *(int *)*param_2;
    *(undefined1 *)(param_2 + 10) = 0;
    uVar4 = param_2[1];
    uVar2 = param_2[2];
    param_2[3] = iVar1;
    param_2[4] = uVar4;
    param_2[5] = uVar2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22218);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22218);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 10)) {
    case 0:
      iVar1 = param_2[3];
      uVar4 = param_2[4];
      uVar2 = param_2[5];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c117e8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c117e8);
    case 3:
      if (*(char *)(param_2 + 9) != '\0') {
        if (*(char *)(param_2 + 9) == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c117d8);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c117d8);
      }
      iVar1 = param_2[6];
      goto LAB_0083d36c;
    }
  }
  param_2[6] = iVar1;
  *(undefined1 *)(param_2 + 9) = 0;
  param_2[7] = uVar4;
  param_2[8] = uVar2;
LAB_0083d36c:
  FUN_006666fc(&local_88,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
  puVar3 = (undefined4 *)((uint)&local_58 | 4);
  *puVar3 = local_88;
  puVar3[1] = uStack_84;
  puVar3[2] = uStack_80;
  puVar3[3] = uStack_7c;
  puVar3[4] = 0x80000002;
  puVar3[5] = uStack_74;
  puVar3[6] = local_70;
  puVar3[7] = uStack_6c;
  puVar3[8] = uStack_68;
  puVar3[9] = uStack_64;
  puVar3[10] = uStack_60;
  puVar3[0xb] = uStack_5c;
  *param_1 = 0;
  param_1[1] = local_58;
  param_1[2] = uStack_54;
  param_1[3] = uStack_50;
  param_1[4] = uStack_4c;
  param_1[5] = local_48;
  param_1[6] = uStack_44;
  param_1[7] = uStack_40;
  param_1[8] = uStack_3c;
  param_1[9] = local_38;
  param_1[10] = uStack_34;
  param_1[0xb] = uStack_30;
  param_1[0xc] = uStack_2c;
  param_1[0xd] = uStack_28;
  *(undefined1 *)(param_2 + 9) = 1;
  *(undefined1 *)(param_2 + 0xb) = 1;
  *(undefined1 *)(param_2 + 10) = 1;
  return;
}

