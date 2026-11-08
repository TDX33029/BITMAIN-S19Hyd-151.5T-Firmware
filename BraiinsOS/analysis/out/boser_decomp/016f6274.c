// FUN_016f6274 @ 016f6274 size=540 calls_out=4 calls_in=1
// strings: 

void FUN_016f6274(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_38;
  int local_34;
  uint *local_30;
  uint local_2c;
  int local_28;
  
  uVar1 = param_1[2];
  if (uVar1 != 0) {
    uVar13 = *(uint *)(param_2 + 8);
    if (uVar13 == 0) {
      *(undefined1 *)(param_1 + 3) = 1;
      param_1[2] = 0;
    }
    else {
      uVar12 = 1;
      uVar6 = 0;
      local_38 = param_1[1];
      uVar8 = 0;
      iVar2 = *(int *)(param_2 + 4);
      uVar5 = 1;
      uVar7 = uVar1;
      while( true ) {
        if (uVar13 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar6,uVar13,&DAT_01d18878);
        }
        puVar3 = (uint *)(local_38 + uVar8 * 8);
        uVar10 = *puVar3;
        puVar9 = (uint *)(iVar2 + uVar6 * 8);
        uVar11 = puVar3[1];
        if (uVar10 < *puVar9) {
          uVar10 = *puVar9;
        }
        if (puVar9[1] < uVar11) {
          uVar11 = puVar9[1];
        }
        if (uVar10 <= uVar11) {
          if (uVar7 == *param_1) {
            FUN_015f5ab8(param_1);
            local_38 = param_1[1];
          }
          puVar3 = (uint *)(local_38 + uVar7 * 8);
          *puVar3 = uVar10;
          uVar7 = uVar7 + 1;
          puVar3[1] = uVar11;
          param_1[2] = uVar7;
        }
        if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar8,uVar7,&DAT_01d18888);
        }
        local_38 = param_1[1];
        uVar4 = *(uint *)(local_38 + uVar8 * 8 + 4);
        uVar11 = uVar13;
        uVar10 = uVar5;
        if (uVar4 < puVar9[1]) {
          uVar11 = uVar1;
          uVar10 = uVar12;
        }
        if (uVar11 <= uVar10) break;
        if (uVar4 < puVar9[1]) {
          uVar11 = uVar5;
          uVar8 = uVar12;
          uVar12 = uVar10 + 1;
        }
        else {
          uVar11 = uVar10 + 1;
          uVar6 = uVar5;
        }
        uVar5 = uVar11;
        if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar8,uVar7,&DAT_01d18868);
        }
      }
      if (uVar7 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar1,uVar7,&DAT_01d2fe30);
      }
      param_1[2] = 0;
      local_28 = uVar7 - uVar1;
      local_34 = local_38 + uVar1 * 8;
      local_30 = param_1;
      local_2c = uVar1;
      FUN_016f1920(&local_38);
      *(byte *)(param_1 + 3) = (byte)param_1[3] & *(byte *)(param_2 + 0xc);
    }
  }
  return;
}

