// FUN_01b47ffc @ 01b47ffc size=388 calls_out=8 calls_in=4
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | algorithm %d

/* WARNING: Removing unreachable block (ram,0x01b47108) */

undefined4 * FUN_01b47ffc(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((param_1 != 0) && (*(int **)(param_1 + 0xc) != (int *)0x0)) {
    iVar3 = **(int **)(param_1 + 0xc);
    FUN_01b70810(&DAT_01d522a0,FUN_01b49df4);
    iVar2 = 0;
    puVar1 = &DAT_01d522a4;
    do {
      piVar4 = (int *)*puVar1;
      if (iVar3 == *piVar4) goto LAB_01b471bc;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 != 9);
    puVar1 = (undefined4 *)FUN_01b0a1c0();
    piVar4 = (int *)*puVar1;
    if (((iVar3 == *piVar4) || (piVar4 = (int *)puVar1[1], iVar3 == *piVar4)) ||
       (piVar4 = (int *)puVar1[2], iVar3 == *piVar4)) {
LAB_01b471bc:
      puVar1 = (undefined4 *)FUN_01b6b0a8(0x28);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = piVar4;
        puVar1[1] = param_2;
        puVar1[4] = 0;
        if (param_1 != 0) {
          FUN_01b47088(param_1);
          puVar1[2] = param_1;
        }
        if ((code *)piVar4[1] == (code *)0x0) {
          return puVar1;
        }
        iVar2 = (*(code *)piVar4[1])(puVar1);
        if (0 < iVar2) {
          return puVar1;
        }
        FUN_01b46fd8(puVar1[2]);
        FUN_01b6b1c4(puVar1);
      }
    }
    else {
      FUN_01b053d4(6,0,0x80,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",0x41);
      FUN_01b05488("algorithm %d",iVar3);
    }
  }
  return (undefined4 *)0x0;
}

