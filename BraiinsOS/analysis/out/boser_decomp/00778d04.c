// FUN_00778d04 @ 00778d04 size=168 calls_out=4 calls_in=0
// strings: JoinHandle polled after completion

void FUN_00778d04(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_158 [80];
  
  iVar1 = FUN_019d72c4(param_1,param_1 + 0x168,*param_3,param_3[1]);
  if (iVar1 != 0) {
    FUN_01bed4e2(local_158,param_1 + 0x28,0x140);
    *(undefined4 *)(param_1 + 0x28) = 2;
    if (local_158[0] != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("JoinHandle polled after completion",0x45,&DAT_01d2e12c);
    }
    iVar1 = *(int *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x34);
    iVar3 = *(int *)(param_1 + 0x38);
    iVar4 = *(int *)(param_1 + 0x3c);
    if (*param_2 == 0 && param_2[1] == 0) {
      FUN_00756144(param_2 + 2);
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = iVar1;
    param_2[3] = iVar2;
    param_2[4] = iVar3;
    param_2[5] = iVar4;
  }
  return;
}

