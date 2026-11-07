// FUN_014bfbb0 @ 014bfbb0 size=336 calls_out=3 calls_in=0
// strings: 

void FUN_014bfbb0(char *param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char local_2c;
  undefined2 local_2b;
  char local_29;
  int local_28;
  
  if (*param_2 == 2) {
    FUN_016412e8(param_1,param_2 + 1,param_3,param_4,param_5);
    return;
  }
  iVar2 = param_5 << 3;
  iVar3 = param_4;
  do {
    if (iVar2 == 0) {
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      *param_1 = '\x04';
      return;
    }
    piVar1 = (int *)(iVar3 + 4);
    iVar2 = iVar2 + -8;
    iVar3 = iVar3 + 8;
  } while (*piVar1 == 0);
  do {
    FUN_014dfd80(&local_2c,param_2 + 4,param_4,param_5);
    iVar2 = local_28;
    if (local_2c != '\x04') {
      param_1[3] = local_29;
      *(undefined2 *)(param_1 + 1) = local_2b;
      *(int *)(param_1 + 4) = local_28;
      *param_1 = local_2c;
      return;
    }
LAB_014bfc44:
    if (param_2[0x86] != 0) {
      FUN_014bd320(param_1,param_2,param_2 + 4,param_3);
      if (*param_1 == '\x04') break;
      if (*param_1 != '\x05') {
        return;
      }
      goto LAB_014bfcb0;
    }
    if (iVar2 != 0) {
LAB_014bfcb8:
      *(int *)(param_1 + 4) = iVar2;
      *param_1 = '\x04';
      return;
    }
  } while( true );
  if (*(int *)(param_1 + 4) == 0) {
LAB_014bfcb0:
    if (iVar2 == 0) {
      *param_1 = '\x05';
      return;
    }
    goto LAB_014bfcb8;
  }
  goto LAB_014bfc44;
}

