// FUN_0173b2e0 @ 0173b2e0 size=28 calls_out=0 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x0173a030) */
/* WARNING: Removing unreachable block (ram,0x0173a03c) */
/* WARNING: Removing unreachable block (ram,0x0173a19c) */

undefined4 * FUN_0173b2e0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 != -1) {
    FUN_01781ff4(&DAT_018dedd0,FUN_0173d41c);
    piVar3 = DAT_018dedd8;
    if ((((param_1 != *DAT_018dedd8) && (piVar3 = DAT_018deddc, param_1 != *DAT_018deddc)) &&
        (piVar3 = DAT_018dede0, param_1 != *DAT_018dede0)) &&
       ((((piVar3 = DAT_018dede4, param_1 != *DAT_018dede4 &&
          (piVar3 = DAT_018dede8, param_1 != *DAT_018dede8)) &&
         ((piVar3 = DAT_018dedec, param_1 != *DAT_018dedec &&
          ((piVar3 = DAT_018dedf0, param_1 != *DAT_018dedf0 &&
           (piVar3 = DAT_018dedf4, param_1 != *DAT_018dedf4)))))) &&
        (piVar3 = DAT_018dedf8, param_1 != *DAT_018dedf8)))) {
      puVar1 = (undefined4 *)FUN_016ef1b8();
      piVar3 = (int *)*puVar1;
      if (((param_1 != *piVar3) && (piVar3 = (int *)puVar1[1], param_1 != *piVar3)) &&
         (piVar3 = (int *)puVar1[2], param_1 != *piVar3)) {
        FUN_016e9cd0(6,0,0x80,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0x41);
        FUN_016e9de4("algorithm %d",param_1);
        return (undefined4 *)0x0;
      }
    }
    puVar1 = (undefined4 *)FUN_0177a9c0(0x28);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = piVar3;
      puVar1[1] = param_2;
      puVar1[4] = 0;
      if ((code *)piVar3[1] == (code *)0x0) {
        return puVar1;
      }
      iVar2 = (*(code *)piVar3[1])(puVar1);
      if (0 < iVar2) {
        return puVar1;
      }
      FUN_01739ee4(puVar1[2]);
      FUN_0177aafc(puVar1);
    }
  }
  return (undefined4 *)0x0;
}

