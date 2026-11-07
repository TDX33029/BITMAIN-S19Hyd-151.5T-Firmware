// FUN_012b106c @ 012b106c size=140 calls_out=2 calls_in=0
// strings: 

void FUN_012b106c(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_38;
  int iStack_34;
  int iStack_30;
  undefined1 auStack_2c [12];
  
  piVar4 = (int *)param_2[1];
  if ((int *)*param_2 != piVar4) {
    piVar1 = (int *)*param_2;
    do {
      piVar3 = piVar1 + 4;
      iVar2 = *piVar1;
      *param_2 = (int)piVar3;
      if (iVar2 == 1) {
        FUN_006643f0(auStack_2c,piVar1[1],piVar1[2]);
        FUN_0160ec7c(&local_38,auStack_2c);
        if (local_38 != -0x80000000) {
          *param_1 = local_38;
          param_1[1] = iStack_34;
          param_1[2] = iStack_30;
          return;
        }
      }
      piVar1 = piVar3;
    } while (piVar3 != piVar4);
  }
  *param_1 = -0x80000000;
  return;
}

