// FUN_0173ce50 @ 0173ce50 size=352 calls_out=4 calls_in=4
// strings: /aws-lc/crypto/fipsmodule/evp/digestsign.c | /aws-lc/crypto/fipsmodule/evp/digestsign.c

ulonglong FUN_0173ce50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  ulonglong uVar5;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/digestsign.c",0x106);
  }
  else {
    iVar4 = *piVar1;
    if ((((*(int *)(piVar1[2] + 4) != 0x3e1) ||
         (puVar3 = *(undefined4 **)(piVar1[2] + 8), puVar3 == (undefined4 *)0x0)) ||
        (2 < *(int *)*puVar3 - 0x3e2U)) && (*(int *)(iVar4 + 0x24) != 0)) {
      iVar4 = FUN_0173cab0(param_1);
      if (iVar4 == 0) {
        iVar4 = FUN_0173cbcc(param_1,param_4,param_5);
        if (iVar4 != 0) {
          iVar4 = FUN_0173ccb0(param_1,param_2,param_3);
          uVar2 = (uint)(iVar4 != 0);
          goto LAB_0173cf3c;
        }
        goto LAB_0173cf38;
      }
      piVar1 = *(int **)(param_1 + 0xc);
      iVar4 = *piVar1;
    }
    if (*(code **)(iVar4 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0173ceec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(iVar4 + 0x28))(piVar1,param_2,param_3);
      return uVar5;
    }
    FUN_016e9cd0(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/digestsign.c",0x114);
  }
LAB_0173cf38:
  uVar2 = 0;
LAB_0173cf3c:
  return (ulonglong)uVar2;
}

