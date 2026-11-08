// FUN_01817db0 @ 01817db0 size=856 calls_out=3 calls_in=1
// strings: insufficient memory | insufficient memory

undefined4
FUN_01817db0(int param_1,uint param_2,int param_3,uint param_4,uint param_5,uint param_6,
            char *param_7,int param_8)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  bool bVar11;
  
  if ((param_7 == (char *)0x0) || (param_8 != 0x38 || *param_7 != '1')) {
    return 0xfffffffa;
  }
  bVar9 = false;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if ((*(code **)(param_1 + 0x20) != (code *)0x0) && (*(int *)(param_1 + 0x24) != 0)) {
      if (param_2 == 0xffffffff) {
        param_2 = 6;
      }
      if ((int)param_4 < 0) {
        if ((int)param_4 < -0xf) {
          return 0xfffffffe;
        }
        param_4 = -param_4;
        bVar9 = true;
        iVar10 = 0;
      }
      else if ((int)param_4 < 0x10) {
        iVar10 = 1;
      }
      else {
        param_4 = param_4 - 0x10;
        bVar9 = true;
        iVar10 = 2;
      }
      if (param_5 - 1 < 9) {
        bVar11 = param_4 - 8 == 7;
        if (param_4 - 8 < 8) {
          bVar11 = param_3 == 8;
        }
        if (((bVar11) && (param_2 < 10)) && (param_6 < 5)) {
          if (param_4 != 8) {
            bVar9 = false;
          }
          if (!bVar9) {
            if (param_4 == 8) {
              param_4 = 9;
            }
            piVar4 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x16c4);
            if (piVar4 != (int *)0x0) {
              *(int **)(param_1 + 0x1c) = piVar4;
              piVar4[6] = iVar10;
              piVar4[0xc] = param_4;
              iVar10 = 1 << (param_4 & 0xff);
              uVar5 = *(undefined4 *)(param_1 + 0x28);
              piVar4[0xb] = iVar10;
              piVar4[1] = 0x2a;
              piVar4[0x16] = param_5 / 3 + 3;
              piVar4[0x14] = param_5 + 7;
              *piVar4 = param_1;
              iVar6 = 1 << (param_5 + 7 & 0xff);
              piVar4[0xd] = iVar10 + -1;
              piVar4[0x13] = iVar6;
              pcVar7 = *(code **)(param_1 + 0x20);
              piVar4[0x15] = iVar6 + -1;
              piVar4[7] = 0;
              iVar10 = (*pcVar7)(uVar5,iVar10,2);
              pcVar7 = *(code **)(param_1 + 0x20);
              piVar4[0xe] = iVar10;
              iVar10 = (*pcVar7)(*(undefined4 *)(param_1 + 0x28),piVar4[0xb],2);
              pcVar7 = *(code **)(param_1 + 0x20);
              piVar4[0x10] = iVar10;
              iVar6 = (*pcVar7)(*(undefined4 *)(param_1 + 0x28),piVar4[0x13],2);
              iVar10 = 1 << (param_5 + 6 & 0xff);
              piVar4[0x11] = iVar6;
              pcVar7 = *(code **)(param_1 + 0x20);
              uVar5 = *(undefined4 *)(param_1 + 0x28);
              piVar4[0x5b0] = 0;
              piVar4[0x5a7] = iVar10;
              iVar10 = (*pcVar7)(uVar5,iVar10,4);
              iVar6 = piVar4[0x5a7];
              piVar4[2] = iVar10;
              piVar4[3] = iVar6 << 2;
              if (((piVar4[0xe] != 0) && (piVar4[0x10] != 0)) && (iVar10 != 0 && piVar4[0x11] != 0))
              {
                piVar4[0x5a6] = iVar10 + iVar6;
                piVar4[0x5a9] = (iVar6 + -1) * 3;
                piVar4[0x21] = param_2;
                piVar4[0x22] = param_6;
                *(undefined1 *)(piVar4 + 9) = 8;
                iVar10 = FUN_01816150(param_1);
                if (iVar10 == 0) {
                  iVar8 = *(int *)(param_1 + 0x1c);
                  iVar10 = *(int *)(iVar8 + 0x44);
                  iVar6 = *(int *)(iVar8 + 0x4c);
                  *(int *)(iVar8 + 0x3c) = *(int *)(iVar8 + 0x2c) << 1;
                  *(undefined2 *)(iVar10 + iVar6 * 2 + -2) = 0;
                  FUN_0181e4c0(iVar10,(iVar6 + -1) * 2);
                  *(undefined4 *)(iVar8 + 0x6c) = 0;
                  *(undefined4 *)(iVar8 + 0x5c) = 0;
                  iVar10 = *(int *)(iVar8 + 0x84) * 0xc;
                  uVar1 = *(ushort *)(&UNK_018bc1f8 + iVar10);
                  uVar2 = *(ushort *)(&UNK_018bc1fc + iVar10);
                  uVar3 = *(ushort *)(&UNK_018bc1fe + iVar10);
                  *(uint *)(iVar8 + 0x80) = (uint)*(ushort *)(&UNK_018bc1fa + iVar10);
                  *(uint *)(iVar8 + 0x8c) = (uint)uVar1;
                  *(uint *)(iVar8 + 0x90) = (uint)uVar2;
                  *(uint *)(iVar8 + 0x7c) = (uint)uVar3;
                  *(undefined4 *)(iVar8 + 0x16b4) = 0;
                  *(undefined4 *)(iVar8 + 0x74) = 0;
                  *(undefined4 *)(iVar8 + 0x78) = 2;
                  *(undefined4 *)(iVar8 + 0x60) = 2;
                  *(undefined4 *)(iVar8 + 0x68) = 0;
                  *(undefined4 *)(iVar8 + 0x48) = 0;
                  return 0;
                }
                return 0xfffffffe;
              }
              piVar4[1] = 0x29a;
              *(char **)(param_1 + 0x18) = "insufficient memory";
              FUN_01817c48(param_1);
            }
            return 0xfffffffc;
          }
        }
      }
    }
  }
  return 0xfffffffe;
}

