// FUN_01205b88 @ 01205b88 size=256 calls_out=5 calls_in=2
// strings: 

void FUN_01205b88(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_98;
  undefined8 uStack_94;
  undefined1 *local_78;
  undefined2 local_74;
  undefined1 local_40;
  undefined4 local_3c;
  int *local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  uStack_20 = FUN_0123ab30(param_2,param_3,param_4,param_5);
  piVar3 = (int *)uStack_20;
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (-1 < iVar4) {
    DataMemoryBarrier(0xb);
    if (DAT_018da8bc != 0) {
      FUN_0120d52c();
    }
    do {
      iVar4 = *DAT_018da8b4;
      bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
    } while (!bVar2);
    *DAT_018da8b4 = iVar4 + 1;
    if (-1 < iVar4) {
      local_28 = DAT_018da8b4;
      uStack_24 = DAT_018da8b8;
      local_40 = 6;
      local_74 = 0x1000;
      local_78 = &DAT_80000028;
      local_98 = 1;
      local_3c = param_6;
      uStack_94 = uStack_20;
      iVar4 = thunk_FUN_016d4a50(0x80);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar4,&local_98,0x80);
      *param_1 = 0;
      param_1[1] = iVar4;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1205c84);
  (*pcVar1)();
}

