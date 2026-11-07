// FUN_01862d58 @ 01862d58 size=264 calls_out=2 calls_in=1
// strings: 

void FUN_01862d58(uint *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

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
      goto LAB_01862e40;
    }
    piVar1 = (int *)(iVar5 + 4);
    iVar4 = iVar4 + -8;
    iVar5 = iVar5 + 8;
  } while (*piVar1 == 0);
  do {
    FUN_0191d274(&local_30,param_2,param_4,param_5);
    uVar2 = local_2c;
    if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) {
      *param_1 = local_30;
      param_1[1] = local_2c;
      return;
    }
LAB_01862dd8:
    if (*(int *)(param_2 + 0x208) != 0) {
      FUN_018631e8(param_1,param_2 + 0x2d0,param_2,param_3);
      if ((char)*param_1 == '\x04') goto code_r0x01862e04;
      if ((char)*param_1 != '\x05') {
        return;
      }
      goto LAB_01862e34;
    }
  } while (uVar2 == 0);
LAB_01862e3c:
  param_1[1] = uVar2;
LAB_01862e40:
  cVar3 = '\x04';
LAB_01862e44:
  *(char *)param_1 = cVar3;
  return;
code_r0x01862e04:
  if (param_1[1] == 0) {
LAB_01862e34:
    if (uVar2 != 0) goto LAB_01862e3c;
    cVar3 = '\x05';
    goto LAB_01862e44;
  }
  goto LAB_01862dd8;
}

