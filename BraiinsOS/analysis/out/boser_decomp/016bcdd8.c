// FUN_016bcdd8 @ 016bcdd8 size=168 calls_out=2 calls_in=0
// strings: 

uint FUN_016bcdd8(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(param_2,uVar3,uVar3,&DAT_01d09240);
  }
  uVar3 = uVar3 - param_2;
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d08f28);
  }
  pbVar4 = (byte *)(*(int *)(param_1 + 4) + param_2 * 4);
  bVar1 = *pbVar4;
  if (bVar1 == 0xff) {
    uVar2 = *(int *)(param_1 + 0x28) + 2;
    if (uVar3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar2,uVar3,&DAT_01d08f48);
    }
  }
  else {
    iVar5 = (uint)bVar1 + (uint)(bVar1 >> 2);
    uVar2 = iVar5 + 2;
    if ((bVar1 & 3) != 0) {
      uVar2 = iVar5 + 3;
    }
    if (uVar3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar2,uVar3,&DAT_01d08f38);
    }
  }
  uVar3 = *(uint *)(pbVar4 + uVar2 * 4);
  if (0x7fffffff < uVar3) {
    uVar3 = 1;
  }
  return uVar3;
}

