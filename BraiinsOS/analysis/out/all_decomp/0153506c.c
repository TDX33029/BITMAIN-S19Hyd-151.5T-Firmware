// FUN_0153506c @ 0153506c size=304 calls_out=8 calls_in=0
// strings: 

undefined8 FUN_0153506c(int *param_1,undefined1 *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [76];
  int local_74;
  undefined1 auStack_70 [76];
  undefined1 auStack_24 [4];
  int *local_20;
  undefined4 local_1c;
  
  FUN_016dd606(auStack_100,0,0x40);
  iVar3 = *param_1;
  if (param_2 == (undefined1 *)0x0) {
    param_3 = *(uint *)(iVar3 + 0xc);
    if (0x40 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,param_3,0x40,&DAT_018a7cb0);
    }
    param_2 = auStack_100;
  }
  FUN_00605010(auStack_24,iVar3,param_2,param_3);
  if (0x40 < *(uint *)(iVar3 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,*(uint *)(iVar3 + 0xc),0x40,&DAT_018a7cc0);
  }
  FUN_01535f14(auStack_70,auStack_24,auStack_100);
  local_74 = iVar3;
  FUN_016dd1aa(auStack_c0,auStack_70,0x4c);
  iVar3 = thunk_FUN_016d4a50(0x50);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x50);
  }
  FUN_016dd1aa(iVar3,auStack_c0,0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *local_20;
    bVar1 = (bool)hasExclusiveAccess(local_20);
  } while (!bVar1);
  *local_20 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(local_20,local_1c);
  }
  return CONCAT44(&DAT_018a7c88,iVar3);
}

