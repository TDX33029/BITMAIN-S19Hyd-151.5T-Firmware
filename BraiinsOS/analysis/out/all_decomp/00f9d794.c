// FUN_00f9d794 @ 00f9d794 size=228 calls_out=4 calls_in=0
// strings: 

void FUN_00f9d794(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  if ((int *)*param_2 != (int *)param_2[1]) {
    piVar3 = (int *)*param_2;
    do {
      piVar2 = piVar3 + 4;
      if (*piVar3 == 1) {
        *param_2 = (int)piVar2;
        FUN_006008c8(&iStack_24,piVar3[1],piVar3[2]);
        if (iStack_24 != -0x80000000) {
          *param_1 = iStack_24;
          param_1[1] = iStack_20;
          param_1[2] = iStack_1c;
          return;
        }
        if (iStack_1c < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(0,iStack_1c);
        }
        if (iStack_1c == 0) {
          iVar4 = 0;
          iVar1 = 1;
        }
        else {
          iVar1 = thunk_FUN_016d4a50(iStack_1c);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iStack_1c);
          }
          iVar4 = iStack_1c;
        }
        FUN_016dd1aa(iVar1,iStack_20,iStack_1c);
        *param_1 = iVar4;
        param_1[1] = iVar1;
        param_1[2] = iStack_1c;
        return;
      }
      piVar3 = piVar2;
    } while (piVar2 != (int *)param_2[1]);
    *param_2 = (int)piVar2;
  }
  *param_1 = -0x80000000;
  return;
}

