// FUN_0068cbec @ 0068cbec size=196 calls_out=3 calls_in=4
// strings: 

void FUN_0068cbec(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char local_19;
  
  uVar4 = *param_2;
  local_19 = '\0';
  while( true ) {
    iVar1 = FUN_01bf0424(uVar4,&local_19,1);
    if (iVar1 != -1) {
      if (iVar1 == 0) {
        *(undefined1 *)param_1 = 5;
      }
      else {
        iVar1 = param_2[2];
        *(char *)((int)param_1 + 1) = local_19;
        *(undefined1 *)param_1 = 4;
        if (local_19 == '\n') {
          iVar3 = param_2[1];
          iVar5 = param_2[3];
          *(undefined1 *)param_1 = 4;
          param_2[1] = iVar3 + 1;
          param_2[2] = 0;
          param_2[3] = iVar1 + 1 + iVar5;
        }
        else {
          param_2[2] = iVar1 + 1;
        }
      }
      return;
    }
    piVar2 = (int *)FUN_01be3244();
    iVar1 = *piVar2;
    if (iVar1 != 4) break;
    FUN_0069263c(0,4);
  }
  *param_1 = 0;
  param_1[1] = iVar1;
  return;
}

