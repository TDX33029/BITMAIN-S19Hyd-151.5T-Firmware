// FUN_0173ad40 @ 0173ad40 size=424 calls_out=4 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/evp.c | algorithm %d

undefined8 FUN_0173ad40(int param_1,int param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_016ef1d8();
    if (param_2 == *(int *)*puVar1) {
      return 1;
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      if ((*(int *)(param_1 + 0xc) != 0) &&
         (pcVar2 = *(code **)(*(int *)(param_1 + 0xc) + 0x58), pcVar2 != (code *)0x0)) {
        (*pcVar2)();
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    puVar1 = (undefined4 *)FUN_016ef1d8();
    if (param_2 == *(int *)*puVar1) goto LAB_0173aea8;
  }
  if ((((((param_2 != *(int *)puVar1[1]) && (param_2 != *(int *)puVar1[2])) &&
        (param_2 != *(int *)puVar1[3])) &&
       ((param_2 != *(int *)puVar1[4] && (param_2 != *(int *)puVar1[5])))) &&
      ((param_2 != *(int *)puVar1[6] &&
       ((param_2 != *(int *)puVar1[7] && (param_2 != *(int *)puVar1[8])))))) &&
     ((param_2 != *(int *)puVar1[9] && (param_2 != *(int *)puVar1[10])))) {
    FUN_016e9cd0(6,0,0x80,"/aws-lc/crypto/fipsmodule/evp/evp.c",0x13f);
    FUN_016e9de4("algorithm %d",param_2);
    return 0;
  }
  if (param_1 == 0) {
    return 1;
  }
LAB_0173aea8:
  FUN_0173a734(param_1);
  return 1;
}

