// FUN_01a4c010 @ 01a4c010 size=108 calls_out=2 calls_in=6
// strings: 

void FUN_01a4c010(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_01a4ac30(param_2,param_3,param_4);
  uVar2 = (uint)(uVar3 >> 0x20);
  if ((uVar3 & 1) == 0) {
    *param_1 = 0;
    return;
  }
  if (*(uint *)(param_2 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,*(uint *)(param_2 + 0x18),&DAT_01d2c134);
  }
  iVar1 = *(int *)(param_2 + 0x14);
  param_1[1] = uVar2;
  iVar1 = iVar1 + uVar2 * 0xc0;
  param_1[2] = iVar1;
  *param_1 = iVar1 + 0x70;
  return;
}

