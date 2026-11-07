// FUN_010dcd04 @ 010dcd04 size=324 calls_out=0 calls_in=2
// strings: 

undefined1 FUN_010dcd04(int *param_1,uint param_2)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = 0xffff;
  if ((char)param_1[10] != '\0') {
    uVar3 = 0xfff;
  }
  if (uVar3 < param_2) {
    if ((uint)param_1[6] <= param_2) {
      uVar3 = param_1[4] - 2;
      goto LAB_010dce30;
    }
    iVar4 = 0x40;
    if ((char)param_1[10] == '\0') {
      iVar4 = 0x3fc;
    }
    uVar3 = param_1[1];
    uVar5 = iVar4 + (param_2 >> 0xe);
    if (uVar5 < uVar3) {
      iVar4 = *param_1;
      uVar5 = ((param_2 & 0x3fff) >> 9) + (uint)*(ushort *)(iVar4 + uVar5 * 2);
      if (uVar5 < uVar3) {
        uVar1 = *(ushort *)(iVar4 + uVar5 * 2);
        if ((short)uVar1 < 0) {
          uVar5 = (param_2 >> 4 & 0x18 | (param_2 & 0x1ff) >> 7) + (uVar1 & 0x7fff);
          if (uVar5 < uVar3) {
            uVar6 = param_2 >> 4 & 7;
            uVar7 = uVar6 + uVar5 + 1;
            if (uVar7 < uVar3) {
              uVar3 = (uint)*(ushort *)(iVar4 + uVar5 * 2) << uVar6 * 2 + 2 & 0x30000 |
                      (uint)*(ushort *)(iVar4 + uVar7 * 2);
              goto LAB_010dce1c;
            }
          }
        }
        else {
          uVar5 = ((param_2 & 0x1ff) >> 4) + (uint)uVar1;
          if (uVar5 < uVar3) {
            uVar3 = (uint)*(ushort *)(iVar4 + uVar5 * 2);
LAB_010dce1c:
            uVar3 = uVar3 + (param_2 & 0xf);
            goto LAB_010dce30;
          }
        }
      }
    }
  }
  else if (param_2 >> 6 < (uint)param_1[1]) {
    uVar3 = (param_2 & 0x3f) + (uint)*(ushort *)(*param_1 + (param_2 >> 6) * 2);
    goto LAB_010dce30;
  }
  uVar3 = param_1[4] - 1;
LAB_010dce30:
  piVar2 = param_1 + 0xb;
  if (uVar3 < (uint)param_1[4]) {
    piVar2 = (int *)(param_1[3] + uVar3);
  }
  return (char)*piVar2;
}

