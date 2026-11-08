// FUN_01b1c878 @ 01b1c878 size=84 calls_out=0 calls_in=3
// strings: 

undefined4 FUN_01b1c878(int param_1)

{
  code *pcVar1;
  
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (pcVar1 = *(code **)(*(int *)(param_1 + 0xc) + 0x58), pcVar1 != (code *)0x0)) {
    (*pcVar1)();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 0;
}

