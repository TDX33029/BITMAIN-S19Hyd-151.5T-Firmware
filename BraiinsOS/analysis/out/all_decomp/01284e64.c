// FUN_01284e64 @ 01284e64 size=236 calls_out=4 calls_in=12
// strings: 

undefined4 * FUN_01284e64(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    if (*(char *)(param_1 + 0xd) != '\x01') {
      param_1 = (undefined4 *)0x0;
    }
    return param_1;
  }
  FUN_01283788(&local_58);
  cVar1 = *(char *)(param_1 + 0xd);
  iVar6 = param_1[5];
  iVar7 = param_1[7];
  uVar3 = param_1[8];
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = uStack_50;
  param_1[3] = uStack_4c;
  param_1[4] = local_48;
  param_1[5] = uStack_44;
  param_1[6] = uStack_40;
  param_1[7] = uStack_3c;
  param_1[8] = local_38;
  param_1[9] = uStack_34;
  param_1[10] = uStack_30;
  param_1[0xb] = uStack_2c;
  param_1[0xc] = uStack_28;
  *(undefined1 *)(param_1 + 0xd) = 1;
  if (cVar1 != '\x01') {
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018ae210);
    }
    FUN_015e8e6c(param_1,FUN_01284fac);
    return param_1;
  }
  do {
    iVar5 = DAT_018dd954 + -1;
    bVar2 = (bool)hasExclusiveAccess(0x18dd954);
  } while (!bVar2);
  DAT_018dd954 = iVar5;
  if (iVar7 != 0) {
    thunk_FUN_016d3fb4(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x01284f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar4 = (undefined4 *)(*(code *)(&DAT_01284f14 + *(int *)(&DAT_01284f14 + iVar6 * 4)))();
  return puVar4;
}

