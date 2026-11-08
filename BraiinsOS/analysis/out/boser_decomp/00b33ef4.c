// FUN_00b33ef4 @ 00b33ef4 size=76 calls_out=1 calls_in=1
// strings: 

void FUN_00b33ef4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = 3;
  if (6 < uVar1) {
    uVar2 = uVar1 - 7;
  }
  if (uVar2 < 2) {
    return;
  }
  if (uVar2 != 2) {
    switch(uVar1) {
    case 0:
    case 1:
    case 2:
    case 4:
      return;
    case 3:
      FUN_019bb7e0(param_1[1],param_1[2]);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00b33f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)param_1[1])();
  return;
}

