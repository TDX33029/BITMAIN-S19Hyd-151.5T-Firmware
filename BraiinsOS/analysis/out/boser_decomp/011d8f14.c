// FUN_011d8f14 @ 011d8f14 size=200 calls_out=4 calls_in=6
// strings: 

undefined8 FUN_011d8f14(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar6 = (int *)param_3[3];
  do {
    iVar4 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11d8fd8);
    (*pcVar1)();
  }
  if (*param_3 == -0x80000000) {
    local_30 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_30,param_3[1],param_3[2]);
  }
  uVar3 = local_30;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(0x18);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  *puVar5 = uVar3;
  puVar5[1] = uStack_2c;
  puVar5[2] = uStack_28;
  puVar5[3] = piVar6;
  puVar5[4] = param_1;
  puVar5[5] = param_2;
  FUN_00fff208(param_3);
  return CONCAT44(&DAT_01c1c900,puVar5);
}

