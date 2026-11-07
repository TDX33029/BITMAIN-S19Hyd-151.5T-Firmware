// FUN_016f6580 @ 016f6580 size=536 calls_out=4 calls_in=1
// strings: 

void FUN_016f6580(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint local_38;
  int local_34;
  uint *local_30;
  uint local_2c;
  int local_28;
  
  uVar2 = param_1[2];
  if (uVar2 != 0) {
    uVar14 = *(uint *)(param_2 + 8);
    if (uVar14 == 0) {
      *(undefined1 *)(param_1 + 3) = 1;
      param_1[2] = 0;
    }
    else {
      uVar13 = 1;
      uVar7 = 0;
      local_38 = param_1[1];
      uVar9 = 0;
      iVar3 = *(int *)(param_2 + 4);
      uVar6 = 1;
      uVar8 = uVar2;
      while( true ) {
        if (uVar14 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar7,uVar14,&DAT_01d18878);
        }
        pbVar4 = (byte *)(local_38 + uVar9 * 2);
        bVar11 = *pbVar4;
        pbVar10 = (byte *)(iVar3 + uVar7 * 2);
        bVar12 = pbVar4[1];
        if (bVar11 < *pbVar10) {
          bVar11 = *pbVar10;
        }
        if (pbVar10[1] < bVar12) {
          bVar12 = pbVar10[1];
        }
        if (bVar11 <= bVar12) {
          if (uVar8 == *param_1) {
            FUN_016f5378(param_1);
            local_38 = param_1[1];
          }
          pbVar4 = (byte *)(local_38 + uVar8 * 2);
          *pbVar4 = bVar11;
          uVar8 = uVar8 + 1;
          pbVar4[1] = bVar12;
          param_1[2] = uVar8;
        }
        if (uVar8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar9,uVar8,&DAT_01d18888);
        }
        local_38 = param_1[1];
        bVar11 = *(byte *)(local_38 + uVar9 * 2 + 1);
        uVar5 = uVar14;
        uVar1 = uVar6;
        if (bVar11 < pbVar10[1]) {
          uVar5 = uVar2;
          uVar1 = uVar13;
        }
        if (uVar5 <= uVar1) break;
        if (bVar11 < pbVar10[1]) {
          uVar5 = uVar6;
          uVar9 = uVar13;
          uVar13 = uVar1 + 1;
        }
        else {
          uVar5 = uVar1 + 1;
          uVar7 = uVar6;
        }
        uVar6 = uVar5;
        if (uVar8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar9,uVar8,&DAT_01d18868);
        }
      }
      if (uVar8 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar2,uVar8,&DAT_01d2fe30);
      }
      param_1[2] = 0;
      local_28 = uVar8 - uVar2;
      local_34 = local_38 + uVar2 * 2;
      local_30 = param_1;
      local_2c = uVar2;
      FUN_00700ec0(&local_38);
      *(byte *)(param_1 + 3) = (byte)param_1[3] & *(byte *)(param_2 + 0xc);
    }
  }
  return;
}

