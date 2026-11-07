// FUN_01497474 @ 01497474 size=440 calls_out=3 calls_in=2
// strings: 

void FUN_01497474(uint *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint local_48;
  uint local_44;
  
  iVar8 = param_3 * 0x48;
  if (0x1c71c71 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (iVar8 == 0) {
    local_44 = 4;
    local_48 = 0;
  }
  else {
    local_44 = thunk_FUN_016d4a50(iVar8);
    if (local_44 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar8);
    }
    local_48 = param_3;
    if (param_3 != 0) {
      iVar8 = 0;
      uVar10 = 0;
      do {
        if (param_3 * -0x48 == iVar8) break;
        iVar9 = param_2[6];
        uVar14 = param_2[5];
        if (iVar9 == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = thunk_FUN_016d4a50(iVar9);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar9);
          }
        }
        FUN_016dd1aa(iVar3,uVar14,iVar9);
        uVar14 = param_2[8];
        uVar13 = param_2[9];
        uVar10 = uVar10 + 1;
        uVar7 = param_2[10];
        uVar18 = param_2[0xb];
        uVar5 = param_2[0xd];
        uVar11 = param_2[0xe];
        uVar15 = param_2[0xf];
        uVar16 = param_2[0x10];
        uVar2 = *(undefined1 *)(param_2 + 0x11);
        uVar12 = param_2[1];
        uVar6 = param_2[2];
        uVar17 = param_2[3];
        puVar4 = (undefined4 *)(local_44 - iVar8);
        *puVar4 = *param_2;
        iVar8 = iVar8 + -0x48;
        puVar4[0xc] = param_2[0xc];
        puVar1 = param_2 + 7;
        param_2 = param_2 + 0x12;
        puVar4[7] = *puVar1;
        puVar4[8] = uVar14;
        puVar4[9] = uVar13;
        puVar4[10] = uVar7;
        puVar4[0xb] = uVar18;
        puVar4[1] = uVar12;
        puVar4[2] = uVar6;
        puVar4[3] = uVar17;
        puVar4[4] = iVar9;
        puVar4[5] = iVar3;
        puVar4[6] = iVar9;
        puVar4[0xd] = uVar5;
        puVar4[0xe] = uVar11;
        puVar4[0xf] = uVar15;
        puVar4[0x10] = uVar16;
        *(undefined1 *)(puVar4 + 0x11) = uVar2;
      } while (param_3 != uVar10);
    }
  }
  *param_1 = local_48;
  param_1[1] = local_44;
  param_1[2] = param_3;
  return;
}

