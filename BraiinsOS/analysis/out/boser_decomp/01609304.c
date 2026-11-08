// FUN_01609304 @ 01609304 size=132 calls_out=2 calls_in=1
// strings: 

uint FUN_01609304(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x8000);
  uVar2 = param_2[1];
  uVar6 = *(uint *)(param_1 + 0x8004);
  uVar3 = uVar6;
  if (uVar2 < uVar6) {
    uVar3 = uVar2;
  }
  uVar5 = uVar1 + uVar3;
  if ((CARRY4(uVar1,uVar3)) || (0x8000 < uVar5)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar1,uVar5,0x8000,&DAT_01d05e00);
  }
  iVar4 = *param_2;
  FUN_01bed4e2(iVar4,param_1 + uVar1,uVar3);
  *param_2 = iVar4 + uVar3;
  param_2[1] = uVar2 - uVar3;
  *(uint *)(param_1 + 0x8000) = uVar5 & 0x7fff;
  *(uint *)(param_1 + 0x8004) = uVar6 - uVar3;
  return uVar3;
}

