// FUN_016623e0 @ 016623e0 size=432 calls_out=6 calls_in=2
// strings: ./ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789

void FUN_016623e0(uint *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint local_30;
  undefined1 *local_2c;
  uint local_28;
  
  uVar9 = (param_2 + 3 >> 2) * 3;
  uVar8 = uVar9;
  if (uVar9 == 0) {
    uVar8 = 0xffffffff;
  }
  if (uVar8 < 9) {
    uVar8 = 8;
  }
  uVar4 = FUN_01661728();
  puVar5 = (undefined1 *)FUN_01298504(uVar8,1);
  if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,uVar8);
  }
  *puVar5 = uVar4;
  local_28 = 1;
  iVar7 = uVar9 - 2;
  local_30 = uVar8;
  local_2c = puVar5;
  do {
    uVar9 = local_28;
    uVar4 = FUN_01661728();
    if (uVar9 == local_30) {
      iVar6 = iVar7 + 1;
      if (iVar7 == -1) {
        iVar6 = -1;
      }
      FUN_006520b4(&local_30,uVar9,iVar6,1,1);
      puVar5 = local_2c;
    }
    puVar3 = local_2c;
    uVar8 = local_30;
    puVar5[uVar9] = uVar4;
    local_28 = uVar9 + 1;
    bVar10 = iVar7 != 0;
    iVar7 = iVar7 + -1;
  } while (bVar10);
  FUN_0166306c(&local_30,local_2c,local_28,
               "./ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
  for (; param_2 < local_28; local_28 = iVar7 + local_28) {
    iVar7 = -1;
    if (0x7fffffff < (uint)(int)(char)local_2c[local_28 - 1]) {
      bVar1 = local_2c[local_28 - 2];
      if ((char)bVar1 < -0x40) {
        bVar2 = local_2c[local_28 - 3];
        if ((char)bVar2 < -0x40) {
          uVar9 = (int)(char)bVar2 & 0x3fU | ((byte)local_2c[local_28 - 4] & 7) << 6;
        }
        else {
          uVar9 = bVar2 & 0xf;
        }
        uVar9 = (int)(char)bVar1 & 0x3fU | uVar9 << 6;
      }
      else {
        uVar9 = bVar1 & 0x1f;
      }
      if (1 < uVar9) {
        iVar7 = -2;
      }
      if ((0x1f < uVar9) && (iVar7 = -4, uVar9 < 0x400)) {
        iVar7 = -3;
      }
    }
  }
  *param_1 = local_30;
  param_1[1] = (uint)local_2c;
  param_1[2] = local_28;
  FUN_0134bd64(uVar8,puVar3);
  return;
}

