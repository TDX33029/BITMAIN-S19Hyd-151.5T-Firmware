// FUN_01344ce0 @ 01344ce0 size=284 calls_out=2 calls_in=4
// strings: 

void FUN_01344ce0(uint *param_1,int *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  uVar8 = uVar10;
  if (uVar10 < uVar9) {
    cVar1 = *(char *)(param_3 + 0x101);
    cVar2 = *(char *)(param_3 + 0x102);
    cVar3 = *(char *)(param_3 + 0x100);
    iVar7 = *param_2;
    do {
      if ((*(byte *)(iVar7 + uVar8) == 0x25) && (cVar3 != '\0')) {
        if ((uVar9 - (uVar8 + 1) < 2) ||
           (pbVar6 = (byte *)(iVar7 + uVar8 + 1),
           ((&DAT_00451b67)[pbVar6[1]] & (&DAT_00451b67)[*pbVar6]) == 0)) {
          uVar4 = 0;
          *param_1 = uVar8;
          goto LAB_01344df0;
        }
        uVar8 = uVar8 + 3;
      }
      else if (cVar2 == '\0' && cVar1 == '\0') {
        if (*(char *)(param_3 + (uint)*(byte *)(iVar7 + uVar8)) == '\0') break;
        uVar8 = uVar8 + 1;
      }
      else {
        uVar11 = FUN_013453b4(iVar7,uVar9,uVar8);
        iVar5 = FUN_0134399c(param_3,(int)uVar11);
        if (iVar5 == 0) break;
        uVar8 = (int)((ulonglong)uVar11 >> 0x20) + uVar8;
      }
    } while (uVar8 < uVar9);
  }
  param_2[2] = uVar8;
  *(bool *)param_1 = uVar10 < uVar8;
  uVar4 = 3;
LAB_01344df0:
  *(undefined1 *)(param_1 + 1) = uVar4;
  return;
}

