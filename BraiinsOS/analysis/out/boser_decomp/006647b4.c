// FUN_006647b4 @ 006647b4 size=184 calls_out=4 calls_in=3
// strings: 

undefined8 FUN_006647b4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  
  uVar1 = *param_1;
  uVar3 = param_1[2];
  if (uVar1 == uVar3) {
    FUN_006646a0(&local_24,uVar3,param_1[1],uVar3 + 1);
    if (local_24 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(local_20,local_1c);
    }
    *(undefined1 *)(local_20 + uVar3) = 0;
  }
  else {
    local_20 = param_1[1];
    uVar2 = uVar3 + 1;
    *(undefined1 *)(local_20 + uVar3) = 0;
    if (uVar2 < uVar1) {
      if (uVar2 == 0) {
        thunk_FUN_01be4678();
        local_20 = 1;
      }
      else {
        local_20 = FUN_01298554(local_20,uVar1,1,uVar2);
        if (local_20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,uVar2);
        }
      }
    }
  }
  return CONCAT44(uVar3 + 1,local_20);
}

