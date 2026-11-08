// FUN_00d91f58 @ 00d91f58 size=232 calls_out=3 calls_in=0
// strings: 

void FUN_00d91f58(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  undefined4 local_30;
  int *local_2c;
  
  piVar10 = *(int **)(param_2 + 0x20);
  uVar5 = 1;
  iVar7 = *piVar10;
  pcVar6 = "{";
  while( true ) {
    uVar9 = *(uint *)(iVar7 + 4);
    uVar4 = uVar9 ^ 0x7fffffff;
    if (uVar5 < uVar4) {
      uVar4 = uVar5;
    }
    FUN_01284394(iVar7,pcVar6,uVar4);
    if (uVar9 == 0x7fffffff) break;
    pcVar6 = pcVar6 + uVar4;
    uVar5 = uVar5 - uVar4;
    if (uVar5 == 0) {
      *(undefined2 *)param_1 = 0x100;
      local_30 = *param_1;
      uVar1 = *(undefined4 *)(param_2 + 0x10);
      uVar2 = *(undefined4 *)(param_2 + 0x14);
      uVar3 = *(undefined4 *)(param_2 + 0x18);
      uVar8 = *(undefined4 *)(param_2 + 0x1c);
      param_1[1] = piVar10;
      local_2c = piVar10;
      iVar7 = FUN_00ebfed0(&local_30,uVar1,uVar2,uVar3,uVar8);
      if (iVar7 == 0) {
        *param_1 = local_30;
        param_1[1] = local_2c;
      }
      else {
LAB_00d92004:
        param_1[1] = iVar7;
        *(undefined1 *)param_1 = 2;
      }
      return;
    }
  }
  iVar7 = FUN_01966f50(2,&DAT_01d2e7b8);
  goto LAB_00d92004;
}

