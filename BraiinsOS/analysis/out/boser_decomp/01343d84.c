// FUN_01343d84 @ 01343d84 size=380 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01343d84(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  
  iVar8 = 0;
  if ((undefined1 *)*param_1 == &DAT_00110000) goto LAB_01343db4;
  if (*(char *)((int)param_1 + 0x25) == '\0') {
    iVar9 = param_1[1];
    uVar10 = param_1[2];
    uVar5 = param_1[4];
    if ((uVar5 <= uVar10) && (uVar7 = param_1[3], uVar7 <= uVar5)) {
      uVar6 = (uint)*(byte *)(param_1 + 6);
      cVar1 = *(char *)((int)(param_1 + 5) + (uVar6 - 1));
      do {
        uVar4 = uVar5 - uVar7;
        if (uVar4 < 8) {
          uVar3 = 0;
          if (uVar4 == 0) {
            uVar11 = 0;
          }
          else {
            do {
              if (*(char *)(iVar9 + uVar7 + uVar3) == cVar1) {
                uVar11 = CONCAT44(uVar3,1);
                goto LAB_01343e4c;
              }
              uVar3 = uVar3 + 1;
            } while (uVar4 != uVar3);
            uVar11 = (ulonglong)uVar4 << 0x20;
          }
        }
        else {
          uVar11 = FUN_01307168(cVar1,iVar9 + uVar7);
        }
LAB_01343e4c:
        if ((uVar11 & 1) == 0) {
          param_1[3] = uVar5;
          break;
        }
        uVar7 = uVar7 + (int)(uVar11 >> 0x20) + 1;
        param_1[3] = uVar7;
        if ((uVar6 <= uVar7) && (uVar7 <= uVar10)) {
          if (4 < uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar6,4,&DAT_01d2fe40);
          }
          iVar2 = thunk_FUN_01bed842(iVar9 + (uVar7 - uVar6),param_1 + 5,uVar6);
          if (iVar2 == 0) {
            iVar2 = param_1[7];
            param_1[7] = uVar7;
            param_2 = uVar7 - iVar2;
            goto LAB_01343ed0;
          }
        }
      } while (uVar7 <= uVar5);
    }
    *(undefined1 *)((int)param_1 + 0x25) = 1;
    if (*(char *)(param_1 + 9) == '\x01') {
      iVar2 = param_1[7];
      param_2 = param_1[8];
    }
    else {
      iVar2 = param_1[7];
      param_2 = param_1[8];
      if (param_2 == iVar2) goto LAB_01343dac;
    }
    param_2 = param_2 - iVar2;
LAB_01343ed0:
    iVar8 = iVar9 + iVar2;
  }
  else {
LAB_01343dac:
    *param_1 = &DAT_00110000;
  }
LAB_01343db4:
  return CONCAT44(param_2,iVar8);
}

