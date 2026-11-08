// FUN_0150bb44 @ 0150bb44 size=344 calls_out=3 calls_in=0
// strings: 

void FUN_0150bb44(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *piStack_30;
  int iStack_2c;
  
  iVar3 = param_3[2];
  iVar1 = iVar3;
  if ((uint)(*param_3 - iVar3) < 2) {
    FUN_0154e5f8(param_3,iVar3,2,1,1);
    iVar1 = param_3[2];
  }
  iVar5 = param_3[1];
  iVar2 = iVar1 + 2;
  param_3[2] = iVar2;
  *(undefined2 *)(iVar5 + iVar1) = 0xffff;
  local_40 = 0x19191919;
  local_3c = 0x19191919;
  local_38 = 0x19191919;
  local_34 = 0x19191919;
  piStack_30 = param_3;
  iStack_2c = iVar3;
  if (param_2 != 0) {
    puVar4 = (undefined4 *)(param_1 + 4);
    param_2 = param_2 * 0xc;
    do {
      iVar1 = *param_3;
      uVar7 = *puVar4;
      uVar6 = puVar4[1];
      if ((uint)(iVar1 - iVar2) < 2) {
        FUN_0154e5f8(param_3,iVar2,2,1,1);
        iVar2 = param_3[2];
        iVar1 = *param_3;
        iVar5 = param_3[1];
      }
      iVar3 = iVar2 + 2;
      param_3[2] = iVar3;
      *(ushort *)(iVar5 + iVar2) = (ushort)((uVar6 << 0x18) >> 0x10) | (ushort)(uVar6 >> 8) & 0xff;
      if ((uint)(iVar1 - iVar3) < uVar6) {
        FUN_0154e5f8(param_3,iVar3,uVar6,1,1);
        iVar5 = param_3[1];
        iVar3 = param_3[2];
      }
      puVar4 = puVar4 + 3;
      FUN_016dd1aa(iVar5 + iVar3,uVar7,uVar6);
      iVar2 = iVar3 + uVar6;
      param_2 = param_2 + -0xc;
      param_3[2] = iVar2;
    } while (param_2 != 0);
  }
  FUN_0152f8f8(&local_40);
  return;
}

