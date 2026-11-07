// FUN_0130ef7c @ 0130ef7c size=528 calls_out=7 calls_in=2
// strings: capacity overflow | capacity overflow

void FUN_0130ef7c(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  undefined4 uVar12;
  bool bVar13;
  bool bVar14;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  
  uVar9 = param_2[2];
  uVar12 = 0;
  puVar11 = (uint *)0x0;
  if ((char)uVar9 == '\0') {
    uVar1 = *param_2;
    uVar3 = param_2[1];
    bVar13 = uVar1 <= uVar3;
    if (bVar13) {
      uVar1 = uVar3 - uVar1;
      puVar11 = (uint *)(uVar1 + 1);
    }
    if (bVar13 && 0xfffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("capacity overflow",0x23,&DAT_01d2fe10);
    }
  }
  uVar1 = (int)puVar11 * 4;
  bVar14 = (uint *)0x3ffffffe < puVar11;
  bVar13 = puVar11 == (uint *)0x3fffffff;
  if (puVar11 < (uint *)0x40000000) {
    bVar14 = 0x7ffffffb < uVar1;
    bVar13 = uVar1 == 0x7ffffffc;
  }
  if (bVar14 && !bVar13) {
LAB_0130efc4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar12,uVar1);
  }
  if (uVar1 == 0) {
    local_30 = (uint *)&SUB_00000004;
    puVar11 = (uint *)0x0;
  }
  else {
    uVar12 = 4;
    local_30 = (uint *)FUN_01298504(uVar1,4);
    if (local_30 == (uint *)0x0) goto LAB_0130efc4;
  }
  local_2c = (uint *)0x0;
  local_34 = puVar11;
  if ((char)uVar9 == '\0') {
    uVar9 = *param_2;
    uVar1 = param_2[1];
    if (uVar9 <= uVar1) {
      puVar5 = (uint *)((uVar1 - uVar9) + 1);
      if (0xfffffffe < uVar1 - uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("capacity overflow",0x23,&DAT_01d2fe20);
      }
      if (puVar11 < puVar5) {
        FUN_006520b4(&local_34,0,puVar5,4,4);
      }
      puVar5 = local_30;
      puVar11 = local_34;
      puVar2 = local_2c;
      if (uVar9 < uVar1) {
        do {
          local_30[(int)puVar2] = uVar9;
          uVar9 = uVar9 + 1;
          puVar2 = (uint *)((int)puVar2 + 1);
        } while (uVar1 != uVar9);
      }
      local_30[(int)puVar2] = uVar1;
      uVar9 = (int)puVar2 + 1;
      if (puVar2 != (uint *)0xffffffff) {
        if (uVar9 != 1) {
          if (uVar9 < 0x15) {
            puVar4 = local_30 + 1;
            iVar10 = 0;
            puVar2 = puVar4;
            do {
              uVar3 = puVar2[-1];
              uVar1 = *puVar2;
              if (uVar1 < uVar3) {
                iVar6 = iVar10;
                do {
                  *(uint *)((int)puVar4 + iVar6) = uVar3;
                  if (iVar6 == 0) {
                    puVar8 = local_30;
                    goto LAB_0130f168;
                  }
                  iVar7 = iVar6 + -4;
                  uVar3 = *(uint *)((int)puVar4 + iVar6 + -8);
                  iVar6 = iVar7;
                } while (uVar1 < uVar3);
                puVar8 = (uint *)((int)puVar4 + iVar7);
LAB_0130f168:
                *puVar8 = uVar1;
              }
              puVar2 = puVar2 + 1;
              iVar10 = iVar10 + 4;
            } while (puVar2 != local_30 + uVar9);
          }
          else {
            FUN_0130eb34(local_30,uVar9);
          }
        }
        local_28 = puVar5 + uVar9;
        local_2c = puVar11;
        local_34 = puVar5;
        local_30 = puVar5;
        FUN_0130fa24(param_1,&local_34);
        return;
      }
    }
  }
  param_1[2] = 0;
  *param_1 = 0;
  FUN_0134aee0(local_34,local_30,4,4);
  return;
}

