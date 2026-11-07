// FUN_018ef964 @ 018ef964 size=236 calls_out=7 calls_in=0
// strings: 

undefined8 FUN_018ef964(int *param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_198 [64];
  undefined1 auStack_158 [160];
  undefined1 auStack_b8 [160];
  
  FUN_01bed93e(auStack_198,0,0x40);
  iVar2 = *param_1;
  if (param_2 == (undefined1 *)0x0) {
    param_3 = *(uint *)(iVar2 + 0x48);
    if (0x40 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,param_3,0x40,&DAT_01d23d90);
    }
    param_2 = auStack_198;
  }
  FUN_0188fc54(auStack_b8,iVar2,param_2,param_3);
  if (0x40 < *(uint *)(iVar2 + 0x48)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,*(uint *)(iVar2 + 0x48),0x40,&DAT_01d23da0);
  }
  FUN_01891bc0(auStack_158,auStack_b8,auStack_198);
  iVar1 = thunk_FUN_01be5118(0xa8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xa8);
  }
  FUN_01bed4e2(iVar1,auStack_158,0xa0);
  *(int *)(iVar1 + 0xa0) = iVar2;
  return CONCAT44(&DAT_01d23d68,iVar1);
}

