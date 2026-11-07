// FUN_0188db68 @ 0188db68 size=64 calls_out=0 calls_in=4
// strings: 

void FUN_0188db68(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[4];
  if ((uVar1 & 1) != 0) {
    (**(code **)(param_1[2] + 0xc))(param_1[3]);
  }
  if ((uVar1 & 8) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0188dba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))(param_1[1]);
  return;
}

