// FUN_008d611c @ 008d611c size=428 calls_out=6 calls_in=1
// strings: attempt to join into collection with len > usize::MAX

void FUN_008d611c(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  param_3 = param_3 * 0xc;
  uVar10 = param_3 - 0xc;
  uVar8 = (uVar10 >> 2) * 0x55555556;
  iVar4 = param_2;
  do {
    if (param_3 == 0) {
      local_30 = 0;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,uVar8);
      }
      if (uVar8 == 0) {
        local_2c = 1;
      }
      else {
        local_2c = thunk_FUN_016d4a50(uVar8);
        local_30 = uVar8;
        if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar8);
        }
      }
      uVar11 = *(uint *)(param_2 + 8);
      uVar7 = *(uint *)(param_2 + 4);
      local_28 = 0;
      if (local_30 < uVar11) {
        FUN_008d609c(&local_30,0,uVar11,1,1);
      }
      iVar4 = local_28;
      uVar2 = local_2c;
      FUN_016dd1aa(local_2c + local_28,uVar7,uVar11);
      uVar5 = uVar8 - (iVar4 + uVar11);
      puVar3 = (undefined2 *)(uVar2 + iVar4 + uVar11);
      puVar9 = (undefined4 *)(param_2 + 0x10);
      uVar6 = extraout_r2;
      while( true ) {
        if (uVar10 == 0) {
          *param_1 = local_30;
          param_1[1] = local_2c;
          param_1[2] = uVar8 - uVar5;
          return;
        }
        if (1 < uVar5) {
          uVar7 = uVar5 - 2;
          uVar6 = *puVar9;
          uVar11 = puVar9[1];
          *puVar3 = 0x202c;
        }
        if (1 >= uVar5 || uVar7 < uVar11) break;
        FUN_016dd1aa(puVar3 + 1,uVar6,uVar11);
        uVar5 = uVar7 - uVar11;
        puVar3 = (undefined2 *)((int)(puVar3 + 1) + uVar11);
        uVar10 = uVar10 - 0xc;
        puVar9 = puVar9 + 3;
        uVar6 = extraout_r2_00;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad7b8);
    }
    puVar1 = (uint *)(iVar4 + 8);
    param_3 = param_3 + -0xc;
    iVar4 = iVar4 + 0xc;
    bVar12 = CARRY4(*puVar1,uVar8);
    uVar8 = *puVar1 + uVar8;
  } while (!bVar12);
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("attempt to join into collection with len > usize::MAX",0x35,&DAT_018ad7c8);
}

