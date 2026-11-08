// FUN_014526d4 @ 014526d4 size=332 calls_out=0 calls_in=2
// strings: 

undefined1 FUN_014526d4(uint *param_1,uint param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = 0xffff;
  if ((char)param_1[10] != '\0') {
    uVar3 = 0xfff;
  }
  if (uVar3 < param_2) {
    uVar3 = param_1[6];
    if (uVar3 <= param_2) {
      uVar5 = param_1[4] - 2;
      goto LAB_01452800;
    }
    iVar4 = 0x40;
    if ((char)param_1[10] == '\0') {
      iVar4 = 0x3fc;
    }
    uVar3 = param_1[1];
    uVar5 = iVar4 + (param_2 >> 0xe);
    if (uVar5 < uVar3) {
      uVar7 = *param_1;
      uVar5 = ((param_2 & 0x3fff) >> 9) + (uint)*(ushort *)(uVar7 + uVar5 * 2);
      if (uVar5 < uVar3) {
        uVar2 = *(ushort *)(uVar7 + uVar5 * 2);
        if ((short)uVar2 < 0) {
          uVar5 = (param_2 >> 4 & 0x18 | (param_2 & 0x1ff) >> 7) + (uVar2 & 0x7fff);
          if (uVar5 < uVar3) {
            uVar6 = param_2 >> 4 & 7;
            uVar8 = uVar6 + uVar5 + 1;
            if (uVar8 < uVar3) {
              uVar3 = (uint)*(ushort *)(uVar7 + uVar5 * 2);
              uVar5 = uVar3 << uVar6 * 2 + 2 & 0x30000 | (uint)*(ushort *)(uVar7 + uVar8 * 2);
              goto LAB_014527ec;
            }
          }
        }
        else {
          uVar5 = ((param_2 & 0x1ff) >> 4) + (uint)uVar2;
          if (uVar5 < uVar3) {
            uVar5 = (uint)*(ushort *)(uVar7 + uVar5 * 2);
LAB_014527ec:
            uVar5 = uVar5 + (param_2 & 0xf);
            goto LAB_01452800;
          }
        }
      }
    }
  }
  else if (param_2 >> 6 < param_1[1]) {
    uVar3 = *param_1;
    uVar5 = (param_2 & 0x3f) + (uint)*(ushort *)(uVar3 + (param_2 >> 6) * 2);
    goto LAB_01452800;
  }
  uVar5 = param_1[4] - 1;
LAB_01452800:
  if (uVar5 < param_1[4]) {
    uVar3 = param_1[3];
  }
  uVar1 = (undefined1)param_1[0xb];
  if (uVar5 < param_1[4]) {
    uVar1 = *(undefined1 *)(uVar3 + uVar5);
  }
  return uVar1;
}

