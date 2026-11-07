// FUN_01876620 @ 01876620 size=76 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_01876620(int param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar1 = 0;
  if (uVar2 != uVar3) {
    if (uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar3,uVar2,uVar2,&DAT_01d20b48);
    }
    *param_2 = *(int *)(param_1 + 4) + uVar3;
    param_2[1] = uVar2 - uVar3;
    uVar1 = 1;
  }
  return uVar1;
}

