// FUN_016ec5dc @ 016ec5dc size=176 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_016ec5dc(int *param_1,undefined4 *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = param_1[1];
  iVar10 = param_1[2];
  puVar3 = param_2;
  if (iVar10 != 0) {
    cVar1 = *(char *)(param_2 + 6);
    iVar5 = iVar10 * 0x1c;
    puVar3 = (undefined4 *)0x0;
    pcVar7 = (char *)(iVar9 + 0x18);
    do {
      cVar2 = *pcVar7;
      if ((cVar2 != '\a') == (cVar1 != '\a')) {
        if (cVar2 == '\a') {
          return 1;
        }
        if (cVar1 == '\a' || cVar2 == cVar1) {
          return 1;
        }
      }
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      iVar5 = iVar5 + -0x1c;
      pcVar7 = pcVar7 + 0x1c;
    } while (iVar5 != 0);
  }
  if (iVar10 == *param_1) {
    FUN_015f5b48(param_1,puVar3);
    iVar9 = param_1[1];
  }
  uVar4 = param_2[1];
  uVar6 = param_2[2];
  puVar3 = (undefined4 *)(iVar9 + iVar10 * 0x1c);
  *puVar3 = *param_2;
  puVar3[1] = uVar4;
  puVar3[2] = uVar6;
  uVar4 = param_2[4];
  uVar6 = param_2[5];
  uVar8 = param_2[6];
  puVar3[3] = param_2[3];
  puVar3[4] = uVar4;
  puVar3[5] = uVar6;
  puVar3[6] = uVar8;
  param_1[2] = iVar10 + 1;
  return 0;
}

