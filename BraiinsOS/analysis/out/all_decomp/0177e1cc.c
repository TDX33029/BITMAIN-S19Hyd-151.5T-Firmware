// FUN_0177e1cc @ 0177e1cc size=608 calls_out=7 calls_in=2
// strings: 

void FUN_0177e1cc(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  uVar3 = 0;
  if (param_2 == 0) {
LAB_0177e20c:
    uVar1 = 1;
LAB_0177e210:
    if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78(uVar1,uVar3,local_2c ^ DAT_018ddaf8,0);
    }
    return;
  }
  FUN_01781ff4(&DAT_018dfe88,FUN_0177e458,&PTR_018bc3f4,0);
  if ((DAT_018dfe94 == 0) ||
     ((param_3 != 0 && (FUN_01781ff4(&DAT_018dfe84,FUN_0177e65c), DAT_018dfe90 == 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c24();
  }
  iVar5 = DAT_018dfe94;
  piVar2 = (int *)FUN_016d2bc8();
  *piVar2 = 0;
  local_48 = 999999999;
  do {
    if (iVar5 == 1) {
      local_44 = 0;
      iVar5 = 1;
      while( true ) {
        uVar7 = FUN_016d6968(0x180,param_1,param_2,param_3 ^ 1);
        uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if ((int)uVar7 != -1) break;
        if (*piVar2 != 4) {
          uVar4 = (param_3 ^ 1) & 1;
          if (local_44 == 9) {
            uVar4 = 1;
          }
          if (uVar4 != 0) goto LAB_0177e3ec;
          iVar5 = iVar5 * 10;
          if (0x3b9ac9fe < iVar5) {
            iVar5 = local_48;
          }
          local_40 = uVar4;
          local_3c = uVar4;
          local_38 = iVar5;
          local_34 = uVar4;
          FUN_016dff86(&local_40,&local_40);
          local_44 = local_44 + 1;
        }
      }
    }
    else {
      iVar5 = 1;
      iVar6 = 0;
      while( true ) {
        uVar7 = FUN_016e0250(DAT_018dfe8c,param_1,param_2);
        uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if ((int)uVar7 != -1) break;
        if (*piVar2 != 4) {
          uVar4 = (param_3 ^ 1) & 1;
          if (iVar6 == 9) {
            uVar4 = 1;
          }
          if (uVar4 != 0) goto LAB_0177e3ec;
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 * 10;
          if (0x3b9ac9fe < iVar5) {
            iVar5 = local_48;
          }
          local_40 = uVar4;
          local_3c = uVar4;
          local_38 = iVar5;
          local_34 = uVar4;
          FUN_016dff86(&local_40);
        }
      }
    }
    uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
    iVar5 = (int)uVar7;
    if (iVar5 < 1) {
LAB_0177e3ec:
      uVar1 = 0;
      goto LAB_0177e210;
    }
    param_2 = param_2 - iVar5;
    if (param_2 == 0) goto LAB_0177e20c;
    param_1 = param_1 + iVar5;
    iVar5 = DAT_018dfe94;
  } while( true );
}

