// FUN_016de88c @ 016de88c size=604 calls_out=5 calls_in=3
// strings: 

void FUN_016de88c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  char *local_38;
  char *local_34;
  uint *local_30;
  uint local_2c;
  int local_28;
  
  uVar6 = param_1[2];
  if (uVar6 == 0) {
    if (*param_1 == 0) {
      FUN_016f5378(param_1);
    }
    *(undefined1 *)(param_1 + 3) = 1;
    param_1[2] = 1;
    *(undefined2 *)param_1[1] = 0xff00;
  }
  else {
    local_38 = (char *)param_1[1];
    cVar10 = *local_38;
    if (cVar10 == '\0') {
      uVar3 = uVar6;
    }
    else {
      if (uVar6 == *param_1) {
        FUN_016f5378(param_1);
        local_38 = (char *)param_1[1];
      }
      param_1[2] = uVar6 + 1;
      local_38[uVar6 * 2] = '\0';
      (local_38 + uVar6 * 2)[1] = cVar10 + -1;
      uVar3 = uVar6 + 1;
    }
    uVar12 = uVar6 - 1;
    if (uVar12 != 0) {
      uVar5 = 0;
      do {
        uVar7 = uVar3 + uVar5;
        if (uVar7 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar5,uVar7,&DAT_01d18848);
        }
        uVar1 = (byte)local_38[uVar5 * 2 + 1] + 1;
        if ((uVar1 & 0xffffff00) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d188a8);
        }
        uVar8 = uVar5 + 1;
        if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar8,uVar7,&DAT_01d18858);
        }
        if ((byte)local_38[uVar5 * 2 + 2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d18898);
        }
        uVar4 = (byte)local_38[uVar5 * 2 + 2] - 1;
        uVar2 = uVar1 & 0xff;
        uVar11 = uVar4 & 0xff;
        cVar9 = (char)uVar4;
        cVar10 = cVar9;
        if (uVar2 < uVar11) {
          cVar10 = (char)uVar1;
        }
        if (uVar2 >= uVar11 && uVar2 != uVar11) {
          cVar9 = (char)uVar1;
        }
        if (uVar7 == *param_1) {
          FUN_016f5378(param_1);
          local_38 = (char *)param_1[1];
        }
        param_1[2] = uVar7 + 1;
        local_38[uVar5 * 2 + uVar3 * 2] = cVar10;
        (local_38 + uVar5 * 2 + uVar3 * 2)[1] = cVar9;
        uVar5 = uVar8;
      } while (uVar12 != uVar8);
      uVar3 = uVar3 + uVar8;
    }
    if (uVar3 <= uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar12,uVar3,&DAT_01d18838);
    }
    cVar10 = local_38[uVar12 * 2 + 1];
    if (cVar10 == -1) {
      uVar12 = uVar3;
    }
    else {
      if (uVar3 == *param_1) {
        FUN_016f5378(param_1);
      }
      local_38 = (char *)param_1[1];
      uVar12 = uVar3 + 1;
      param_1[2] = uVar12;
      local_38[uVar3 * 2] = cVar10 + '\x01';
      (local_38 + uVar3 * 2)[1] = -1;
    }
    if (uVar12 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar6,uVar12,&DAT_01d2fe30);
    }
    param_1[2] = 0;
    local_28 = uVar12 - uVar6;
    local_34 = local_38 + uVar6 * 2;
    local_30 = param_1;
    local_2c = uVar6;
    FUN_00700ec0(&local_38);
  }
  return;
}

