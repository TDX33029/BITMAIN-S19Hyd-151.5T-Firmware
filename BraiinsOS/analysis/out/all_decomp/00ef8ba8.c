// FUN_00ef8ba8 @ 00ef8ba8 size=300 calls_out=2 calls_in=3
// strings: 

void FUN_00ef8ba8(undefined1 *param_1,int *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 local_24 [3];
  
  cVar3 = *(char *)((int)param_2 + 0x21);
  iVar4 = param_2[8];
  *(undefined1 *)(param_2 + 8) = 0;
  if ((char)iVar4 == '\x01') {
    if (*param_2 == -0x80000000) goto LAB_00ef8c58;
    iVar4 = param_2[2];
    if (iVar4 == *param_2) {
LAB_00ef8cb8:
      FUN_006029c0(param_2);
    }
  }
  else {
    pcVar2 = (char *)param_2[3];
    if (param_2[4] == 0) {
      param_2[3] = (int)pcVar2;
      local_24[0] = 4;
      uVar1 = FUN_0157c50c(local_24,param_2[5],param_2[6]);
      *(undefined4 *)(param_1 + 4) = uVar1;
      *param_1 = 1;
      return;
    }
    cVar3 = *pcVar2;
    param_2[3] = (int)(pcVar2 + 1);
    iVar4 = param_2[6] + 1;
    param_2[4] = param_2[4] + -1;
    if (cVar3 == '\n') {
      param_2[7] = iVar4 + param_2[7];
      param_2[5] = param_2[5] + 1;
      iVar4 = 0;
    }
    param_2[6] = iVar4;
    if (*param_2 == -0x80000000) goto LAB_00ef8c58;
    iVar4 = param_2[2];
    if (iVar4 == *param_2) goto LAB_00ef8cb8;
  }
  *(char *)(param_2[1] + iVar4) = cVar3;
  param_2[2] = iVar4 + 1;
LAB_00ef8c58:
  param_1[1] = cVar3;
  *param_1 = 0;
  return;
}

