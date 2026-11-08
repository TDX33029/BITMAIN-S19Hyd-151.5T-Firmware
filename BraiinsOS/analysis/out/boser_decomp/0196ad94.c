// FUN_0196ad94 @ 0196ad94 size=396 calls_out=3 calls_in=2
// strings: 

int FUN_0196ad94(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  if (param_2 != 0) {
    uVar3 = *(uint *)(param_1 + 0x20);
    uVar10 = *(uint *)(param_1 + 0xc);
    uVar11 = *(uint *)(param_1 + 0x10);
    bVar2 = *(byte *)(param_1 + 0x25);
    uVar9 = (uint)*(byte *)(param_1 + 0x18);
    uVar4 = (uint)*(byte *)(param_1 + 0x24);
    iVar8 = *(int *)(param_1 + 4);
    uVar12 = *(uint *)(param_1 + 8);
    do {
      if ((bVar2 & 1) != 0) {
        return param_2;
      }
      if ((uVar11 <= uVar12) && (uVar10 <= uVar11)) {
        cVar1 = *(char *)(param_1 + 0x14 + uVar9 + -1);
        do {
          uVar6 = uVar11 - uVar10;
          iVar7 = iVar8 + uVar10;
          if (uVar6 < 8) {
            uVar5 = 0;
            if (uVar6 == 0) {
              uVar13 = 0;
            }
            else {
              do {
                if (*(char *)(iVar7 + uVar5) == cVar1) {
                  uVar13 = CONCAT44(uVar5,1);
                  goto LAB_0196ae60;
                }
                uVar5 = uVar5 + 1;
              } while (uVar6 != uVar5);
              uVar13 = (ulonglong)uVar6 << 0x20;
            }
          }
          else {
            uVar13 = FUN_01307168(cVar1,iVar7);
          }
LAB_0196ae60:
          if ((uVar13 & 1) == 0) {
            *(uint *)(param_1 + 0xc) = uVar11;
            uVar10 = uVar11;
            break;
          }
          uVar10 = uVar10 + (int)(uVar13 >> 0x20) + 1;
          *(uint *)(param_1 + 0xc) = uVar10;
          if ((uVar9 <= uVar10) && (uVar10 <= uVar12)) {
            if (4 < uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,uVar9,4,&DAT_01d2fe40);
            }
            iVar7 = thunk_FUN_01bed842(iVar8 + (uVar10 - uVar9),param_1 + 0x14,uVar9);
            if (iVar7 == 0) {
              *(uint *)(param_1 + 0x1c) = uVar10;
              bVar2 = 0;
              goto LAB_0196aedc;
            }
          }
        } while (uVar10 <= uVar11);
      }
      bVar2 = 1;
      *(undefined1 *)(param_1 + 0x25) = 1;
      uVar6 = uVar4;
      if (uVar4 == 0) {
        uVar6 = uVar3;
      }
      if (uVar4 == 0 && uVar6 == *(uint *)(param_1 + 0x1c)) {
        return param_2;
      }
LAB_0196aedc:
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

