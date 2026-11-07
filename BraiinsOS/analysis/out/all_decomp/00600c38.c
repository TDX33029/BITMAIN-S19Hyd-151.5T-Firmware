// FUN_00600c38 @ 00600c38 size=200 calls_out=4 calls_in=5
// strings: 

undefined8 FUN_00600c38(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  uVar2 = *param_1;
  uVar4 = param_1[2];
  if (uVar2 == uVar4) {
    FUN_00600b74(&local_24,uVar4,param_1[1],uVar4 + 1);
    if (local_24 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(local_20,local_1c);
    }
    *(undefined1 *)(local_20 + uVar4) = 0;
    return CONCAT44(uVar4 + 1,local_20);
  }
  uVar1 = param_1[1];
  uVar3 = uVar4 + 1;
  *(undefined1 *)(uVar1 + uVar4) = 0;
  if (uVar3 < uVar2) {
    if (uVar3 == 0) {
      thunk_FUN_016d3fb4();
      return 1;
    }
    uVar1 = thunk_FUN_016d4ea4(uVar1,uVar3);
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar3);
    }
  }
  return CONCAT44(uVar3,uVar1);
}

