// FUN_00736d7c @ 00736d7c size=84 calls_out=1 calls_in=2
// strings: 

uint FUN_00736d7c(int param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *param_3;
  uVar2 = 0;
  iVar4 = 4;
  while( true ) {
    if (param_2 <= uVar3) {
      uVar3 = 0;
      *param_3 = 0;
    }
    if (param_2 <= uVar3) break;
    bVar1 = *(byte *)(param_1 + uVar3);
    uVar3 = uVar3 + 1;
    iVar4 = iVar4 + -1;
    *param_3 = uVar3;
    uVar2 = (uint)bVar1 | uVar2 << 8;
    if (iVar4 == 0) {
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar3,param_2,&DAT_01c07cf0);
}

