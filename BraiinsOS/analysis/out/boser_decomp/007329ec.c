// FUN_007329ec @ 007329ec size=104 calls_out=1 calls_in=2
// strings: 

int FUN_007329ec(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  if ((param_1[1] <= param_2[3] && (uint)(param_2[2] <= *param_1) <= param_1[1] - param_2[3]) &&
     (param_2[1] <= param_1[3] && (uint)(param_1[2] <= *param_2) <= param_2[1] - param_1[3])) {
    uVar2 = param_2[6];
    uVar3 = *(uint *)(param_1[4] + 0xc);
    if (uVar3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar2,uVar3,&DAT_01c07978);
    }
    iVar1 = uVar2 * 0x160 + *(int *)(param_1[4] + 8);
  }
  return iVar1;
}

