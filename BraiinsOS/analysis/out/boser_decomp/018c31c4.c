// FUN_018c31c4 @ 018c31c4 size=140 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_018c31c4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_14;
  
  if (param_4 != 4) {
                    /* WARNING: Subroutine does not return */
    FUN_013070f0(4,param_4,&DAT_01d229e0);
  }
  local_14 = 0;
  uVar3 = *param_3;
  iVar2 = FUN_01be5878(&local_14,0x10,0x230);
  iVar1 = local_14;
  if ((iVar2 != 0) || (local_14 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(0x10,0x230);
  }
  FUN_01bed4e2(local_14,param_2,0x220);
  *(undefined4 *)(iVar1 + 0x220) = uVar3;
  return CONCAT44(&UNK_01d229f0,iVar1);
}

