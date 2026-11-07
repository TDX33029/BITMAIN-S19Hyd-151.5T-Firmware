// FUN_017851fc @ 017851fc size=60 calls_out=3 calls_in=5
// strings: 

void FUN_017851fc(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 != 0) {
    FUN_01443048(*piVar1,piVar1[1]);
  }
  if (*(char *)((int)piVar1 + 0x15) != '\x02') {
    FUN_014323b0(piVar1 + 2);
  }
  thunk_FUN_01be4678(piVar1);
  return;
}

