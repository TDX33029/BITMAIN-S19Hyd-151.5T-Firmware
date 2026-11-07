// FUN_0100c21c @ 0100c21c size=824 calls_out=1 calls_in=4
// strings: 

void FUN_0100c21c(uint *param_1,int *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  
  uVar9 = param_2[2];
  uVar10 = param_2[1];
  uVar8 = uVar9;
  if (uVar9 < uVar10) {
    cVar1 = *(char *)(param_3 + 0x101);
    cVar2 = *(char *)(param_3 + 0x102);
    iVar7 = *param_2;
    if (*(char *)(param_3 + 0x100) == '\0') {
      if (cVar2 == '\0' && cVar1 == '\0') {
        do {
          if (*(char *)(param_3 + (uint)*(byte *)(iVar7 + uVar8)) != '\x01') goto LAB_0100c530;
          uVar8 = uVar8 + 1;
        } while (uVar10 != uVar8);
        uVar8 = uVar10;
      }
      else {
        do {
          uVar12 = FUN_0100d378(iVar7,uVar10,uVar8);
          uVar3 = (uint)uVar12;
          if (uVar3 < 0x80) {
            if (*(char *)(param_3 + uVar3) != '\x01') break;
          }
          else if (cVar1 == '\0') {
LAB_0100c458:
            if ((cVar2 == '\0') ||
               ((0x18ff < uVar3 - 0xe000 && ((uVar3 < 0xf0000 || ((uVar3 & 0xfffe) == 0xfffe))))))
            break;
          }
          else if (0x1ff < uVar3 - 0xfdf0) {
            uVar6 = uVar3 - 0xa0;
            bVar11 = 0xd75f < uVar6;
            if (bVar11) {
              uVar6 = uVar3 - 0xf900;
            }
            if (bVar11 && 0x4cf < uVar6) {
              if ((0xeffd < uVar3 - 0xe1000) &&
                 (0xcffff < uVar3 - 0x10000 || (~uVar3 & 0xfffe) == 0)) goto LAB_0100c458;
            }
          }
          uVar8 = (int)((ulonglong)uVar12 >> 0x20) + uVar8;
        } while (uVar8 < uVar10);
      }
    }
    else if (cVar2 == '\0' && cVar1 == '\0') {
      do {
        if (*(byte *)(iVar7 + uVar8) == 0x25) {
          if ((uVar10 - (uVar8 + 1) < 2) ||
             (pbVar4 = (byte *)(iVar7 + uVar8 + 1), iVar5 = 3,
             ((&DAT_00378df2)[pbVar4[1]] & (&DAT_00378df2)[*pbVar4]) == 0)) goto LAB_0100c4f8;
        }
        else {
          iVar5 = 1;
          if (*(char *)(param_3 + (uint)*(byte *)(iVar7 + uVar8)) == '\0') break;
        }
        uVar8 = iVar5 + uVar8;
      } while (uVar8 < uVar10);
    }
    else {
      do {
        while (*(char *)(iVar7 + uVar8) != '%') {
          uVar12 = FUN_0100d378(iVar7,uVar10,uVar8);
          uVar3 = (uint)uVar12;
          if (uVar3 < 0x80) {
            if (*(char *)(param_3 + uVar3) == '\0') goto LAB_0100c530;
          }
          else if (cVar1 == '\0') {
LAB_0100c36c:
            if ((cVar2 == '\0') ||
               ((0x18ff < uVar3 - 0xe000 && ((uVar3 < 0xf0000 || ((uVar3 & 0xfffe) == 0xfffe))))))
            goto LAB_0100c530;
          }
          else if (0x1ff < uVar3 - 0xfdf0) {
            uVar6 = uVar3 - 0xa0;
            bVar11 = 0xd75f < uVar6;
            if (bVar11) {
              uVar6 = uVar3 - 0xf900;
            }
            if (bVar11 && 0x4cf < uVar6) {
              if ((0xeffd < uVar3 - 0xe1000) &&
                 (0xcffff < uVar3 - 0x10000 || (~uVar3 & 0xfffe) == 0)) goto LAB_0100c36c;
            }
          }
          uVar8 = (int)((ulonglong)uVar12 >> 0x20) + uVar8;
          if (uVar10 <= uVar8) goto LAB_0100c530;
        }
        if ((uVar10 - (uVar8 + 1) < 2) ||
           (pbVar4 = (byte *)(iVar7 + uVar8 + 1),
           ((&DAT_00378df2)[pbVar4[1]] & (&DAT_00378df2)[*pbVar4]) == 0)) {
LAB_0100c4f8:
          *param_1 = uVar8;
          *(undefined1 *)(param_1 + 1) = 0;
          return;
        }
        uVar8 = uVar8 + 3;
      } while (uVar8 < uVar10);
    }
  }
LAB_0100c530:
  param_2[2] = uVar8;
  *(bool *)param_1 = uVar9 < uVar8;
  *(undefined1 *)(param_1 + 1) = 3;
  return;
}

