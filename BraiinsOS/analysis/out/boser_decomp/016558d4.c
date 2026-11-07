// FUN_016558d4 @ 016558d4 size=396 calls_out=5 calls_in=4
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016558d4(int *param_1,char *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined1 extraout_r1;
  char extraout_r1_00;
  char cVar4;
  char *pcVar5;
  int iVar6;
  char *local_40;
  char *local_3c;
  int local_38;
  int local_34;
  int local_30;
  char *local_2c;
  char *local_28;
  
  local_40 = param_2;
  local_3c = param_3;
  do {
    pcVar5 = local_40;
    do {
      if (pcVar5 == local_3c) {
        param_3 = param_3 + -(int)param_2;
        goto LAB_01655a1c;
      }
      local_40 = pcVar5 + 1;
      cVar4 = *pcVar5;
      pcVar5 = local_40;
    } while (cVar4 != '%');
    uVar3 = FUN_01655a80(&local_40);
    pcVar2 = local_3c;
    pcVar5 = local_40;
  } while ((uVar3 & 1) == 0);
  param_3 = param_3 + -(int)param_2;
  if (param_3 < local_40 + (int)(param_3 + (-3 - (int)local_3c))) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,local_40 + (int)(param_3 + (-3 - (int)local_3c)),param_3,&DAT_01d06bc8);
  }
  FUN_0193a93c(&local_38,param_2);
  if (local_30 == local_38) {
    FUN_006666a0(&local_38);
  }
  local_28 = pcVar2;
  *(undefined1 *)(local_34 + local_30) = extraout_r1;
  local_2c = pcVar5;
  iVar6 = local_34;
  iVar1 = local_30;
  while (local_30 = iVar1 + 1, iVar1 = local_30, local_2c != local_28) {
    pcVar5 = local_2c + 1;
    cVar4 = *local_2c;
    local_2c = pcVar5;
    if ((cVar4 == '%') &&
       (uVar3 = FUN_01655a80(&local_2c), cVar4 = extraout_r1_00, (uVar3 & 1) == 0)) {
      cVar4 = '%';
    }
    if (iVar1 == local_38) {
      FUN_006520b4(&local_38,iVar1,(uint)(local_28 + (2 - (int)local_2c)) / 3 + 1,1,1);
      iVar6 = local_34;
    }
    *(char *)(iVar6 + iVar1) = cVar4;
  }
  if (local_38 == -0x80000000) {
LAB_01655a1c:
    *param_1 = -0x80000000;
    param_1[1] = (int)param_2;
    param_1[2] = (int)param_3;
  }
  else {
    *param_1 = local_38;
    param_1[1] = local_34;
    param_1[2] = local_30;
  }
  return;
}

