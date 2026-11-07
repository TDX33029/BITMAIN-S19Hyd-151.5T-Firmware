// FUN_015834e8 @ 015834e8 size=92 calls_out=3 calls_in=2
// strings: 

void FUN_015834e8(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == 1) {
    if ((char)piVar1[1] != '\x03') goto LAB_01583538;
    puVar2 = (undefined4 *)piVar1[2];
    FUN_01443048(*puVar2,puVar2[1]);
  }
  else {
    if ((*piVar1 != 0) || (piVar1[2] == 0)) goto LAB_01583538;
    puVar2 = (undefined4 *)piVar1[1];
  }
  thunk_FUN_01be4678(puVar2);
LAB_01583538:
  thunk_FUN_01be4678(piVar1);
  return;
}

