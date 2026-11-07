// FUN_0004f484 @ 0004f484  size=268  callers=1
// program: bmminer


void FUN_0004f484(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint local_13c;
  int aiStack_138 [73];
  
  FUN_0006089c(&local_13c);
  iVar1 = FUN_0002c3f4();
  if ((iVar1 != 0) && (iVar1 = FUN_0002c404(), iVar1 != 0)) {
    memset(&local_13c,0,0x124);
    uVar4 = FUN_0002c484();
    if (uVar4 != 0) {
      iVar6 = 0;
      iVar2 = 0;
      uVar8 = local_13c;
      do {
        uVar3 = uVar8;
        if ((uVar4 & 1) != 0) {
          iVar6 = aiStack_138[uVar8 * 0x12 + 1];
          uVar3 = uVar8 + 1;
          aiStack_138[uVar8 * 0x12] = iVar2;
          aiStack_138[uVar8 * 0x12 + 1] = iVar6 + 1;
          aiStack_138[iVar6 + uVar8 * 0x12 + 2] = iVar2;
          iVar6 = iVar1;
        }
        uVar4 = uVar4 >> 1;
        iVar2 = iVar2 + 1;
        uVar8 = uVar3;
      } while (uVar4 != 0);
      if (iVar6 != 0) {
        local_13c = uVar3;
      }
    }
  }
  FUN_0004dbb8(&local_13c);
  if (local_13c != 0) {
    puVar7 = &local_13c;
    uVar8 = 0;
    uVar4 = local_13c;
    do {
      if (puVar7[2] != 0) {
        puVar5 = puVar7 + 2;
        uVar4 = 0;
        do {
          puVar5 = puVar5 + 1;
          FUN_0002a654(*puVar5,1);
          uVar4 = uVar4 + 1;
        } while (uVar4 < puVar7[2]);
        uVar4 = local_13c;
      }
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 0x12;
    } while (uVar8 < uVar4);
  }
  return;
}

