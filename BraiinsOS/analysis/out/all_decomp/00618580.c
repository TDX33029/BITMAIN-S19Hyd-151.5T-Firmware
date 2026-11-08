// FUN_00618580 @ 00618580 size=140 calls_out=0 calls_in=3
// strings: 

void FUN_00618580(undefined1 *param_1,int *param_2,char param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (param_3 == '\b') {
    puVar2 = (undefined4 *)*param_2;
    if (7 < (uint)param_2[1]) {
      iVar3 = puVar2[1];
      uVar5 = *puVar2;
      *param_2 = (int)(puVar2 + 2);
      param_2[1] = param_2[1] - 8;
      uVar1 = 0x38;
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 4) = uVar5;
        uVar1 = 0x4f;
      }
      *param_1 = uVar1;
      return;
    }
  }
  else {
    puVar2 = (undefined4 *)*param_2;
    uVar4 = param_2[1];
    if (3 < uVar4) {
      *(undefined4 *)(param_1 + 4) = *puVar2;
      *param_2 = (int)(puVar2 + 1);
      param_2[1] = uVar4 - 4;
      *param_1 = 0x4f;
      return;
    }
  }
  *(undefined4 **)(param_1 + 8) = puVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 **)(param_1 + 4) = puVar2;
  *param_1 = 0x13;
  return;
}

