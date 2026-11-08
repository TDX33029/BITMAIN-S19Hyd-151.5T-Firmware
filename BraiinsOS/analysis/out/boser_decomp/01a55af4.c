// FUN_01a55af4 @ 01a55af4 size=92 calls_out=3 calls_in=2
// strings: 

int FUN_01a55af4(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != -0x80000000) {
    iVar3 = FUN_01a4be0c(param_1,param_2);
    return iVar3;
  }
  uVar2 = param_1[2];
  uVar1 = *(uint *)(param_1[1] + 8);
  if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,uVar1,&DAT_01d2c114);
  }
  iVar3 = *(int *)(param_1[1] + 4);
  FUN_01a554c0(param_2);
  return iVar3 + uVar2 * 0xc0;
}

