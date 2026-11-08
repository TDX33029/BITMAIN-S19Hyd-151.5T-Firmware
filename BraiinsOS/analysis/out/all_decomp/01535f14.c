// FUN_01535f14 @ 01535f14 size=184 calls_out=4 calls_in=2
// strings: 

void FUN_01535f14(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = *param_2;
  if (param_4 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(param_4);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_4);
    }
  }
  FUN_016dd1aa(iVar2,param_3,param_4);
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  piVar4 = (int *)param_2[1];
  *puVar3 = 1;
  puVar3[1] = 1;
  puVar3[2] = iVar2;
  puVar3[3] = param_4;
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + 1;
  if (iVar2 < 0) {
    software_udf(0xfdee,0x1535fbc);
    return;
  }
  uVar5 = param_2[2];
  param_1[0x12] = uVar6;
  *param_1 = 1;
  param_1[1] = puVar3;
  param_1[2] = piVar4;
  param_1[3] = uVar5;
  return;
}

