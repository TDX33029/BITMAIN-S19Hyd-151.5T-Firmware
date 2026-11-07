// FUN_015405b4 @ 015405b4 size=260 calls_out=1 calls_in=3
// strings: 

void FUN_015405b4(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  if (uVar3 - uVar4 < 3) {
    *(undefined1 *)(param_1 + 1) = 0xc;
    param_1[2] = &DAT_0040bf71;
    *param_1 = 1;
    param_1[3] = 3;
    return;
  }
  uVar1 = uVar4 + 3;
  param_2[2] = uVar1;
  if ((0xfffffffc < uVar4) || (uVar3 < uVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar4,uVar1,uVar3,&DAT_018a78f8);
  }
  iVar6 = *param_2;
  pbVar2 = (byte *)(iVar6 + uVar4);
  uVar4 = (uint)*pbVar2 << 0x10 | (uint)pbVar2[1] << 8 | (uint)pbVar2[2];
  if (uVar3 - uVar1 < uVar4) {
    param_1[1] = 0xb;
    *param_1 = 1;
    param_1[3] = 0;
    return;
  }
  uVar5 = uVar1 + uVar4;
  param_2[2] = uVar5;
  if ((CARRY4(uVar1,uVar4)) || (uVar3 < uVar5)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar1,uVar5,uVar3,&DAT_018a78f8);
  }
  param_1[1] = 0x80000000;
  param_1[2] = iVar6 + uVar1;
  *param_1 = 0;
  param_1[3] = uVar4;
  return;
}

