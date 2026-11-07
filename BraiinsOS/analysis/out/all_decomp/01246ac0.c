// FUN_01246ac0 @ 01246ac0 size=464 calls_out=4 calls_in=6
// strings: 

int FUN_01246ac0(char *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 local_98;
  int *piStack_94;
  undefined4 uStack_90;
  undefined1 *local_78;
  undefined2 local_74;
  undefined1 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_40;
  char *local_3c;
  int *local_28;
  undefined4 uStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  
  piStack_94 = param_2;
  uStack_90 = param_3;
  local_3c = param_1;
  piStack_20 = param_2;
  uStack_1c = param_3;
  if (*param_1 == '\x02') {
    if (*(int *)(param_1 + 8) == 0) {
      if (-1 < *(int *)(param_1 + 0x14)) goto LAB_01246b04;
    }
    else if (*(int *)(param_1 + 8) == 1) {
LAB_01246b04:
      do {
        iVar3 = *param_2;
        bVar2 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar2);
      *param_2 = iVar3 + 1;
      if (-1 < iVar3) {
        DataMemoryBarrier(0xb);
        if (DAT_018da8bc != 0) {
          FUN_0120d52c();
        }
        do {
          iVar3 = *DAT_018da8b4;
          bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
        } while (!bVar2);
        *DAT_018da8b4 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_01246c88;
        local_28 = DAT_018da8b4;
        uStack_24 = DAT_018da8b8;
        local_40 = 6;
        local_68 = 0;
        local_64 = 0;
        local_60 = 0;
        local_5c = 0;
        local_70 = 2;
        local_98 = 1;
        local_78 = (undefined1 *)0x8000001e;
        iVar3 = thunk_FUN_016d4a50(0x80);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        goto LAB_01246c58;
      }
      goto LAB_01246c88;
    }
  }
  do {
    iVar3 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = iVar3 + 1;
  if (-1 < iVar3) {
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
      local_28 = DAT_018da8b4;
      uStack_24 = DAT_018da8b8;
      local_40 = 6;
      local_74 = 0x400;
      local_78 = &DAT_80000028;
      local_98 = 1;
      iVar3 = thunk_FUN_016d4a50(0x80);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
LAB_01246c58:
      FUN_016dd1aa(iVar3,&local_98,0x80);
      return iVar3;
    }
  }
LAB_01246c88:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1246c88);
  (*pcVar1)();
}

