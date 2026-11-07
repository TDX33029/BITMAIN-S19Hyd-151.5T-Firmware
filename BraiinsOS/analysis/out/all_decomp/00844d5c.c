// FUN_00844d5c @ 00844d5c size=532 calls_out=9 calls_in=0
// strings: BUG: failed to send

undefined8 FUN_00844d5c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 auStack_c8 [80];
  int local_78 [21];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
    param_1[2] = *param_1;
    param_1[3] = param_1[1];
    FUN_01656eb8(local_78,param_1[1],0,0,50000000,&DAT_018609dc);
    FUN_016dd1aa(auStack_c8,local_78,0x50);
    FUN_016dd1aa(param_1 + 6,auStack_c8,0x50);
  case 3:
    iVar1 = FUN_01657fc4(param_1 + 6,*param_2);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 4) = 3;
      return 1;
    }
    FUN_00a07b4c(param_1 + 6);
    param_1[6] = 1;
    param_1[7] = param_1[2];
    param_1[8] = 1;
    param_1[9] = param_1[3];
  case 4:
    puVar9 = param_1 + 6;
    FUN_008b71d4(local_78,puVar9,param_2);
    if (local_78[0] == 5) {
      *(undefined1 *)(param_1 + 4) = 4;
      return 1;
    }
    puVar10 = (undefined4 *)((uint)local_78 | 4);
    uVar2 = *puVar10;
    uVar4 = puVar10[1];
    uVar6 = puVar10[2];
    uVar3 = puVar10[3];
    uVar5 = puVar10[4];
    uVar7 = puVar10[5];
    uVar8 = puVar10[6];
    FUN_00845020(puVar9);
    if (local_78[0] != 4) {
      *puVar10 = uVar2;
      puVar10[1] = uVar4;
      puVar10[2] = uVar6;
      puVar10[3] = uVar3;
      puVar10[4] = uVar5;
      puVar10[5] = uVar7;
      puVar10[6] = uVar8;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("BUG: failed to send",0x13,local_78,&DAT_01861108,&DAT_018609fc);
    }
    FUN_01656eb8(local_78,&DAT_01860a0c,1,0,0,&DAT_01860a0c);
    FUN_016dd1aa(auStack_c8,local_78,0x50);
    FUN_016dd1aa(puVar9,auStack_c8,0x50);
  case 5:
    iVar1 = FUN_01657fc4(param_1 + 6,*param_2);
    if (iVar1 == 0) {
      FUN_00a07b4c(param_1 + 6);
      *(undefined1 *)(param_1 + 4) = 1;
      return 0;
    }
    *(undefined1 *)(param_1 + 4) = 5;
    return 1;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018609ec);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018609ec);
  }
}

