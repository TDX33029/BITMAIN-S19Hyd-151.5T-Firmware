// FUN_009ef278 @ 009ef278 size=244 calls_out=3 calls_in=0
// strings: 

void FUN_009ef278(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 == (int *)0x0) {
    *param_1 = -0x7fffffff;
    return;
  }
  if (*(char *)((int)param_2 + 0xd) != '\0') {
    iVar2 = *param_2;
    iVar4 = param_2[1];
    iVar5 = param_2[2];
    *param_2 = -0x7fffffff;
    if (iVar2 == -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01883e10);
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(param_2 + 3) = 1;
    *param_1 = iVar2;
    param_1[1] = iVar4;
    param_1[2] = iVar5;
    return;
  }
  DataMemoryBarrier(0xb);
  if ((char)param_2[3] == '\0') {
    uVar6 = 0;
    do {
      while (uVar6 < 7) {
        uVar3 = 1;
        do {
          uVar1 = uVar3 >> (uVar6 & 0xff);
          uVar3 = uVar3 + 1;
          HintYield();
        } while (uVar1 == 0);
        uVar6 = uVar6 + 1;
        DataMemoryBarrier(0xb);
        if ((char)param_2[3] != '\0') goto LAB_009ef330;
      }
      FUN_016da3a8();
      if (uVar6 < 0xb) {
        uVar6 = uVar6 + 1;
      }
      DataMemoryBarrier(0xb);
    } while ((char)param_2[3] == '\0');
  }
LAB_009ef330:
  iVar2 = *param_2;
  iVar4 = param_2[1];
  iVar5 = param_2[2];
  *param_2 = -0x7fffffff;
  if (iVar2 == -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01883e00);
  }
  thunk_FUN_016d3fb4(param_2);
  *param_1 = iVar2;
  param_1[1] = iVar4;
  param_1[2] = iVar5;
  return;
}

