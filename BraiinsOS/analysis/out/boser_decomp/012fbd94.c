// FUN_012fbd94 @ 012fbd94 size=604 calls_out=0 calls_in=139
// strings: 

void FUN_012fbd94(undefined4 *param_1,int param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = param_3 - 7;
  uVar4 = 0;
  if (param_3 < 7) {
    uVar3 = 0;
  }
  if (param_3 != 0) {
    do {
      if ((char)*(byte *)(param_2 + uVar4) < '\0') {
        uVar5 = (uint)*(byte *)(param_2 + uVar4);
        iVar7 = 1;
        cVar1 = (&DAT_0052cffe)[uVar5];
        if (cVar1 == '\x04') {
          uVar6 = 0;
          if (param_3 <= uVar4 + 1) goto LAB_012fbfd8;
          bVar2 = *(byte *)(param_2 + uVar4 + 1);
          if (uVar5 == 0xf0) {
            if (bVar2 - 0x90 < 0x30) goto LAB_012fbf74;
          }
          else if (uVar5 == 0xf4) {
            if ((char)bVar2 < -0x70) {
LAB_012fbf74:
              if (param_3 <= uVar4 + 2) goto LAB_012fbfd8;
              if (-0x41 < *(char *)(param_2 + uVar4 + 2)) goto LAB_012fbfc8;
              uVar5 = uVar4 + 3;
              if (param_3 <= uVar5) goto LAB_012fbfd8;
              if (*(char *)(param_2 + uVar5) < -0x40) goto LAB_012fbdd4;
              iVar7 = 3;
            }
          }
          else if ((uVar5 - 0xf1 < 3) && ((char)bVar2 < -0x40)) goto LAB_012fbf74;
        }
        else {
          if (cVar1 != '\x03') {
            if (cVar1 != '\x02') goto LAB_012fbfcc;
            uVar5 = uVar4 + 1;
            if (param_3 <= uVar5) {
              uVar6 = 0;
              goto LAB_012fbfd8;
            }
            uVar6 = 1;
            if (-0x41 < *(char *)(param_2 + uVar5)) goto LAB_012fbfd8;
LAB_012fbdd4:
            uVar4 = uVar5 + 1;
            goto LAB_012fbdd8;
          }
          uVar6 = 0;
          if (param_3 <= uVar4 + 1) goto LAB_012fbfd8;
          bVar2 = *(byte *)(param_2 + uVar4 + 1);
          if (uVar5 == 0xe0) {
            if ((bVar2 & 0xe0) == 0xa0) goto LAB_012fbf40;
          }
          else if (uVar5 == 0xed) {
            if ((char)bVar2 < -0x60) {
LAB_012fbf40:
              uVar5 = uVar4 + 2;
              if (param_3 <= uVar5) goto LAB_012fbfd8;
              if (*(char *)(param_2 + uVar5) < -0x40) goto LAB_012fbdd4;
LAB_012fbfc8:
              iVar7 = 2;
            }
          }
          else if (((uVar5 - 0xe1 < 0xc) || ((uVar5 & 0xfe) == 0xee)) && ((char)bVar2 < -0x40))
          goto LAB_012fbf40;
        }
LAB_012fbfcc:
        uVar6 = 1;
LAB_012fbfd8:
        *param_1 = 1;
        param_1[1] = uVar4;
        param_1[2] = uVar6 | iVar7 << 8;
        return;
      }
      if ((-uVar4 - param_2 & 3) == 0) {
        while ((uVar4 < uVar3 &&
               (((((uint *)(param_2 + uVar4))[1] | *(uint *)(param_2 + uVar4)) & 0x80808080) == 0)))
        {
          uVar4 = uVar4 + 8;
        }
        if (uVar4 < param_3) {
          while (-1 < *(char *)(param_2 + uVar4)) {
            uVar4 = uVar4 + 1;
            if (param_3 == uVar4) goto LAB_012fbfb4;
          }
        }
      }
      else {
        uVar4 = uVar4 + 1;
      }
LAB_012fbdd8:
    } while (uVar4 < param_3);
  }
LAB_012fbfb4:
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = 0;
  return;
}

