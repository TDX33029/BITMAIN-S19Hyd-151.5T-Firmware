// FUN_0173a734 @ 0173a734 size=116 calls_out=0 calls_in=13
// strings: 

undefined8 FUN_0173a734(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (pcVar1 = *(code **)(*(int *)(param_1 + 0xc) + 0x58), pcVar1 != (code *)0x0)) {
    (*pcVar1)();
  }
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 **)(param_1 + 0xc) = param_2;
  return 0;
}

