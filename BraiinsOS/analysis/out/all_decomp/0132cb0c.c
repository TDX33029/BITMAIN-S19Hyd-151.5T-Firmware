// FUN_0132cb0c @ 0132cb0c size=204 calls_out=5 calls_in=3
// strings: 

undefined4 FUN_0132cb0c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  uVar4 = 0;
  local_1c = 0;
  local_20 = 1;
  local_24 = 0;
  FUN_0132bc10(param_1,param_2,&local_24,(param_3[2] & 0xffffff) >> 0x17,0);
  iVar1 = local_1c;
  uVar3 = local_20;
  if (local_1c < 0) {
LAB_0132cb4c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar4,iVar1);
  }
  if (local_1c == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(local_1c);
    if (iVar2 == 0) {
      uVar4 = 1;
      goto LAB_0132cb4c;
    }
  }
  FUN_016dd1aa(iVar2,uVar3,iVar1);
  if (local_24 != 0) {
    thunk_FUN_016d3fb4(local_20);
  }
  uVar3 = (**(code **)(param_3[1] + 0xc))(*param_3,iVar2,iVar1);
  if (iVar1 != 0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  return uVar3;
}

