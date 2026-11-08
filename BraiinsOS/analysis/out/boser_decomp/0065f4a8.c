// FUN_0065f4a8 @ 0065f4a8 size=208 calls_out=6 calls_in=2
// strings: 

void FUN_0065f4a8(int *param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_1[2];
  if (0xffff < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_003d4096,0x37,&DAT_01c03ce8);
  }
  iVar3 = param_1[5];
  if (iVar3 == param_1[3]) {
    FUN_01a54b48();
  }
  *(uint *)(param_1[4] + iVar3 * 4) = uVar4;
  param_1[5] = iVar3 + 1;
  uVar4 = FUN_01298504(param_3,1);
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_3);
  }
  FUN_01bed4e2(uVar4,param_2,param_3);
  iVar3 = param_1[2];
  if (iVar3 == *param_1) {
    FUN_0199b2b0(param_1);
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

