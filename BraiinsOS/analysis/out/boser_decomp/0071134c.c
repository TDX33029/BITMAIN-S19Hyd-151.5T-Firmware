// FUN_0071134c @ 0071134c size=152 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_0071134c(undefined4 param_1,int *param_2,byte *param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_0070b4c0();
  uVar5 = 0;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) == param_4)) {
    pbVar2 = *(byte **)(iVar1 + 4);
    do {
      if (param_4 == 0) {
        uVar5 = 1;
        break;
      }
      uVar3 = (uint)*param_3;
      param_4 = param_4 + -1;
      uVar4 = (uint)*pbVar2;
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 | 0x20;
      }
      if (uVar4 - 0x41 < 0x1a) {
        uVar4 = uVar4 | 0x20;
      }
      pbVar2 = pbVar2 + 1;
      param_3 = param_3 + 1;
    } while (uVar4 == uVar3);
  }
  if (*param_2 != 0) {
    (**(code **)(*param_2 + 0x10))(param_2 + 3,param_2[1],param_2[2]);
  }
  return uVar5;
}

