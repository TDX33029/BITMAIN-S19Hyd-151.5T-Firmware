// FUN_0077fa84 @ 0077fa84 size=280 calls_out=5 calls_in=1
// strings: a Display implementation returned an error unexpectedly

void FUN_0077fa84(undefined4 param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_28;
  undefined *local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  
  local_2c = 0;
  local_30 = 1;
  local_20 = &DAT_60000020;
  local_28 = &local_34;
  local_34 = 0;
  local_1c = 0;
  local_24 = &DAT_0185bc90;
  iVar4 = FUN_00faace8(&local_28,(&PTR_DAT_018af9bc)[param_2 & 0xff],
                       *(undefined4 *)(&DAT_0041de38 + (param_2 & 0xff) * 4));
  uVar3 = local_30;
  iVar2 = local_34;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_3c,
                 &DAT_0185bca8,&DAT_018af130);
  }
  local_38 = local_2c;
  local_3c = local_30;
  piVar5 = (int *)FUN_00749168(param_1,&local_3c,1);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar5 + 2);
  } while (!bVar1);
  piVar5[2] = param_3;
  piVar5[3] = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0df4();
  }
  if (iVar2 != 0) {
    thunk_FUN_016d3fb4(uVar3);
  }
  return;
}

