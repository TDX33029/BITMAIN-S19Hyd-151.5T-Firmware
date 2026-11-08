// FUN_0112a444 @ 0112a444 size=156 calls_out=1 calls_in=1
// strings: 

void FUN_0112a444(uint *param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  
  iVar2 = *(int *)(param_3 + 0x14);
  bVar10 = iVar2 != 0x20;
  if (bVar10) {
    iVar4 = 0xc;
    uVar5 = 0x20;
    iVar6 = 8;
    param_2 = 6;
    iVar8 = 4;
  }
  else {
    puVar3 = *(undefined2 **)(param_3 + 0x10);
    uVar1 = *puVar3;
    *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)(puVar3 + 1);
    uVar9 = *(undefined4 *)((int)puVar3 + 3);
    uVar7 = *(undefined4 *)((int)puVar3 + 7);
    *(undefined2 *)(param_1 + 1) = uVar1;
    FUN_016dd1aa((int)param_1 + 0xf,(int)puVar3 + 0xb,0x15);
    iVar2 = *(int *)(param_3 + 0x40);
    uVar5 = *(undefined4 *)(param_3 + 0x44);
    iVar4 = 0x30;
    *(undefined4 *)((int)param_1 + 0xb) = uVar7;
    iVar6 = 0x2c;
    iVar8 = 0x28;
    param_1[9] = 0;
    *(undefined4 *)((int)param_1 + 7) = uVar9;
  }
  *(undefined4 *)((int)param_1 + iVar8) = param_2;
  *(undefined4 *)((int)param_1 + iVar6) = uVar5;
  *(int *)((int)param_1 + iVar4) = iVar2;
  *param_1 = (uint)bVar10;
  return;
}

