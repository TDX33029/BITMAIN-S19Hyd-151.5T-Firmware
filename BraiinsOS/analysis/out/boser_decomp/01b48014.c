// FUN_01b48014 @ 01b48014 size=28 calls_out=0 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x01b470d8) */
/* WARNING: Removing unreachable block (ram,0x01b470e0) */
/* WARNING: Removing unreachable block (ram,0x01b470e4) */
/* WARNING: Removing unreachable block (ram,0x01b471e0) */

undefined4 * FUN_01b48014(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 != -1) {
    FUN_01b70810(&DAT_01d522a0,FUN_01b49df4);
    iVar2 = 0;
    puVar1 = &DAT_01d522a4;
    do {
      piVar3 = (int *)*puVar1;
      if (param_1 == *piVar3) goto LAB_01b471bc;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 != 9);
    puVar1 = (undefined4 *)FUN_01b0a1c0();
    piVar3 = (int *)*puVar1;
    if (((param_1 == *piVar3) || (piVar3 = (int *)puVar1[1], param_1 == *piVar3)) ||
       (piVar3 = (int *)puVar1[2], param_1 == *piVar3)) {
LAB_01b471bc:
      puVar1 = (undefined4 *)FUN_01b6b0a8(0x28);
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
        FUN_01b46fd8(puVar1[2]);
        FUN_01b6b1c4(puVar1);
      }
    }
    else {
      FUN_01b053d4(6,0,0x80,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0x41);
      FUN_01b05488("algorithm %d",param_1);
    }
  }
  return (undefined4 *)0x0;
}

