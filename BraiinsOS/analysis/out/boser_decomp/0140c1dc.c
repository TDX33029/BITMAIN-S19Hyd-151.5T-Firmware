// FUN_0140c1dc @ 0140c1dc size=352 calls_out=1 calls_in=1
// strings: 

bool FUN_0140c1dc(byte *param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  ulonglong uVar7;
  
  if (param_2 != 0) {
    uVar1 = param_2;
    pbVar2 = param_1;
    do {
      uVar4 = (uint)*pbVar2;
      if (0x19 < (uVar4 & 0xdf) - 0x41) {
        bVar6 = 0xfffffff4 < uVar4 - 0x3a;
        if (!bVar6 || uVar4 == 0x2f) {
          bVar6 = 0xfffffffd < uVar4 - 0x2f;
        }
        if (!bVar6) {
          return false;
        }
      }
      uVar1 = uVar1 - 1;
      pbVar2 = pbVar2 + 1;
    } while (uVar1 != 0);
  }
  uVar1 = 0;
  bVar6 = false;
  uVar4 = 0;
  do {
    if (bVar6) {
      return param_2 - 1 < 0xfd;
    }
    bVar6 = true;
    do {
      if (param_2 < uVar1) {
LAB_0140c2e8:
        uVar5 = uVar4;
        uVar3 = param_2;
        goto LAB_0140c2ec;
      }
      uVar5 = param_2 - uVar1;
      if (uVar5 < 8) {
        uVar3 = 0;
        if (uVar5 == 0) {
          uVar7 = 0;
        }
        else {
          do {
            if ((param_1 + uVar1)[uVar3] == 0x2e) {
              uVar7 = CONCAT44(uVar3,1);
              goto LAB_0140c2a8;
            }
            uVar3 = uVar3 + 1;
          } while (uVar5 != uVar3);
          uVar7 = (ulonglong)uVar5 << 0x20;
        }
      }
      else {
        uVar7 = FUN_01307168(0x2e,param_1 + uVar1);
      }
LAB_0140c2a8:
      if ((uVar7 & 1) == 0) {
        uVar1 = param_2;
        goto LAB_0140c2e8;
      }
      uVar3 = uVar1 + (int)(uVar7 >> 0x20);
      uVar1 = uVar3 + 1;
    } while ((param_2 <= uVar3) || (param_1[uVar3] != 0x2e));
    bVar6 = false;
    uVar5 = uVar1;
LAB_0140c2ec:
    if ((((uVar3 - uVar4) - 0x40 < 0xffffffc1) || (param_1[uVar4] == 0x2d)) ||
       (uVar4 = uVar5, param_1[uVar3 - 1] == 0x2d)) {
      return false;
    }
  } while( true );
}

