// FUN_00fab1e0 @ 00fab1e0 size=604 calls_out=0 calls_in=151
// strings: 

void FUN_00fab1e0(undefined4 *param_1,int param_2,uint param_3)

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
        cVar1 = (&DAT_0041414f)[uVar5];
        if (cVar1 == '\x04') {
          uVar6 = 0;
          if (param_3 <= uVar4 + 1) goto LAB_00fab424;
          bVar2 = *(byte *)(param_2 + uVar4 + 1);
          if (uVar5 == 0xf0) {
            if (bVar2 - 0x90 < 0x30) goto LAB_00fab3c0;
          }
          else if (uVar5 == 0xf4) {
            if ((char)bVar2 < -0x70) {
LAB_00fab3c0:
              if (param_3 <= uVar4 + 2) goto LAB_00fab424;
              if (-0x41 < *(char *)(param_2 + uVar4 + 2)) goto LAB_00fab414;
              uVar5 = uVar4 + 3;
              if (param_3 <= uVar5) goto LAB_00fab424;
              if (*(char *)(param_2 + uVar5) < -0x40) goto LAB_00fab220;
              iVar7 = 3;
            }
          }
          else if ((uVar5 - 0xf1 < 3) && ((char)bVar2 < -0x40)) goto LAB_00fab3c0;
        }
        else {
          if (cVar1 != '\x03') {
            if (cVar1 != '\x02') goto LAB_00fab418;
            uVar5 = uVar4 + 1;
            if (param_3 <= uVar5) {
              uVar6 = 0;
              goto LAB_00fab424;
            }
            uVar6 = 1;
            if (-0x41 < *(char *)(param_2 + uVar5)) goto LAB_00fab424;
LAB_00fab220:
            uVar4 = uVar5 + 1;
            goto LAB_00fab224;
          }
          uVar6 = 0;
          if (param_3 <= uVar4 + 1) goto LAB_00fab424;
          bVar2 = *(byte *)(param_2 + uVar4 + 1);
          if (uVar5 == 0xe0) {
            if ((bVar2 & 0xe0) == 0xa0) goto LAB_00fab38c;
          }
          else if (uVar5 == 0xed) {
            if ((char)bVar2 < -0x60) {
LAB_00fab38c:
              uVar5 = uVar4 + 2;
              if (param_3 <= uVar5) goto LAB_00fab424;
              if (*(char *)(param_2 + uVar5) < -0x40) goto LAB_00fab220;
LAB_00fab414:
              iVar7 = 2;
            }
          }
          else if (((uVar5 - 0xe1 < 0xc) || ((uVar5 & 0xfe) == 0xee)) && ((char)bVar2 < -0x40))
          goto LAB_00fab38c;
        }
LAB_00fab418:
        uVar6 = 1;
LAB_00fab424:
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
            if (param_3 == uVar4) goto LAB_00fab400;
          }
        }
      }
      else {
        uVar4 = uVar4 + 1;
      }
LAB_00fab224:
    } while (uVar4 < param_3);
  }
LAB_00fab400:
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = 0;
  return;
}

