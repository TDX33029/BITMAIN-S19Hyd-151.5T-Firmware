// FUN_01af65f4 @ 01af65f4 size=744 calls_out=1 calls_in=0
// strings: [invalid: 

undefined4 FUN_01af65f4(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int local_30;
  undefined1 *local_2c;
  code *local_28;
  
  iVar5 = param_1[1];
  if (iVar5 == 4) {
    uVar3 = *param_2;
    iVar7 = param_2[1];
    iVar5 = *param_1;
    iVar6 = 0;
    bVar1 = true;
    do {
      local_30 = iVar5 + iVar6;
      if ((!bVar1) && (iVar2 = (**(code **)(iVar7 + 0xc))(uVar3,".",1), iVar2 != 0)) {
        return 1;
      }
      local_28 = (code *)&DAT_013e5738;
      local_2c = (undefined1 *)&local_30;
      iVar2 = FUN_012fa178(uVar3,iVar7,&DAT_00590e5f,&local_2c);
      if (iVar2 != 0) {
        return 1;
      }
      iVar6 = iVar6 + 1;
      bVar1 = false;
    } while (iVar6 != 4);
    return 0;
  }
  if (iVar5 != 0x10) {
    uVar3 = *param_2;
    iVar7 = param_2[1];
    pcVar4 = *(code **)(iVar7 + 0xc);
    iVar6 = (*pcVar4)(uVar3,"[invalid: ",10);
    if (iVar6 != 0) {
      return 1;
    }
    if (iVar5 != 0) {
      iVar6 = *param_1;
      bVar1 = true;
      do {
        local_30 = iVar6;
        if ((!bVar1) && (iVar2 = (*pcVar4)(uVar3,&DAT_00533bc1,2), iVar2 != 0)) {
          return 1;
        }
        local_28 = (code *)&LAB_0161d65c;
        local_2c = (undefined1 *)&local_30;
        iVar2 = FUN_012fa178(uVar3,iVar7,&DAT_0056ff60,&local_2c);
        if (iVar2 != 0) {
          return 1;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
        bVar1 = false;
      } while (iVar5 != 0);
    }
    uVar3 = (*pcVar4)(uVar3,"]",1);
    return uVar3;
  }
  iVar6 = *param_1;
  iVar5 = 0;
  uVar3 = *param_2;
  iVar7 = param_2[1];
  bVar1 = true;
  bVar8 = false;
  do {
    if (bVar1) {
LAB_01af66a0:
      if (*(char *)(iVar6 + iVar5) != '\0') {
        local_28 = FUN_012fd63c;
        local_2c = (undefined1 *)(iVar6 + iVar5);
        iVar2 = FUN_012fa178(uVar3,iVar7,&DAT_00590e5f,&local_2c);
        if (iVar2 != 0) {
          return 1;
        }
        if (*(char *)(iVar6 + iVar5) != '\0') {
          local_28 = FUN_012fd63c;
          local_2c = (undefined1 *)(iVar6 + iVar5) + 1;
          iVar2 = FUN_012fa178(uVar3,iVar7,&DAT_0056ff60,&local_2c);
          if (iVar2 != 0) {
            return 1;
          }
          goto LAB_01af6760;
        }
      }
      local_28 = FUN_012fd63c;
      local_2c = (undefined1 *)(iVar6 + iVar5 + 1);
      iVar2 = FUN_012fa178(uVar3,iVar7,&DAT_00590e5f,&local_2c);
      if (iVar2 != 0) {
        return 1;
      }
    }
    else {
      if (*(short *)(iVar6 + iVar5) != 0) {
        if (bVar8) {
          iVar2 = (**(code **)(iVar7 + 0xc))(uVar3,"::",2);
          bVar8 = false;
          if (iVar2 != 0) {
            return 1;
          }
        }
        else {
          iVar2 = (**(code **)(iVar7 + 0xc))(uVar3,":",1);
          bVar8 = false;
          if (iVar2 != 0) {
            return 1;
          }
        }
        goto LAB_01af66a0;
      }
      bVar8 = true;
    }
LAB_01af6760:
    iVar5 = iVar5 + 2;
    bVar1 = false;
    if (iVar5 == 0x10) {
      return 0;
    }
  } while( true );
}

