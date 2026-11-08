// FUN_018bf638 @ 018bf638 size=236 calls_out=2 calls_in=2
// strings: 

void FUN_018bf638(undefined4 *param_1,int *param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int unaff_r4;
  uint uVar7;
  bool bVar8;
  
  bVar8 = param_4 != 0;
  if (bVar8) {
    unaff_r4 = *param_2;
  }
  uVar7 = 0;
  puVar1 = param_1;
  if (bVar8) {
    puVar1 = *(undefined4 **)(unaff_r4 + 0x14);
  }
  if (bVar8 && puVar1 != (undefined4 *)0x0) {
    do {
      uVar5 = *(uint *)(unaff_r4 + 0x10);
      uVar3 = uVar5 - *(uint *)(unaff_r4 + 8);
      if (uVar5 < *(uint *)(unaff_r4 + 8)) {
        uVar3 = uVar5;
      }
      iVar4 = *(int *)(unaff_r4 + 0xc) + uVar3 * 0xc;
      puVar6 = *(undefined1 **)(iVar4 + 4);
      uVar5 = *(uint *)(iVar4 + 8);
      uVar3 = param_4 - uVar7;
      if (uVar5 < param_4 - uVar7) {
        uVar3 = uVar5;
      }
      if (uVar3 == 1) {
        *(undefined1 *)(param_3 + uVar7) = *puVar6;
        uVar5 = 1;
      }
      else {
        FUN_01bed4e2((undefined1 *)(param_3 + uVar7),puVar6,uVar3);
        uVar5 = uVar3;
      }
      FUN_018dff98(unaff_r4,uVar5);
      uVar7 = uVar3 + uVar7;
    } while ((uVar7 < param_4) && (*(int *)(unaff_r4 + 0x14) != 0));
  }
  if ((uVar7 != 0) || ((param_4 == 0 || ((*(byte *)(param_2 + 1) & 1) != 0)))) {
    param_1[1] = uVar7;
    *(undefined1 *)param_1 = 4;
    return;
  }
  if (*(char *)((int)param_2 + 5) == '\0') {
    uVar2 = 0xd01;
  }
  else {
    uVar2 = 0x2501;
  }
  *param_1 = uVar2;
  param_1[1] = 0;
  return;
}

