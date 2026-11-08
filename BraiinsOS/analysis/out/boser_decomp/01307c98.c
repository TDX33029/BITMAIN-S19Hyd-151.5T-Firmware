// FUN_01307c98 @ 01307c98 size=476 calls_out=0 calls_in=3
// strings: 

void FUN_01307c98(int *param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = param_2[1];
  if (uVar7 == 0) {
    *param_1 = 0;
    return;
  }
  iVar8 = *param_2;
  uVar4 = 0;
  do {
    uVar3 = uVar4 + 1;
    if (0x7fffffff < (uint)(int)(char)*(byte *)(iVar8 + uVar4)) {
      uVar5 = (uint)*(byte *)(iVar8 + uVar4);
      cVar1 = (&DAT_0052cffe)[uVar5];
      if (cVar1 == '\x04') {
        pbVar6 = &DAT_00523849;
        if (uVar3 < uVar7) {
          pbVar6 = (byte *)(iVar8 + uVar3);
        }
        bVar2 = *pbVar6;
        if (uVar5 == 0xf0) {
          if (0x2f < bVar2 - 0x90) break;
        }
        else if (uVar5 == 0xf4) {
          if (-0x71 < (char)bVar2) break;
        }
        else if ((2 < uVar5 - 0xf1) || (-0x41 < (char)bVar2)) break;
        uVar3 = uVar4 + 2;
        pbVar6 = &DAT_00523849;
        if (uVar3 < uVar7) {
          pbVar6 = (byte *)(iVar8 + uVar3);
        }
        if (-0x41 < (char)*pbVar6) break;
        uVar3 = uVar4 + 3;
        pbVar6 = &DAT_00523849;
        if (uVar3 < uVar7) {
          pbVar6 = (byte *)(iVar8 + uVar3);
        }
        if (-0x41 < (char)*pbVar6) break;
        uVar3 = uVar4 + 4;
      }
      else if (cVar1 == '\x03') {
        pbVar6 = &DAT_00523849;
        if (uVar3 < uVar7) {
          pbVar6 = (byte *)(iVar8 + uVar3);
        }
        bVar2 = *pbVar6;
        if (uVar5 == 0xe0) {
          if ((bVar2 & 0xe0) != 0xa0) break;
        }
        else if (uVar5 == 0xed) {
          if (-0x61 < (char)bVar2) break;
        }
        else if (((0xb < uVar5 - 0xe1) && ((uVar5 & 0xfe) != 0xee)) || (-0x41 < (char)bVar2)) break;
        uVar3 = uVar4 + 2;
        pbVar6 = &DAT_00523849;
        if (uVar3 < uVar7) {
          pbVar6 = (byte *)(iVar8 + uVar3);
        }
        if (-0x41 < (char)*pbVar6) break;
        uVar3 = uVar4 + 3;
      }
      else {
        if (cVar1 != '\x02') break;
        pbVar6 = &DAT_00523849;
        if (uVar3 < uVar7) {
          pbVar6 = (byte *)(iVar8 + uVar3);
        }
        if (-0x41 < (char)*pbVar6) break;
        uVar3 = uVar4 + 2;
      }
    }
    uVar4 = uVar3;
  } while (uVar3 < uVar7);
  *param_1 = iVar8;
  *param_2 = iVar8 + uVar3;
  param_2[1] = uVar7 - uVar3;
  param_1[1] = uVar4;
  param_1[2] = iVar8 + uVar4;
  param_1[3] = uVar3 - uVar4;
  return;
}

