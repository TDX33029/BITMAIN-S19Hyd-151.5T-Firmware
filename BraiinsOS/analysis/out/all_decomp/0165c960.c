// FUN_0165c960 @ 0165c960 size=176 calls_out=3 calls_in=0
// strings: 

void FUN_0165c960(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = FUN_016343a0(param_1,param_1 + 0x58,*param_3,param_3[1]);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00413073,0x45,&DAT_018ac3a0);
    }
    iVar1 = *(int *)(param_1 + 0x38);
    iVar3 = *(int *)(param_1 + 0x3c);
    iVar5 = *(int *)(param_1 + 0x40);
    iVar7 = *(int *)(param_1 + 0x44);
    iVar2 = *(int *)(param_1 + 0x48);
    iVar4 = *(int *)(param_1 + 0x4c);
    iVar6 = *(int *)(param_1 + 0x50);
    iVar8 = *(int *)(param_1 + 0x54);
    if (*param_2 != 5) {
      FUN_0163472c(param_2);
    }
    *param_2 = iVar1;
    param_2[1] = iVar3;
    param_2[2] = iVar5;
    param_2[3] = iVar7;
    param_2[4] = iVar2;
    param_2[5] = iVar4;
    param_2[6] = iVar6;
    param_2[7] = iVar8;
  }
  return;
}

