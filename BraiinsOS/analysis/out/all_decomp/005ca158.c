// FUN_005ca158 @ 005ca158 size=164 calls_out=3 calls_in=0
// strings: 

void FUN_005ca158(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_016343a0(param_1,param_1 + 0x48,*param_3,param_3[1]);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00413073,0x45,&DAT_018ac3a0);
    }
    iVar1 = *(int *)(param_1 + 0x38);
    iVar2 = *(int *)(param_1 + 0x3c);
    iVar3 = *(int *)(param_1 + 0x40);
    iVar4 = *(int *)(param_1 + 0x44);
    if (*param_2 == 0 && param_2[1] == 0) {
      FUN_00640fa4(param_2 + 2);
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

