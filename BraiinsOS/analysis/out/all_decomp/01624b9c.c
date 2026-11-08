// FUN_01624b9c @ 01624b9c size=120 calls_out=0 calls_in=1
// strings: 

void FUN_01624b9c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  uVar8 = param_3 >> 2;
  puVar5 = param_2;
  puVar9 = param_1;
  do {
    uVar7 = *puVar9;
    uVar8 = uVar8 - 1;
    *puVar9 = *puVar5;
    *puVar5 = uVar7;
    puVar5 = puVar5 + 1;
    puVar9 = puVar9 + 1;
  } while (uVar8 != 0);
  if ((param_3 & 3) != 0) {
    puVar4 = (undefined2 *)((int)param_2 + (param_3 & 0x3c));
    puVar3 = (undefined2 *)((int)param_1 + (param_3 & 0x3c));
    iVar6 = 0;
    if ((param_3 & 3) != 1) {
      uVar2 = *puVar4;
      *puVar4 = *puVar3;
      iVar6 = 2;
      *puVar3 = uVar2;
      if ((param_3 & 1) == 0) {
        return;
      }
    }
    uVar1 = *(undefined1 *)((int)puVar3 + iVar6);
    *(undefined1 *)((int)puVar3 + iVar6) = *(undefined1 *)((int)puVar4 + iVar6);
    *(undefined1 *)((int)puVar4 + iVar6) = uVar1;
  }
  return;
}

