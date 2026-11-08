// FUN_00ba39e4 @ 00ba39e4 size=256 calls_out=3 calls_in=0
// strings: 

void FUN_00ba39e4(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *param_1;
  iVar6 = param_1[2];
  uVar1 = param_1[1] - iVar7;
  *param_1 = 4;
  param_1[1] = 4;
  if (uVar1 != 0) {
    uVar2 = 0;
    while (uVar2 != uVar1 >> 4) {
      puVar5 = (undefined4 *)(iVar7 + uVar2 * 0x10);
      uVar2 = uVar2 + 1;
      (*(code *)**(undefined4 **)*puVar5)();
      if (puVar5[3] != 0) {
        piVar4 = (int *)puVar5[2];
        iVar3 = 1 - puVar5[3];
        do {
          if (*piVar4 == 2 && piVar4[1] == 0) {
            (*(code *)**(undefined4 **)piVar4[2])();
          }
          else {
            FUN_00cce13c(piVar4);
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 0x44;
        } while (iVar3 != 1);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(puVar5[2]);
      }
    }
  }
  iVar7 = param_1[4];
  if (iVar7 != 0) {
    iVar3 = *(int *)(iVar6 + 8);
    if (param_1[3] != iVar3) {
      FUN_016dd52c(*(int *)(iVar6 + 4) + iVar3 * 0x10,*(int *)(iVar6 + 4) + param_1[3] * 0x10,
                   iVar7 << 4);
    }
    *(int *)(iVar6 + 8) = iVar3 + iVar7;
  }
  return;
}

