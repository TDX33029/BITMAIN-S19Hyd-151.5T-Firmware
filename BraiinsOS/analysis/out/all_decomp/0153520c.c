// FUN_0153520c @ 0153520c size=280 calls_out=8 calls_in=1
// strings: 

undefined8
FUN_0153520c(int *param_1,undefined1 *param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_108 [64];
  undefined1 auStack_c8 [76];
  int local_7c;
  undefined1 auStack_78 [76];
  undefined1 auStack_2c [4];
  int *local_28;
  undefined4 local_24;
  
  FUN_016dd606(auStack_108,0,0x40);
  iVar3 = *param_1;
  if (param_2 == (undefined1 *)0x0) {
    param_3 = *(uint *)(iVar3 + 0xc);
    if (0x40 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,param_3,0x40,&DAT_018a7ca0);
    }
    param_2 = auStack_108;
  }
  FUN_00605010(auStack_2c,iVar3,param_2,param_3);
  FUN_01535f14(auStack_78,auStack_2c,param_4,param_5);
  local_7c = iVar3;
  FUN_016dd1aa(auStack_c8,auStack_78,0x4c);
  iVar3 = thunk_FUN_016d4a50(0x50);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x50);
  }
  FUN_016dd1aa(iVar3,auStack_c8,0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *local_28;
    bVar1 = (bool)hasExclusiveAccess(local_28);
  } while (!bVar1);
  *local_28 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(local_28,local_24);
  }
  return CONCAT44(&DAT_018a7c88,iVar3);
}

