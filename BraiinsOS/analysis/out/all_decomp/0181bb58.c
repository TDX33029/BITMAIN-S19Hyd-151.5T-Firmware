// FUN_0181bb58 @ 0181bb58 size=588 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0181bb58(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  iVar3 = param_2 + param_3 * 4;
  uVar1 = *(ushort *)(param_2 + 2);
  *(undefined2 *)(iVar3 + 6) = 0xffff;
  if (uVar1 == 0) {
    iVar6 = 3;
    iVar5 = 0x8a;
  }
  else {
    iVar6 = 4;
    iVar5 = 7;
  }
  if (param_3 < 0) {
    return 0;
  }
  iVar4 = 0;
  uVar9 = (uint)uVar1;
  uVar7 = 0xffffffff;
LAB_0181bbb8:
  uVar8 = uVar9;
  iVar4 = iVar4 + 1;
  uVar9 = (uint)*(ushort *)(param_2 + 6);
  uVar10 = uVar9;
  if (iVar4 < iVar5) {
    uVar10 = uVar8;
    goto LAB_0181bc18;
  }
  do {
    if (uVar8 == 0) {
      if (10 < iVar4) {
        *(short *)(param_1 + 0xac4) = *(short *)(param_1 + 0xac4) + 1;
        if (uVar10 == 0) goto LAB_0181bc9c;
LAB_0181bcf0:
        if (iVar3 == param_2) {
          return 0;
        }
        uVar9 = (uint)*(ushort *)(param_2 + 10);
        iVar6 = 4;
        param_2 = param_2 + 4;
        iVar5 = 7;
        iVar4 = 1;
        uVar7 = uVar8;
        goto LAB_0181bc18;
      }
      *(short *)(param_1 + 0xac0) = *(short *)(param_1 + 0xac0) + 1;
      if (uVar10 != 0) goto LAB_0181bcf0;
LAB_0181bc9c:
      if (iVar3 == param_2) {
        return 0;
      }
      uVar9 = (uint)*(ushort *)(param_2 + 10);
      param_2 = param_2 + 4;
      iVar6 = 3;
      iVar5 = 0x8a;
      iVar4 = 1;
      uVar7 = uVar8;
      uVar10 = 0;
      if (uVar9 == 0) goto LAB_0181bcc4;
    }
    else {
      if (uVar8 != uVar7) {
        iVar6 = param_1 + uVar8 * 4;
        *(short *)(iVar6 + 0xa7c) = *(short *)(iVar6 + 0xa7c) + 1;
      }
      *(short *)(param_1 + 0xabc) = *(short *)(param_1 + 0xabc) + 1;
      if (uVar10 == 0) {
        if (iVar3 == param_2) {
          return 0;
        }
        uVar9 = (uint)*(ushort *)(param_2 + 10);
        iVar6 = 3;
        param_2 = param_2 + 4;
        iVar5 = 0x8a;
        iVar4 = 1;
        uVar7 = uVar8;
      }
      else {
        if (uVar8 != uVar10) goto LAB_0181bcf0;
        if (iVar3 == param_2) {
          return 0;
        }
        uVar9 = (uint)*(ushort *)(param_2 + 10);
        iVar6 = 3;
        param_2 = param_2 + 4;
        iVar5 = 6;
        iVar4 = 1;
        uVar7 = uVar8;
      }
LAB_0181bc18:
      uVar8 = uVar7;
      uVar7 = uVar8;
      if (uVar10 == uVar9) goto LAB_0181bcc4;
    }
    uVar8 = uVar10;
    if (iVar4 < iVar6) break;
    uVar10 = uVar9;
  } while( true );
LAB_0181bc30:
  uVar7 = uVar9;
  iVar6 = 4;
  iVar5 = 7;
  iVar2 = param_1 + uVar8 * 4;
  *(short *)(iVar2 + 0xa7c) = *(short *)(iVar2 + 0xa7c) + (short)iVar4;
  if (uVar7 == 0) {
    if (iVar3 == param_2) {
      return 0;
    }
    uVar9 = (uint)*(ushort *)(param_2 + 10);
    iVar6 = 3;
    iVar5 = 0x8a;
    if (uVar9 == 0) goto LAB_0181bd5c;
  }
  else {
    if (iVar3 == param_2) {
      return 0;
    }
    uVar9 = (uint)*(ushort *)(param_2 + 10);
    if (uVar9 == uVar7) goto LAB_0181bd5c;
  }
  iVar4 = 1;
  param_2 = param_2 + 4;
  uVar8 = uVar7;
  goto LAB_0181bc30;
LAB_0181bd5c:
  iVar4 = 1;
  param_2 = param_2 + 4;
LAB_0181bcc4:
  bVar11 = iVar3 == param_2;
  param_2 = param_2 + 4;
  if (bVar11) {
    return 0;
  }
  uVar7 = uVar8;
  goto LAB_0181bbb8;
}

