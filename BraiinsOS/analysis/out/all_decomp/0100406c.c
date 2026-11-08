// FUN_0100406c @ 0100406c size=520 calls_out=4 calls_in=2
// strings: capacity overflow

void FUN_0100406c(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint local_38;
  uint *local_34;
  code *local_30;
  uint *local_2c;
  code *local_28;
  
  uVar1 = param_2 >> 5;
  puVar10 = (uint *)(param_1 + 3);
  uVar2 = *puVar10;
  if (param_2 < uVar2) {
    uVar6 = param_1[2];
    if (uVar6 <= param_2 >> 5) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00378024,0x13,&DAT_01881e58);
    }
    uVar8 = uVar2;
    if ((*(uint *)(param_1[1] + uVar1 * 4) >> (param_2 & 0x1f) & 1) != 0) {
      return;
    }
  }
  else {
    uVar8 = param_2 + 1;
    if (uVar8 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("capacity overflow",0x11,&DAT_01881e98);
    }
    uVar6 = param_1[2];
    uVar4 = uVar8 >> 5;
    uVar9 = uVar8 & 0x1f;
    if (uVar9 != 0) {
      uVar4 = (uVar8 >> 5) + 1;
    }
    uVar7 = uVar2 >> 5;
    uVar5 = uVar6;
    if (uVar4 < uVar6) {
      uVar5 = uVar4;
    }
    if ((uVar2 & 0x1f) != 0) {
      uVar7 = (uVar2 >> 5) + 1;
    }
    if (uVar7 < uVar5) {
      iVar3 = param_1[1];
      do {
        *(undefined4 *)(iVar3 + uVar7 * 4) = 0;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
    }
    if (uVar6 < uVar4) {
      uVar4 = uVar4 - uVar6;
      if (*param_1 - uVar6 < uVar4) {
        FUN_010007c0(param_1,uVar6,uVar4,4,4);
        uVar6 = param_1[2];
      }
      iVar3 = param_1[1];
      do {
        *(undefined4 *)(iVar3 + uVar6 * 4) = 0;
        uVar6 = uVar6 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      param_1[2] = uVar6;
    }
    *puVar10 = uVar8;
    if (uVar9 != 0) {
      if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(0xffffffff,0,&DAT_01881e68);
      }
      *(uint *)(param_1[1] + (uVar6 - 1) * 4) =
           *(uint *)(param_1[1] + (uVar6 - 1) * 4) & ~(-1 << uVar9);
    }
  }
  local_38 = param_2;
  if (uVar8 <= param_2) {
    local_34 = &local_38;
    local_28 = FUN_007883b8;
    local_30 = FUN_007883b8;
    local_2c = puVar10;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0057b609,&local_34,&DAT_01881e78);
  }
  if (uVar6 <= param_2 >> 5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar1,uVar6,&DAT_01881e88);
  }
  *(uint *)(param_1[1] + uVar1 * 4) = *(uint *)(param_1[1] + uVar1 * 4) | 1 << (param_2 & 0x1f);
  return;
}

