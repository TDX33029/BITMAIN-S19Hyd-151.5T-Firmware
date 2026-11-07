// FUN_0133f3b4 @ 0133f3b4 size=468 calls_out=4 calls_in=2
// strings: capacity overflow

void FUN_0133f3b4(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  uint *local_2c;
  undefined1 *local_28;
  
  puVar8 = (uint *)(param_1 + 0xc);
  uVar4 = *puVar8;
  uVar1 = param_2 >> 5;
  if (param_2 < uVar4) {
    if (*(uint *)(param_1 + 8) <= param_2 >> 5) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_00450d12,0x13,&DAT_01ce6824);
    }
    uVar9 = uVar4;
    if ((*(uint *)(*(int *)(param_1 + 4) + uVar1 * 4) >> (param_2 & 0x1f) & 1) != 0) {
      return;
    }
  }
  else {
    uVar9 = param_2 + 1;
    if (uVar9 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("capacity overflow",0x11,&DAT_01ce67ec);
    }
    uVar3 = *(uint *)(param_1 + 8);
    uVar6 = uVar9 >> 5;
    uVar10 = uVar9 & 0x1f;
    if (uVar10 != 0) {
      uVar6 = (uVar9 >> 5) + 1;
    }
    uVar2 = uVar4 >> 5;
    uVar7 = uVar3;
    if (uVar6 < uVar3) {
      uVar7 = uVar6;
    }
    if ((uVar4 & 0x1f) != 0) {
      uVar2 = (uVar4 >> 5) + 1;
    }
    if (uVar2 < uVar7) {
      iVar5 = *(int *)(param_1 + 4);
      uVar4 = uVar2;
      if (uVar2 < uVar3) {
        uVar4 = uVar3;
      }
      do {
        if (uVar4 == uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar2,uVar3,&DAT_01ce67fc);
        }
        *(undefined4 *)(iVar5 + uVar2 * 4) = 0;
        uVar2 = uVar2 + 1;
      } while (uVar7 != uVar2);
    }
    if (uVar3 < uVar6) {
      FUN_0065f438(param_1,0,uVar6 - uVar3);
    }
    *puVar8 = uVar9;
    if (uVar10 != 0) {
      iVar5 = *(int *)(param_1 + 8) + -1;
      if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0xffffffff,0,&DAT_01ce67dc);
      }
      *(uint *)(*(int *)(param_1 + 4) + iVar5 * 4) =
           *(uint *)(*(int *)(param_1 + 4) + iVar5 * 4) & ~(-1 << uVar10);
    }
  }
  local_38 = param_2;
  if (uVar9 <= param_2) {
    local_28 = &LAB_01a6a304;
    local_30 = &LAB_01a6a304;
    local_34 = (undefined1 *)&local_38;
    local_2c = puVar8;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0057e045,&local_34,&DAT_01ce6834);
  }
  if (*(uint *)(param_1 + 8) <= param_2 >> 5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,*(uint *)(param_1 + 8),&DAT_01ce6844);
  }
  *(uint *)(*(int *)(param_1 + 4) + uVar1 * 4) =
       *(uint *)(*(int *)(param_1 + 4) + uVar1 * 4) | 1 << (param_2 & 0x1f);
  return;
}

