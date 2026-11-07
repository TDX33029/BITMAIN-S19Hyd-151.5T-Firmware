// FUN_01684564 @ 01684564 size=80 calls_out=2 calls_in=4
// strings: 

undefined4 FUN_01684564(int param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x154) == 1) {
    return 0;
  }
  uVar1 = (param_5 & 0x7ffffff) >> (param_2 & 0x1f);
  if (param_4 <= (param_5 & 0x7ffffff) >> (param_2 & 0x1f)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,param_4,&DAT_01d09420);
  }
  puVar3 = (undefined4 *)(param_3 + uVar1 * 8);
  uVar2 = FUN_0168c724(*puVar3,puVar3[1],0);
  return uVar2;
}

