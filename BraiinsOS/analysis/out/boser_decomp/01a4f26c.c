// FUN_01a4f26c @ 01a4f26c size=292 calls_out=6 calls_in=2
// strings: 

void FUN_01a4f26c(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar2 = *param_2;
  pcVar4 = (char *)param_2[2];
  pcVar6 = pcVar4;
  iVar7 = param_2[3];
  do {
    iVar3 = iVar7;
    pcVar5 = pcVar6;
    FUN_01a4e62c(&local_3c,param_2);
    if (local_3c != 3) {
LAB_01a4f328:
      *param_1 = local_3c;
      param_1[1] = local_38;
      param_1[2] = local_34;
      param_1[3] = local_30;
      param_1[4] = iStack_2c;
      param_1[5] = iStack_28;
      return;
    }
    pcVar6 = (char *)param_2[2];
    if (param_2[3] == 0) {
      FUN_0134aee0(0,4,4,0xc);
      FUN_012d40d0(0);
      break;
    }
    cVar1 = *pcVar6;
    if (cVar1 != '\n' && cVar1 != '\r') {
      if (cVar1 != '#') break;
      FUN_01a4f390(&local_3c,param_2);
      if (local_3c != 3) goto LAB_01a4f328;
    }
    FUN_01a4f43c(&local_3c,param_2);
    if (local_3c != 3) goto LAB_01a4f328;
    pcVar6 = (char *)param_2[2];
    iVar7 = param_2[3];
  } while ((iVar3 != iVar7) || (iVar3 = thunk_FUN_01bed842(pcVar5,pcVar6,iVar3), iVar3 != 0));
  iVar7 = *param_2;
  *param_1 = 3;
  param_1[1] = (int)pcVar4 - iVar2;
  param_1[2] = (int)pcVar6 - iVar7;
  return;
}

