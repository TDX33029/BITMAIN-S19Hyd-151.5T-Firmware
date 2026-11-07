// FUN_005fd0c0 @ 005fd0c0 size=216 calls_out=6 calls_in=2
// strings: 

void FUN_005fd0c0(int *param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_1[2];
  if (0xffff < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_0033d691,0x37,&DAT_01857368);
  }
  iVar3 = param_1[5];
  if (iVar3 == param_1[3]) {
    FUN_005fd37c(param_1 + 3);
  }
  *(uint *)(param_1[4] + iVar3 * 4) = uVar4;
  param_1[5] = iVar3 + 1;
  uVar4 = thunk_FUN_016d4a50(param_3);
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_3);
  }
  FUN_016dd1aa(uVar4,param_2,param_3);
  iVar3 = param_1[2];
  if (iVar3 == *param_1) {
    FUN_015e0a80(param_1);
  }
  param_1[2] = iVar3 + 1;
  uVar2 = param_1[6];
  if (param_3 < (uint)param_1[6]) {
    uVar2 = param_3;
  }
  param_1[6] = uVar2;
  param_1[7] = param_1[7] + param_3;
  puVar1 = (uint *)(param_1[1] + iVar3 * 0xc);
  *puVar1 = param_3;
  puVar1[1] = uVar4;
  puVar1[2] = param_3;
  return;
}

