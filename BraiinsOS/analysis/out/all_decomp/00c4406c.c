// FUN_00c4406c @ 00c4406c size=664 calls_out=6 calls_in=10
// strings: attempt to join into collection with len > usize::MAX

void FUN_00c4406c(undefined4 *param_1,int param_2,int param_3,undefined2 *param_4,int param_5)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int extraout_r2;
  int extraout_r2_00;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  bool bVar14;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  iVar3 = param_3 * 0xc;
  uVar11 = iVar3 - 0xc;
  puVar8 = (undefined4 *)((uVar11 >> 2) * param_5 * -0x55555555);
  iVar5 = param_2;
  while (iVar3 != 0) {
    puVar1 = (uint *)(iVar5 + 8);
    iVar3 = iVar3 + -0xc;
    iVar5 = iVar5 + 0xc;
    bVar14 = CARRY4(*puVar1,(uint)puVar8);
    puVar8 = (undefined4 *)(*puVar1 + (int)puVar8);
    if (bVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("attempt to join into collection with len > usize::MAX",0x35,&DAT_018ad7c8);
    }
  }
  local_30 = (undefined4 *)0x0;
  if ((int)puVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,puVar8);
  }
  if (puVar8 == (undefined4 *)0x0) {
    local_2c = 1;
  }
  else {
    local_2c = thunk_FUN_016d4a50(puVar8);
    local_30 = puVar8;
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,puVar8);
    }
  }
  puVar12 = *(undefined4 **)(param_2 + 8);
  uVar6 = *(undefined4 *)(param_2 + 4);
  local_28 = 0;
  if (local_30 < puVar12) {
    FUN_00d653ec(&local_30,0,puVar12,1,1);
  }
  iVar5 = local_28;
  iVar3 = local_2c;
  FUN_016dd1aa(local_2c + local_28,uVar6,puVar12);
  uVar7 = (int)puVar8 - (iVar5 + (int)puVar12);
  puVar4 = (undefined2 *)(iVar3 + iVar5 + (int)puVar12);
  if (param_5 == 1) {
    if (param_3 != 1) {
      puVar12 = (undefined4 *)(param_2 + 0x10);
      do {
        if (uVar7 == 0) goto LAB_00c442bc;
        uVar6 = *puVar12;
        uVar13 = puVar12[1];
        *(undefined1 *)puVar4 = *(undefined1 *)param_4;
        if (uVar7 - 1 < uVar13) goto LAB_00c442bc;
        puVar12 = puVar12 + 3;
        FUN_016dd1aa((undefined1 *)((int)puVar4 + 1),uVar6,uVar13);
        uVar7 = (uVar7 - 1) - uVar13;
        puVar4 = (undefined2 *)((undefined1 *)((int)puVar4 + 1) + uVar13);
        uVar11 = uVar11 - 0xc;
      } while (uVar11 != 0);
    }
  }
  else if (param_5 == 2) {
    if (param_3 != 1) {
      piVar9 = (int *)(param_2 + 0x10);
      puVar10 = param_1;
      do {
        if (uVar7 >= 2) {
          puVar10 = (undefined4 *)(uVar7 - 2);
          param_3 = *piVar9;
          puVar12 = (undefined4 *)piVar9[1];
          *puVar4 = *param_4;
        }
        if (uVar7 < 2 || puVar10 < puVar12) {
LAB_00c442bc:
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad7b8);
        }
        piVar9 = piVar9 + 3;
        FUN_016dd1aa(puVar4 + 1,param_3,puVar12);
        uVar7 = (int)puVar10 - (int)puVar12;
        puVar4 = (undefined2 *)((int)(puVar4 + 1) + (int)puVar12);
        uVar11 = uVar11 - 0xc;
        param_3 = extraout_r2;
      } while (uVar11 != 0);
    }
  }
  else if (param_3 != 1) {
    piVar9 = (int *)(param_2 + 0x10);
    puVar10 = param_1;
    do {
      if (uVar7 >= 3) {
        param_3 = *piVar9;
        puVar12 = (undefined4 *)piVar9[1];
        uVar2 = *param_4;
        *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(param_4 + 1);
        puVar10 = (undefined4 *)(uVar7 - 3);
        *puVar4 = uVar2;
      }
      if (uVar7 < 3 || puVar10 < puVar12) goto LAB_00c442bc;
      piVar9 = piVar9 + 3;
      FUN_016dd1aa((undefined1 *)((int)puVar4 + 3),param_3,puVar12);
      uVar7 = (int)puVar10 - (int)puVar12;
      puVar4 = (undefined2 *)((undefined1 *)((int)puVar4 + 3) + (int)puVar12);
      uVar11 = uVar11 - 0xc;
      param_3 = extraout_r2_00;
    } while (uVar11 != 0);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = (int)puVar8 - uVar7;
  return;
}

