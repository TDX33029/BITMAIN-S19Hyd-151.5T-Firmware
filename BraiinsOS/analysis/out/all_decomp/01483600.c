// FUN_01483600 @ 01483600 size=268 calls_out=2 calls_in=0
// strings: 

void FUN_01483600(char *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char local_2c;
  undefined2 local_2b;
  char local_29;
  int local_28;
  
  iVar2 = param_5 << 3;
  iVar3 = param_4;
  do {
    if (iVar2 == 0) {
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      local_2c = '\x04';
      goto LAB_014836e4;
    }
    piVar1 = (int *)(iVar3 + 4);
    iVar2 = iVar2 + -8;
    iVar3 = iVar3 + 8;
  } while (*piVar1 == 0);
  do {
    FUN_014dfd80(&local_2c,param_2,param_4,param_5);
    iVar2 = local_28;
    if (local_2c != '\x04') {
      param_1[3] = local_29;
      *(undefined2 *)(param_1 + 1) = local_2b;
      *(int *)(param_1 + 4) = local_28;
      goto LAB_014836e4;
    }
LAB_0148366c:
    if (*(int *)(param_2 + 0x208) != 0) {
      FUN_014bb9e8(param_1,param_2 + 0x2d0,param_2,param_3);
      if (*param_1 == '\x04') goto code_r0x01483698;
      if (*param_1 != '\x05') {
        return;
      }
      goto LAB_014836cc;
    }
  } while (iVar2 == 0);
LAB_014836d4:
  *(int *)(param_1 + 4) = iVar2;
  local_2c = '\x04';
LAB_014836e4:
  *param_1 = local_2c;
  return;
code_r0x01483698:
  if (*(int *)(param_1 + 4) == 0) {
LAB_014836cc:
    if (iVar2 != 0) goto LAB_014836d4;
    local_2c = '\x05';
    goto LAB_014836e4;
  }
  goto LAB_0148366c;
}

