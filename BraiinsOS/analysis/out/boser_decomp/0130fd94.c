// FUN_0130fd94 @ 0130fd94 size=184 calls_out=1 calls_in=5
// strings: 

void FUN_0130fd94(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_4 != 0) {
    iVar4 = 0;
    do {
      pcVar1 = (char *)(param_2 + iVar4);
      pcVar2 = (char *)(param_3 + iVar4);
      if (iVar4 == 0) break;
      iVar4 = iVar4 + 1;
    } while (*pcVar2 == *pcVar1);
    if (*pcVar2 == *pcVar1) {
      if ((param_4 != 1) && (*(char *)(param_3 + 1) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_3,param_4,0,1,&DAT_01d2e668);
      }
      param_1[4] = 1;
      param_1[1] = param_3 + 1;
      uVar3 = 0;
      param_1[2] = param_4 + -1;
      param_1[3] = param_3;
      goto LAB_0130fe20;
    }
  }
  *(undefined1 *)(param_1 + 4) = 0;
  uVar3 = 1;
  param_1[1] = 1;
  param_1[2] = param_3;
  param_1[3] = param_4;
LAB_0130fe20:
  *param_1 = uVar3;
  return;
}

