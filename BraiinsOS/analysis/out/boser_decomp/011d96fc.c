// FUN_011d96fc @ 011d96fc size=200 calls_out=3 calls_in=3
// strings: 

undefined8 FUN_011d96fc(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  piVar6 = (int *)param_3[2];
  uVar8 = param_3[3];
  piVar5 = (int *)*param_3;
  uVar7 = param_3[1];
  do {
    iVar3 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar3 + 1;
  if (-1 < iVar3) {
    do {
      iVar3 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar3 + 1;
    if (-1 < iVar3) {
      puVar4 = (undefined4 *)thunk_FUN_01be5118(0x18);
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x18);
      }
      *puVar4 = param_1;
      puVar4[1] = param_2;
      puVar4[2] = piVar6;
      puVar4[3] = uVar8;
      puVar4[4] = piVar5;
      puVar4[5] = uVar7;
      FUN_011d95e0(param_3);
      return CONCAT44(&DAT_01c1bf88,puVar4);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x11d97c0);
  (*pcVar1)();
}

