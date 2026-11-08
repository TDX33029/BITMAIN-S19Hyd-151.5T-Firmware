// FUN_00ed37b4 @ 00ed37b4 size=520 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_00ed37b4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  undefined4 uVar5;
  double *pdVar6;
  double *pdVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  
  uVar5 = 0;
  if ((param_2 == param_4) && (uVar5 = 1, param_2 != 0)) {
    iVar3 = param_2 * 9;
    iVar8 = 0;
    iVar1 = param_2 * 0x48;
    do {
      pdVar6 = (double *)(param_1 + iVar8);
      pdVar7 = (double *)(param_3 + iVar8);
      if (*pdVar6 == *pdVar7) {
        iVar3 = *(int *)(pdVar7 + 8);
        param_2 = *(int *)(pdVar6 + 8);
      }
      if (*pdVar6 != *pdVar7 || param_2 != iVar3) {
        return 0;
      }
      if (*(int *)(pdVar6 + 1) == -0x80000000) {
        if (*(int *)(pdVar7 + 1) != -0x80000000) {
          return 0;
        }
      }
      else {
        if (*(int *)(pdVar7 + 1) == -0x80000000) {
          return 0;
        }
        if (*(int *)(pdVar6 + 2) != *(int *)(pdVar7 + 2)) {
          return 0;
        }
        iVar3 = thunk_FUN_016dd50a(*(undefined4 *)((int)pdVar6 + 0xc),
                                   *(undefined4 *)((int)pdVar7 + 0xc));
        if (iVar3 != 0) {
          return 0;
        }
      }
      if (*(int *)((int)pdVar6 + 0x14) == -0x80000000) {
        if (*(int *)((int)pdVar7 + 0x14) != -0x80000000) {
          return 0;
        }
      }
      else {
        if (*(int *)((int)pdVar7 + 0x14) == -0x80000000) {
          return 0;
        }
        if (*(int *)((int)pdVar6 + 0x1c) != *(int *)((int)pdVar7 + 0x1c)) {
          return 0;
        }
        iVar3 = thunk_FUN_016dd50a(*(undefined4 *)(pdVar6 + 3),*(undefined4 *)(pdVar7 + 3));
        if (iVar3 != 0) {
          return 0;
        }
      }
      if (*(int *)(pdVar6 + 4) == -0x80000000) {
        if (*(int *)(pdVar7 + 4) != -0x80000000) {
          return 0;
        }
      }
      else {
        if (*(int *)(pdVar7 + 4) == -0x80000000) {
          return 0;
        }
        if (*(int *)(pdVar6 + 5) != *(int *)(pdVar7 + 5)) {
          return 0;
        }
        iVar3 = thunk_FUN_016dd50a(*(undefined4 *)((int)pdVar6 + 0x24),
                                   *(undefined4 *)((int)pdVar7 + 0x24));
        if (iVar3 != 0) {
          return 0;
        }
      }
      param_2 = *(int *)((int)pdVar6 + 0x2c);
      iVar3 = *(int *)((int)pdVar7 + 0x2c);
      if (param_2 == -0x80000000 || iVar3 == -0x80000000) {
        if (param_2 != -0x80000000 || iVar3 != -0x80000000) {
          return 0;
        }
      }
      else {
        if (*(short *)(pdVar6 + 7) != *(short *)(pdVar7 + 7)) {
          return 0;
        }
        uVar2 = *(ushort *)((int)pdVar7 + 0x3a);
        uVar4 = *(ushort *)((int)pdVar6 + 0x3a);
        bVar9 = uVar4 == uVar2;
        if (bVar9) {
          uVar2 = (ushort)*(byte *)((int)pdVar7 + 0x3c);
          uVar4 = (ushort)*(byte *)((int)pdVar6 + 0x3c);
        }
        if (!bVar9 || uVar4 != uVar2) {
          return 0;
        }
        if (*(char *)((int)pdVar6 + 0x3e) == '\b') {
          if (*(char *)((int)pdVar7 + 0x3e) != '\b') {
            return 0;
          }
        }
        else if (*(char *)((int)pdVar6 + 0x3e) != *(char *)((int)pdVar7 + 0x3e)) {
          return 0;
        }
        if (*(char *)((int)pdVar6 + 0x3d) == '\x06') {
          if (*(char *)((int)pdVar7 + 0x3d) != '\x06') {
            return 0;
          }
        }
        else if (*(char *)((int)pdVar6 + 0x3d) != *(char *)((int)pdVar7 + 0x3d)) {
          return 0;
        }
        if (*(int *)((int)pdVar6 + 0x34) != *(int *)((int)pdVar7 + 0x34)) {
          return 0;
        }
        uVar10 = thunk_FUN_016dd50a(*(undefined4 *)(pdVar6 + 6),*(undefined4 *)(pdVar7 + 6),
                                    *(int *)((int)pdVar6 + 0x34) << 2);
        param_2 = (int)((ulonglong)uVar10 >> 0x20);
        iVar3 = 0;
        if ((int)uVar10 != 0) {
          return 0;
        }
      }
      iVar8 = iVar8 + 0x48;
    } while (iVar1 != iVar8);
  }
  return uVar5;
}

