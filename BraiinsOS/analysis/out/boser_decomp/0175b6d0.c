// FUN_0175b6d0 @ 0175b6d0 size=264 calls_out=2 calls_in=4
// strings: 

void FUN_0175b6d0(uint *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint local_30;
  uint local_2c;
  
  iVar4 = param_5 << 3;
  iVar5 = param_4;
  do {
    if (iVar4 == 0) {
      param_1[1] = 0;
      goto LAB_0175b7b8;
    }
    piVar1 = (int *)(iVar5 + 4);
    iVar4 = iVar4 + -8;
    iVar5 = iVar5 + 8;
  } while (*piVar1 == 0);
  do {
    FUN_0191d274(&local_30,param_2 + 0x10,param_4,param_5);
    uVar2 = local_2c;
    if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) {
      *param_1 = local_30;
      param_1[1] = local_2c;
      return;
    }
LAB_0175b750:
    if (*(int *)(param_2 + 0x218) != 0) {
      FUN_016f71dc(param_1,param_2,param_2 + 0x10,param_3);
      if ((char)*param_1 == '\x04') goto code_r0x0175b77c;
      if ((char)*param_1 != '\x05') {
        return;
      }
      goto LAB_0175b7ac;
    }
  } while (uVar2 == 0);
LAB_0175b7b4:
  param_1[1] = uVar2;
LAB_0175b7b8:
  cVar3 = '\x04';
LAB_0175b7bc:
  *(char *)param_1 = cVar3;
  return;
code_r0x0175b77c:
  if (param_1[1] == 0) {
LAB_0175b7ac:
    if (uVar2 != 0) goto LAB_0175b7b4;
    cVar3 = '\x05';
    goto LAB_0175b7bc;
  }
  goto LAB_0175b750;
}

