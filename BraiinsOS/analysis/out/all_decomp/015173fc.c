// FUN_015173fc @ 015173fc size=528 calls_out=3 calls_in=2
// strings: 

void FUN_015173fc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  
  if (*param_1 != -0x80000000) {
    iVar1 = param_2[2];
    if ((uint)(*param_2 - iVar1) < 2) {
      FUN_0154e5f8(param_2,iVar1,2,1,1);
      iVar1 = param_2[2];
    }
    iVar2 = iVar1 + 2;
    param_2[2] = iVar2;
    *(undefined2 *)(param_2[1] + iVar1) = 0xdfe;
    if ((uint)(*param_2 - iVar2) < 2) {
      FUN_0154e5f8(param_2,iVar2,2,1,1);
      iVar2 = param_2[2];
    }
    iVar4 = iVar2 + 2;
    param_2[2] = iVar4;
    iVar1 = param_1[7];
    *(undefined2 *)(param_2[1] + iVar2) = 0xffff;
    if (iVar4 == *param_2) {
      FUN_006029c0(param_2);
    }
    uVar6 = *(ushort *)(param_1 + 6);
    *(char *)(param_2[1] + iVar4) = (char)iVar1;
    param_2[2] = iVar2 + 3;
                    /* WARNING: Could not recover jumptable at 0x01517558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_0151755c + *(int *)(&LAB_0151755c + (uint)uVar6 * 4)))
              (*(undefined2 *)((int)param_1 + 0x1a));
    return;
  }
  iVar1 = param_2[2];
  uVar6 = 0xdfe;
  if ((short)param_1[4] != 0) {
    uVar6 = (ushort)(((uint)*(ushort *)((int)param_1 + 0x12) << 0x18) >> 0x10) |
            *(ushort *)((int)param_1 + 0x12) >> 8;
  }
  if ((uint)(*param_2 - iVar1) < 2) {
    FUN_0154e5f8(param_2,iVar1,2,1,1);
    iVar1 = param_2[2];
  }
  iVar4 = param_1[2];
  uVar5 = param_1[3];
  iVar2 = iVar1 + 2;
  *(ushort *)(param_2[1] + iVar1) = uVar6;
  iVar1 = *param_2;
  param_2[2] = iVar2;
  if ((uint)(iVar1 - iVar2) < 2) {
    FUN_0154e5f8(param_2,iVar2,2,1,1);
    iVar1 = *param_2;
    iVar2 = param_2[2];
  }
  iVar3 = param_2[1];
  iVar7 = iVar2 + 2;
  param_2[2] = iVar7;
  *(ushort *)(iVar3 + iVar2) = (ushort)((uVar5 << 0x18) >> 0x10) | (ushort)(uVar5 >> 8) & 0xff;
  if ((uint)(iVar1 - iVar7) < uVar5) {
    FUN_0154e5f8(param_2,iVar7,uVar5,1,1);
    iVar3 = param_2[1];
    iVar7 = param_2[2];
  }
  FUN_016dd1aa(iVar3 + iVar7,iVar4,uVar5);
  param_2[2] = iVar7 + uVar5;
  return;
}

