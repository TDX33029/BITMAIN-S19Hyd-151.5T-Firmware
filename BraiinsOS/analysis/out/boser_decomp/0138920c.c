// FUN_0138920c @ 0138920c size=648 calls_out=4 calls_in=2
// strings: 

bool FUN_0138920c(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint local_84;
  uint uStack_78;
  uint uStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar6 = *(uint *)(param_1 + 0x28);
  if (uVar6 < uVar1) {
    uVar11 = *(uint *)(param_1 + 0xc);
    iVar12 = *(int *)(param_1 + 0x10);
    iVar13 = *(int *)(param_1 + 0x14);
    uVar18 = *(uint *)(param_1 + 0x1c);
    iVar17 = *(int *)(param_1 + 4);
    uVar16 = *(uint *)(param_1 + 8);
    uVar7 = *(uint *)(param_1 + 0x20);
    iVar15 = *(int *)(param_1 + 0x18);
    local_84 = uVar1;
    do {
      if (iVar15 == 0) {
LAB_01389490:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01cec004);
      }
      iVar8 = iVar15 + -1;
      *(int *)(param_1 + 0x18) = iVar8;
      uVar2 = iVar13 + iVar8;
      uVar3 = uVar2 - uVar11;
      if (uVar2 < uVar11) {
        uVar3 = uVar2;
      }
      piVar9 = (int *)(iVar12 + uVar3 * 0x30);
      iVar19 = *piVar9;
      uVar3 = piVar9[1];
      uStack_4c = piVar9[2];
      uStack_48 = piVar9[3];
      iStack_44 = piVar9[4];
      iStack_40 = piVar9[5];
      local_3c = piVar9[6];
      iStack_38 = piVar9[7];
      iStack_34 = piVar9[8];
      iStack_30 = piVar9[9];
      iStack_2c = piVar9[10];
      uVar2 = piVar9[0xb];
      local_50 = uVar3;
      uStack_28 = uVar2;
      if (iVar19 == 2) goto LAB_01389490;
      uStack_78 = uStack_4c;
      uStack_74 = uStack_48;
      iStack_70 = iStack_44;
      iStack_6c = iStack_40;
      local_68 = local_3c;
      iStack_64 = iStack_38;
      iStack_60 = iStack_34;
      iStack_5c = iStack_30;
      iStack_58 = iStack_2c;
      iVar4 = FUN_01388e98(&uStack_78);
      local_84 = local_84 - iVar4;
      uVar10 = iVar15 + ~uVar7;
      *(uint *)(param_1 + 0x24) = local_84;
      uVar2 = uVar2 & uVar18;
      while( true ) {
        do {
          uVar5 = uVar2;
          uVar2 = 0;
        } while (uVar16 <= uVar5);
        puVar14 = (uint *)(iVar17 + uVar5 * 0xc);
        if ((*puVar14 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01cec014);
        }
        if (puVar14[1] == uVar10) break;
        uVar2 = uVar5 + 1;
      }
      if (iVar19 == 0) {
        if (((param_2 & 1) != 0) && (uVar3 = ~uVar7, uVar10 == param_3)) goto LAB_013893b0;
        *puVar14 = 0;
        while( true ) {
          uVar3 = uVar5 + 1;
          do {
            uVar2 = uVar3;
            uVar3 = 0;
          } while (uVar16 <= uVar2);
          puVar14 = (uint *)(iVar17 + uVar2 * 0xc);
          if ((*puVar14 != 1) || ((uVar2 - (puVar14[2] & uVar18) & uVar18) == 0)) break;
          local_50 = *puVar14;
          uStack_4c = puVar14[1];
          uStack_48 = puVar14[2];
          *puVar14 = 0;
          if (uVar16 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar5,uVar16,&DAT_01cebfe4);
          }
          puVar14 = (uint *)(iVar17 + uVar5 * 0xc);
          *puVar14 = local_50;
          puVar14[1] = uStack_4c;
          puVar14[2] = uStack_48;
          uVar5 = uVar2;
        }
      }
      else {
LAB_013893b0:
        *puVar14 = 1;
        puVar14[1] = uVar3;
      }
      FUN_01390338(&uStack_78);
      iVar15 = iVar8;
    } while (uVar6 < local_84);
  }
  return uVar6 < uVar1;
}

