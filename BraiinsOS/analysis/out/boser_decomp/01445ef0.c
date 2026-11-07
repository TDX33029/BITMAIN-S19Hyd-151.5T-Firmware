// FUN_01445ef0 @ 01445ef0 size=500 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01445ef0(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  uVar2 = *param_1;
  iVar5 = 0;
  uVar3 = 0;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      uVar3 = (uint)*(byte *)((int)param_1 + 0x21);
      *param_1 = 0;
      if (uVar3 == 0) {
        uVar2 = param_1[1];
        uVar3 = 1;
        *(undefined1 *)((int)param_1 + 0x21) = 1;
        if (((char)param_1[8] != '\0') || (param_1[2] != uVar2)) {
          uVar3 = param_1[2] - uVar2;
          iVar5 = param_1[3] + uVar2;
        }
      }
    }
    else {
      uVar3 = uVar2 - 1;
      *param_1 = uVar3;
      if (*(char *)((int)param_1 + 0x21) == '\0') {
        if ((byte *)param_1[5] != (byte *)param_1[6]) {
          pbVar6 = (byte *)param_1[7];
          pbVar8 = (byte *)param_1[5];
          do {
            pbVar9 = pbVar8 + 1;
            uVar3 = (uint)*pbVar8;
            if (0x7fffffff < (uint)(int)(char)*pbVar8) {
              if (uVar3 < 0xe0) {
                uVar3 = pbVar8[1] & 0x3f | (uVar3 & 0x1f) << 6;
                pbVar9 = pbVar8 + 2;
              }
              else {
                uVar2 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
                if (uVar3 < 0xf0) {
                  uVar3 = uVar2 | (uVar3 & 0x1f) << 0xc;
                  pbVar9 = pbVar8 + 3;
                }
                else {
                  pbVar9 = pbVar8 + 4;
                  uVar3 = pbVar8[3] & 0x3f | uVar2 << 6 | (uVar3 & 7) << 0x12;
                }
              }
            }
            pbVar7 = pbVar9 + ((int)pbVar6 - (int)pbVar8);
            if ((uVar3 - 9 < 0x18) && ((1 << (uVar3 - 9 & 0xff) & 0x80001fU) != 0)) {
LAB_014460c4:
              uVar3 = param_1[1];
              param_1[7] = (uint)pbVar7;
              iVar5 = param_1[3] + uVar3;
              param_1[5] = (uint)pbVar9;
              param_1[1] = (uint)pbVar7;
              uVar3 = (int)pbVar6 - uVar3;
              goto LAB_014460dc;
            }
            if (0x7f < uVar3) {
              uVar2 = uVar3 >> 8;
              if (uVar2 < 0x20) {
                if (uVar2 == 0) {
                  bVar1 = (&DAT_00533bcd)[uVar3 & 0xff] & 1;
joined_r0x01446054:
                  if (bVar1 != 0) goto LAB_014460c4;
                }
                else if ((uVar2 == 0x16) && (uVar3 == 0x1680)) goto LAB_014460c4;
              }
              else {
                if (uVar2 == 0x20) {
                  bVar1 = (&DAT_00533bcd)[uVar3 & 0xff] & 2;
                  goto joined_r0x01446054;
                }
                if (uVar2 == 0x30 && uVar3 == 0x3000) goto LAB_014460c4;
              }
            }
            pbVar6 = pbVar7;
            pbVar8 = pbVar9;
          } while (pbVar9 != (byte *)param_1[6]);
          param_1[7] = (uint)pbVar7;
          param_1[5] = (uint)pbVar9;
        }
        uVar3 = param_1[1];
        *(undefined1 *)((int)param_1 + 0x21) = 1;
        iVar4 = param_1[3] + uVar3;
        iVar5 = 0;
        if (param_1[2] != uVar3) {
          iVar5 = iVar4;
        }
        if ((char)param_1[8] != '\0') {
          iVar5 = iVar4;
        }
        uVar3 = param_1[2] - uVar3;
      }
    }
  }
LAB_014460dc:
  return CONCAT44(uVar3,iVar5);
}

