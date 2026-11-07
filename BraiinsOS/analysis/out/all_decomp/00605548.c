// FUN_00605548 @ 00605548 size=568 calls_out=8 calls_in=2
// strings: 

void FUN_00605548(undefined4 *param_1,undefined1 param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      if (param_5 == 0x10) {
        uVar1 = FUN_01723b4c();
        iVar2 = FUN_0177a6c0(0x248);
        if (iVar2 != 0) {
          FUN_017231fc(iVar2);
          iVar3 = FUN_01723218(iVar2,uVar1,param_4,0x10,0x10,0);
          if (iVar3 != 1) goto LAB_0060577c;
          uVar1 = 7;
          puVar4 = &DAT_018577c0;
          goto LAB_00605768;
        }
      }
    }
    else if (param_5 == 0x10) {
      uVar1 = FUN_01723be4();
      iVar2 = FUN_0177a6c0(0x248);
      if (iVar2 != 0) {
        FUN_017231fc(iVar2);
        iVar3 = FUN_01723218(iVar2,uVar1,param_4,0x10,0x10,0);
        if (iVar3 != 1) {
LAB_0060577c:
          FUN_017233d4(iVar2);
          *param_1 = 0xc;
          return;
        }
        uVar1 = 9;
        puVar4 = &DAT_018577c0;
LAB_00605768:
        *(char *)(param_1 + 3) = (char)param_3;
        *param_1 = uVar1;
        param_1[1] = iVar2;
        param_1[2] = puVar4;
        return;
      }
    }
    break;
  case 2:
    if (param_3 == 0) {
      if (param_5 == 0x20) {
        uVar1 = FUN_01723b98();
        iVar2 = FUN_0177a6c0(0x248);
        if (iVar2 != 0) {
          FUN_017231fc(iVar2);
          iVar3 = FUN_01723218(iVar2,uVar1,param_4,0x20,0x10,0);
          if (iVar3 != 1) goto LAB_0060577c;
          uVar1 = 8;
          puVar4 = &DAT_018577d8;
          goto LAB_00605768;
        }
      }
    }
    else if (param_5 == 0x20) {
      uVar1 = FUN_01723c30();
      iVar2 = FUN_0177a6c0(0x248);
      if (iVar2 != 0) {
        FUN_017231fc(iVar2);
        iVar3 = FUN_01723218(iVar2,uVar1,param_4,0x20,0x10,0);
        if (iVar3 != 1) goto LAB_0060577c;
        uVar1 = 10;
        puVar4 = &DAT_018577d8;
        goto LAB_00605768;
      }
    }
  }
  *param_1 = 0xc;
  return;
}

