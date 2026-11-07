// FUN_011e9f60 @ 011e9f60 size=408 calls_out=4 calls_in=3
// strings: 

int FUN_011e9f60(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  uint local_f8;
  undefined4 local_a8;
  int *local_a4;
  undefined4 local_a0;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  int *local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  
  local_f8 = local_f8 & 0xffffff00;
  DataMemoryBarrier(0xb);
  if (DAT_018da8bc != 0) {
    FUN_0120d52c();
  }
  do {
    iVar3 = *DAT_018da8b4;
    bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
  } while (!bVar2);
  *DAT_018da8b4 = iVar3 + 1;
  if (-1 < iVar3) {
    piVar7 = DAT_018da8b4;
    uVar6 = DAT_018da8b8;
    DataMemoryBarrier(0xb);
    if (DAT_018da8bc != 0) {
      FUN_0120d52c();
    }
    do {
      iVar3 = *DAT_018da8b4;
      bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
    } while (!bVar2);
    *DAT_018da8b4 = iVar3 + 1;
    if (-1 < iVar3) {
      piVar5 = DAT_018da8b4;
      uVar4 = DAT_018da8b8;
      DataMemoryBarrier(0xb);
      if (DAT_018da8bc != 0) {
        FUN_0120d52c();
      }
      do {
        iVar3 = *DAT_018da8b4;
        bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
      } while (!bVar2);
      *DAT_018da8b4 = iVar3 + 1;
      if (-1 < iVar3) {
        local_a0 = DAT_018da8b8;
        local_a4 = DAT_018da8b4;
        local_50 = local_f8;
        local_88 = *param_1;
        uStack_84 = param_1[1];
        uStack_80 = param_1[2];
        uStack_7c = param_1[3];
        local_78 = param_1[4];
        uStack_74 = param_1[5];
        uStack_70 = param_1[6];
        uStack_6c = param_1[7];
        uStack_68 = param_1[8];
        local_64 = param_1[9];
        uStack_60 = param_1[10];
        uStack_5c = param_1[0xb];
        uStack_58 = param_1[0xc];
        uStack_54 = param_1[0xd];
        local_a8 = 1;
        local_38 = piVar7;
        local_34 = uVar6;
        local_30 = piVar5;
        local_2c = uVar4;
        iVar3 = thunk_FUN_016d4a50(0x80);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar3,&local_a8,0x80);
        return iVar3;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x11ea0f4);
  (*pcVar1)();
}

