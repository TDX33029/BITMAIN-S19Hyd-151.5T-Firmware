// FUN_01b2e5fc @ 01b2e5fc size=40 calls_out=0 calls_in=18
// strings: 

uint FUN_01b2e5fc(undefined4 *param_1)

{
  uint uVar1;
  
  if ((int)param_1[1] < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)*param_1 & 1;
  }
  return uVar1;
}

