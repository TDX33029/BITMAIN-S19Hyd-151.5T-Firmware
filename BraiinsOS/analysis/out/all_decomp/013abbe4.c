// FUN_013abbe4 @ 013abbe4 size=140 calls_out=1 calls_in=0
// strings: 

void FUN_013abbe4(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  bool bVar5;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piVar4 = (int *)*param_2;
  do {
    iVar2 = *piVar4;
    bVar5 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar5);
  *piVar4 = iVar2 + 1;
  if (iVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x13abc6c);
    (*pcVar1)();
  }
  uVar3 = 0;
  bVar5 = piVar4[4] == 0;
  iVar2 = 0;
  if (!bVar5) {
    iVar2 = piVar4[3] + piVar4[4] * 8;
    bVar5 = iVar2 == 8;
  }
  if (!bVar5) {
    uVar3 = *(undefined4 *)(iVar2 + -4);
  }
  FUN_005ff9d4(&local_20,uVar3);
  *param_1 = 0;
  param_1[2] = local_20;
  param_1[3] = uStack_1c;
  param_1[4] = uStack_18;
  param_1[5] = piVar4;
  param_1[0xb5] = 0x80000000;
  param_1[0x9a] = 0x80000000;
  param_1[0x96] = 0x80000000;
  param_1[0x92] = 2;
  param_1[0x32] = 2;
  return;
}

