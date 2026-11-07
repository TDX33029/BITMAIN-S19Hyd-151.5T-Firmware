// FUN_00a89f8c @ 00a89f8c size=420 calls_out=7 calls_in=1
// strings: attempt to join into collection with len > usize::MAX

void FUN_00a89f8c(uint *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar7;
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
  uVar11 = param_3 - 0xc;
  uVar8 = (uVar11 >> 2) * 0x55555556;
  uVar5 = param_2;
  do {
    if (param_3 == 0) {
      if (0x7fffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00600c10();
      }
      if (uVar8 == 0) {
        local_2c = 1;
      }
      else {
        local_2c = thunk_FUN_016d4a50(uVar8);
        if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar8);
        }
      }
      uVar10 = *(uint *)(param_2 + 8);
      uVar5 = *(uint *)(param_2 + 4);
      local_28 = 0;
      local_30 = uVar8;
      if (uVar8 < uVar10) {
        FUN_00a8a86c(&local_30,0,uVar10,1,1);
      }
      iVar3 = local_28;
      uVar2 = local_2c;
      FUN_016dd1aa(local_2c + local_28,uVar5,uVar10);
      uVar6 = uVar8 - (iVar3 + uVar10);
      puVar4 = (undefined2 *)(uVar2 + iVar3 + uVar10);
      puVar9 = (undefined4 *)(param_2 + 0x10);
      uVar7 = extraout_r2;
      while( true ) {
        if (uVar11 == 0) {
          *param_1 = local_30;
          param_1[1] = local_2c;
          param_1[2] = uVar8 - uVar6;
          return;
        }
        if (1 < uVar6) {
          uVar5 = uVar6 - 2;
          uVar7 = *puVar9;
          param_2 = puVar9[1];
          *puVar4 = 0x202c;
        }
        if (1 >= uVar6 || uVar5 < param_2) break;
        FUN_016dd1aa(puVar4 + 1,uVar7,param_2);
        uVar6 = uVar5 - param_2;
        puVar4 = (undefined2 *)((int)(puVar4 + 1) + param_2);
        uVar11 = uVar11 - 0xc;
        puVar9 = puVar9 + 3;
        uVar7 = extraout_r2_00;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad7b8);
    }
    puVar1 = (uint *)(uVar5 + 8);
    param_3 = param_3 + -0xc;
    uVar5 = uVar5 + 0xc;
    bVar12 = CARRY4(*puVar1,uVar8);
    uVar8 = *puVar1 + uVar8;
  } while (!bVar12);
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8("attempt to join into collection with len > usize::MAX",0x35,&DAT_018ad7c8);
}

