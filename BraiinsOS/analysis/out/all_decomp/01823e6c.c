// FUN_01823e6c @ 01823e6c size=352 calls_out=3 calls_in=1
// strings: 

void FUN_01823e6c(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint local_44 [6];
  uint uStack_2c;
  uint local_28;
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  FUN_016dd606(param_1,0,0x204,0);
  local_44[0] = *param_2;
  local_44[1] = param_2[1];
  local_44[2] = param_2[2];
  local_44[3] = param_2[3];
  uStack_2c = param_2[6];
  local_28 = param_2[7];
  local_44[4] = param_2[4];
  local_44[5] = param_2[5];
  if ((int)local_28 < 0) {
    FUN_01820018(local_44);
    iVar9 = -1;
  }
  else {
    iVar9 = 1;
  }
  uVar8 = 0;
  uVar7 = 0xffffffff;
  uVar3 = 0;
  do {
    uVar4 = uVar3 >> 5;
    uVar5 = local_44[uVar4] >> (uVar3 & 0x1f);
    uVar2 = uVar5 & 1;
    if (uVar2 == uVar8) {
      uVar4 = uVar3 + 1;
    }
    else {
      uVar2 = 0x81 - uVar3;
      if (0xe < (int)uVar2) {
        uVar2 = 0xf;
      }
      if (uVar4 == (uVar3 - 1) + uVar2 >> 5) {
        uVar5 = uVar5 & (1 << (uVar2 & 0xff)) - 1U;
      }
      else {
        uVar5 = (uVar5 | local_44[uVar4 + 1] << (0x20 - (uVar3 & 0x1f) & 0xff)) &
                ~(-1 << (uVar2 & 0xff));
      }
      iVar6 = uVar8 + uVar5;
      iVar1 = iVar6 * 0x20000 >> 0x1f;
      uVar8 = -iVar1;
      *(int *)(param_1 + uVar3 * 4) = iVar9 * (iVar6 + iVar1 * 0x8000);
      uVar4 = uVar2 + uVar3;
      uVar7 = uVar3;
    }
    uVar3 = uVar4;
  } while ((int)uVar4 < 0x81);
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar7 + 1,uVar2,local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

