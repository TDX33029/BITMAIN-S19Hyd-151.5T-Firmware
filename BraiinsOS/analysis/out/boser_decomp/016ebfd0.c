// FUN_016ebfd0 @ 016ebfd0 size=168 calls_out=3 calls_in=2
// strings: 

void FUN_016ebfd0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2[2] == 0) {
    iVar2 = param_2[4];
    iVar3 = param_2[5];
    iVar4 = param_2[6];
    iVar5 = param_2[7];
    iVar6 = param_2[8];
    param_1[1] = param_2[3];
    param_1[2] = iVar2;
    param_1[3] = iVar3;
    param_1[4] = iVar4;
    param_1[5] = iVar5;
    param_1[6] = iVar6;
    *param_1 = (int)&DAT_00110000;
  }
  else {
    if (param_2[2] != 1) {
      iVar2 = param_2[1];
      iVar3 = param_2[2];
      iVar4 = param_2[3];
      param_1[1] = *param_2;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      param_1[4] = iVar4;
      iVar2 = param_2[5];
      iVar3 = param_2[6];
      iVar4 = param_2[7];
      iVar5 = param_2[8];
      param_1[5] = param_2[4];
      param_1[6] = iVar2;
      param_1[7] = iVar3;
      param_1[8] = iVar4;
      param_1[9] = iVar5;
      *param_1 = 0x110007;
      return;
    }
    piVar1 = (int *)param_2[1];
    param_2[2] = 0;
    iVar2 = *piVar1;
    if (iVar2 == 0x110008) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d130e8);
    }
    *param_1 = iVar2;
    FUN_01bed4e2(param_1 + 1,piVar1 + 1,0x54);
  }
  FUN_016d8104(param_2);
  return;
}

