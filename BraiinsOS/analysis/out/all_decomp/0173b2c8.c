// FUN_0173b2c8 @ 0173b2c8 size=496 calls_out=8 calls_in=6
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | algorithm %d

/* WARNING: Removing unreachable block (ram,0x0173a1d8) */

undefined4 * FUN_0173b2c8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 != 0) && (*(int **)(param_1 + 0xc) != (int *)0x0)) {
    iVar3 = **(int **)(param_1 + 0xc);
    FUN_01781ff4(&DAT_018dedd0,FUN_0173d41c);
    piVar2 = DAT_018dedd8;
    if ((((iVar3 != *DAT_018dedd8) &&
         ((((piVar2 = DAT_018deddc, iVar3 != *DAT_018deddc &&
            (piVar2 = DAT_018dede0, iVar3 != *DAT_018dede0)) &&
           (piVar2 = DAT_018dede4, iVar3 != *DAT_018dede4)) &&
          ((piVar2 = DAT_018dede8, iVar3 != *DAT_018dede8 &&
           (piVar2 = DAT_018dedec, iVar3 != *DAT_018dedec)))))) &&
        (piVar2 = DAT_018dedf0, iVar3 != *DAT_018dedf0)) &&
       ((piVar2 = DAT_018dedf4, iVar3 != *DAT_018dedf4 &&
        (piVar2 = DAT_018dedf8, iVar3 != *DAT_018dedf8)))) {
      puVar1 = (undefined4 *)FUN_016ef1b8();
      piVar2 = (int *)*puVar1;
      if ((iVar3 != *piVar2) &&
         ((piVar2 = (int *)puVar1[1], iVar3 != *piVar2 &&
          (piVar2 = (int *)puVar1[2], iVar3 != *piVar2)))) {
        FUN_016e9cd0(6,0,0x80,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0x41);
        FUN_016e9de4("algorithm %d",iVar3);
        return (undefined4 *)0x0;
      }
    }
    puVar1 = (undefined4 *)FUN_0177a9c0(0x28);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = piVar2;
      puVar1[1] = param_2;
      puVar1[4] = 0;
      if (param_1 != 0) {
        FUN_01739fe0(param_1);
        puVar1[2] = param_1;
      }
      if ((code *)piVar2[1] == (code *)0x0) {
        return puVar1;
      }
      iVar3 = (*(code *)piVar2[1])(puVar1);
      if (0 < iVar3) {
        return puVar1;
      }
      FUN_01739ee4(puVar1[2]);
      FUN_0177aafc(puVar1);
    }
  }
  return (undefined4 *)0x0;
}

