// FUN_01962348 @ 01962348 size=464 calls_out=1 calls_in=2
// strings: 

void FUN_01962348(int *param_1,int param_2,uint param_3,byte param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  bool bVar8;
  bool bVar9;
  
  uVar2 = 0;
  do {
    bVar8 = false;
    iVar3 = 0;
    while (uVar4 = uVar2 + iVar3, uVar4 < param_3) {
      uVar6 = (uint)(byte)((char *)(param_2 + uVar2))[iVar3];
      uVar5 = uVar6 - 0x41;
      if (uVar5 < 0x1a) {
LAB_019623a4:
        iVar3 = iVar3 + 1;
        bVar8 = true;
      }
      else {
        bVar9 = 0x2c < uVar6;
        if (uVar6 != 0x2d) {
          uVar5 = uVar6 - 0x61;
          bVar9 = 0x18 < uVar5;
        }
        if (!bVar9 || (uVar6 == 0x2d || uVar5 == 0x19)) goto LAB_019623a4;
        if (9 < uVar6 - 0x30) break;
        iVar3 = iVar3 + 1;
      }
    }
    uVar5 = uVar2 + iVar3;
    pcVar7 = (char *)(uVar5 + param_2);
    if (iVar3 == 0) {
      if ((uVar2 == 0) && ((param_3 <= uVar4 || (*pcVar7 != '.')))) {
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = param_2;
        param_1[3] = param_3;
        return;
      }
      uVar2 = (uint)param_4 << 8 | 7;
      goto LAB_019624e8;
    }
    if ((param_4 == 3 && iVar3 != 1) && !bVar8) {
      if (uVar2 != 0) {
        if (uVar2 < param_3) {
          if (*(char *)(param_2 + uVar2) < -0x40) {
LAB_019624fc:
            puVar1 = &DAT_01d27194;
            uVar5 = param_3;
            goto LAB_01962508;
          }
        }
        else if (uVar2 != param_3) goto LAB_019624fc;
      }
      if ((param_3 != uVar2) && (*(char *)(param_2 + uVar2) == '0')) {
        uVar2 = 0x305;
LAB_019624e8:
        param_1[1] = uVar2;
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    if (param_3 <= uVar4) {
      if (uVar5 == 0 || uVar5 == param_3) goto LAB_019624cc;
      goto LAB_01962484;
    }
    if (*pcVar7 != '.') {
      if (uVar5 == 0) {
        uVar5 = 0;
      }
      else if (*pcVar7 < -0x40) {
LAB_01962484:
        uVar2 = 0;
        puVar1 = &DAT_01d2e668;
LAB_01962508:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_2,param_3,uVar2,uVar5,puVar1);
      }
LAB_019624cc:
      *param_1 = param_2;
      param_1[1] = uVar5;
      param_1[2] = (int)pcVar7;
      param_1[3] = param_3 - uVar5;
      return;
    }
    uVar2 = uVar5 + 1;
  } while( true );
}

