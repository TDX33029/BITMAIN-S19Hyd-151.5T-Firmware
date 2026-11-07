// FUN_011c89e8 @ 011c89e8 size=260 calls_out=3 calls_in=1
// strings: 

void FUN_011c89e8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_2c;
  
  piVar8 = *(int **)(param_2 + 0x38);
  do {
    iVar3 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11c8aec);
    (*pcVar1)();
  }
  uVar7 = *(undefined4 *)(param_2 + 0x3c);
  uVar4 = FUN_01261fac(*(undefined4 *)(param_2 + 0x54));
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar5 = 1;
  puVar5[1] = 1;
  puVar5[2] = local_38;
  puVar5[3] = local_34;
  puVar5[4] = 3;
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *puVar6 = 1;
  puVar6[1] = 1;
  puVar6[2] = 0x80000000;
  puVar6[3] = param_3;
  puVar6[4] = &DAT_0188acf8;
  puVar6[5] = uStack_2c;
  *param_1 = puVar6;
  param_1[1] = piVar8;
  param_1[2] = uVar7;
  param_1[3] = puVar5;
  param_1[4] = uVar4;
  return;
}

