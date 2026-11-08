// FUN_01361920 @ 01361920 size=464 calls_out=2 calls_in=1
// strings: 

void FUN_01361920(uint *param_1,int param_2,uint param_3)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *unaff_r7;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  uint extraout_r12;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  uint local_30;
  uint local_2c;
  
  iVar4 = param_3 * 0xc;
  if (0xaaaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (iVar4 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    uVar17 = thunk_FUN_016d4a50(iVar4);
    puVar2 = (uint *)((ulonglong)uVar17 >> 0x20);
    local_2c = (uint)uVar17;
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar4);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      iVar13 = param_2 + param_3 * 0xc;
      iVar4 = 0;
      uVar9 = param_3;
      do {
        if (param_2 == iVar13) break;
        uVar7 = *(uint *)(param_2 + 8);
        uVar5 = 0;
        bVar16 = 0x1ffffffe < uVar7;
        bVar15 = uVar7 == 0x1fffffff;
        if (uVar7 < 0x20000000) {
          unaff_r7 = (uint *)(uVar7 << 3);
          bVar16 = (uint *)0x7ffffffb < unaff_r7;
          bVar15 = unaff_r7 == (uint *)0x7ffffffc;
        }
        if (bVar16 && !bVar15) {
LAB_01361ad8:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar5,puVar2);
        }
        if (unaff_r7 == (uint *)0x0) {
          puVar2 = (uint *)&DAT_00000004;
          uVar8 = 0;
        }
        else {
          puVar11 = *(undefined4 **)(param_2 + 4);
          puVar2 = (uint *)thunk_FUN_016d4a50(unaff_r7,puVar2);
          if (puVar2 == (uint *)0x0) {
            uVar5 = 4;
            puVar2 = unaff_r7;
            goto LAB_01361ad8;
          }
          if (uVar7 != 0) {
            uVar8 = uVar7;
            iVar10 = 0;
            puVar12 = puVar11;
            uVar14 = extraout_r12;
            do {
              if (puVar12 == puVar11 + uVar7 * 2) break;
              puVar6 = (uint *)*puVar12;
              if (puVar6 != (uint *)0x0) {
                uVar14 = puVar12[1];
                do {
                  uVar3 = *puVar6;
                  bVar15 = (bool)hasExclusiveAccess(puVar6);
                } while (!bVar15);
                *puVar6 = uVar3 + 1;
                if (0x7fffffff < uVar3) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)software_udf(0xfdee,0x1361ae0);
                  (*pcVar1)();
                }
              }
              puVar2[iVar10 * 2] = (uint)puVar6;
              uVar8 = uVar8 - 1;
              (puVar2 + iVar10 * 2)[1] = uVar14;
              iVar10 = iVar10 + 1;
              puVar12 = puVar12 + 2;
            } while (uVar8 != 0);
          }
          uVar8 = uVar7;
        }
        uVar9 = uVar9 - 1;
        unaff_r7 = (uint *)(local_2c + iVar4 * 0xc);
        *unaff_r7 = uVar8;
        param_2 = param_2 + 0xc;
        unaff_r7[1] = (uint)puVar2;
        unaff_r7[2] = uVar7;
        iVar4 = iVar4 + 1;
      } while (uVar9 != 0);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

