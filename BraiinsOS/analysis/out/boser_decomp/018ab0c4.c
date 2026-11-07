// FUN_018ab0c4 @ 018ab0c4 size=172 calls_out=3 calls_in=0
// strings: 

void FUN_018ab0c4(char *param_1,int param_2,int *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar4 = param_3[2];
  FUN_0189baf4(param_3,&DAT_00523849,1);
  if (param_2 == 0) {
    uVar1 = param_3[2];
  }
  else {
    pcVar5 = param_1 + param_2 * 2;
    do {
      iVar3 = param_3[2];
      cVar2 = param_1[1];
      if (*param_1 != '\x03') {
        cVar2 = *param_1;
      }
      if (iVar3 == *param_3) {
        FUN_006666a0(param_3);
      }
      uVar1 = iVar3 + 1;
      param_1 = param_1 + 2;
      param_3[2] = uVar1;
      *(char *)(param_3[1] + iVar3) = cVar2;
    } while (param_1 != pcVar5);
  }
  if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar4,uVar1,&DAT_01d223f4);
  }
  *(byte *)(param_3[1] + uVar4) = (char)uVar1 + ~(byte)uVar4;
  return;
}

