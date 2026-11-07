// FUN_015fde00 @ 015fde00 size=164 calls_out=3 calls_in=1
// strings: 

void FUN_015fde00(int *param_1,undefined4 param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  if (param_3 < 0) {
LAB_015fde14:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,param_3);
  }
  if (param_3 == 0) {
    pbVar1 = &DAT_00000001;
    FUN_01bed4e2(1,param_2,0);
    iVar3 = 0;
  }
  else {
    uVar5 = 1;
    pbVar1 = (byte *)FUN_01298504(param_3,1);
    if (pbVar1 == (byte *)0x0) goto LAB_015fde14;
    FUN_01bed4e2(pbVar1,param_2,param_3);
    pbVar2 = pbVar1;
    iVar3 = param_3;
    do {
      bVar4 = *pbVar2;
      if (bVar4 - 0x41 < 0x1a) {
        bVar4 = bVar4 | 0x20;
      }
      *pbVar2 = bVar4;
      iVar3 = iVar3 + -1;
      pbVar2 = pbVar2 + 1;
    } while (iVar3 != 0);
    iVar3 = param_3;
  }
  *param_1 = iVar3;
  param_1[1] = (int)pbVar1;
  param_1[2] = param_3;
  return;
}

