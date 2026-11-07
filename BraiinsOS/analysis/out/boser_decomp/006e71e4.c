// FUN_006e71e4 @ 006e71e4 size=1508 calls_out=10 calls_in=1
// strings: errors | locations | column

int FUN_006e71e4(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 local_60;
  undefined4 *local_5c;
  uint local_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  uVar7 = *param_2;
  FUN_01ac6cbc(uVar7,"{",1);
  FUN_006bc51c(&local_50,uVar7,&DAT_0056f5ec,4);
  if ((char)local_50 != '\x04') {
LAB_006e7758:
    iVar1 = FUN_01966f50(local_50,local_4c);
    return iVar1;
  }
  FUN_01ac6cbc(*param_2,":",1);
  iVar1 = FUN_006df214(param_1 + 0x40,param_2);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x8c) != 0) {
      FUN_01ac6cbc(*param_2,",",1);
      FUN_006bc51c(&local_50,*param_2,&DAT_00520f23,10);
      if ((char)local_50 != '\x04') goto LAB_006e7758;
      FUN_01ac6cbc(*param_2,":",1);
      iVar1 = FUN_006e6a00(param_2,param_1 + 0x84);
      if (iVar1 != 0) goto LAB_006e725c;
    }
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 != 0) {
      piVar11 = *(int **)(param_1 + 0x7c);
      bVar4 = true;
      FUN_01ac6cbc(*param_2,",",1);
      FUN_006bc51c(&local_50,*param_2,"errors",6);
      if ((char)local_50 != '\x04') goto LAB_006e7758;
      FUN_01ac6cbc(*param_2,":",1);
      FUN_01ac6cbc(*param_2,&DAT_0053340d,1);
      piVar8 = piVar11 + iVar1 * 0xf;
      for (; piVar11 != piVar8; piVar11 = piVar11 + 0xf) {
        uVar7 = *param_2;
        if (!bVar4) {
          FUN_01ac6cbc(uVar7,",",1);
          uVar7 = *param_2;
        }
        iVar2 = piVar11[0xc];
        iVar5 = piVar11[9];
        FUN_01ac6cbc(uVar7,"{",1);
        local_60 = 0x100;
        local_5c = param_2;
        iVar1 = FUN_006e6e30(&local_60,&DAT_005325f1,7,piVar11[5],piVar11[6]);
        puVar6 = local_5c;
        if (iVar1 != 0) goto LAB_006e725c;
        if (iVar5 != 0) {
          if ((char)local_60 == '\0') {
            puVar9 = (undefined4 *)piVar11[8];
            if (local_60._1_1_ != '\x01') {
              FUN_01ac6cbc(*local_5c,",",1);
            }
            local_60._0_2_ = CONCAT11(2,(char)local_60);
            FUN_006bc51c(&local_50,*puVar6,"locations",9);
            if ((char)local_50 == '\x04') {
              bVar4 = true;
              FUN_01ac6cbc(*puVar6,":",1);
              FUN_01ac6cbc(*puVar6,&DAT_0053340d,1);
              for (iVar5 = iVar5 << 3; iVar5 != 0; iVar5 = iVar5 + -8) {
                uVar7 = *puVar6;
                if (!bVar4) {
                  FUN_01ac6cbc(uVar7,",",1);
                  uVar7 = *puVar6;
                }
                uVar10 = *puVar9;
                uVar3 = puVar9[1];
                FUN_01ac6cbc(uVar7,"{",1);
                local_54 = puVar6;
                local_58 = 0x100;
                iVar1 = FUN_006e6c44(&local_58,&DAT_0056e3f8,4,uVar10);
                if (iVar1 != 0) goto LAB_006e725c;
                if ((char)local_58 == '\x01') goto LAB_006e779c;
                iVar1 = FUN_006e6c44(&local_58,"column",6,uVar3);
                if (iVar1 != 0) goto LAB_006e725c;
                if (((local_58 & 0xff00) != 0) && ((local_58 & 1) == 0)) {
                  FUN_01ac6cbc(*local_54,"}",1);
                }
                puVar9 = puVar9 + 2;
                bVar4 = false;
              }
              FUN_01ac6cbc(*puVar6,"]",1);
              goto LAB_006e7564;
            }
LAB_006e77b8:
            iVar1 = FUN_01966f50(local_50,local_4c);
          }
          else {
LAB_006e779c:
            local_50 = 10;
            iVar1 = FUN_01966fbc(&local_50,0,0);
          }
          goto LAB_006e725c;
        }
LAB_006e7564:
        puVar6 = local_5c;
        if (iVar2 != 0) {
          if ((char)local_60 != '\0') goto LAB_006e779c;
          iVar1 = piVar11[0xb];
          if (local_60._1_1_ != '\x01') {
            FUN_01ac6cbc(*local_5c,",",1);
          }
          local_60._0_2_ = CONCAT11(2,(char)local_60);
          FUN_006bc51c(&local_50,*puVar6,&DAT_0056ef14,4);
          if ((char)local_50 != '\x04') goto LAB_006e77b8;
          bVar4 = true;
          FUN_01ac6cbc(*puVar6,":",1);
          uVar3 = *puVar6;
          FUN_01ac6cbc(uVar3,&DAT_0053340d,1);
          puVar6 = (undefined4 *)(iVar1 + 8);
          iVar2 = iVar2 * 0xc;
          uVar7 = extraout_r1;
          while (iVar2 != 0) {
            if (!bVar4) {
              FUN_01ac6cbc(uVar3,",",1);
              uVar7 = extraout_r1_00;
            }
            if (puVar6[-2] == -0x80000000) {
              uVar12 = FUN_01415f98(&local_50,uVar7,puVar6[-1],0);
              FUN_01ac6cbc(uVar3,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
              lVar13 = (ulonglong)extraout_r1_01 << 0x20;
            }
            else {
              FUN_006bc51c(&local_50,uVar3,puVar6[-1],*puVar6);
              lVar13 = (ulonglong)extraout_r1_02 << 0x20;
              if ((char)local_50 != '\x04') {
                lVar13 = FUN_01966f50(local_50,local_4c);
              }
            }
            uVar7 = (undefined4)((ulonglong)lVar13 >> 0x20);
            iVar2 = iVar2 + -0xc;
            puVar6 = puVar6 + 3;
            bVar4 = false;
            if ((int)lVar13 != 0) {
              return (int)lVar13;
            }
          }
          FUN_01ac6cbc(uVar3,"]",1);
        }
        if ((*piVar11 == 1) && (piVar11[3] != 0)) {
          if ((char)local_60 != '\0') goto LAB_006e779c;
          iVar1 = FUN_006e6d34(&local_60,&DAT_00520f23,piVar11);
          if (iVar1 != 0) goto LAB_006e725c;
        }
        if (((local_60 & 0xff00) != 0) && ((local_60 & 1) == 0)) {
          FUN_01ac6cbc(*local_5c,"}",1);
        }
        bVar4 = false;
      }
      FUN_01ac6cbc(*param_2,"]",1);
    }
    FUN_01ac6cbc(*param_2,"}",1);
    iVar1 = 0;
  }
LAB_006e725c:
  return iVar1;
}

