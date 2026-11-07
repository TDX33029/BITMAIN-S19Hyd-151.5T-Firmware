// FUN_013621d4 @ 013621d4 size=392 calls_out=2 calls_in=1
// strings: 

void FUN_013621d4(uint *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *extraout_r12;
  int iVar11;
  bool bVar12;
  bool bVar13;
  uint local_30;
  uint local_2c;
  
  puVar8 = (uint *)(param_3 * 0xc);
  if (0xaaaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (puVar8 == (uint *)0x0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(puVar8);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,puVar8);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      iVar11 = param_2 + param_3 * 0xc;
      uVar4 = param_3;
      iVar5 = 0;
      puVar1 = extraout_r12;
      do {
        if (param_2 == iVar11) break;
        uVar10 = *(uint *)(param_2 + 8);
        uVar2 = 0;
        bVar13 = 0x1ffffffe < uVar10;
        bVar12 = uVar10 == 0x1fffffff;
        if (uVar10 < 0x20000000) {
          puVar8 = (uint *)(uVar10 << 3);
          bVar13 = (uint *)0x7ffffffb < puVar8;
          bVar12 = puVar8 == (uint *)0x7ffffffc;
        }
        if (bVar13 && !bVar12) {
LAB_01362344:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar2,puVar1);
        }
        if (puVar8 == (uint *)0x0) {
          puVar1 = (uint *)&DAT_00000004;
        }
        else {
          iVar9 = *(int *)(param_2 + 4);
          puVar1 = (uint *)thunk_FUN_016d4a50(puVar8);
          if (puVar1 == (uint *)0x0) {
            uVar2 = 4;
            puVar1 = puVar8;
            goto LAB_01362344;
          }
          if (uVar10 != 0) {
            puVar3 = (uint *)0x0;
            uVar2 = uVar10;
            do {
              bVar12 = puVar8 == puVar3;
              if (!bVar12) {
                puVar6 = (undefined4 *)(iVar9 + (int)puVar3);
                puVar7 = (undefined4 *)((int)puVar1 + (int)puVar3);
                *puVar7 = *puVar6;
                puVar3 = puVar3 + 2;
                puVar7[1] = puVar6[1];
                uVar2 = uVar2 - 1;
                bVar12 = uVar2 == 0;
              }
            } while (!bVar12);
          }
          uVar2 = uVar10;
        }
        uVar4 = uVar4 - 1;
        puVar8 = (uint *)(local_2c + iVar5 * 0xc);
        *puVar8 = uVar2;
        param_2 = param_2 + 0xc;
        puVar8[1] = (uint)puVar1;
        puVar8[2] = uVar10;
        iVar5 = iVar5 + 1;
      } while (uVar4 != 0);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

