// FUN_014994d0 @ 014994d0 size=112 calls_out=3 calls_in=5
// strings: 

undefined8 FUN_014994d0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  uVar1 = param_2 * 4;
  bVar4 = 0x3ffffffe < param_2;
  bVar3 = param_2 == 0x3fffffff;
  if (param_2 < 0x40000000) {
    bVar4 = 0x7ffffffd < uVar1;
    bVar3 = uVar1 == 0x7ffffffe;
  }
  if (bVar4 && !bVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  if (uVar1 == 0) {
    iVar2 = 2;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(uVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(2,uVar1);
    }
  }
  FUN_016dd1aa(iVar2,param_1,uVar1);
  return CONCAT44(param_2,iVar2);
}

