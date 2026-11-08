// FUN_01bc01b4 @ 01bc01b4 size=1028 calls_out=5 calls_in=1
// strings: 

ulonglong FUN_01bc01b4(int *param_1,int param_2,int *param_3,int *param_4,undefined4 param_5,
                      undefined1 *param_6,int param_7)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int *piVar8;
  uint uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  int local_34;
  int local_2c;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_2 + 200);
  uVar4 = uVar3;
  if (uVar3 < *(uint *)(param_2 + 0xc)) {
    uVar4 = 1;
  }
  if (*(uint *)(param_2 + 0xc) <= uVar3) {
    uVar4 = 0;
    if (*(int *)(param_2 + 0xb4) != 0) {
      if (*(int *)(*(int *)(param_2 + 0xb4) + 0x6c) == 0) {
        uVar4 = 2;
      }
      else {
        uVar4 = 3;
      }
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)FUN_01b8909c(*(undefined4 *)(param_2 + 0xd0),param_5,uVar4);
  if (6 < *(uint *)(param_2 + 0xd0)) {
    *(int **)(param_2 + 0xd4) = param_1;
    uVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_6,param_7);
    FUN_01bc00bc(param_1,param_7);
    return (ulonglong)uVar4;
  }
  puVar6 = param_6 + param_7;
  puVar7 = puVar6 + -0x20;
  while( true ) {
    uVar4 = param_1[1];
    uVar3 = (int)puVar6 - (int)param_6;
    if ((uint)param_1[3] <= uVar4 || puVar6 <= param_6) break;
    iVar1 = *param_1 + uVar4 * 0xc;
    local_2c = *(int *)(*param_1 + uVar4 * 0xc);
    uVar9 = *(uint *)(iVar1 + 4);
    local_34 = *(int *)(iVar1 + 8);
    if (uVar3 < uVar9 + local_34) {
      if (uVar9 < uVar3) {
        local_34 = uVar3 - uVar9;
        if (uVar3 - uVar9 < uVar5) {
          local_2c = 0;
        }
      }
      else {
        local_2c = 0;
      }
      FUN_01bbffe0(param_1,uVar3,uVar5);
    }
    else {
      param_1[1] = uVar4 + 1;
    }
    if (local_2c == 0) break;
    uVar4 = (int)param_6 - *(int *)(param_2 + 4);
    if (*(int *)(param_2 + 0x1c) + 0x400U < uVar4) {
      uVar3 = (-0x400 - *(int *)(param_2 + 0x1c)) + uVar4;
      if (uVar3 < 0x201) {
        iVar1 = uVar4 - uVar3;
      }
      else {
        iVar1 = uVar4 - 0x200;
      }
      *(int *)(param_2 + 0x1c) = iVar1;
    }
    FUN_01bbf428(param_2,param_6);
    uVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_6,uVar9);
    param_6 = param_6 + uVar9;
    param_4[2] = param_4[1];
    param_4[1] = *param_4;
    *param_4 = local_2c;
    puVar10 = param_6 + -uVar4;
    uVar3 = param_3[3];
    if (puVar7 < param_6) {
      uVar9 = uVar3;
      if (puVar10 <= puVar7) {
        uVar9 = uVar3 + ((int)puVar7 - (int)puVar10);
        FUN_01bbe938(uVar3,puVar10);
        if (0x10 < (int)puVar7 - (int)puVar10) {
          puVar10 = puVar10 + 0x10;
          uVar3 = uVar3 + 0x10;
          do {
            FUN_01bbe938(uVar3,puVar10);
            iVar1 = uVar3 + 0x10;
            uVar3 = uVar3 + 0x20;
            FUN_01bbe938(iVar1,puVar10 + 0x10);
            puVar10 = puVar10 + 0x20;
          } while (uVar3 < uVar9);
        }
        puVar10 = puVar7;
      }
      puVar2 = (undefined1 *)(uVar9 - 1);
      for (; puVar10 < param_6; puVar10 = puVar10 + 1) {
        puVar2 = puVar2 + 1;
        *puVar2 = *puVar10;
      }
    }
    else {
      FUN_01bbe938(uVar3,puVar10);
      if (0x10 < uVar4) {
        iVar1 = param_3[3];
        FUN_01bbe938(iVar1 + 0x10,puVar10 + 0x10);
        if (0x10 < (int)(uVar4 - 0x10)) {
          uVar3 = iVar1 + 0x20;
          do {
            FUN_01bbe938(uVar3,puVar10 + 0x20);
            FUN_01bbe938(uVar3 + 0x10,puVar10 + 0x30);
            uVar3 = uVar3 + 0x20;
            puVar10 = puVar10 + 0x20;
          } while (uVar3 < iVar1 + uVar4);
        }
      }
    }
    param_3[3] = param_3[3] + uVar4;
    piVar8 = (int *)param_3[1];
    if (0xffff < uVar4) {
      param_3[9] = 1;
      param_3[10] = (int)piVar8 - *param_3 >> 3;
    }
    *piVar8 = local_2c + 3;
    *(short *)(piVar8 + 1) = (short)uVar4;
    if (0xffff < local_34 - 3U) {
      param_3[9] = 2;
      param_3[10] = (int)piVar8 - *param_3 >> 3;
    }
    *(short *)((int)piVar8 + 6) = (short)(local_34 - 3U);
    param_3[1] = (int)(piVar8 + 2);
    param_6 = param_6 + local_34;
  }
  uVar4 = (int)param_6 - *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 0x1c) + 0x400U < uVar4) {
    uVar3 = (-0x400 - *(int *)(param_2 + 0x1c)) + uVar4;
    if (uVar3 < 0x201) {
      iVar1 = uVar4 - uVar3;
    }
    else {
      iVar1 = uVar4 - 0x200;
    }
    *(int *)(param_2 + 0x1c) = iVar1;
  }
  FUN_01bbf428(param_2,param_6);
                    /* WARNING: Could not recover jumptable at 0x01bc0324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar11 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_6);
  return uVar11;
}

