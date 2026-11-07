// FUN_01299290 @ 01299290 size=356 calls_out=2 calls_in=9
// strings: 

void FUN_01299290(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  
  iVar4 = 0;
  if ((*param_1 & 1) != 0) {
    uVar3 = param_1[2];
    iVar4 = 2;
    uVar2 = param_1[3];
    if ((((uVar2 != 0 || uVar2 < (0x7f < uVar3)) &&
         (iVar4 = 3, uVar2 != 0 || uVar2 < (0x3fff < uVar3))) &&
        (iVar4 = 4, uVar2 != 0 || uVar2 < (0x1fffff < uVar3))) &&
       (iVar4 = 5, uVar2 != 0 || uVar2 < (0xfffffff < uVar3))) {
      iVar4 = 6;
      if (7 < uVar2) {
        iVar4 = 7;
      }
      if (0x3ff < uVar2) {
        iVar4 = 8;
        if (0x1ffff < uVar2) {
          iVar4 = 9;
        }
        if ((0xffffff < uVar2) && (iVar4 = 0xb, uVar2 < 0x80000000)) {
          iVar4 = 10;
        }
      }
    }
  }
  uVar2 = param_1[0xb];
  if (param_1[10] < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar2,param_1[10],&DAT_01890988);
  }
  if ((param_1[4] & 1) != 0) {
    iVar4 = iVar4 + 9;
  }
  if (uVar2 != 0) {
    puVar6 = (uint *)param_1[9];
    puVar7 = puVar6 + uVar2 * 10;
    do {
      iVar5 = 0;
      if ((*puVar6 & 1) != 0) {
        iVar5 = 9;
      }
      if ((puVar6[4] & 1) != 0) {
        iVar5 = iVar5 + 9;
      }
      iVar1 = FUN_01337c54(puVar6[8]);
      uVar2 = iVar5 + iVar1;
      iVar5 = 1;
      puVar6[9] = uVar2;
      if (0x7f < uVar2) {
        iVar5 = 2;
        if (0x3fff < uVar2) {
          iVar5 = 3;
        }
        if ((0x1fffff < uVar2) && (iVar5 = 5, uVar2 < 0x10000000)) {
          iVar5 = 4;
        }
      }
      puVar6 = puVar6 + 10;
      iVar4 = iVar4 + iVar5 + uVar2 + 1;
    } while (puVar6 != puVar7);
  }
  iVar5 = FUN_01337c54(param_1[0xc]);
  param_1[0xd] = iVar5 + iVar4;
  return;
}

