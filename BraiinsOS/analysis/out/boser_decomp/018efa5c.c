// FUN_018efa5c @ 018efa5c size=212 calls_out=7 calls_in=1
// strings: 

undefined8
FUN_018efa5c(int *param_1,undefined1 *param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1a0 [64];
  undefined1 auStack_160 [160];
  undefined1 auStack_c0 [160];
  
  FUN_01bed93e(auStack_1a0,0,0x40);
  iVar2 = *param_1;
  if (param_2 == (undefined1 *)0x0) {
    param_3 = *(uint *)(iVar2 + 0x48);
    if (0x40 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,param_3,0x40,&DAT_01d23d80);
    }
    param_2 = auStack_1a0;
  }
  FUN_0188fc54(auStack_c0,iVar2,param_2,param_3);
  FUN_01891bc0(auStack_160,auStack_c0,param_4,param_5);
  iVar1 = thunk_FUN_01be5118(0xa8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xa8);
  }
  FUN_01bed4e2(iVar1,auStack_160,0xa0);
  *(int *)(iVar1 + 0xa0) = iVar2;
  return CONCAT44(&DAT_01d23d68,iVar1);
}

