// FUN_005f03dc @ 005f03dc size=256 calls_out=4 calls_in=1
// strings: 

void FUN_005f03dc(int param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  param_2 = param_2 >> (*(uint *)(param_1 + 0x3c) & 0x1f);
  if (param_2 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01856d18);
  }
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0033d566,0x49,&DAT_01856cf8);
  }
  param_2 = param_2 - 2;
  if (param_2 < *(uint *)(param_1 + 0x14)) {
    piVar4 = (int *)(*(int *)(param_1 + 0x10) + param_2 * 0xc);
    iVar1 = *(int *)(param_1 + 0x24);
    while (iVar1 = iVar1 + 4, param_5 < param_4) {
      iVar5 = piVar4[2];
      puVar3 = (undefined4 *)(param_3 + param_5 * 8);
      uVar6 = *puVar3;
      param_5 = puVar3[1];
      if (iVar5 == *piVar4) {
        FUN_005fd37c(piVar4);
      }
      iVar2 = piVar4[1];
      *(int *)(param_1 + 0x24) = iVar1;
      *(undefined4 *)(iVar2 + iVar5 * 4) = uVar6;
      piVar4[2] = iVar5 + 1;
      if (param_5 == 0) {
        return;
      }
    }
  }
  else if (param_5 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_2,*(uint *)(param_1 + 0x14),&DAT_01856d08);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(param_5,param_4,&DAT_01857348);
}

