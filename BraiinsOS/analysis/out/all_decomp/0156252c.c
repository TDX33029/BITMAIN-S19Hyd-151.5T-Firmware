// FUN_0156252c @ 0156252c size=228 calls_out=1 calls_in=1
// strings: 

void FUN_0156252c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar8 = param_1[3];
  if (uVar8 != 0) {
    uVar3 = *param_1;
    uVar9 = param_1[1];
    uVar1 = param_1[2];
    uVar2 = uVar3;
    if (uVar1 < uVar3) {
      uVar2 = 0;
    }
    uVar4 = uVar1 - uVar2;
    uVar10 = uVar3 - uVar4;
    iVar5 = uVar8 - uVar10;
    if (uVar8 < uVar10) {
      iVar5 = 0;
    }
    uVar7 = uVar10;
    if (uVar8 <= uVar10) {
      uVar3 = uVar4 + uVar8;
      uVar7 = uVar8;
    }
    if (uVar3 != uVar4) {
      puVar6 = (uint *)(uVar1 * 0x14 + uVar2 * -0x14 + uVar9 + 4);
      do {
        if (((char)puVar6[-1] == '\0') && ((*puVar6 & 0x7fffffff) != 0)) {
          thunk_FUN_016d3fb4(puVar6[1]);
        }
        puVar6 = puVar6 + 5;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (uVar10 < uVar8) {
      puVar6 = (uint *)(uVar9 + 4);
      do {
        if (((char)puVar6[-1] == '\0') && ((*puVar6 & 0x7fffffff) != 0)) {
          thunk_FUN_016d3fb4(puVar6[1]);
        }
        puVar6 = puVar6 + 5;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

