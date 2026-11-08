// FUN_0148370c @ 0148370c size=268 calls_out=2 calls_in=0
// strings: 

void FUN_0148370c(char *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

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
      goto LAB_014837f0;
    }
    piVar1 = (int *)(iVar3 + 4);
    iVar2 = iVar2 + -8;
    iVar3 = iVar3 + 8;
  } while (*piVar1 == 0);
  do {
    FUN_014dfd80(&local_2c,param_2 + 0x10,param_4,param_5);
    iVar2 = local_28;
    if (local_2c != '\x04') {
      param_1[3] = local_29;
      *(undefined2 *)(param_1 + 1) = local_2b;
      *(int *)(param_1 + 4) = local_28;
      goto LAB_014837f0;
    }
LAB_01483778:
    if (*(int *)(param_2 + 0x218) != 0) {
      FUN_014bd320(param_1,param_2,param_2 + 0x10,param_3);
      if (*param_1 == '\x04') goto code_r0x014837a4;
      if (*param_1 != '\x05') {
        return;
      }
      goto LAB_014837d8;
    }
  } while (iVar2 == 0);
LAB_014837e0:
  *(int *)(param_1 + 4) = iVar2;
  local_2c = '\x04';
LAB_014837f0:
  *param_1 = local_2c;
  return;
code_r0x014837a4:
  if (*(int *)(param_1 + 4) == 0) {
LAB_014837d8:
    if (iVar2 != 0) goto LAB_014837e0;
    local_2c = '\x05';
    goto LAB_014837f0;
  }
  goto LAB_01483778;
}

