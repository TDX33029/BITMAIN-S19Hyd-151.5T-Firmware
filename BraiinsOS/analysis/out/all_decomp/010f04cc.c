// FUN_010f04cc @ 010f04cc size=588 calls_out=8 calls_in=1
// strings: 

void FUN_010f04cc(uint *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_38 [4];
  int *local_34;
  byte local_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xb)) {
  case 0:
    uVar4 = *param_2;
    uVar6 = 2;
    *(undefined2 *)(param_2 + 10) = 2;
    param_2[9] = uVar4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018861f4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018861f4);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x29)) {
    case 0:
      uVar6 = *(undefined1 *)(param_2 + 10);
      uVar4 = param_2[9];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018861e4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018861e4);
    case 3:
      goto switchD_010f0534_caseD_3;
    }
  }
  param_2[5] = uVar4;
  *(undefined1 *)((int)param_2 + 0x1a) = 0;
  *(undefined1 *)(param_2 + 6) = uVar6;
  param_2[1] = 1;
  param_2[2] = 1;
switchD_010f0534_caseD_3:
  puVar9 = (undefined1 *)((int)param_2 + 0x29);
  FUN_010ee5e8(&local_34,param_2 + 2);
  piVar3 = local_34;
  if (local_34 == (int *)0x80000001) {
    *puVar9 = 3;
    *(undefined1 *)param_1 = 2;
    *(undefined1 *)(param_2 + 0xb) = 3;
    return;
  }
  pbVar1 = (byte *)CONCAT13(uStack_2d,CONCAT12(uStack_2e,CONCAT11(uStack_2f,local_30)));
  iVar2 = CONCAT22(uStack_2a,CONCAT11(uStack_2b,uStack_2c));
  FUN_00868aa0(param_2 + 2);
  if (piVar3 == (int *)0x80000000) {
    pbVar5 = pbVar1;
  }
  else {
    if (iVar2 == param_2[1]) {
      if (iVar2 != 1) {
        local_30 = 1;
        uStack_2f = 0;
        uStack_2e = 0;
        uStack_2d = 0;
        local_34 = (int *)0x6;
        uVar8 = FUN_010f683c(&local_34);
        uVar7 = 0;
      }
      else {
        uVar7 = (uint)*pbVar1;
        uStack_2b = (undefined1)((uVar7 & 7) >> 2);
        uStack_2c = (undefined1)((uVar7 & 0xf) >> 3);
        uStack_2d = (undefined1)((uVar7 & 0x1f) >> 4);
        uStack_2e = (undefined1)((uVar7 & 0x3f) >> 5);
        uStack_2f = (undefined1)((uVar7 & 0x7f) >> 6);
        local_30 = *pbVar1 >> 7;
        uVar8 = (uint)CONCAT12(uStack_2b,CONCAT11(uStack_2c,uStack_2d));
        uVar7 = (uint)CONCAT12(uStack_2e,CONCAT11(uStack_2f,local_30)) << 8;
      }
      if (piVar3 != (int *)0x0) {
        thunk_FUN_016d3fb4(pbVar1);
      }
      *param_1 = iVar2 != 1 | uVar7;
      param_1[1] = uVar8;
      *puVar9 = 1;
      *(undefined1 *)(param_2 + 0xb) = 1;
      return;
    }
    local_28 = &LAB_00fac484;
    uStack_2c = SUB41(local_38,0);
    uStack_2b = (undefined1)((uint)local_38 >> 8);
    uStack_2a = (undefined2)((uint)local_38 >> 0x10);
    local_30 = 0x84;
    uStack_2f = 0xc4;
    uStack_2e = 0xfa;
    uStack_2d = 0;
    local_34 = param_2 + 1;
    FUN_00600d2c(&local_48,&DAT_00573fe9,&local_34);
    local_58 = local_48;
    uStack_54 = uStack_44;
    uStack_50 = uStack_40;
    pbVar5 = (byte *)FUN_010f66dc(&local_58);
    if (piVar3 != (int *)0x0) {
      thunk_FUN_016d3fb4(pbVar1);
    }
  }
  *param_1 = 1;
  param_1[1] = (uint)pbVar5;
  *puVar9 = 1;
  *(undefined1 *)(param_2 + 0xb) = 1;
  return;
}

