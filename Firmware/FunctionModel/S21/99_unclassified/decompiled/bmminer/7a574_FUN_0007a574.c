// FUN_0007a574 @ 0007a574  size=364  callers=1
// program: bmminer


undefined4 FUN_0007a574(int *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)(param_1[1] + ((1 << (param_1[2] & 0xffU)) - 1U & param_3) * 8);
  puVar1 = (undefined4 *)FUN_0007a4b0(param_1,puVar2,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((puVar1 == (undefined4 *)*puVar2) && (puVar1 == (undefined4 *)puVar2[1])) {
      puVar2[1] = param_1 + 3;
      *puVar2 = puVar2[1];
    }
    else if (puVar1 == (undefined4 *)*puVar2) {
      *puVar2 = puVar1[1];
    }
    else if (puVar1 == (undefined4 *)puVar2[1]) {
      puVar2[1] = *puVar1;
    }
    FUN_0007a378(puVar1);
    FUN_0007a378(puVar1 + 2);
    FUN_00079360(puVar1[5]);
    FUN_0007d8e8(puVar1);
    *param_1 = *param_1 + -1;
    uVar3 = 0;
  }
  return uVar3;
}

