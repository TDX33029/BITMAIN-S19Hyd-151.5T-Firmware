// FUN_0173e5f0 @ 0173e5f0 size=448 calls_out=7 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/evp/digestsign.c

undefined8 FUN_0173e5f0(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar2 = FUN_0173b2c8(param_5,param_4);
    *(int *)(param_1 + 0xc) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
  }
  FUN_01781ff4(&DAT_018dedfc,&LAB_01701cac);
  piVar1 = *(int **)(param_1 + 0xc);
  iVar2 = *(int *)(param_5 + 4);
  *(undefined4 **)(param_1 + 0x10) = &DAT_018dee00;
  if (iVar2 == 0x357) {
    piVar1[4] = 8;
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x800;
    *(undefined1 **)(param_1 + 8) = &LAB_0173e9b4;
  }
  else {
    iVar2 = FUN_0173b5ec();
    if (iVar2 == 0) {
      return 0;
    }
    piVar1 = *(int **)(param_1 + 0xc);
  }
  if (param_3 != 0) {
    iVar2 = FUN_0173b454(piVar1,param_3);
    if (iVar2 == 0) {
      return 0;
    }
    piVar1 = *(int **)(param_1 + 0xc);
  }
  if (((((*(int *)(piVar1[2] + 4) == 0x3e1) &&
        (puVar3 = *(undefined4 **)(piVar1[2] + 8), puVar3 != (undefined4 *)0x0)) &&
       (*(int *)*puVar3 - 0x3e2U < 3)) || (*(int *)(*piVar1 + 0x18) == 0)) &&
     (iVar2 = FUN_0173cab0(param_1), iVar2 == 0)) {
LAB_0173e6dc:
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0xc);
    }
    return 1;
  }
  if (param_3 == 0) {
    FUN_016e9cd0(6,0,0x77,"/aws-lc/crypto/fipsmodule/evp/digestsign.c",100);
  }
  else {
    iVar2 = FUN_0173e2d8(param_1,param_3,param_4);
    if (iVar2 != 0) goto LAB_0173e6dc;
  }
  return 0;
}

