// FUN_01578d1c @ 01578d1c size=480 calls_out=2 calls_in=1
// strings: 

void FUN_01578d1c(undefined4 *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  byte bVar8;
  bool bVar9;
  
  uVar2 = 0;
  do {
    bVar8 = 0;
    iVar5 = 0;
    while (uVar4 = uVar2 + iVar5, uVar4 < param_3) {
      uVar3 = (uint)(byte)(param_2 + uVar2)[iVar5];
      uVar6 = uVar3 - 0x41;
      if (uVar6 < 0x1a) {
LAB_01578d78:
        iVar5 = iVar5 + 1;
        bVar8 = 1;
      }
      else {
        bVar9 = 0x2c < uVar3;
        if (uVar3 != 0x2d) {
          uVar6 = uVar3 - 0x61;
          bVar9 = 0x18 < uVar6;
        }
        if (!bVar9 || (uVar3 == 0x2d || uVar6 == 0x19)) goto LAB_01578d78;
        if (9 < uVar3 - 0x30) {
          pcVar7 = param_2 + uVar2 + iVar5;
          if (iVar5 != 0) goto LAB_01578da8;
          goto LAB_01578e14;
        }
        iVar5 = iVar5 + 1;
      }
    }
    pcVar7 = param_2 + uVar4;
    if (iVar5 == 0) {
LAB_01578e14:
      if (uVar2 == 0) {
        uVar2 = 0;
        if (param_3 <= uVar4) {
          pcVar1 = &DAT_00000001;
          goto LAB_01578eb0;
        }
        pcVar1 = &DAT_00000001;
        if (*pcVar7 != '.') goto LAB_01578eb0;
      }
      *param_1 = 0;
      param_1[1] = 0x307;
      return;
    }
LAB_01578da8:
    uVar6 = uVar2 + iVar5;
    if (!(bool)(iVar5 == 1 | bVar8)) {
      if (uVar2 != 0) {
        if (uVar2 < param_3) {
          if (param_2[uVar2] < -0x40) {
LAB_01578ec4:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(param_2,param_3,uVar2,param_3,&DAT_018a92bc);
          }
        }
        else if (uVar2 != param_3) goto LAB_01578ec4;
      }
      if ((param_3 != uVar2) && (param_2[uVar2] == '0')) {
        *param_1 = 0;
        param_1[1] = 0x305;
        return;
      }
    }
    pcVar1 = param_2;
    if (param_3 <= uVar4) {
      if (uVar6 == 0) goto LAB_01578e64;
      uVar2 = param_3;
      if (uVar6 != param_3) goto LAB_01578ee0;
      goto LAB_01578e5c;
    }
    if (*pcVar7 != '.') {
      if (uVar6 == 0) {
LAB_01578e64:
        uVar2 = 0;
      }
      else {
        if (*pcVar7 < -0x40) {
LAB_01578ee0:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(param_2,param_3,0,uVar6,&DAT_018adf70);
        }
        uVar2 = uVar6;
LAB_01578e5c:
        param_3 = param_3 - uVar2;
        param_2 = pcVar7;
      }
LAB_01578eb0:
      FUN_01578850(param_1,pcVar1,uVar2);
      param_1[2] = param_2;
      param_1[3] = param_3;
      return;
    }
    uVar2 = uVar6 + 1;
  } while( true );
}

