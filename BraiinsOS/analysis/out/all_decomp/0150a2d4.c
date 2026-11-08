// FUN_0150a2d4 @ 0150a2d4 size=316 calls_out=4 calls_in=1
// strings: PskBindersCipherSuitesPskIdentitiesCompressionsNamedGroupsExtensionTypesHandshakeMessagePayload

void FUN_0150a2d4(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *pcStack_38;
  undefined4 uStack_34;
  int *local_30;
  int local_2c;
  
  iVar2 = param_3[2];
  iVar1 = iVar2;
  if ((uint)(*param_3 - iVar2) < 2) {
    FUN_0154e5f8(param_3,iVar2,2,1,1);
    iVar1 = param_3[2];
  }
  iVar4 = iVar1 + 2;
  iVar5 = param_3[1];
  param_3[2] = iVar4;
  uStack_3c = 0x16;
  pcStack_38 = 
  "PskBindersCipherSuitesPskIdentitiesCompressionsNamedGroupsExtensionTypesHandshakeMessagePayload";
  uStack_34 = 10;
  *(undefined2 *)(iVar5 + iVar1) = 0xffff;
  uStack_40 = 0x1a;
  local_30 = param_3;
  local_2c = iVar2;
  if (param_2 != 0) {
    puVar3 = (undefined4 *)(param_1 + 4);
    param_2 = param_2 * 0xc;
    do {
      iVar1 = *param_3;
      uVar6 = *puVar3;
      uVar7 = puVar3[1];
      if (iVar4 == iVar1) {
        FUN_006029c0(param_3);
        iVar1 = *param_3;
        iVar5 = param_3[1];
      }
      *(char *)(iVar5 + iVar4) = (char)uVar7;
      iVar4 = iVar4 + 1;
      param_3[2] = iVar4;
      if ((uint)(iVar1 - iVar4) < uVar7) {
        FUN_0154e5f8(param_3,iVar4,uVar7,1,1);
        iVar5 = param_3[1];
        iVar4 = param_3[2];
      }
      puVar3 = puVar3 + 3;
      FUN_016dd1aa(iVar5 + iVar4,uVar6,uVar7);
      iVar4 = iVar4 + uVar7;
      param_2 = param_2 + -0xc;
      param_3[2] = iVar4;
    } while (param_2 != 0);
  }
  FUN_0152f8f8(&uStack_40);
  return;
}

