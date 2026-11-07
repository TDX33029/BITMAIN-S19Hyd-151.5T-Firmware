// FUN_018efc94 @ 018efc94 size=136 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_018efc94(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_b0 [160];
  
  if (0x40 < *(uint *)(param_2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,*(uint *)(param_2 + 0x40),0x40,&DAT_01d24fd8);
  }
  uVar2 = *param_1;
  FUN_0188fc54(auStack_b0,uVar2,param_2);
  iVar1 = thunk_FUN_01be5118(0xa8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xa8);
  }
  FUN_01bed4e2(iVar1,auStack_b0,0xa0);
  *(undefined4 *)(iVar1 + 0xa0) = uVar2;
  return CONCAT44(&DAT_01d23d68,iVar1);
}

