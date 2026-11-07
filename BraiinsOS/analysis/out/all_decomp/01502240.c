// FUN_01502240 @ 01502240 size=400 calls_out=0 calls_in=1
// strings: 

void FUN_01502240(undefined1 *param_1,byte *param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = 0;
  if (param_3 != 0) {
    if (param_3 == 1) {
      bVar5 = *param_2;
      if (bVar5 == 0x30) {
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        *param_1 = 0;
        return;
      }
    }
    else {
      bVar5 = *param_2;
      if (bVar5 == 0x30) {
        param_1[1] = 5;
        *param_1 = 1;
        return;
      }
    }
    if (bVar5 == 0x2b || bVar5 == 0x2d) {
      param_1[1] = 6;
      *param_1 = 1;
      return;
    }
    if (param_3 != 0) {
      if (param_3 == 1) {
        uVar2 = 1;
        if (bVar5 != 0x2b && bVar5 != 0x2d) {
LAB_015022f0:
          uVar1 = 0;
          do {
            bVar5 = *param_2;
            if (9 < bVar5 - 0x30) {
LAB_0150239c:
              param_1[1] = 1;
              *param_1 = 1;
              return;
            }
            param_2 = param_2 + 1;
            param_3 = param_3 - 1;
            uVar1 = (uVar1 & 0xffffffff) * 10 + CONCAT44((int)(uVar1 >> 0x20) * 10,bVar5 - 0x30);
          } while (param_3 != 0);
LAB_01502328:
          *(ulonglong *)(param_1 + 8) = uVar1;
          *param_1 = 0;
          return;
        }
      }
      else {
        if (param_3 < 0x11) goto LAB_015022f0;
        uVar4 = 0;
        uVar6 = 0;
        do {
          uVar1 = CONCAT44(uVar6,uVar4);
          if (param_3 == 0) goto LAB_01502328;
          uVar3 = (uint)((ulonglong)uVar4 * 10);
          uVar8 = (uint)((ulonglong)uVar4 * 10 >> 0x20);
          uVar4 = (uint)((ulonglong)uVar6 * 10);
          uVar7 = uVar8 + uVar4;
          if ((int)((ulonglong)uVar6 * 10 >> 0x20) != 0 || CARRY4(uVar8,uVar4)) {
            uVar2 = 1;
            if (*param_2 - 0x30 < 10) {
              uVar2 = 2;
            }
            param_1[1] = uVar2;
            *param_1 = 1;
            return;
          }
          uVar8 = *param_2 - 0x30;
          if (9 < uVar8) goto LAB_0150239c;
          uVar4 = uVar3 + uVar8;
          param_3 = param_3 - 1;
          uVar6 = uVar7 + CARRY4(uVar3,uVar8);
          uVar2 = 2;
          param_2 = param_2 + 1;
        } while (!CARRY4(uVar7,(uint)CARRY4(uVar3,uVar8)));
      }
    }
  }
  param_1[1] = uVar2;
  *param_1 = 1;
  return;
}

