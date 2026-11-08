// FUN_016ccd98 @ 016ccd98 size=372 calls_out=2 calls_in=0
// strings: 

void FUN_016ccd98(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  code *pcVar10;
  int iVar11;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  uVar9 = *param_2;
  iVar6 = param_2[1];
  iVar11 = *param_1;
  pcVar10 = *(code **)(iVar6 + 0xc);
  uVar3 = (*pcVar10)(uVar9,&DAT_0053340d,1);
  uVar7 = param_2[2];
  iVar8 = 0;
  uVar4 = param_2[3];
  bVar2 = false;
  do {
    uVar1 = uVar3 & 1;
    uVar3 = 1;
    if (uVar1 == 0) {
      if ((uVar7 & 0x800000) == 0) {
        if (bVar2) {
          iVar5 = (*pcVar10)(uVar9,&DAT_00533bc1,2);
          uVar3 = 1;
          if (iVar5 != 0) goto LAB_016cced8;
        }
        uVar3 = FUN_012fbb44(iVar11 + iVar8,param_2);
      }
      else if ((bVar2) || (iVar5 = (*pcVar10)(uVar9,"\n",1), iVar5 == 0)) {
        local_35 = 1;
        local_3c = &local_35;
        local_30 = &DAT_01ce45f8;
        local_44 = uVar9;
        local_40 = iVar6;
        local_34 = &local_44;
        local_2c = uVar7;
        local_28 = uVar4;
        iVar5 = FUN_012fbb44(iVar11 + iVar8,&local_34);
        if (iVar5 == 0) {
          uVar3 = FUN_01302620(&local_44,&DAT_005312e2,2);
        }
        else {
          uVar3 = 1;
        }
      }
    }
LAB_016cced8:
    iVar8 = iVar8 + 1;
    bVar2 = true;
    if (iVar8 == 0x100) {
      if (uVar3 == 0) {
        (*pcVar10)(uVar9,"]",1);
      }
      return;
    }
  } while( true );
}

