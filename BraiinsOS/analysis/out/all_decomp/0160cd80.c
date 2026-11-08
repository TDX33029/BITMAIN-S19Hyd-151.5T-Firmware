// FUN_0160cd80 @ 0160cd80 size=604 calls_out=4 calls_in=1
// strings: 

void FUN_0160cd80(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar3 = param_2[0x1f];
  if (param_2[0x16] == -0x7fffffff) {
    if ((uVar3 & 1) != 0 || (*(byte *)(param_2 + 0x21) & 1) != 0) {
LAB_0160ce04:
      *(undefined1 *)(param_2 + 0x21) = 0;
      FUN_01606284(&local_48,param_3,10);
      if ((char)local_48 == '3') {
        if (*param_2 != 1) {
LAB_0160ce4c:
          FUN_0160cfdc(param_1,param_4,param_5,param_2);
          if (*param_2 == 0) {
            return;
          }
          iVar2 = param_2[1] + 1;
          if (param_2[1] == -1) {
            iVar2 = -1;
          }
          param_2[1] = iVar2;
          return;
        }
        if (param_2[1] != 0) {
          param_2[1] = param_2[1] + -1;
          goto LAB_0160ce4c;
        }
        goto LAB_0160cf9c;
      }
      goto LAB_0160cf84;
    }
    if ((uVar3 & 8) == 0) goto LAB_0160cdc4;
LAB_0160ce94:
    FUN_01605b78(&local_48,param_2[0x1e],param_3,10);
  }
  else {
    pbVar1 = (byte *)(param_2 + 0x21);
    if (((param_2[0xf] | uVar3) & 1) != 0 || (*pbVar1 & 1) != 0) goto LAB_0160ce04;
    bVar6 = ((param_2[0xf] | uVar3) & 8) == 0;
    if (bVar6) {
      pbVar1 = (byte *)(uint)*(byte *)(param_2 + 0x19);
    }
    if (!bVar6 || ((uint)pbVar1 & 1) != 0) goto LAB_0160ce94;
LAB_0160cdc4:
    FUN_01606284(&local_48,param_3,10);
  }
  if ((char)local_48 == '3') {
    piVar5 = (int *)param_2[0x1e];
    param_2[0x20] = 0;
    iVar4 = piVar5[2];
    iVar2 = iVar4;
    if (*piVar5 == iVar4) {
      FUN_016225b8(piVar5,iVar4,1);
      iVar2 = piVar5[2];
    }
    *(undefined1 *)(piVar5[1] + iVar2) = 0x28;
    piVar5[2] = iVar4 + 1;
    if (*param_2 == 1) {
      if (param_2[1] == 0) {
LAB_0160cf9c:
        *(undefined1 *)param_1 = 0x31;
        return;
      }
      param_2[1] = param_2[1] + -1;
    }
    FUN_0160cfdc(&local_48,param_4,param_5,param_2);
    if ((char)local_48 == '3') {
      if (*param_2 == 1) {
        iVar2 = param_2[1] + 1;
        if (param_2[1] == -1) {
          iVar2 = -1;
        }
        param_2[1] = iVar2;
      }
      piVar5 = (int *)param_2[0x1e];
      iVar4 = piVar5[2];
      iVar2 = iVar4;
      if (*piVar5 == iVar4) {
        FUN_016225b8(piVar5,iVar4,1);
        iVar2 = piVar5[2];
      }
      *(undefined1 *)(piVar5[1] + iVar2) = 0x29;
      *(undefined1 *)param_1 = 0x33;
      piVar5[2] = iVar4 + 1;
      return;
    }
  }
LAB_0160cf84:
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = uStack_3c;
  param_1[4] = local_38;
  param_1[5] = uStack_34;
  param_1[6] = uStack_30;
  param_1[7] = uStack_2c;
  param_1[8] = uStack_28;
  return;
}

