// FUN_019cd090 @ 019cd090 size=196 calls_out=3 calls_in=0
// strings: 

void FUN_019cd090(undefined4 *param_1,uint *param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar1 = *param_2;
  if (uVar1 == param_2[2]) {
    FUN_019cccd8(&local_18,param_2);
    if ((char)local_18 != '\x04') {
      *param_1 = local_18;
      param_1[1] = uStack_14;
      return;
    }
    uVar1 = *param_2;
  }
  if (uVar1 < 2) {
    iVar2 = FUN_01be9b18(param_2[4],param_3,1,0x4000);
    if (iVar2 == -1) {
      piVar3 = (int *)FUN_01be3244();
      iVar2 = *piVar3;
      uVar4 = 0;
    }
    else {
      uVar4 = 4;
    }
    param_1[1] = iVar2;
    *(undefined1 *)param_1 = uVar4;
    *(undefined1 *)(param_2 + 3) = 0;
  }
  else {
    uVar1 = param_2[1];
    uVar5 = param_2[2];
    param_1[1] = 1;
    *(undefined1 *)param_1 = 4;
    uVar4 = *param_3;
    param_2[2] = uVar5 + 1;
    *(undefined1 *)(uVar1 + uVar5) = uVar4;
  }
  return;
}

