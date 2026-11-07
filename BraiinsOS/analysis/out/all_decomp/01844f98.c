// FUN_01844f98 @ 01844f98 size=260 calls_out=6 calls_in=3
// strings: libunwind: __unw_get_proc_name(cursor=%p; &buf=%p; bufLen=%lu)  | LIBUNWIND_PRINT_APIS

void FUN_01844f98(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_34 [8];
  int local_2c;
  int local_28;
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  if (DAT_018dffe0 == '\0') {
    iVar3 = FUN_016d2b7c("LIBUNWIND_PRINT_APIS");
    DAT_018dffdf = iVar3 != 0;
    DAT_018dffe0 = '\x01';
  }
  if (DAT_018dffdf != '\0') {
    FUN_016db0c6(&DAT_018db5c0,"libunwind: __unw_get_proc_name(cursor=%p, &buf=%p, bufLen=%lu)\n",
                 param_1,param_2,param_3);
    FUN_016daeb4(&DAT_018db5c0);
  }
  pcVar4 = *(code **)(*param_1 + 0x30);
  if (pcVar4 == FUN_01843fac + 1) {
    pcVar4 = *(code **)(*param_1 + 0xc);
    if (pcVar4 == (code *)&DAT_01844075) {
      iVar3 = param_1[0x11];
    }
    else {
      iVar3 = (*pcVar4)(param_1,0xffffffff);
    }
    uVar5 = FUN_016d3708(iVar3,auStack_34);
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (((int)uVar5 == 0) || (local_2c == 0)) {
      uVar1 = 0xffffe674;
    }
    else {
      FUN_016db462(param_2,param_3,&DAT_005a3bd0);
      uVar1 = 0;
      *param_4 = iVar3 - local_28;
      uVar2 = extraout_r1;
    }
  }
  else {
    uVar5 = (*pcVar4)(param_1,param_2,param_3,param_4);
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar1 = 0xffffe674;
    if ((int)uVar5 != 0) {
      uVar1 = 0;
    }
  }
  if ((DAT_018ddaf8 ^ local_24) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar1,uVar2,DAT_018ddaf8 ^ local_24,0);
  }
  return;
}

