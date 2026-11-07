// FUN_016ac4c4 @ 016ac4c4 size=188 calls_out=2 calls_in=2
// strings: 

void FUN_016ac4c4(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = param_2[2];
  if (uVar1 == 0) {
    *param_1 = 0;
    return;
  }
  iVar5 = param_2[4];
  iVar4 = *param_2;
  uVar6 = param_2[3];
  if (uVar1 <= (uint)param_2[3]) {
    uVar6 = uVar1;
  }
  param_2[4] = iVar5 + 1;
  uVar3 = *(uint *)(iVar4 + 0x10c);
  uVar2 = *(uint *)(iVar4 + 8);
  param_2[1] = param_2[1] + uVar6 * 4;
  param_2[2] = uVar1 - uVar6;
  uVar1 = uVar3 & 0x1f;
  if ((uVar2 <= (uint)(iVar5 << uVar1)) || (uVar6 = iVar5 << uVar1, (uVar6 & ~(-1 << uVar1)) != 0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_004ce686,0x23,&DAT_01d086bc);
  }
  uVar1 = *(byte *)(iVar4 + 0x10b) + 2;
  if ((CARRY4(uVar1,uVar6)) || (uVar2 < uVar1 + uVar6)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar6,uVar1 + uVar6,uVar2,&DAT_01d086cc);
  }
  iVar4 = *(int *)(iVar4 + 4);
  param_1[3] = uVar3;
  *param_1 = iVar4 + uVar6 * 4;
  param_1[1] = uVar1;
  param_1[2] = uVar6;
  return;
}

