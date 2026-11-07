// FUN_00f60164 @ 00f60164 size=408 calls_out=2 calls_in=1
// strings: assertion failed: min <= maxmnamernameserialretryexpire

void FUN_00f60164(int *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_5 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: min <= maxmnamernameserialretryexpire",0x1c,&DAT_0187fa8c);
  }
  if (param_3 < param_4) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 4;
    return;
  }
  uVar3 = 0;
  uVar4 = 0;
  uVar8 = 0;
  do {
    if (param_5 == uVar3 || param_3 == uVar3) {
      uVar3 = param_5;
      if (param_3 < param_5) {
        uVar3 = param_3;
      }
      if (((param_3 <= param_5) || (uVar3 == 0)) || (-0x41 < *(char *)(param_2 + uVar3))) {
        *param_1 = param_2 + uVar3;
        param_1[1] = param_3 - uVar3;
        param_1[2] = uVar4;
        param_1[3] = uVar8;
        return;
      }
      puVar2 = &DAT_018801f4;
LAB_00f602e8:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(param_2,param_3,uVar3,param_3,puVar2);
    }
    uVar6 = *(byte *)(param_2 + uVar3) - 0x30 & 0xff;
    if (9 < uVar6) {
      if (uVar3 < param_4) {
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 3;
        return;
      }
      if (uVar3 < param_3) {
        if (-0x41 < *(char *)(param_2 + uVar3)) {
LAB_00f60298:
          *param_1 = (int)(param_2 + uVar3);
          param_1[1] = param_3 - uVar3;
          param_1[2] = uVar4;
          param_1[3] = uVar8;
          return;
        }
      }
      else if (param_3 == uVar3) goto LAB_00f60298;
      puVar2 = &DAT_01880204;
      goto LAB_00f602e8;
    }
    uVar7 = (uint)((ulonglong)uVar4 * 10);
    lVar1 = (longlong)(int)uVar8 * 10 + ((ulonglong)uVar4 * 10 >> 0x20);
    uVar5 = (uint)lVar1;
    uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    if (uVar4 != (int)uVar5 >> 0x1f || (int)(uVar4 ^ uVar5) < 0) {
LAB_00f602cc:
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
    uVar4 = uVar7 + uVar6;
    uVar8 = uVar5 + CARRY4(uVar7,uVar6);
    if ((int)((uVar5 ^ uVar8) & ~uVar5) < 0) goto LAB_00f602cc;
    uVar3 = uVar3 + 1;
  } while( true );
}

